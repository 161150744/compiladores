%error-verbose

%{

	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include"./_Header/Node.h"
	#include"./_Header/lista.h"
	#include"./_Header/symbol_table.h"

	#define UNDEFINED_SYMBOL_ERROR -21
	#define INT 4

	extern int yyerror(const char* msg);
	extern int yylex();
	extern char * yytext;
	extern Node * syntax_tree;
	extern struct node_tac * table_TAC;
	extern symbol_t *tabela_simbolos;
	extern struct node_tac *lista;
	int vars_size=0;
	int temps_size=0;

	entry_t* novo(char *lx, char *type){
		entry_t* new_entry = (entry_t *) malloc(sizeof(entry_t));
		new_entry->name = lx;
		new_entry->type = 0; 
		new_entry->desloc = vars_size;
		new_entry->size = INT;
		vars_size += INT;
		return new_entry;
	}

	void verifica(char* lx, char* type){
		if(lookup(*tabela_simbolos, lx)){
			printf("Redeclaration of the symbol %s\n",lx);
		}
		else if(insert(& *tabela_simbolos, novo(lx, type)) != 0){
			printf("ERROR:%s\n",lx);
			exit(0);
		}
	}

	char *temp(){
		char *t = malloc(sizeof(char)*2);
		sprintf(t, "%03d(RX)", temps_size);
		temps_size += 4;
		return t;
	}

	char *mem(char *id){
		entry_t* aux = lookup(*tabela_simbolos, id);
		if(aux != NULL){       
			char *t = malloc(sizeof(char)*2);
			sprintf(t, "%03d(SP)", aux->desloc);
			return t;
		}
		else{			
			printf("UNDEFINED: %s \n", id);
			exit(0);
		}
	}

%}


%union {
	char* cadeia;
	struct _node * no;
}

%left OR
%left AND
%left NOT
%left '+' '-'
%left '*' '/'
%right '=' 

%token<cadeia> IDF
%token NEGACAO
%token AND
%token OR
%token ASPAS
%token ATRIBUICAO
%token SOMA
%token SUBTRACAO
%token MULTIPLICACAO
%token DIVISAO
%token RESTO
%token ABRE_PARENTESES
%token FECHA_PARENTESES
%token ABRE_CHAVE
%token FECHA_CHAVE
%token ABRE_COLCHETE
%token FECHA_COLCHETE
%token PONTO_E_VIRGULA
%token DOIS_PONTOS
%token VIRGULA
%token HASHMARK
%token PONTO
%token PIPE
%token BARRA
%token MAIOR
%token MENOR
%token MAIOR_IGUAL
%token MENOR_IGUAL
%token IGUAL
%token DIFERENTE
%token ESPACO
%token BARRAT
%token LETRA
%token NUM
%token NUM_REAL
%token RES_BREAK
%token RES_CASE
%token RES_CHAR
%token RES_DEFAULT
%token RES_DO
%token RES_DOUBLE
%token RES_ELSE
%token RES_FLOAT
%token RES_FOR
%token RES_GOTO
%token RES_IF
%token RES_INT
%token RES_LONG
%token RES_RETURN
%token RES_SIZEOF
%token RES_STATIC
%token RES_STRUCT
%token RES_TYPEDEF
%token RES_VOID
%token RES_WHILE
%token NOME
%token STRING
%token ALGUMA_COISA
%token RES_BOOL
%token PRINTF

/* demais tokens ...*/

%type<no> root
%type<no> code
%type<no> declaration
%type<no> type
%type<no> boolean_exp
%type<no> value
%type<no> op
%type<no> assignment
%type<no> var
%type<no> semi
%type<no> comma
%type<no> if
%type<no> else
%type<no> openKey
%type<no> closeKey
%type<no> openParent
%type<no> closeParent
%type<no> recursionOP
%type<no> recursionDec
%type<no> parameters
%type<no> for
%type<no> while
%type<no> printf

/* demais types ... */

%start root

 /* A completar com seus tokens - compilar com 'yacc -d' */

%%
root: code{
			$$ = create_node(@1.first_line, code_node, "Raiz", $1, NULL);
			cat_tac(&lista, &($1->name));
			syntax_tree = $$;
		}
;

code: declaration recursionDec {
			$$ = create_node(@1.first_line, code_node, "Declaracao1", $1, $2, NULL);
			}
	| declaration recursionDec code { 
			$$ = create_node(@1.first_line, code_node, "Declaracao2", $1, $2, $3, NULL);
			}
	| declaration assignment value recursionOP { 
			$$ = create_node(@1.first_line, code_node, "DeclaracaoAtribuicao", $1, $2, $3, $4, NULL);
			}
	| declaration assignment value recursionOP code { 
			$$ = create_node(@1.first_line, code_node, "DeclaracaoAtribuicao", $1, $2, $3, $4, $5, NULL);
			}
	| if openParent value boolean_exp value closeParent openKey code closeKey { 
			$$ = create_node(@1.first_line, code_node, "CONDICIONAL-If", $1, $2, $3, $4, $5, $6, $7, $8, $9, NULL);
			}
	| if openParent value boolean_exp value closeParent openKey code closeKey code { 
			$$ = create_node(@1.first_line, code_node, "CONDICIONAL-If", $1, $2, $3, $4, $5, $6, $7, $8, $9, $10, NULL);
			}
	| if openParent value boolean_exp value closeParent openKey code closeKey else openKey code closeKey {
			$$ = create_node(@1.first_line, code_node, "CONDICIONAL-IfElse", $1, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11, $12, $13, NULL);
			}
	| if openParent value boolean_exp value closeParent openKey code closeKey else openKey code closeKey code {
			$$ = create_node(@1.first_line, code_node, "CONDICIONAL-IfElse", $1, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11, $12, $13, $14, NULL);
			}
	| var assignment value recursionOP {
			$$ = create_node(@1.first_line, code_node, "Atribuicao", $1, $2, $3, $4, NULL);
			if(!lookup(*tabela_simbolos, $1->lexeme)){
				printf("%s NAO FOI DECLARADA\n", $1->lexeme);
			}
			else{
				if(strcmp($4->children[0]->lexeme, ";")==0){
					struct tac *aux=(struct tac*)malloc(sizeof(struct tac));
		            if(!is_leaf($3)){
                        aux = create_inst_tac($1->lexeme, $3->children[0]->lexeme, "", "");
		            }
		            else{
		                aux = create_inst_tac($1->lexeme, $3->lexeme, "", "");
		            }
					append_inst_tac(&lista, aux);
				}
				else{
					Node *p=NULL;
					int i, n_op=0;
					for(p=$4; strcmp(p->children[0]->lexeme, ";")!=0; p=p->children[2]){
						n_op++;
					}
					vet_t *v;
					v=(vet_t*)malloc(n_op*sizeof(vet_t));
					n_op=0;
					for(p=$4; strcmp(p->children[0]->lexeme, ";")!=0; p=p->children[2]){
						v[n_op].op=malloc(sizeof(strlen(p->children[0]->lexeme)));
						strcpy(v[n_op].op, p->children[0]->lexeme);
						if (is_leaf(p->children[1])){
                            v[n_op].var = malloc(sizeof(strlen(p->children[1]->lexeme)));
                            strcpy(v[n_op].var, p->children[1]->lexeme);
                        }
						else{
                            v[n_op].var = malloc(sizeof(strlen(p->children[1]->children[0]->lexeme)));
                            strcpy(v[n_op].var, p->children[1]->children[0]->lexeme);
                        }
                        n_op++;
					}
					for(i=n_op-1; i>=0; i--){
                        struct tac *aux = (struct tac*)malloc(sizeof(struct tac));
                        if (i == 0){
                            //printf("%s %s %s %s\n", $1->lexeme, $3->lexeme, v[i].op, v[i].var);
                            if(!is_leaf($3)){
                                aux = create_inst_tac($1->lexeme, $3->children[0]->lexeme, v[i].op, v[i].var);
                                append_inst_tac(&lista, aux);
                            }
                            else{
                                aux = create_inst_tac($1->lexeme, $3->lexeme, v[i].op, v[i].var);
                                append_inst_tac(&lista, aux);
                            }
                        }
                        else{
                            //printf("%s %s %s %s\n", "RX", v[i-1].var, v[i].op, v[i].var);
                            aux = create_inst_tac($1->lexeme, v[i-1].var, v[i].op, v[i].var);
                            append_inst_tac(&lista, aux);
                        }
                    }
					//TODO
				}
			}
			}
	| var assignment value recursionOP code{
			$$ = create_node(@1.first_line, code_node, "Atribuicao", $1, $2, $3, $4, $5, NULL);
			if(!lookup(*tabela_simbolos, $1->lexeme)){
				printf("%s NAO FOI DECLARADA\n", $1->lexeme);
			}
			else{
				if(strcmp($4->children[0]->lexeme, ";")==0){
					struct tac *aux=(struct tac*)malloc(sizeof(struct tac));
		            if(!is_leaf($3)){
                        aux = create_inst_tac(mem($1->lexeme), $3->children[0]->lexeme, "", "");
		            }
		            else{
		                aux = create_inst_tac(mem($1->lexeme), mem($3->lexeme), "", "");
		            }
					append_inst_tac(&lista, aux);
				}
				else{
					Node *p=NULL;
					int i, n_op=0;
					for(p=$4; strcmp(p->children[0]->lexeme, ";")!=0; p=p->children[2]){
						n_op++;
					}
					vet_t *v;
					v=(vet_t*)malloc(n_op*sizeof(vet_t));
					n_op=0;
					for(p=$4; strcmp(p->children[0]->lexeme, ";")!=0; p=p->children[2]){
						v[n_op].op=malloc(sizeof(strlen(p->children[0]->lexeme)));
						strcpy(v[n_op].op, p->children[0]->lexeme);
						if (is_leaf(p->children[1])){
                            v[n_op].var = malloc(sizeof(strlen(p->children[1]->lexeme)));
                            strcpy(v[n_op].var, p->children[1]->lexeme);
                        }
						else{
                            v[n_op].var = malloc(sizeof(strlen(mem(p->children[1]->children[0]->lexeme))));
                            strcpy(v[n_op].var, mem(p->children[1]->children[0]->lexeme));
                        }
                        n_op++;
					}
					for(i=n_op-1; i>=0; i--){
                        struct tac *aux = (struct tac*)malloc(sizeof(struct tac));
                        if (i == 0){
                            //printf("%s %s %s %s\n", $1->lexeme, $3->lexeme, v[i].op, v[i].var);
                            if(!is_leaf($3)){
                                aux = create_inst_tac(mem($1->lexeme), mem($3->children[0]->lexeme), v[i].op, v[i].var);
                                append_inst_tac(&lista, aux);
                            }
                            else{
                                aux = create_inst_tac(mem($1->lexeme), $3->lexeme, v[i].op, v[i].var);
                                append_inst_tac(&lista, aux);
                            }
                        }
                        else{
                            //printf("%s %s %s %s\n", "RX", v[i-1].var, v[i].op, v[i].var);
                            aux = create_inst_tac(mem($1->lexeme), v[i-1].var, v[i].op, v[i].var);
                            append_inst_tac(&lista, aux);
                        }
                    }
					//TODO
				}
			}
			}



	| var openParent closeParent{
			$$ = create_node(@1.first_line, code_node, "function", $1, $2, $3, NULL);
			}
	| var openParent closeParent semi{
			$$ = create_node(@1.first_line, code_node, "function", $1, $2, $3, $4, NULL);
			}
	| var openParent closeParent semi code{
			$$ = create_node(@1.first_line, code_node, "function", $1, $2, $3, $4, $5, NULL);
			}
	| var openParent closeParent openKey code closeKey{
			$$ = create_node(@1.first_line, code_node, "function", $1, $2, $3, $4, $5, $6, NULL);
			}
	| var openParent closeParent openKey code closeKey code{
			$$ = create_node(@1.first_line, code_node, "function", $1, $2, $3, $4, $5, $6, $7, NULL);
			}
	| var openParent parameters closeParent {
			$$ = create_node(@1.first_line, code_node, "function", $1, $2, $3, $4, NULL);
			}
	| var openParent parameters closeParent semi{
			$$ = create_node(@1.first_line, code_node, "function", $1, $2, $3, $4, $5, NULL);
			}
	| var openParent parameters closeParent semi code{
			$$ = create_node(@1.first_line, code_node, "function", $1, $2, $3, $4, $5, $6, NULL);
			}
	| var openParent parameters closeParent openKey code closeKey{
			$$ = create_node(@1.first_line, code_node, "function", $1, $2, $3, $4, $5, $6, $7, NULL);
			}
	| var openParent parameters closeParent openKey code closeKey code{
			$$ = create_node(@1.first_line, code_node, "function", $1, $2, $3, $4, $5, $6, $7, $8, NULL);
			}
	| for openParent var assignment value semi var boolean_exp value semi var assignment var op value closeParent openKey code closeKey{
			$$ = create_node(@1.first_line, code_node, "for", $1, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11, $12, $13, $14, $15, $16, $17, $18, $19, NULL);
	}
	| for openParent var assignment value semi var boolean_exp value semi var assignment var op value closeParent openKey code closeKey code{
			$$ = create_node(@1.first_line, code_node, "for", $1, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11, $12, $13, $14, $15, $16, $17, $18, $19, $20, NULL);
	}
	
	| while openParent value boolean_exp value closeParent openKey code closeKey { 
			$$ = create_node(@1.first_line, code_node, "while", $1, $2, $3, $4, $5, $6, $7, $8, $9, NULL);
			}
	| while openParent value boolean_exp value closeParent openKey code closeKey code { 
			$$ = create_node(@1.first_line, code_node, "while", $1, $2, $3, $4, $5, $6, $7, $8, $9, $10, NULL);
			}
	| printf openParent value closeParent semi{ 
			$$ = create_node(@1.first_line, code_node, "printf", $1, $2, $3, $4, $5, NULL);
			}
	| printf openParent value closeParent semi code{ 
			$$ = create_node(@1.first_line, code_node, "printf", $1, $2, $3, $4, $5, $6, NULL);
			}
	;

for: RES_FOR {
			$$ = create_node(@1.first_line, for_node, strdup(yytext), NULL);
}
;

while: RES_WHILE {
			$$ = create_node(@1.first_line, while_node, strdup(yytext), NULL);
}
;

parameters: value {
				$$=create_node(@1.first_line, parameter_node, "parameter", $1, NULL);
			}
			| value comma parameters{
				$$=create_node(@1.first_line, parameter_node, "parameter", $1, $2, $3, NULL);
			}
;

recursionOP: semi {
				$$ = create_node(@1.first_line, recursionOP_node, "OperacaoRecursiva", $1, NULL);
				}
		   | op value recursionOP {
				$$ = create_node(@1.first_line, recursionOP_node,temp(), $1, $2, $3, NULL);
				}
		   ;
		   
recursionDec: semi {
				$$ = create_node(@1.first_line, recursionDec_node, "DeclaracaoRecursiva", $1, NULL);
				}
			| comma declaration recursionDec {
				$$ = create_node(@1.first_line, recursionDec_node, "DeclaracaoRecursiva", $1, $2, $3, NULL);
				}
			;

assignment: ATRIBUICAO { 
				$$ = create_node(@1.first_line, assignment_node, strdup(yytext), NULL); 
				}
		  ;

var: NOME {  

			$$ = create_node(@1.first_line, var_node, strdup(yytext), NULL);
			}
			
   ;

printf: PRINTF {  

			$$ = create_node(@1.first_line, printf_node, strdup(yytext), NULL);
			}
			
   ;
  
semi: PONTO_E_VIRGULA {
		$$ = create_node(@1.first_line, semi_node, strdup(yytext), NULL);
		}
	;
	
comma: VIRGULA {
		$$ = create_node(@1.first_line, comma_node, strdup(yytext), NULL);
		}
	 ;
	
if: RES_IF {
		$$ = create_node(@1.first_line, if_node, strdup(yytext), NULL);
		}
  ;

else: RES_ELSE {
		$$ = create_node(@1.first_line, else_node, strdup(yytext), NULL);
		}
	;
	  
openKey: ABRE_CHAVE {
			$$ = create_node(@1.first_line, openKey_node, strdup(yytext), NULL);
			}
	  ;
	
closeKey: FECHA_CHAVE {
			$$ = create_node(@1.first_line, closeKey_node, strdup(yytext), NULL);
			}
	   ;
	   
openParent: ABRE_PARENTESES {
			$$ = create_node(@1.first_line, openparent_node, strdup(yytext), NULL);
			}
		  ;
	
closeParent: FECHA_PARENTESES {
			$$ = create_node(@1.first_line, closeparent_node, strdup(yytext), NULL);
			}
		   ;
	
declaration: type var {
					$$ = create_node(@1.first_line, declaration_node, "NT-Declaracao", $1, $2, NULL);
					verifica($2->lexeme, $1->lexeme);
					}
		   ;

boolean_exp: IGUAL {
					$$ = create_node(@1.first_line, boolean_exp_node, strdup(yytext), NULL);
					} 
		   | MAIOR {
					$$ = create_node(@1.first_line, boolean_exp_node, strdup(yytext), NULL);
					}
		   | MENOR {
					$$ = create_node(@1.first_line, boolean_exp_node, strdup(yytext), NULL);
					}
		   | MAIOR_IGUAL {
					$$ = create_node(@1.first_line, boolean_exp_node, strdup(yytext), NULL);
					}
		   | MENOR_IGUAL {
					$$ = create_node(@1.first_line, boolean_exp_node, strdup(yytext), NULL);
					}
		   | DIFERENTE {
					$$ = create_node(@1.first_line, boolean_exp_node, strdup(yytext), NULL);
					}
		   ;
		   

op: SOMA {
		$$ = create_node(@1.first_line, plus_node, strdup(yytext), NULL);
		}
  | SUBTRACAO {
		$$ = create_node(@1.first_line, minus_node, strdup(yytext), NULL);
		}
  | MULTIPLICACAO {
		$$ = create_node(@1.first_line, times_node, strdup(yytext), NULL);
		}
  | DIVISAO {
		$$ = create_node(@1.first_line, divide_node, strdup(yytext), NULL);
		}
  | RESTO {
		$$ = create_node(@1.first_line, rest_node, strdup(yytext), NULL);
		}
  ;

value: var {
			$$ = create_node(@1.first_line, value_node, "Declaracao", $1, NULL);
			}
	 | NUM {
			$$ = create_node(@1.first_line, value_node, strdup(yytext), NULL);
			}
	 | NUM_REAL {
			$$ = create_node(@1.first_line, value_node, strdup(yytext), NULL);
			}
	 ;

type: RES_FLOAT {
			$$ = create_node(@1.first_line, float_node, strdup(yytext), NULL);
			}
	| RES_INT {
			$$ = create_node(@1.first_line, int_node, strdup(yytext), NULL);
			}
	| STRING {
			$$ = create_node(@1.first_line, char_node, strdup(yytext), NULL);
			}
	| RES_DOUBLE {
			$$ = create_node(@1.first_line, double_node, strdup(yytext), NULL);
			}
	| RES_BOOL {
			$$ = create_node(@1.first_line, bool_node, strdup(yytext), NULL);
			}
	;

	

%%
 /* A partir daqui, insere-se qlqer codigo C necessario.
  */
