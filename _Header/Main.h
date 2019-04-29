#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "../_Header/Node.h"

/* Programa principal. */
char* progname;
int lineno;

extern FILE* yyin;
extern int yyparse();
extern Node * syntax_tree;

int main(int argc, char* argv[]);

void yyerror(char* s);