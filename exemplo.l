	/** DEFINITION sec*/
%{
#undef yywrap
#define yywrap() 1
#include<stdio.h>
	int i0=0;
	int i1=0;
	int i2=0;
	int i3=0;
	int i4=0;
	int i5=0;
	int i6=0;
	int i7=0;
	int i8=0;
	int i9=0;
%}

aspas				\"
atribuicao			"="
operacoes			"+"|"-"|"*"|"/"|"%"
caracteres			"("|")"|"{"|"}"|"["|"]"|";"|":"|","|"#"|"."
relop				">"|"<"|">="|"<="|"=="|"!="|"&&"|"||"
espaco				("\n"|""|"\t")+
digito				[0-9]
string				{aspas}[" "-"~"]*{aspas}
numeral				{digito}+
letra				[A-Z]|[a-z]
frac_opt			"."{numeral}+
num					{numeral}({frac_opt})?("E"("+"|"-")?{numeral}+)?
reservados			if|else|while|for|do|switch|int|float|char|double|bool|NULL
nome				({letra}+{digito}*)+

%option noyywrap

%%
	/** RULES sec (mand.) */
{num}	{
			printf("encontrou um numero: %s\n", yytext);
			i0++;
		}
{nome}	{
	printf("encontrou um nome: %s\n", yytext);
	i1++;
}
{espaco}	{
	printf("");
	i2++;
}
{string}	{
	printf("encontrou uma string: %s\n", yytext);
	i3++;
}
{reservados}	{
	printf("encontrou uma palavra reservada: %s\n", yytext);
	i4++;
}
{relop}	{
	printf("encontrou uma operacao relacional: %s\n", yytext);
	i5++;
}
{caracteres}	{
	printf("encontrou um caracter especial: %s\n", yytext);
	i6++;
}
{operacoes}	{
	printf("encontrou uma operacao: %s", yytext);
	i7++;
}
{atribuicao}	{
	printf("encontrou uma atribuicao: %s", yytext);
	i8++;
}
.	{
	printf("NaN\n");
	i9++;
}



%%
	/** SUBROUTINE sec */
	void main() {
		printf("Digite o Lexema: ");
		yylex();
	}
