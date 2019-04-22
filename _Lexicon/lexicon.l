	/** DEFINITION sec*/
%{
#include <stdio.h>
#include "y.tab.h"
//#define YY_DECL extern "C" int yylex()
%}

/*Utilizado para apresentar a linha do erro de sintaxe*/
%option yylineno
%{
#define YY_USER_ACTION yylloc.first_line = yylineno;
#define YY_USER_INIT yylineno = 1;
%}


negacao				"!"
and					"&&"
or 					"||"
aspas				\"
atribuicao			"="
soma				"+"
subtracao			"-"
multiplicacao		"*"
divisao				"/"
resto				"%"
abre_parenteses		"("
fecha_parenteses	")"
abre_chave			"{"
fecha_chave			"}"
abre_colchete		"["
fecha_colchete		"]"
ponto_e_virgula		";"
dois_pontos			":"
virgula				","
hashmark			"#"
ponto				"."
pipe				"|"
barra				"\\"
maior				">"
menor				"<"
maior_igual			">="
menor_igual			"<="
igual				"=="
diferente			"!="
barran				"\n"
barrat				"\t"
digito				[0-9]
numeral				{digito}+
letra				[A-Z]|[a-z]
frac_opt			"."{numeral}+
num					{numeral}({frac_opt})?("E"("+"|"-")?{numeral}+)?
nome				({letra}+{digito}*)+(_*({letra}+{digito}*)+)*
string				{aspas}([^\"])*{aspas}

%%
	/** RULES sec (mand.) */
{negacao}						{ return NEGACAO;}
{and}							{ return AND; }
{or}							{ return OR; }
{aspas}							{ return ASPAS; }
{atribuicao}					{ return ATRIBUICAO; }
{soma}							{ return SOMA; }
{subtracao}						{ return SUBTRACAO; }
{multiplicacao}					{ return MULTIPLICACAO; }
{divisao}						{ return DIVISAO; }
{resto}							{ return RESTO; }
{abre_parenteses}				{ return ABRE_PARENTESES; }
{fecha_parenteses}				{ return FECHA_PARENTESES; }
{abre_chave}					{ return ABRE_CHAVE; }
{fecha_chave}					{ return FECHA_CHAVE; }
{abre_colchete}					{ return ABRE_COLCHETE; }
{fecha_colchete}				{ return FECHA_COLCHETE; }
{ponto_e_virgula}				{ return PONTO_E_VIRGULA; }
{dois_pontos}					{ return DOIS_PONTOS; }
{virgula}						{ return VIRGULA; }
{hashmark}						{ return HASHMARK; }
{ponto}							{ return PONTO; }
{pipe}							{ return PIPE; }
{barra}							{ return BARRA; }
{maior}							{ return MAIOR; }
{menor}							{ return MENOR; }
{maior_igual}					{ return MAIOR_IGUAL; }
{menor_igual}					{ return MENOR_IGUAL; }
{igual}							{ return IGUAL; }
{diferente}						{ return DIFERENTE; }
{barran}						{ return BARRAN; }
{barrat}						{ return BARRAT; }
{num}							{ return NUM; }
"break"							{ return RES_BREAK; }
"case"							{ return RES_CASE; }
"char"							{ return RES_CHAR; }
"default"						{ return RES_DEFAULT; }
"do"							{ return RES_DO; }
"double"						{ return RES_DOUBLE; }
"else"							{ return RES_ELSE; }
"float"							{ return RES_FLOAT; }
"for"							{ return RES_FOR; }
"goto"							{ return RES_GOTO; }
"if"							{ return RES_IF; }
"bool"							{ return RES_BOOL; }
"int"							{ return RES_INT; }
"long"							{ return RES_LONG; }
"return"						{ return RES_RETURN; }
"sizeof"						{ return RES_SIZEOF; }
"static"						{ return RES_STATIC; }
"struct"						{ return RES_STRUCT; }
"typedef"						{ return RES_TYPEDEF; }
"void"							{ return RES_VOID; }
"while"							{ return RES_WHILE; }
{nome}							{ return NOME; }
{string}						{ return STRING; }
.								{ }
%%

