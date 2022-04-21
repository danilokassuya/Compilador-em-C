#ifndef _AST_H
#define _AST_H

typedef void *NO;
NO createProgram();

NO createFunction();

NO createPar();

void insertPar();

NO createExpression();

void insertEsquerda(arvore tree,int value);

void insertDireita(arvore tree,int value);

NO getDireito(arvore tree);

NO getEsqeurdo(arvore tree);

int getValue(arvore tree);

#endif