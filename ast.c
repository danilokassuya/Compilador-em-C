#include <ast.h>
#include <stdio.h>
#include <stdlib.h>
#include <sintatico.tab.h>
#include <string.h>

typedef struct No{
    char value[10];
    node direito;
    node esquerdo;
}node;

arvore createArvore(){//Cria no
    node *no = (node*)malloc(sizeof(node));
    no->esquerdo = NULL;
    no->direito = NULL;
    return no;
}

void insertEsquerda(arvore tree,char value[]){//Insere na esquerda
    node *no = (node*)tree;
    node *noaux = (node*)malloc(sizeof(node));
    strcpy(noaux->value,value);
    no->esquerdo = noaux;
}

void insertDireita(arvore tree,char value[]){//Insere na direita
    node *no = (node*)tree;
    node *noaux = (node*)malloc(sizeof(node));
    strcpy(noaux->value,value);
    no->direito = noaux;
}

node getDireito(arvore tree){//retorna no direito
    node *no = (node*)tree;
    return no->direito;
}

node getEsqeurdo(arvore tree){//retorna no esquerdo
    node *no = (node*)tree;
    return no->esquerdo;
}

char* getValue(arvore tree){//retorna valor
    node *no = (node*)tree;
    return no->value;
}