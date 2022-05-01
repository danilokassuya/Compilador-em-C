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
	ide->tamanho = 1;
	ide->value = 0;
	ide->isParameter = 0;
	ide->started = -1;
	ide->pointer = 0;
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

void setValue(Identificador inde,int value){
	identi *identifica = (identi *)inde;
	identifica->value = value;
}

void setStarted(Identificador inde,int started){
	identi *identifica = (identi *)inde;
	identifica->started = started;
}

void setisParameter(Identificador inde,int isParameter){
	identi *identifica = (identi *)inde;
	identifica->isParameter = isParameter;
}

void setType(Identificador inde,int type){
	identi *identifica = (identi *)inde;
	identifica->type = type;
}

void setPointer(Identificador inde,int pointer){
	identi *identifica = (identi *)inde;
	identifica->pointer = pointer;
}

void printLinhaErro(int linha,int coluna,char nome[]){
	int i;
	int lineNumber = 1;
	char line[1024];	
	char aux;
	int characters = coluna;
	fseek(stdin, 0, SEEK_SET);
	characters -= strlen(nome);
	while(lineNumber < linha) {
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
}

int insert(Identificador table, Identificador inde){
	identi *identifica = (identi*) inde;
	identifica->i = NULL;
	if(identifica->type == 0)
		if(identifica->tipo == 2){
			printf("error:semantic:%d:%d: variable '%s' declared void\n\n",identifica->linha,identifica->coluna,identifica->id);
			printLinhaErro(identifica->linha,identifica->coluna,identifica->id);
			return 0;
		}
	controle *hash = (controle*)table;
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
		if(identifica->isParameter  == 0){
			do{
				if(strcmp(identifica->id, h->id) == 0 && identifica->tipo == h->tipo){
					printf("error:semantic:%d:%d: variable '%s' already declared, previous declaration in line %d column %d\n",identifica->linha,identifica->coluna,identifica->id,h->linha,h->coluna);
					printLinhaErro(h->linha,h->coluna,h->id);
					return 0;
				}
				if(strcmp(identifica->id, h->id) == 0){
					printf("error:semantic:%d:%d: redefinition of identifier '%s' previous defined in line %d\n",identifica->linha,identifica->coluna,identifica->id,h->linha);
					printLinhaErro(h->linha,h->coluna,h->id);
					return 0;
				}
				h = h->i;
			}while(h != NULL);
		}
		hash->hash[i] = identifica;
		hash->hash[i]->i = haux;
	}
	return 1;
}

int getLinha(char funcao[], char variavel[], Identificador programa){
	pro *prog = (pro*)programa;
	if(strcmp(funcao,"Global") == 0){
		controle *hash = prog->globalSymbolTable;
		int size = strlen(variavel);
		int i = 0;
		int buff = 0;
		while(i < size ){
			buff = buff + variavel[i];
			i++;
		}
		i = buff%211;
		identi *h = hash->hash[i];
		if(h == NULL)
				return -1;
		while(strcmp(h->id, variavel) != 0){
			h = h->i;
			if(h == NULL)
				return -1;
		}
		return h->linha;
	}
	else{
		fun *func = prog->lista_de_funcoes;
		while(strcmp(func->nome,funcao) != 0){
			if(func == NULL)
				return -1;
			func = func->next;
		}
		controle *hash = func->symbolTable;
		int size = strlen(variavel);
		int i = 0;
		int buff = 0;
		while(i < size ){
			buff = buff + variavel[i];
			i++;
		}
		i = buff%211;
		identi *h = hash->hash[i];
		if(h == NULL)
				return -1;
		while(strcmp(h->id, variavel) != 0){
			h = h->i;
			if(h == NULL)
				return -1;
		}
		return h->linha;
	}

	return -1;
}

int getColuna(char funcao[], char variavel[], Identificador programa){
	pro *prog = (pro*)programa;
	if(strcmp(funcao,"Global") == 0){
		controle *hash = prog->globalSymbolTable;
		int size = strlen(variavel);
		int i = 0;
		int buff = 0;
		while(i < size ){
			buff = buff + variavel[i];
			i++;
		}
		i = buff%211;
		identi *h = hash->hash[i];
		if(h == NULL)
				return -1;
		while(strcmp(h->id, variavel) != 0){
			h = h->i;
			if(h == NULL)
				return -1;
		}
		return h->coluna;
	}
	else{
		fun *func = prog->lista_de_funcoes;
		while(strcmp(func->nome,funcao) != 0){
			if(func == NULL)
				return -1;
			func = func->next;
		}
		controle *hash = func->symbolTable;
		int size = strlen(variavel);
		int i = 0;
		int buff = 0;
		while(i < size ){
			buff = buff + variavel[i];
			i++;
		}
		i = buff%211;
		identi *h = hash->hash[i];
		if(h == NULL)
				return -1;
		while(strcmp(h->id, variavel) != 0){
			h = h->i;
			if(h == NULL)
				return -1;
		}
		return h->coluna;
	}

	return -1;
}

int getPointer(char funcao[], char variavel[], Identificador programa){
	pro *prog = (pro*)programa;
	if(strcmp(funcao,"Global") == 0){
		controle *hash = prog->globalSymbolTable;
		int size = strlen(variavel);
		int i = 0;
		int buff = 0;
		while(i < size ){
			buff = buff + variavel[i];
			i++;
		}
		i = buff%211;
		identi *h = hash->hash[i];
		if(h == NULL)
				return -1;
		while(strcmp(h->id, variavel) != 0){
			h = h->i;
			if(h == NULL)
				return -1;
		}
		return h->pointer;
	}
	else{
		fun *func = prog->lista_de_funcoes;
		while(strcmp(func->nome,funcao) != 0){
			if(func == NULL)
				return -1;
			func = func->next;
		}
		controle *hash = func->symbolTable;
		int size = strlen(variavel);
		int i = 0;
		int buff = 0;
		while(i < size ){
			buff = buff + variavel[i];
			i++;
		}
		i = buff%211;
		identi *h = hash->hash[i];
		if(h == NULL)
				return -1;
		while(strcmp(h->id, variavel) != 0){
			h = h->i;
			if(h == NULL)
				return -1;
		}
		return h->pointer;
	}

	return -1;
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

int searchHash(char funcao[], char variavel[], Identificador programa){
	pro *prog = (pro*)programa;
	if(strcmp(funcao,"Global") == 0){
		controle *hash = prog->globalSymbolTable;
		int size = strlen(variavel);
		int i = 0;
		int buff = 0;
		while(i < size ){
			buff = buff + variavel[i];
			i++;
		}
		i = buff%211;
		identi *h = hash->hash[i];
		if(h == NULL)
				return -1;
		while(strcmp(h->id, variavel) != 0){
			h = h->i;
			if(h == NULL)
				return -1;
		}
		return h->tipo;
	}
	else{
		fun *func = prog->lista_de_funcoes;
		while(strcmp(func->nome,funcao) != 0){
			if(func == NULL)
				return -1;
			func = func->next;
		}
		controle *hash = func->symbolTable;
		int size = strlen(variavel);
		int i = 0;
		int buff = 0;
		while(i < size ){
			buff = buff + variavel[i];
			i++;
		}
		i = buff%211;
		identi *h = hash->hash[i];
		if(h == NULL)
				return -1;
		while(strcmp(h->id, variavel) != 0){
			h = h->i;
			if(h == NULL){
				return -1;
			}
		}
		return h->tipo;
	}

	return -1;
}

identi *getIdenti(char funcao[], char variavel[], Identificador programa){
	pro *prog = (pro*)programa;
	if(strcmp(funcao,"Global") == 0){
		controle *hash = prog->globalSymbolTable;
		int size = strlen(variavel);
		int i = 0;
		int buff = 0;
		while(i < size ){
			buff = buff + variavel[i];
			i++;
		}
		i = buff%211;
		identi *h = hash->hash[i];
		while(strcmp(h->id, variavel) != 0){
			h = h->i;
		}
		return h;
	}
	else{
		fun *func = prog->lista_de_funcoes;
		while(strcmp(func->nome,funcao) != 0){
			func = func->next;
		}
		controle *hash = func->symbolTable;
		int size = strlen(variavel);
		int i = 0;
		int buff = 0;
		while(i < size ){
			buff = buff + variavel[i];
			i++;
		}
		i = buff%211;
		identi *h = hash->hash[i];
		while(strcmp(h->id, variavel) != 0){
			h = h->i;
		}
		return h;
	}
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