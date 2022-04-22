#ifndef _AST_H
#define _AST_H

typedef void *NO;

NO createProgram();

NO getGlobalSymbolTableProgram(NO program);

NO getLista_de_funcoesProgram(NO program);

void printFunction(NO program);

void printPar(NO program,char nome[]);

NO createFunction(NO globalSymbolTable,NO parametros,int retorno,char nome[],int prototipo);

NO insertFunction(NO program,NO parametros,int retorno,char nome[],int prototipo);

NO createComando();

NO createPar();

void insertPar(NO parametro,char nome[],int tipo);

NO createExpression();

void insertEsquerda(NO tree,int value);

void insertDireita(NO tree,int value);

NO getDireito(NO tree);

NO getEsqeurdo(NO tree);

int getValue(NO tree);

#endif