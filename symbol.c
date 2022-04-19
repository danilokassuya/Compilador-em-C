#include <symbol.h>
#include <sintatico.tab.h>
#include <string.h>

typedef struct identificador{
	char id[100];
	struct identificador *i;
	int type;
    int pointer;
    int linha;
    int coluna;
} identi;

typedef struct control{
	identi *hash[211];
}controle;

int error = 0;
int quebra = 1;
int erro(){
	return error;
}

Identificador createControl(){
	controle *ctr = (controle *)malloc(sizeof(controle));
	clean(ctr);
	return ctr;
}

Identificador insert(Identificador ctr, char string[],int type,int totalline,int character){
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
    printf("adicionado %s na hash\n",string);
	if(h == NULL){
		hash->hash[i] = (identi *)malloc(sizeof(identi));
		hash->hash[i]->i = (identi *)malloc(sizeof(identi));
		strcpy(hash->hash[i]->id, string);
		hash->hash[i]->type = type;
        hash->hash[i]->linha = totalline;
        hash->hash[i]->coluna = character;
		hash->hash[i]->i->i = NULL;
	}
	else{
		while(h->i != NULL){
			if(strcmp(string, h->id) == 0 && h->type == type){
				if(quebra != 1)
					printf("\n");
				printf("error:semantic:%d:%d: variable ’%s’ already declared, previous declaration in line %d column %d",totalline,character,string,h->linha,h->coluna);
				quebra = 0;
				error = 1;
				return hash;
			}
			if(strcmp(string, h->id) == 0 && h->type != type){
				if(quebra != 1)
					printf("\n");
				printf("%d: redefinition of identifier '%s'",totalline,string);
				quebra = 0;
				error = 1;
				return hash;
			}
			h = h->i;
		}
		h->i = (identi *)malloc(sizeof(identi));
		strcpy(h->id, string);
		h->type = type;
		h = h->i;
		h->i = NULL;
		hash->hash[i] = haux;
		h = hash->hash[i];
		
	}
	return hash;
}

int getQuebra(){
	return quebra;
}

void setQuebra(int i){
	quebra = i;
}

Identificador clean(Identificador ctr){
	int i = 0;
	error = 0;
	controle *hash = (controle*)ctr;
	while(i < 211){
		hash->hash[i] = NULL;
		i++;
	}
	return hash;
}
