
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

Identificador createConstante(char string[],int tipo,int totalline,int character){
	identi *constante = (identi *)malloc(sizeof(identi));
	strcpy(constante->id, string);
	constante->i = NULL;
	strcpy(constante->id, string);
	constante->type = 3;
	constante->tipo = tipo;
	constante->linha = totalline;
	constante->coluna = character;
	constante->parametros = NULL;
	constante->size = -1;
	constante->local = -1;
	constante->isParameter = -1;
	constante->started = -1;
	constante->pointer = -1;
	return constante;
}

int insertConstante(Identificador ctr, Identificador consatnte){
	identi *cons = (identi*) consatnte;
	if(cons->tipo != 0){
		printf("string type is not compatible with define");
		return 0;//Erro constante precisa ser inteiro
		//"string type is not compatible with define"
	}
	controle *hash = (controle*)ctr;
	int size = strlen(cons->id);
	int i = 0;
	int buff = 0;
	while(i < size ){
		buff = buff + cons->id[i];
		i++;
	}
	i = buff%211;
	identi *h = hash->hash[i];
	identi *haux = h;
	if(h == NULL){
		hash->hash[i] = cons;
	}
	else{
		while(h->i != NULL){
			if(strcmp(cons->id, h->id) == 0 && h->type == 3){

				printf("error:semantic:%d:%d: variable ’%s’ already declared, previous declaration in line %d column %d",cons->linha,cons->coluna,cons->id,h->linha,h->coluna);

				return 0;
			}
			if(strcmp(cons->id, h->id) == 0 && h->type != 3){

				printf("%d: redefinition of identifier '%s'",cons->linha,cons->id);

				return 0;
			}
			h = h->i;
		}
		hash->hash[i] = cons;
		hash->hash[i]->i = haux;
		printf("%s\n",h->id);
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

int insertVariavel(Identificador ctr, char nome[],int tipo, int dimensao,int local, int isParametro, int isStarted,int totalline,int character){
	controle *hash = (controle*)ctr;
	int size = strlen(nome);
	int i = 0;
	int buff = 0;
	while(i < size ){
		buff = buff + nome[i];
		i++;
	}
	i = buff%211;
	identi *h = hash->hash[i];
	identi *haux = h;
	if(h == NULL){
		hash->hash[i] = (identi *)malloc(sizeof(identi));
		hash->hash[i]->i = NULL;
		strcpy(hash->hash[i]->id, nome);
		hash->hash[i]->type = 3;
		hash->hash[i]->tipo = tipo;
		hash->hash[i]->linha = totalline;
		hash->hash[i]->coluna = character;
		hash->hash[i]->parametros = NULL;
		hash->hash[i]->size = dimensao;
		hash->hash[i]->local = local;
		hash->hash[i]->isParameter = isParametro;
		hash->hash[i]->started = isStarted;
		hash->hash[i]->pointer = -1;
	}
	else{
		while(h->i != NULL){
			if(strcmp(nome, h->id) == 0 && h->type == 3){

				printf("error:semantic:%d:%d: variable '%s' already declared, previous declaration in line %d column %d",totalline,character,nome,h->linha,h->coluna);

				return 0;
			}
			if(strcmp(nome, h->id) == 0 && h->type != 3){

				printf("%d: redefinition of identifier '%s'",totalline,nome);

				return 0;
			}
			h = h->i;
		}
		h = haux;
		haux = haux->i;
		h->i = (identi *)malloc(sizeof(identi));
		h = h->i;
		strcpy(h->id, nome);
		h->type = 3;
		h->i = haux;
		h->tipo = tipo;
		h->linha = totalline;
		h->coluna = character;
		h->parametros = NULL;
		h->size = dimensao;
		h->local = local;
		h->isParameter = isParametro;
		h->started = isStarted;
		h->pointer = -1;
	}
	return 1;
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
