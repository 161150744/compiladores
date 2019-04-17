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
	int i11=0;
	int i12=0;
	int i13=0;
	int i14=0;
	int i15=0;
	int i16=0;
	int i17=0;
	int i18=0;
	int i19=0;
	int i20=0;
	int i21=0;
	int i22=0;
	int i23=0;
	int i24=0;
	int i25=0;
	int i26=0;
	int i27=0;
	int i28=0;
	int i29=0;
	int i30=0;
	int i31=0;
	int i32=0;
	int i33=0;
	int i34=0;
	int i35=0;
	int i36=0;
	int i37=0;
	int i38=0;
	int i39=0;
	int i40=0;
	int i41=0;
	int i42=0;
	int i43=0;
	int i44=0;
	int i45=0;
	int i46=0;
	int i47=0;
	int i48=0;
	int i49=0;
	int i50=0;
	int i51=0;
	int i52=0;
	int i53=0;
	int i54=0;
	int i55=0;
	int i56=0;
	int i57=0;
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
{negacao} {
	printf("encontrou: negacao: \%s\n", yytext);
	i0++;
}
{and} {
	printf("encontrou: and: \%s\n", yytext);
	i1++;
}
{or} {
	printf("encontrou: or: \%s\n", yytext);
	i2++;
}
{aspas} {
	printf("encontrou: aspas: \%s\n", yytext);
	i3++;
}
{atribuicao} {
	printf("encontrou: atribuicao: \%s\n", yytext);
	i4++;
}
{soma} {
	printf("encontrou: soma: \%s\n", yytext);
	i5++;
}
{subtracao} {
	printf("encontrou: subtracao: \%s\n", yytext);
	i6++;
}
{multiplicacao} {
	printf("encontrou: multiplicacao: \%s\n", yytext);
	i7++;
}
{divisao} {
	printf("encontrou: divisao: \%s\n", yytext);
	i8++;
}
{resto} {
	printf("encontrou: resto: \%s\n", yytext);
	i9++;
}
{abre_parenteses} {
	printf("encontrou: abre_parenteses: \%s\n", yytext);
	i10++;
}
{fecha_parenteses} {
	printf("encontrou: fecha_parenteses: \%s\n", yytext);
	i11++;
}
{abre_chave} {
	printf("encontrou: abre_chave: \%s\n", yytext);
	i12++;
}
{fecha_chave} {
	printf("encontrou: fecha_chave: \%s\n", yytext);
	i13++;
}
{abre_colchete} {
	printf("encontrou: abre_colchete: \%s\n", yytext);
	i14++;
}
{fecha_colchete} {
	printf("encontrou: fecha_colchete: \%s\n", yytext);
	i15++;
}
{ponto_e_virgula} {
	printf("encontrou: ponto_e_virgula: \%s\n", yytext);
	i16++;
}
{dois_pontos} {
	printf("encontrou: dois_pontos: \%s\n", yytext);
	i17++;
}
{virgula} {
	printf("encontrou: virgula: \%s\n", yytext);
	i18++;
}
{hashmark} {
	printf("encontrou: hashmark: \%s\n", yytext);
	i19++;
}
{ponto} {
	printf("encontrou: ponto: \%s\n", yytext);
	i20++;
}
{pipe} {
	printf("encontrou: pipe: \%s\n", yytext);
	i21++;
}
{barra} {
	printf("encontrou: barra: \%s\n", yytext);
	i22++;
}
{maior} {
	printf("encontrou: maior: \%s\n", yytext);
	i23++;
}
{menor} {
	printf("encontrou: menor: \%s\n", yytext);
	i24++;
}
{maior_igual} {
	printf("encontrou: maior_igual: \%s\n", yytext);
	i25++;
}
{menor_igual} {
	printf("encontrou: menor_igual: \%s\n", yytext);
	i26++;
}
{igual} {
	printf("encontrou: igual: \%s\n", yytext);
	i27++;
}
{diferente} {
	printf("encontrou: diferente: \%s\n", yytext);
	i28++;
}
{espaco} {
	printf("encontrou: espaco: \%s\n", yytext);
	i29++;
}
{digito} {
	printf("encontrou: digito: \%s\n", yytext);
	i30++;
}
{numeral} {
	printf("encontrou: numeral: \%s\n", yytext);
	i31++;
}
{letra} {
	printf("encontrou: letra: \%s\n", yytext);
	i32++;
}
{frac_opt} {
	printf("encontrou: frac_opt: \%s\n", yytext);
	i33++;
}
{num} {
	printf("encontrou: num: \%s\n", yytext);
	i34++;
}
{res_break} {
	printf("encontrou: res_break: \%s\n", yytext);
	i35++;
}
{res_case} {
	printf("encontrou: res_case: \%s\n", yytext);
	i36++;
}
{res_char} {
	printf("encontrou: res_char: \%s\n", yytext);
	i37++;
}
{res_dafault} {
	printf("encontrou: res_dafault: \%s\n", yytext);
	i38++;
}
{res_do} {
	printf("encontrou: res_do: \%s\n", yytext);
	i39++;
}
{res_double} {
	printf("encontrou: res_double: \%s\n", yytext);
	i40++;
}
{res_else} {
	printf("encontrou: res_else: \%s\n", yytext);
	i41++;
}
{res_float} {
	printf("encontrou: res_float: \%s\n", yytext);
	i42++;
}
{res_for} {
	printf("encontrou: res_for: \%s\n", yytext);
	i43++;
}
{res_goto} {
	printf("encontrou: res_goto: \%s\n", yytext);
	i44++;
}
{res_if} {
	printf("encontrou: res_if: \%s\n", yytext);
	i45++;
}
{res_int} {
	printf("encontrou: res_int: \%s\n", yytext);
	i46++;
}
{res_long} {
	printf("encontrou: res_long: \%s\n", yytext);
	i47++;
}
{res_return} {
	printf("encontrou: res_return: \%s\n", yytext);
	i48++;
}
{res_sizeof} {
	printf("encontrou: res_sizeof: \%s\n", yytext);
	i49++;
}
{res_static} {
	printf("encontrou: res_static: \%s\n", yytext);
	i50++;
}
{res_struct} {
	printf("encontrou: res_struct: \%s\n", yytext);
	i51++;
}
{res_typedef} {
	printf("encontrou: res_typedef: \%s\n", yytext);
	i52++;
}
{res_void} {
	printf("encontrou: res_void: \%s\n", yytext);
	i53++;
}
{res_while} {
	printf("encontrou: res_while: \%s\n", yytext);
	i54++;
}
{nome} {
	printf("encontrou: nome: \%s\n", yytext);
	i55++;
}
{string} {
	printf("encontrou: string: \%s\n", yytext);
	i56++;
}
.	{
	printf("caracter nao identificado\n", yytext);
	i57++;
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
						printf("\tencontrou \%d negacao\n", i0);
			printf("\tencontrou \%d and\n", i1);
			printf("\tencontrou \%d or\n", i2);
			printf("\tencontrou \%d aspas\n", i3);
			printf("\tencontrou \%d atribuicao\n", i4);
			printf("\tencontrou \%d soma\n", i5);
			printf("\tencontrou \%d subtracao\n", i6);
			printf("\tencontrou \%d multiplicacao\n", i7);
			printf("\tencontrou \%d divisao\n", i8);
			printf("\tencontrou \%d resto\n", i9);
			printf("\tencontrou \%d abre_parenteses\n", i10);
			printf("\tencontrou \%d fecha_parenteses\n", i11);
			printf("\tencontrou \%d abre_chave\n", i12);
			printf("\tencontrou \%d fecha_chave\n", i13);
			printf("\tencontrou \%d abre_colchete\n", i14);
			printf("\tencontrou \%d fecha_colchete\n", i15);
			printf("\tencontrou \%d ponto_e_virgula\n", i16);
			printf("\tencontrou \%d dois_pontos\n", i17);
			printf("\tencontrou \%d virgula\n", i18);
			printf("\tencontrou \%d hashmark\n", i19);
			printf("\tencontrou \%d ponto\n", i20);
			printf("\tencontrou \%d pipe\n", i21);
			printf("\tencontrou \%d barra\n", i22);
			printf("\tencontrou \%d maior\n", i23);
			printf("\tencontrou \%d menor\n", i24);
			printf("\tencontrou \%d maior_igual\n", i25);
			printf("\tencontrou \%d menor_igual\n", i26);
			printf("\tencontrou \%d igual\n", i27);
			printf("\tencontrou \%d diferente\n", i28);
			printf("\tencontrou \%d espaco\n", i29);
			printf("\tencontrou \%d digito\n", i30);
			printf("\tencontrou \%d numeral\n", i31);
			printf("\tencontrou \%d letra\n", i32);
			printf("\tencontrou \%d frac_opt\n", i33);
			printf("\tencontrou \%d num\n", i34);
			printf("\tencontrou \%d res_break\n", i35);
			printf("\tencontrou \%d res_case\n", i36);
			printf("\tencontrou \%d res_char\n", i37);
			printf("\tencontrou \%d res_dafault\n", i38);
			printf("\tencontrou \%d res_do\n", i39);
			printf("\tencontrou \%d res_double\n", i40);
			printf("\tencontrou \%d res_else\n", i41);
			printf("\tencontrou \%d res_float\n", i42);
			printf("\tencontrou \%d res_for\n", i43);
			printf("\tencontrou \%d res_goto\n", i44);
			printf("\tencontrou \%d res_if\n", i45);
			printf("\tencontrou \%d res_int\n", i46);
			printf("\tencontrou \%d res_long\n", i47);
			printf("\tencontrou \%d res_return\n", i48);
			printf("\tencontrou \%d res_sizeof\n", i49);
			printf("\tencontrou \%d res_static\n", i50);
			printf("\tencontrou \%d res_struct\n", i51);
			printf("\tencontrou \%d res_typedef\n", i52);
			printf("\tencontrou \%d res_void\n", i53);
			printf("\tencontrou \%d res_while\n", i54);
			printf("\tencontrou \%d nome\n", i55);
			printf("\tencontrou \%d string\n", i56);
			printf("\tencontrou %d caracteres nao identificados\n", i57);
			printf("_________________________________\n");
		}
		else{
			printf("passe um nome de arquivo: ./a.out exemplo.l\n");
		}
		return 0;
	}
