#ifndef _SYMBOL_H
#define _SYMBOL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

typedef void *Identificador;

void printHash(Identificador hash);

Identificador createControl();

Identificador createControlFun(Identificador globalSymbolTable);

int getLinha(Identificador ctr, char string[]);

int getColuna(Identificador ctr, char string[]);

Identificador createConstante(char string[],int tipo,int totalline,int character);

int insertConstante(Identificador ctr, Identificador consatnte);

void constanteSetValor(Identificador ctr, char string[],char valor[]);

int insertVariavel(Identificador ctr, char nome[],int tipo, int dimensao,int local, int isParametro, int isStarted,int totalline,int character);

Identificador clean(Identificador ctr);

#endif
