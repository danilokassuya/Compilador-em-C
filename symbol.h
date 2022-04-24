#ifndef _SYMBOL_H
#define _SYMBOL_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

typedef struct identificador{
	char id[100];//nome
	struct identificador *i;//proximo
    int linha;//linha da declaração
    int coluna;//coluna da declaração
	/*
	variavel = 0
	funcao = 1
	prototipo = 2
	constante = 3
	*/
	int type;//tipo do id

	//variavel
	/*
	int = 0
	char = 1
	void = 2
	*/
	int tipo;
	int size;
	int local;
	int isParameter;
	int started;

	//prototipo
	struct NO* parametros;
	//int tipo; //retorno

	//constante
	//int tipo;
	char valor[100];

    int pointer;//se é um ponteiro
} identi;

typedef void *Identificador;

void printHash(Identificador hash);

Identificador createControl();

Identificador createControlFun(Identificador globalSymbolTable);

Identificador createIdentificador(int totalline,int character);

int insert(Identificador ctr, Identificador consatnte);

void setTipo(Identificador inde,int tipo);

void SetNome(Identificador inde,char nome[]);

void setValor(Identificador inde,char valor[]);

void setStarted(Identificador inde,int started);

void setisParameter(Identificador inde,int isParameter);

void setLocal(Identificador inde,int local);

void setSize(Identificador inde,int size);

void setType(Identificador inde,int type);

void setPointer(Identificador inde,int pointer);

int getLinha(Identificador ctr, char string[]);

int getColuna(Identificador ctr, char string[]);

Identificador clean(Identificador ctr);

#endif