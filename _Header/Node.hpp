#ifndef NODE_HPP
#define NODE_HPP

#include<string>
#include<vector>
#include<fstream>

#include<assert.h>
#include<stdarg.h>

typedef int Node_type;

#define NEGACAO 										1000
#define AND												1001
#define OR 												1002
#define ASPAS											1003
#define ATRIBUICAO										1004
#define SOMA											1005
#define SUBTRACAO										1006
#define MULTIPLICACAO									1007
#define DIVISAO											1008
#define RESTO											1009
#define ABRE_PARENTESES									1010
#define FECHA_PARENTESES								1011
#define ABRE_CHAVE										1012
#define FECHA_CHAVE										1013
#define ABRE_COLCHETE									1014
#define FECHA_COLCHETE									1015
#define PONTO_E_VIRGULA									1016
#define DOIS_PONTOS										1017
#define VIRGULA											1018
#define HASHMARK										1019
#define PONTO											1020
#define PIPE											1021
#define BARRA											1022
#define MAIOR											1023
#define MENOR											1024
#define MAIOR_IGUAL										1025
#define MENOR_IGUAL										1026
#define IGUAL											1027
#define DIFERENTE										1028
#define ESPACO											1029
#define DIGITO											1030
#define NUMERAL											1031
#define LETRA											1032
#define FRAC_OPT										1033
#define NUM												1034
#define RES_BREAK										1035
#define RES_CASE 										1036
#define RES_CHAR										1037
#define RES_DEFAULT										1038
#define RES_DO											1039
#define RES_DOUBLE										1040
#define RES_ELSE										1041
#define RES_FLOAT										1042
#define RES_FOR											1043
#define RES_GOTO										1044
#define RES_IF											1045
#define RES_INT											1046
#define RES_LONG										1047
#define RES_RETURN										1048
#define RES_SIZEOF										1049
#define RES_STATIC										1050
#define RES_STRUCT										1051
#define RES_TYPEDEF										1052
#define RES_VOID										1053
#define RES_WHILE										1054
#define NOME											1055
#define STRING											1056

class Node{
private:
    int line_num;
    std::string lexeme;
    Node_type type;
    void *attribute;
    std::vector<Node*> children;
public:
    Node();
    Node(int nl, Node_type t, std::string lexeme,  /* Node* children */ ...);
    ~Node();
	bool is_leaf();
	int nb_of_children();
    Node* at_children(int at);
    void ad_children(Node *new_children);
	void del_children(int index);
	std::string get_lexeme();
};

#endif