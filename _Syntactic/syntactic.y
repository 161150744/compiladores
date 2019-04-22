%error-verbose

%{

	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>

	#include"../_Header/Tree.hpp"

	extern int yyerror(const char* msg ); 
    char* yytext;

    int yylex();


	extern Tree *syntax_tree;

%}

%union {
	char* cadeia;
	class Tree * tree;
	class Node * no;
}

%left SUBTRACAO SOMA
%left MULTIPLICACAO DIVISAO
%left RESTO
%left AND OR
%right NEGACAO

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
%token BARRAN
%token BARRAT
%token DIGITO
%token NUMERAL
%token LETRA
%token FRAC_OPT
%token NUM
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

/* demais tokens ...*/

%type<tree> root
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

/* demais types ... */

%start root

 /* A completar com seus tokens - compilar com 'yacc -d' */

%%
root: code{
        $$=new Tree($1);
        syntax_tree=$$;
    }
;

code: declaration recursionDec {
            $$ = new Node(@1.first_line, code_node, "Declaracao1", $1, $2, NULL);
            }
    | declaration recursionDec code { 
            $$ = new Node(@1.first_line, code_node, "Declaracao2", $1, $2, $3, NULL);
            }
    | declaration assignment value recursionOP { 
            $$ = new Node(@1.first_line, code_node, "DeclaracaoAtribuicao", $1, $2, $3, $4, NULL);
            }
    | declaration assignment value recursionOP code { 
            $$ = new Node(@1.first_line, code_node, "DeclaracaoAtribuicao", $1, $2, $3, $4, $5, NULL);
            }
    | if openParent value boolean_exp value closeParent openKey code closeKey { 
            $$ = new Node(@1.first_line, code_node, "CONDICIONAL-If", $1, $2, $3, $4, $5, $6, $7, $8, $9, NULL);
            }
    | if openParent value boolean_exp value closeParent openKey code closeKey code { 
            $$ = new Node(@1.first_line, code_node, "CONDICIONAL-If", $1, $2, $3, $4, $5, $6, $7, $8, $9, $10, NULL);
            }
    | if openParent value boolean_exp value closeParent openKey code closeKey else openKey code closeKey {
            $$ = new Node(@1.first_line, code_node, "CONDICIONAL-IfElse", $1, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11, $12, $13, NULL);
            }
    | if value boolean_exp value openKey code closeKey else openKey code closeKey code {
            $$ = new Node(@1.first_line, code_node, "CONDICIONAL-IfElse", $1, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11, $12, NULL);
            }
    | var assignment value recursionOP {
            $$ = new Node(@1.first_line, code_node, "Atribuicao", $1, $2, $3, $4, NULL);
            }
    | var assignment value recursionOP code{
            $$ = new Node(@1.first_line, code_node, "Atribuicao", $1, $2, $3, $4, $5, NULL);
            }



    | var openParent closeParent{
            $$ = new Node(@1.first_line, code_node, "function", $1, $2, $3, NULL);
            }
    | var openParent closeParent semi{
            $$ = new Node(@1.first_line, code_node, "function", $1, $2, $3, $4, NULL);
            }
    | var openParent closeParent semi code{
            $$ = new Node(@1.first_line, code_node, "function", $1, $2, $3, $4, $5, NULL);
            }
    | var openParent closeParent openKey code closeKey code{
            $$ = new Node(@1.first_line, code_node, "function", $1, $2, $3, $4, $5, $6, $7, NULL);
            }
    | var openParent parameters closeParent {
            $$ = new Node(@1.first_line, code_node, "function", $1, $2, $3, $4, NULL);
            }
    | var openParent parameters closeParent semi{
            $$ = new Node(@1.first_line, code_node, "function", $1, $2, $3, $4, $5, NULL);
            }
    | var openParent parameters closeParent semi code{
            $$ = new Node(@1.first_line, code_node, "function", $1, $2, $3, $4, $5, $6, NULL);
            }
    | var openParent parameters closeParent openKey code closeKey code{
            $$ = new Node(@1.first_line, code_node, "function", $1, $2, $3, $4, $5, $6, $7, $8, NULL);
            }
    | for openParent var assignment value semi var boolean_exp value semi var assignment var op value closeParent openKey code closeKey{
            $$ = new Node(@1.first_line, code_node, "for", $1, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11, $12, $13, $14, $15, $16, $17, $18, $19, NULL);
    }
    | for openParent var assignment value semi var boolean_exp value semi var assignment var op value closeParent openKey code closeKey code{
            $$ = new Node(@1.first_line, code_node, "for", $1, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11, $12, $13, $14, $15, $16, $17, $18, $19, $20, NULL);
    }
    ;

for: RES_FOR {
            $$ = new Node(@1.first_line, for_node, strdup(yytext), NULL);
}
;

parameters: value {
                $$=new Node(@1.first_line, parameter_node, "parameter", $1, NULL);
            }
            | value comma parameters{
                $$=new Node(@1.first_line, parameter_node, "parameter", $1, $2, $3, NULL);
            }
;

recursionOP: semi {
                $$ = new Node(@1.first_line, recursionOP_node, "OperacaoRecursiva", $1, NULL);
                }
           | op value recursionOP {
                $$ = new Node(@1.first_line, recursionOP_node,"OperacaoRecursiva", $1, $2, $3, NULL);
                }
           ;
           
recursionDec: semi {
                $$ = new Node(@1.first_line, recursionDec_node, "DeclaracaoRecursiva", $1, NULL);
                }
            | comma declaration recursionDec {
                $$ = new Node(@1.first_line, recursionDec_node, "DeclaracaoRecursiva", $1, $2, $3, NULL);
                }
            ;

assignment: ATRIBUICAO { 
                $$ = new Node(@1.first_line, assignment_node, strdup(yytext), NULL); 
                }
          ;

var: NOME {  

            $$ = new Node(@1.first_line, var_node, strdup(yytext), NULL);
            }
            
   ;
  
semi: PONTO_E_VIRGULA {
        $$ = new Node(@1.first_line, semi_node, strdup(yytext), NULL);
        }
    ;
    
comma: VIRGULA {
        $$ = new Node(@1.first_line, comma_node, strdup(yytext), NULL);
        }
     ;
    
if: RES_IF {
        $$ = new Node(@1.first_line, if_node, strdup(yytext), NULL);
        }
  ;

else: RES_ELSE {
        $$ = new Node(@1.first_line, else_node, strdup(yytext), NULL);
        }
    ;
      
openKey: ABRE_CHAVE {
            $$ = new Node(@1.first_line, openKey_node, strdup(yytext), NULL);
            }
      ;
    
closeKey: FECHA_CHAVE {
            $$ = new Node(@1.first_line, closeKey_node, strdup(yytext), NULL);
            }
       ;
       
openParent: ABRE_PARENTESES {
            $$ = new Node(@1.first_line, openparent_node, strdup(yytext), NULL);
            }
          ;
    
closeParent: FECHA_PARENTESES {
            $$ = new Node(@1.first_line, closeparent_node, strdup(yytext), NULL);
            }
           ;
    
declaration: type var {
                    $$ = new Node(@1.first_line, declaration_node, "NT-Declaracao", $1, $2, NULL);
                    }
           ;

boolean_exp: IGUAL {
                    $$ = new Node(@1.first_line, boolean_exp_node, strdup(yytext), NULL);
                    } 
           | MAIOR {
                    $$ = new Node(@1.first_line, boolean_exp_node, strdup(yytext), NULL);
                    }
           | MENOR {
                    $$ = new Node(@1.first_line, boolean_exp_node, strdup(yytext), NULL);
                    }
           | MAIOR_IGUAL {
                    $$ = new Node(@1.first_line, boolean_exp_node, strdup(yytext), NULL);
                    }
           | MENOR_IGUAL {
                    $$ = new Node(@1.first_line, boolean_exp_node, strdup(yytext), NULL);
                    }
           ;
           

op: SOMA {
        $$ = new Node(@1.first_line, plus_node, strdup(yytext), NULL);
        }
  | SUBTRACAO {
        $$ = new Node(@1.first_line, minus_node, strdup(yytext), NULL);
        }
  | MULTIPLICACAO {
        $$ = new Node(@1.first_line, times_node, strdup(yytext), NULL);
        }
  | DIVISAO {
        $$ = new Node(@1.first_line, divide_node, strdup(yytext), NULL);
        }
  | RESTO {
        $$ = new Node(@1.first_line, rest_node, strdup(yytext), NULL);
        }
  ;

value: var {
            $$ = new Node(@1.first_line, value_node, "Declaracao", $1, NULL);
            }
     | NUM {
            $$ = new Node(@1.first_line, value_node, strdup(yytext), NULL);
            }
     ;

type: RES_FLOAT {
            $$ = new Node(@1.first_line, float_node, strdup(yytext), NULL);
            }
    | RES_INT {
            $$ = new Node(@1.first_line, int_node, strdup(yytext), NULL);
            }
    | STRING {
            $$ = new Node(@1.first_line, char_node, strdup(yytext), NULL);
            }
    | RES_DOUBLE {
            $$ = new Node(@1.first_line, double_node, strdup(yytext), NULL);
            }
    | RES_BOOL {
            $$ = new Node(@1.first_line, bool_node, strdup(yytext), NULL);
            }
    ;


/*demais codes ..*/

%%
 /* A partir daqui, insere-se qlqer codigo C necessario.
  */