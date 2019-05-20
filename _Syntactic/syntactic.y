%error-verbose

%{

	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>

	#include"./_Header/Node.h"

	extern int yyerror(const char* msg);
	extern int yylex();
	extern char * yytext;
	extern Node * syntax_tree;

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
            }
    | var assignment value recursionOP code{
            $$ = create_node(@1.first_line, code_node, "Atribuicao", $1, $2, $3, $4, $5, NULL);
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
                $$ = create_node(@1.first_line, recursionOP_node,"OperacaoRecursiva", $1, $2, $3, NULL);
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