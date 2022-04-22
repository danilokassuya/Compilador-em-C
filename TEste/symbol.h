#ifndef _SYMBOL_H
#define _SYMBOL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

typedef void *Identificador;

void addZ();

Identificador createControl();

Identificador createControlFun(NO globalSymbolTable);

int getLinha(Identificador ctr, char string[]);

int getColuna(Identificador ctr, char string[]);

int insert(Identificador ctr, char string[],int type,int totalline,int character);

int insertConstante(Identificador ctr, char string[],int tipo,int totalline,int character);

void constanteSetValor(Identificador ctr, char string[],char valor[]);

void constanteSetValor(Identificador ctr, char string[],char valor[]);

Identificador clean(Identificador ctr);

#endif