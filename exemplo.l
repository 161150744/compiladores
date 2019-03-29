	/** DEFINITION sec*/
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
%}

abreChaves			(\{)
fechaChaves			(\})
abreParenteses		(\()
fechaParenteses		(\))
adicao				("+")
subtracao			("-")
divisao				("/")
multiplicacao		("*")
atribuicao			("=")
igualdade			("==")
negacao				("!")
maior				(">")
menor				("<")
maiorIgual			(">=")
menorIgual			("<=")
diferente			("!=")
contraBarra			(\\)
aspas				(\")
pontoVirgula		(;)
espaco				" "
digito				[0-9]
string				{aspas}({nome})*{aspas}
numeral				{digito}+
letra				[A-z]
frac_opt			"."{numeral}+
num					{numeral}({frac_opt})?
nome				({letra}+{digito}*)+
abreColchetes		
fechaColchetes		

%%
	/** RULES sec (mand.) */
{num}				printf("Find number: %s\n", yytext);
{nome}				printf("Find nome: %s\n", yytext);
{espaco}			printf("");
{string}			printf("Find string: %s\n", yytext);
{pontoVirgula}		printf("Find ponto e virgula: %s\n", yytext);
{adicao}			printf("Find adicao: %s\n", yytext);
{subtracao}			printf("Find subtracao: %s\n", yytext);
{divisao}			printf("Find divisao: %s\n", yytext);
{multiplicacao}		printf("Find multiplicacao: %s\n", yytext);
{atribuicao}		printf("Find atribuicao: %s\n", yytext);
{igualdade}			printf("Find igualdade: %s\n", yytext);
{negacao}			printf("Find negacao: %s\n", yytext);
{maior}				printf("Find maior: %s\n", yytext);
{menor}				printf("Find menor: %s\n", yytext);
{maiorIgual}		printf("Find maiorIgual: %s\n", yytext);
{menorIgual}		printf("Find menorIgual: %s\n", yytext);
{diferente}			printf("Find diferente: %s\n", yytext);
{abreParenteses}	printf("Find abre parenteses: %s\n", yytext);
{fechaParenteses}	printf("Find fecha parenteses: %s\n", yytext);
{abreChaves}		printf("Find abre chaves: %s\n", yytext);
{fechaChaves}		printf("Find fecha chaves: %s\n", yytext);
{abreColchetes}		printf("Find abre colchetes: %s\n", yytext);
{fechaColchetes}	printf("Find fecha colchetes: %s\n", yytext);
.					printf("NaN\n");



%%
	/** SUBROUTINE sec */
	main() {
		printf("Digite o Lexema: ");
		yylex();
	}
