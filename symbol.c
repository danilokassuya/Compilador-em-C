#include "symbol.h"
#include <sintatico.tab.h>

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

Identificador createIdentificador(int totalline,int character){
	identi *constante = (identi *)malloc(sizeof(identi));
	constante->i = NULL;
	constante->type = 3;
	constante->tipo = -1;
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

void setTipo(Identificador inde,int tipo){
	identi *identifica = (identi *)inde;
	identifica->tipo = tipo;
}

void SetNome(Identificador inde,char nome[]){
	identi *identifica = (identi *)inde;
	strcpy(identifica->id, nome);
}

void setValor(Identificador inde,char valor[]){
	identi *identifica = (identi *)inde;
	strcpy(identifica->id, valor);
}

void setStarted(Identificador inde,int started){
	identi *identifica = (identi *)inde;
	identifica->started = started;
}

void setisParameter(Identificador inde,int isParameter){
	identi *identifica = (identi *)inde;
	identifica->isParameter = isParameter;
}

void setLocal(Identificador inde,int local){
	identi *identifica = (identi *)inde;
	identifica->local = local;
}

void setSize(Identificador inde,int size){
	identi *identifica = (identi *)inde;
	identifica->size = size;
}

void setType(Identificador inde,int type){
	identi *identifica = (identi *)inde;
	identifica->type = type;
}

void setPointer(Identificador inde,int pointer){
	identi *identifica = (identi *)inde;
	identifica->pointer = pointer;
}

int insert(Identificador ctr, Identificador inde){
	identi *identifica = (identi*) inde;
	if(identifica->tipo != 0){
		printf("string type is not compatible with define");
		return 0;//Erro constante precisa ser inteiro
		//"string type is not compatible with define"
	}
	controle *hash = (controle*)ctr;
	int size = strlen(identifica->id);
	int i = 0;
	int buff = 0;
	while(i < size ){
		buff = buff + identifica->id[i];
		i++;
	}
	i = buff%211;
	identi *h = hash->hash[i];
	identi *haux = h;
	if(h == NULL){
		hash->hash[i] = identifica;
	}
	else{
		while(h->i != NULL){
			if(strcmp(identifica->id, h->id) == 0 && h->type == 3){

				printf("error:semantic:%d:%d: variable ’%s’ already declared, previous declaration in line %d column %d",identifica->linha,identifica->coluna,identifica->id,h->linha,h->coluna);

				return 0;
			}
			if(strcmp(identifica->id, h->id) == 0 && h->type != 3){

				printf("%d: redefinition of identifier '%s'",identifica->linha,identifica->id);

				return 0;
			}
			h = h->i;
		}
		hash->hash[i] = identifica;
		hash->hash[i]->i = haux;
		printf("%s\n",h->id);
	}
	return 1;
}

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