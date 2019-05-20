#main rule
FLEX = flex
YACC = yacc
GCC = gcc
EXE = compiler
CODES = _Header/Main.h _Source/Main.c _Source/Node.c _Header/Node.h _Source/symbol_table.c _Header/symbol_table.h 
CODESGERADOS = y.tab.h y.tab.c lex.yy.c
FLAGS = -lfl

#Compila os programas
all:
	$(FLEX) _Lexicon/lexicon.l
	$(YACC) -d _Syntactic/syntactic.y
	$(GCC) -o $(EXE) $(CODES) $(CODESGERADOS) $(FLAGS)

#Exclui os dados gerados
clean:
	rm $(EXE)
	rm $(CODESGERADOS)