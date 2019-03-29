a.out: exemplo.l
	lex exemplo.l && gcc -lfl lex.yy.c

help:
	@echo "make:              to compile"
	@echo "make dependencies: install dependencies in debian systems"
	@echo "make help:         to view help commands"

dependencies:
	sudo apt-get install bison flex