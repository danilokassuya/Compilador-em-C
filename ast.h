#ifndef _AST_H
#define _AST_H

#include <stdio.h>
#include <stdlib.h>
#include "symbol.h"

typedef struct program /* estrutura para programa */
{
    struct identificador *globalSymbolTable;
    struct function *lista_de_funcoes;
}pro;

typedef struct parametro{
    char nome[100];
    int tipo;
    int ponteiro;
    struct parametro* prox;
}par;

//Verificar se função ja existe ou se possui prototipo equivalente
typedef struct function /* estrutura para função */
{
    //nome da função
    char nome[100];
    //tabela de símbolos local
    struct identificador *symbolTable;
    struct parametro* parametro;
    int retorno;
    int prototipo;//Se é um protipo
    struct cmd *lista_de_comandos;
    // próxima função
    struct function *next;
}fun;


typedef struct cmd /* comando genérico */
{
    //tipo de comando
    /*
    if = 3
    while = 4
    for = 5
    do = 6
    exp = 7
    */
    int cmd_type;
    //comandos expressão/if/while/for
    struct No *exp;
    //comando if
    struct cmd* then;
    struct cmd* els;
    //comando while
    struct cmd* comandos;
    //próximo comando
    struct cmd* next;
}cmd;
/*
soma = 1
subtração = 2
etc

operando = 0
void = 0
int = 1
char = 2
*/
typedef struct No{
    /*
    void = 0
    int = 1
    char = 2
    soma = 3
    subtração = 4
    igual = 5
    não igual = 6
    atribuição = 7
    somaAtribuiçõa = 8
    menosAtribuição = 9
    etc*/
    int exp;//Qual tipo de expressão é esse nó
    char nome[100]; //nome do id
    struct No *direito;
    struct No *esquerdo;
}node;

typedef void *NO;

NO createProgram();

NO getGlobalSymbolTableProgram(NO program);

NO getLista_de_funcoesProgram(NO program);

void setLista_de_funcoesProgram(NO program,NO funcao);

void printFunction(NO program);

void printPar(NO program,char nome[]);

NO createFunction(NO globalSymbolTable,NO parametros,int retorno,char nome[],int prototipo);

NO insertFunction(NO program,NO parametros,int retorno,char nome[],int prototipo);

NO createComando();

NO createPar();

void setParProx(NO parametro, NO parametros);

void setParNome(NO parametro, char nome[]);

void setParTipo(NO parametro, int tipo);

void setParPonteiro(NO parametro, int ponteiro);

void insertPar(NO parametro,char nome[],int tipo);

NO createExpression(char nome[], int valor);

void insertEsquerda(NO tree,NO aux);

void insertDireita(NO tree,NO aux);

NO getDireito(NO tree);

NO getEsqeurdo(NO tree);

#endif