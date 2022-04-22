#include <stdio.h>
#include <stdlib.h>
#include <sintatico.tab.h>
#include <string.h>
#include "ast.h"
#include "symbol.h"

typedef struct program /* estrutura para programa */
{
    struct Identificador *globalSymbolTable;
    struct function *lista_de_funcoes;
}pro;

typedef struct parametro{
    char nome[100];
    int tipo;
    struct parametro* prox;
}par;

//Verificar se função ja existe ou se possui prototipo equivalente
typedef struct function /* estrutura para função */
{
    //nome da função
    char nome[100];
    //tabela de símbolos local
    struct Identificador *symbolTable;
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
    operando = 0
    soma = 1
    subtração = 2
    etc*/
    int exp;//Qual tipo de expressão é esse nó
    /*
    void = 0
    int = 1
    char = 2
    */
    int type;//Se for operando
    struct No *direito;
    struct No *esquerdo;
}node;

NO createProgram(){
    pro *no = (pro*)malloc(sizeof(pro));
    no->globalSymbolTable = createControl();
    no->lista_de_funcoes = NULL;
    return no;
}

NO getGlobalSymbolTableProgram(NO program){
    pro *prog = (pro*)program;
    return prog->globalSymbolTable;
}

NO getLista_de_funcoesProgram(NO program){
    pro *prog = (pro*)program;
    return prog->lista_de_funcoes;
}

void printFunction(NO program){
    fun *no = getLista_de_funcoesProgram(program);
    while (no != NULL)
    {
        printf("%s ",no->nome);
        no = no->next;
    }
    
}

void printPar(NO program,char nome[]){
    fun *no = getLista_de_funcoesProgram(program);
    while (strcmp(no->nome,nome) != 0)
    {
        no = no->next;
    }
    par *parametro = no->parametro;
    while (parametro->prox != NULL)
    {
        printf("%s\n",no->parametro->nome);
        parametro = parametro->prox;
    }   
}

NO createFunction(NO globalSymbolTable,NO parametros,int retorno,char nome[],int prototipo){
    fun *no = (fun*)malloc(sizeof(fun));
    strcpy(no->nome,nome);
    no->parametro = parametros;
    no->symbolTable = createControlFun(globalSymbolTable);
    no->next = NULL;
    no->lista_de_comandos = NULL;
    no->retorno = retorno;
    no->prototipo = prototipo;
    return no;
}

NO insertFunction(NO program,NO parametros,int retorno,char nome[],int prototipo){
    pro *prog = (pro*)program;
    if(prog->lista_de_funcoes == NULL){
        prog->lista_de_funcoes = createFunction(prog->globalSymbolTable,parametros,retorno,nome,prototipo);
    }
    else{
        fun *function = (fun*)malloc(sizeof(fun));
        function = prog->lista_de_funcoes;
        while(function->next != NULL){
            function = function->next;
        }
        function->next = createFunction(prog->globalSymbolTable,parametros,retorno,nome,prototipo);
    }
}

NO createComando(){
    cmd *no = (cmd*)malloc(sizeof(cmd));
    no->next = NULL;
}

NO createPar(){
    par *no = (par*)malloc(sizeof(par));
    no->prox = NULL;
    return no;
}

void insertPar(NO parametro,char nome[],int tipo){
    par *no = (par*)parametro;
    while(no->prox != NULL){
        no = no->prox;
    }
    strcpy(no->nome,nome);
    no->tipo = tipo;
    no->prox = (par*)malloc(sizeof(par));
}

NO createExpression(){//Cria no
    node *no = (node*)malloc(sizeof(node));
    no->esquerdo = NULL;
    no->direito = NULL;
    return no;
}

void insertEsquerda(NO tree,int exp){//Insere na esquerda
    node *no = (node*)tree;
    node *noaux = (node*)malloc(sizeof(node));
    exp = exp;
    no->esquerdo = noaux;
}

void insertDireita(NO tree,int exp){//Insere na direita
    node *no = (node*)tree;
    node *noaux = (node*)malloc(sizeof(node));
    noaux->exp = exp;
    no->direito = noaux;
}

NO getDireito(NO tree){//retorna no direito
    node *no = (node*)tree;
    return no->direito;
}

NO getEsqeurdo(NO tree){//retorna no esquerdo
    node *no = (node*)tree;
    return no->esquerdo;
}

int getValue(NO tree){//retorna valor
    node *no = (node*)tree;
        if(no->exp = 0){//Caso operando
            return no->type;//retorna o tipo
        }
        else{//Caso alguma expressão
            int value1;
            int value2;
            value1 = getValue(no->esquerdo);
            value2 = getValue(no->direito);
            if(no->exp == 1){//Se for uma soma
                /*
                Analisa se os dois tipos são compativeis
                */
                /*if ()
                {
                    return value1;
                }*/
                
            }
            //else
        }
}
