#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include<iostream>

#include "../_Header/Tree.hpp"

/* Programa principal. */
char* progname;
int lineno;

extern FILE* yyin;
extern int yyparse();
extern Tree * syntax_tree;

int main(int argc, char* argv[]);

void yyerror(char* s);