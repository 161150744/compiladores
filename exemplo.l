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
	int i10=0;
%}

logicos				"!"|"&&"|"||"
aspas				\"
atribuicao			"="
operacoes			"+"|"-"|"*"|"/"|"%"
caracteres			"("|")"|"{"|"}"|"["|"]"|";"|":"|","|"#"|"."|"|"
relop				">"|"<"|">="|"<="|"=="|"!="
espaco				(\n|" "|\t)+
digito				[0-9]
numeral				{digito}+
letra				[A-Z]|[a-z]
frac_opt			"."{numeral}+
num					{numeral}({frac_opt})?("E"("+"|"-")?{numeral}+)?
reservados			_break_|_case_|_char_|_default_|_do_|_double_|_else_|_float_|_for_|_goto_|_if_|_int_|_long_|_return_|_sizeof_|_static_|_struct_|_typedef_|_void_|_while_
nome				({letra}+{digito}*)+(_*({letra}+{digito}*)+)*
string				{aspas}([^\"])*{aspas}

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
	printf("encontrou uma operacao: %s\n", yytext);
	i7++;
}
{atribuicao}	{
	printf("encontrou uma atribuicao: %s\n", yytext);
	i8++;
}
{logicos}	{
	printf("encontrou um operador logico: %s\n", yytext);
	i9++;
}
.	{
	printf("caracter nao identificado\n");
	i10++;
}



%%
	/** SUBROUTINE sec */
	int main(int argc, char *argv[]) {
		if(argc>1){
			yyin = fopen(argv[1], "r"); 
			printf("Digite o Lexema:\n");
			yylex();
			fclose(yyin);
			printf("_________________________________\n");
			printf("\tencontrou %d numeros\n", i0);
			printf("\tencontrou %d nomes\n", i1);
			printf("\tencontrou %d espacos, tabs, quebras de linha...\n", i2);
			printf("\tencontrou %d strings\n", i3);
			printf("\tencontrou %d palavras reservadas\n", i4);
			printf("\tencontrou %d operacoes relacionais\n", i5);
			printf("\tencontrou %d caracteres especiais\n", i6);
			printf("\tencontrou %d operacoes\n", i7);
			printf("\tencontrou %d atribuicoes\n", i8);
			printf("\tencontrou %d operadores logicos\n", i9);
			printf("\tencontrou %d caracteres nao identificados\n", i10);
			printf("_________________________________\n");
		}
		else{
			printf("passe um nome de arquivo: ./a.out exemplo.l\n");
		}
		return 0;
	}
