#ifndef _AST_H
#define _AST_H

typedef void *NO;

NO createProgram();

NO createFunction(NO globalSymbolTable);

NO createPar();

void insertPar();

NO createExpression();

void insertEsquerda(NO tree,int value);

void insertDireita(NO tree,int value);

NO getDireito(NO tree);

NO getEsqeurdo(NO tree);

int getValue(NO tree);

#endif