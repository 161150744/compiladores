#path
LEXICON=_Lexicon
SYNTACTIC=_Syntactic
SOURCE=_Source
HEADER=_Header
OBJECT=_Object
FLAGS=-lfl

#main rule
compiler: $(FLEX)/lexico.l



$(OBJECT)/Tree.o: $(SOURCE)/Tree.cpp $(HEADER)/Tree.hpp
	g++ -c $(SOURCE)/Tree.cpp -o $(OBJECT)/Tree.o

$(OBJECT)/Node.o: $(SOURCE)/Node.cpp $(HEADER)/Node.hpp
	g++ -c $(SOURCE)/Node.cpp -o $(OBJECT)/Node.o

$(SOURCE)/lex.yy.c: $(LEXICON)/lexicon.l
	lex --outfile=$(SOURCE)/lex.yy.c --header-file=$(HEADER)/lex.yy.h $(LEXICON)/lexicon.l 

help:
	@echo "make:                    to compile"
	@echo "make dependencies:       install dependencies in debian systems"
	@echo "make help:               to view help commands"

clear:
	rm $(OBJECT)/*

dependencies:
	sudo apt-get install bison flex