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
	int tamanho[100];
	int isParameter;
	int started;
	char string[100];
	//constante
	//int tipo;
	int value;
    int pointer;//se é um ponteiro
} identi;

typedef struct control{
	identi *hash[211];
}controle;

typedef struct retorno{
	identi *identidade;
	struct No *node;
	struct retorno *prox;
}ret;

typedef void *Identificador;	

void printHash(Identificador prog);

Identificador createControl();

Identificador createIdenti(int totalLines,int characters,char name[]);

int insert(Identificador funcao, Identificador inde);

void setTipo(Identificador inde,int tipo);

void SetNome(Identificador inde,char nome[]);

void setValor(Identificador inde,char valor[]);

void setValue(Identificador inde,int value);

void setStarted(Identificador inde,int started);

void setisParameter(Identificador inde,int isParameter);

void setLocal(Identificador inde,int local);

void setType(Identificador inde,int type);

void setPointer(Identificador inde,int pointer);

void printLinhaErro(int linha,int coluna,char nome[]);

int getLinha(char funcao[], char variavel[], Identificador programa);

int getColuna(char funcao[], char variavel[], Identificador programa);

int getPointer(char funcao[], char variavel[], Identificador programa);

identi *getIdenti(char funcao[], char variavel[], Identificador programa);

int searchHash(char funcao[], char variavel[], Identificador programa);

Identificador clean(Identificador ctr);

#endif