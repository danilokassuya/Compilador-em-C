#include "symbol.h"
#include <sintatico.tab.h>

void printHash(Identificador prog){
	pro *programa = (pro*) prog;
	identi *h;
	controle *ctr = programa->globalSymbolTable;
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
	fun *listFun = programa->lista_de_funcoes;
	while(listFun != NULL){
		ctr = listFun->symbolTable;
		int i = 0;
		printf("a%s\n",listFun->nome);
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
		listFun = listFun->next;
	}
}

Identificador createControl(){
	controle *ctr = (controle *)malloc(sizeof(controle));
	clean(ctr);
	return ctr;
}
Identificador createIdenti(int totalLines,int characters,char name[]){
	identi *ide = (identi*)malloc(sizeof(identi));
	ide->i = NULL;
	ide->type = 3;
	ide->tipo = -1;
	ide->linha = totalLines;
	ide->coluna = characters;
	strcpy(ide->id,name);
	ide->parametros = NULL;
	ide->size = -1;
	ide->local = -1;
	ide->isParameter = -1;
	ide->started = -1;
	ide->pointer = -1;
	return ide;
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

int insert(Identificador funcao, Identificador inde){
	identi *identifica = (identi*) inde;
	fun *func = (fun*) funcao;
	if(identifica->type == 3)
		if(identifica->tipo != 0){
			printf("string type is not compatible with define\n");
			return 0;
		}
	controle *hash = func->symbolTable;
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
	printf("%s",func->nome);
	if(h == NULL){
		printf("okaa\n");
		hash->hash[i] = identifica;
	}
	else{
		printf("in:%s\n",hash->hash[i]->id);
		do{
			printf("%s %s",identifica->id,h->id);
			if(strcmp(identifica->id, h->id) == 0){
				int i;
				int lineNumber = 1;
				char line[1024];
				char aux;
				int characters = h->coluna;
				FILE* file = fseek(stdin, 0, SEEK_SET);
				characters -= strlen("i");
				printf("error:semantic:%d:%d: variable ’%s’ already declared, previous declaration in line %d column %d\n",identifica->linha,identifica->coluna,identifica->id,h->linha,h->coluna);
				
				while(lineNumber < h->linha) {
					aux = fgetc(stdin);
					if(aux == '\n')    lineNumber++;
					if(aux == EOF)  break;
				}
				fgets(line, sizeof(line), stdin);
				printf("%s", line);

				for(i=1;i<characters;i++) {
					printf(" ");
				}
				printf("^");

				return 0;
			}while(h->i != NULL);
			if(strcmp(identifica->id, h->id) == 0){

				printf("%d: redefinition of identifier '%s'",identifica->linha,identifica->id);

				return 0;
			}
			h = h->i;
		}while(h != NULL);
		printf("ok\n");
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