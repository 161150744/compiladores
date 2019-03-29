	/** DEFINITION sec*/
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
%}

contraBarra			(\\)
aspas				(\")
operadoresLogicos	("||"|"&&"|">"|"<"|">="|"<="|"=="|"!")
operadores			("="|"+"|"-"|"/"|"*"|"%")
fimDaLinha			[;]
espaco				" "
digito				[0-9]
string				{aspas}({nome})*{aspas}
numeral				{digito}+
letra				[A-z]
frac_opt			"."{numeral}+
num					{numeral}({frac_opt})?
nome				({letra}+{digito}*)+

%%
	/** RULES sec (mand.) */
{contraBarra}		printf("Find contra barra: %s\n", yytext);
{num}				printf("Find number: %s\n", yytext);
{nome}				printf("Find nome: %s\n", yytext);
{espaco}			printf("");
{operadores}		printf("Find operador: %s\n", yytext);
{operadoresLogicos}	printf("Find operador logico: %s\n", yytext);
{string}			printf("Find operador string: %s\n", yytext);
.					printf("NaN\n");



%%
	/** SUBROUTINE sec */
	main() {
		printf("Digite o Lexema: ");
		yylex();
	}
