	/** DEFINITION sec*/
%{
#include<stdio.h>
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
espaco				(\n|" "|\t)+
digito				[0-9]
numeral				{digito}+
letra				[A-Z]|[a-z]
frac_opt			"."{numeral}+
num					{numeral}({frac_opt})?("E"("+"|"-")?{numeral}+)?
res_break			_break_
res_case 			_case_
res_char			_char_
res_dafault			_default_
res_do				_do_
res_double			_double_
res_else			_else_
res_float			_float_
res_for				_for_
res_goto			_goto_
res_if				_if_
res_int				_int_
res_long			_long_
res_return			_return_
res_sizeof			_sizeof_
res_static			_static_
res_struct			_struct_
res_typedef			_typedef_
res_void			_void_
res_while			_while_
nome				({letra}+{digito}*)+(_*({letra}+{digito}*)+)*
string				{aspas}([^\"])*{aspas}

%option noyywrap

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
{espaco}						{ return ESPACO; }
{digito}						{ return DIGITO; }
{numeral}						{ return NUMERAL; }
{letra}							{ return LETRA; }
{frac_opt}						{ return FRAC_OPT; }
{num}							{ return NUM; }
{res_break}						{ return RES_BREAK; }
{res_case}						{ return RES_CASE; }
{res_char}						{ return RES_CHAR; }
{res_dafault}					{ return RES_DEFAULT; }
{res_do}						{ return RES_DO; }
{res_double}					{ return RES_DOUBLE; }
{res_else}						{ return RES_ELSE; }
{res_float}						{ return RES_FLOAT; }
{res_for}						{ return RES_FOR; }
{res_goto}						{ return RES_GOTO; }
{res_if}						{ return RES_IF; }
{res_int}						{ return RES_INT; }
{res_long}						{ return RES_LONG; }
{res_return}					{ return RES_RETURN; }
{res_sizeof}					{ return RES_SIZEOF; }
{res_static}					{ return RES_STATIC; }
{res_struct}					{ return RES_STRUCT; }
{res_typedef}					{ return RES_TYPEDEF; }
{res_void}						{ return RES_VOID; }
{res_while}						{ return RES_WHILE; }
{nome}							{ return NOME; }
{string}						{ return STRING; }
.								{ return ALGUMA_COISA; }
%%

