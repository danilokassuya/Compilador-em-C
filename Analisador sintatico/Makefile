FLEX=flex
BISON=bison
CC=gcc

PROGRAMA = sintatico
LEXICO = lexico.l
SINTATICO = sintatico.y

$(PROGRAMA): $(LEXICO) $(SINTATICO) ast.h ast.c
	$(BISON) -d $(SINTATICO)
	$(FLEX) $(LEXICO)
	$(CC) -c ast.c lex.yy.c sintatico.tab.c -I.
	$(CC) ast.o lex.yy.o sintatico.tab.o -o $(PROGRAMA)

clean:
	rm -f *.yy.c
	rm -f *.tab.c
	rm -f *.tab.h
	rm -f *.o
	rm -f *.exe
	rm -f $(PROGRAMA)
