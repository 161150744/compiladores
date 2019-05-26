#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Node.h"
#include "lista.h"
#include "symbol_table.h"

/* Programa principal. */
char* progname;
int lineno;

extern FILE* yyin;
extern int yyparse();
extern Node * syntax_tree;

extern symbol_t * tabela_simbolos;
extern struct node_tac *lista;

int main(int argc, char* argv[]);

void yyerror(char* s);