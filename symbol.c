#include <sintatico.tab.h>
#include <string.h>
#include "symbol.h"

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
	int tipo;//retorno
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

typedef struct control{
	identi *hash[211];
}controle;

void printHash(Identificador hash){
	controle *ctr = (controle*) hash;
	identi *h;
	int i = 0;
	while(i < 211){
		printf("%d:",i);
		h = ctr->hash[i];
		while(h != NULL){
			printf("%s ",h->id);
			h = h->i;
		}
		i++;
		printf("\n");
	}
}

Identificador createControl(){
	controle *ctr = (controle *)malloc(sizeof(controle));
	clean(ctr);
	return ctr;
}

Identificador createControlFun(NO globalSymbolTable){
	controle *ctr = (controle *)malloc(sizeof(controle));
	controle *ctraux = (controle*)globalSymbolTable;
	clean(ctr);
	int i = 0;
	while(i<211){
		ctr->hash[i] = ctraux->hash[i];
		i++;
	}
	return ctr;
}

int insertConstante(Identificador ctr, char string[],int tipo,int totalline,int character){
	if(tipo != 0){
		printf("string type is not compatible with define");
		return 0;//Erro constante precisa ser inteiro
		//"string type is not compatible with define"
	}
	controle *hash = (controle*)ctr;
	int size = strlen(string);
	int i = 0;
	int buff = 0;
	while(i < size ){
		buff = buff + string[i];
		i++;
	}
	i = buff%211;
	identi *h = hash->hash[i];
	identi *haux = h;
	if(h == NULL){
		hash->hash[i] = (identi *)malloc(sizeof(identi));
		hash->hash[i]->i = NULL;
		strcpy(hash->hash[i]->id, string);
		hash->hash[i]->type = 3;
		hash->hash[i]->tipo = tipo;
		hash->hash[i]->linha = totalline;
		hash->hash[i]->coluna = character;
		hash->hash[i]->parametros = NULL;
		hash->hash[i]->size = 0;
		hash->hash[i]->local = 0;
		hash->hash[i]->isParameter = 0;
		hash->hash[i]->started = 0;
		hash->hash[i]->pointer = 0;
	}
	else{
		while(h->i != NULL){
			if(strcmp(string, h->id) == 0 && h->type == 3){

				//printf("error:semantic:%d:%d: variable ’%s’ already declared, previous declaration in line %d column %d",totalline,character,string,h->linha,h->coluna);

				return 0;
			}
			if(strcmp(string, h->id) == 0 && h->type != 3){

				printf("%d: redefinition of identifier '%s'",totalline,string);

				return 0;
			}
			h = h->i;
		}
		h = haux;
		haux = haux->i;
		h->i = (identi *)malloc(sizeof(identi));
		h = h->i;
		strcpy(h->id, string);
		h->type = 3;
		h->i = haux;
		h->tipo = tipo;
		h->linha = totalline;
		h->coluna = character;
		h->parametros = NULL;
		h->size = 0;
		h->local = 0;
		h->isParameter = 0;
		h->started = 0;
		h->pointer = 0;
	}
	return 1;
}

void constanteSetValor(Identificador ctr, char string[],char valor[]){
	controle *hash = (controle*)ctr;
	int size = strlen(string);
	int i = 0;
	int buff = 0;
	while(i < size ){
		buff = buff + string[i];
		i++;
	}
	i = buff%211;
	identi *h = hash->hash[i];
	identi *haux = h;
	while(h->i != NULL){
		if(strcmp(string, h->id) == 0){
			strcpy(h->valor, valor);
			return ;
		}
		h = h->i;
	}
}
/*
int insertPrototipo(Identificador ctr, char string[],int tipo,int totalline,int character){
	controle *hash = (controle*)ctr;
	int size = strlen(string);
	int i = 0;
	int buff = 0;
	while(i < size ){
		buff = buff + string[i];
		i++;
	}
	i = buff%211;
	identi *h = hash->hash[i];
	identi *haux = h;
	if(h == NULL){
		hash->hash[i] = (identi *)malloc(sizeof(identi));
		hash->hash[i]->i = NULL;
		strcpy(hash->hash[i]->id, string);
		hash->hash[i]->type = 2;
		strcpy(hash->hash[i]->valor, string);
		hash->hash[i]->tipo = tipo;
		hash->hash[i]->linha = totalline;
		hash->hash[i]->coluna = character;
		hash->hash[i]->parametros = createPar();
		hash->hash[i]->size = 0;
		hash->hash[i]->local = 0;
		hash->hash[i]->isParameter = 0;
		hash->hash[i]->started = 0;
		hash->hash[i]->pointer = 0;
	}
	else{
		while(h->i != NULL){
			if(strcmp(string, h->id) == 0 && h->type == 2){

				//printf("error:semantic:%d:%d: variable ’%s’ already declared, previous declaration in line %d column %d",totalline,character,string,h->linha,h->coluna);

				return 0;
			}
			if(strcmp(string, h->id) == 0 && h->type != 2){

				printf("%d: redefinition of identifier '%s'",totalline,string);

				return 0;
			}
			h = h->i;
		}
		h->i = (identi *)malloc(sizeof(identi));
		h = h->i;
		strcpy(h->id, string);
		h->type = 2;
		h->i = NULL;
		strcpy(h->valor, string);
		h->tipo = tipo;
		h->linha = totalline;
		h->coluna = character;
		h->parametros = createPar;
		h->size = 0;
		h->local = 0;
		h->isParameter = 0;
		h->started = 0;
		h->pointer = 0;
	}
	return 1;
}

void prototipoSetParameter(Identificador ctr, char string[],char nome[]){
	controle *hash = (controle*)ctr;
	int size = strlen(string);
	int i = 0;
	int buff = 0;
	while(i < size ){
		buff = buff + string[i];
		i++;
	}
	i = buff%211;
	identi *h = hash->hash[i];
	insertPar(h->parametros,nome);
}
*/
int getLinha(Identificador ctr, char string[]){
	controle *hash = (controle*)ctr;
	int size = strlen(string);
	int i = 0;
	int buff = 0;
	while(i < size ){
		buff = buff + string[i];
		i++;
	}
	i = buff%211;
	identi *h = hash->hash[i];
	if(h == NULL)
		printf("Erro hash[%d] é null\n",i);
	return h->linha;
}

int getColuna(Identificador ctr, char string[]){
	controle *hash = (controle*)ctr;
	int size = strlen(string);
	int i = 0;
	int buff = 0;
	while(i < size ){
		buff = buff + string[i];
		i++;
	}
	i = buff%211;
	identi *h = hash->hash[i];
	if(h == NULL)
		printf("Erro hash[%d] é null\n",i);
	return h->coluna;
}

Identificador clean(Identificador ctr){
	int i = 0;
	controle *hash = (controle*)ctr;
	while(i < 211){
		hash->hash[i] = NULL;
		i++;
	}
	return hash;
}

int exist(Identificador ctr, char string[]){
	controle *hash = (controle*)ctr;
	int size = strlen(string);
	int i = 0;
	int buff = 0;
	while(i < size ){
		buff = buff + string[i];
		i++;
	}
	i = buff%211;
	identi *h = hash->hash[i];
	if(h == NULL)
		return 0;
	return 1;
}