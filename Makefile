#path
LEXICON=_Lexicon
SYNTACTIC=_Syntactic
SOURCE=_Source
HEADER=_Header
OBJECT=_Object

#flags
FLAGS=-lfl -std=c++14 -lm -ll -Wall

#main rule
GORDO: $(OBJECT)/syntactic.tab.o $(OBJECT)/lex.yy.o $(OBJECT)/Main.o $(OBJECT)/Tree.o $(OBJECT)/Node.o
	g++ $(OBJECT)/lex.yy.o $(OBJECT)/syntactic.tab.o $(OBJECT)/Main.o $(OBJECT)/Tree.o $(OBJECT)/Node.o -o GORDO $(FLAGS)

test.out: $(OBJECT)/TestTree.o $(OBJECT)/Tree.o $(OBJECT)/Node.o
	g++ $(OBJECT)/TestTree.o $(OBJECT)/Tree.o $(OBJECT)/Node.o -o test.out

$(OBJECT)/syntactic.tab.o: $(SOURCE)/syntactic.tab.c $(HEADER)/syntactic.tab.h
	g++ -c $(SOURCE)/syntactic.tab.c -o $(OBJECT)/syntactic.tab.o

$(OBJECT)/lex.yy.o: $(SOURCE)/lex.yy.cc $(HEADER)/lex.yy.h
	g++ -c $(SOURCE)/lex.yy.cc -o $(OBJECT)/lex.yy.o

$(OBJECT)/Main.o: $(SOURCE)/Main.cpp $(HEADER)/Main.hpp
	g++ -c $(SOURCE)/Main.cpp -o $(OBJECT)/Main.o

$(OBJECT)/TestTree.o: $(SOURCE)/TestTree.cpp $(HEADER)/TestTree.hpp
	g++ -c $(SOURCE)/TestTree.cpp -o $(OBJECT)/TestTree.o

$(OBJECT)/Tree.o: $(SOURCE)/Tree.cpp $(HEADER)/Tree.hpp
	g++ -c $(SOURCE)/Tree.cpp -o $(OBJECT)/Tree.o

$(OBJECT)/Node.o: $(SOURCE)/Node.cpp $(HEADER)/Node.hpp
	g++ -c $(SOURCE)/Node.cpp -o $(OBJECT)/Node.o

$(SOURCE)/lex.yy.cc: $(LEXICON)/lexicon.l
	flex++ --outfile=$(SOURCE)/lex.yy.cc --header-file=$(HEADER)/lex.yy.h $(LEXICON)/lexicon.l

$(SOURCE)/syntactic.tab.c: $(SYNTACTIC)/syntactic.y
	bison -o $(SOURCE)/syntactic.tab.c -v $(SYNTACTIC)/syntactic.y

$(HEADER)/syntactic.tab.h: $(SYNTACTIC)/syntactic.y
	bison -o $(HEADER)/syntactic.tab.h -d $(SYNTACTIC)/syntactic.y

help:
	@echo "make:                    to compile"
	@echo "make dependencies:       install dependencies in debian systems"
	@echo "make help:               to view help commands"

clear:
	rm $(OBJECT)/*
	rm *.out

dependencies:
	sudo apt-get install bison flex