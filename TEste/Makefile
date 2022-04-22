all: l10e4

l10e4: teste.c ast.o symbol.o
	gcc -o l10e4 teste.c ast.o symbol.o

ast.o: ast.c
	gcc -c ast.c ast.h

symbol.o: symbol.c
	gcc -c symbol.c symbol.h

