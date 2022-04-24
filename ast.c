#include "ast.h"
#include <sintatico.tab.h>
#include <string.h>

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

void setLista_de_funcoesProgram(NO program,NO funcao){
    pro *prog = (pro*)program;
    fun *func = (fun*) funcao;
    fun *funcaux = prog->lista_de_funcoes;
    while (funcaux != NULL)
    {
        funcaux  = funcaux->next;
    }
    funcaux = funcao;
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

void setParProx(NO parametro, NO parametros){
    par *no = (par*)parametro;
    no->prox = parametros;
}

void setParNome(NO parametro, char nome[]){
    par *no = (par*)parametro;
    strcpy(no->nome,nome);
}


void setParTipo(NO parametro, int tipo){
    par *no = (par*)parametro;
    no->tipo = tipo;
}

void setParPonteiro(NO parametro, int ponteiro){
    par *no = (par*)parametro;
    no->ponteiro = ponteiro;
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

NO createExpression(char nome[], int valor){//Cria no
    node *no = (node*)malloc(sizeof(node));
    no->exp = valor;
    strcpy(no->nome,nome);
    no->esquerdo = NULL;
    no->direito = NULL;
    return no;
}

void insertEsquerda(NO tree,NO aux){//Insere na esquerda
    node *no = (node*)tree;
    node *noaux = (node*)aux;
    no->esquerdo = noaux;
}

void insertDireita(NO tree,NO aux){//Insere na direita
    node *no = (node*)tree;
    node *noaux = (node*)aux;
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