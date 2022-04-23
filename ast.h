#ifndef _AST_H
#define _AST_H

#include <stdio.h>
#include <stdlib.h>
#include "symbol.h"

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

NO createExpression(int tipo, int valor);

void insertEsquerda(NO tree,NO aux);

void insertDireita(NO tree,NO aux);

NO getDireito(NO tree);

NO getEsqeurdo(NO tree);

#endif