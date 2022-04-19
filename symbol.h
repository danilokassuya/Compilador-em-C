#ifndef _SYMBOL_H_
#define _SYMBOL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef void *Identificador;

int erro();

void addZ();

Identificador createControl();

int getQuebra();

void setQuebra(int i);

Identificador insert(Identificador ctr, char string[],int type,int totalline,int character);

Identificador clean(Identificador ctr);

#endif