#ifndef _AST_H
#define _AST_H

#include <stdio.h>
#include <stdlib.h>
#include "symbol.h"

typedef struct program /* estrutura para programa */
{
    struct control *globalSymbolTable;
    struct function *lista_de_funcoes;
    struct No *exp;
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
    struct control *symbolTable;
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
    if = 1
    while = 2
    for = 3
    do = 4
    exp = 5
    , = 6
    bloco = 7
    comando = 8
    retorno = 9
    printf = 10
    exit = 11
    scan = 12
    */
    int type;
    //comandos expressão/if/while/for
    struct No *exp;
    //comando if
    struct cmd* then;
    struct cmd* els;
    //comando while
    struct cmd* whil;
    //próximo comando
    struct cmd* next;
    //comando for
    struct cmd* for0;
    struct No* for1;
    struct No* for2;
    struct No* for3;
    //bloco
    struct cmd* bloco;
}cmd;
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
    and = 10
    or = 11
    bitwise or = 12
    bitwise xor = 13
    bitwise and = 14
    less than =  15
    less equal = 16
    greater than = 17
    greater equal = 18
    left shift = 19
    right shift = 20
    minus = 21
    plus = 22
    div = 23
    multiply = 24
    remainder = 25
    cast = 26
    inc = 27
    dec = 28
    bitwise and = 29
    multiply = 30
    plus = 31
    minus = 32
    bitwise not = 33
    not = 34
    chamada = 35
    id  = 36
    etc*/
    int exp;//Qual tipo de expressão é esse nó
    char nome[100]; //nome do id
    struct No *prox;
    struct No *direito;
    struct No *esquerdo;
}node;

#endif