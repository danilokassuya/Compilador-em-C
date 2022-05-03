#include "ast.h"
#include <sintatico.tab.h>

char funcaoAtual[100];
char a[100];
int retornoValido;
int array = 0;

void printAST(NO programa){
    pro *prog = (pro*)programa;
    //printExp(prog->lista_de_funcoes->next->next->lista_de_comandos->exp,0);
    //printf("\n");
}

NO createLC(int totalLines,int characters,char name[]){
    lc *Lc = (lc*)malloc(sizeof(lc));
    Lc->linha = totalLines;
    Lc->coluna = characters;
    strcpy(Lc->nome,name);
    return Lc;
}

void printExp(NO no,int space){
    node *No = (node*)no;
    // Base case
    if (No == NULL)
        return;
 
    // Increase distance between levels
    space += 10;
 
    // Process right child first
    printExp(No->direito, space);
 
    // Print current node after space
    // count
    printf("\n");
    int i;
    for (i = 10; i < space; i++)
        printf(" ");
    printf("%d",No->exp);
 
    // Process left child
    printExp(No->esquerdo, space);
}

int verifica(NO programa){
    pro *prog = (pro*)programa;
    strcpy(funcaoAtual,"Global");
    //printExp(prog->exp,0);
    //printf("\n");
    if(verificarExp(prog->exp,programa) == -1){
        return -1;
    }
    cmd *command;
    fun *func = prog->lista_de_funcoes;
    while(func != NULL){
        retornoValido = 0;
        strcpy(funcaoAtual,func->nome);
        if(verificaParametro(programa) == -1)
            return -1;
        //printExp(func->exp,0);
        //printf("\n");
        if(verificarExp(func->exp,programa) == -1){
            return -1;
        }
        command = func->lista_de_comandos;
        while(command != NULL){
            if(verificaCMD(programa,command) == -1)
                return -1;
            command = command->next;
        }
        if(retornoValido == 0 && func->retorno != 2 && func->prototipo == 0){
            printf("error:semantic:%d:%d: no return statement in function returning non-void\n",getLinhaFun(programa,funcaoAtual),getColunaFun(programa,funcaoAtual));
            printLinhaErro(getLinhaFun(programa,funcaoAtual),getColunaFun(programa,funcaoAtual),funcaoAtual);
            return -1;
        }
        func = func->next;
    }
}

int verificaCMD(NO programa,NO comm){
    cmd *command = (cmd*)comm;
    //printExp(command->exp,0);
    //printf("\n");
    int tipo;
    int point;
    if(command->type == 1){
        tipo = verificarExp(command->exp,programa);
        if(tipo == -1 || tipo == 2){
            return -1;
        }
        tipo = verificaCMD(programa,command->then);
        if(tipo == -1){
            return -1;
        }
        if(command->els != NULL){
            tipo = verificaCMD(programa,command->els);
            if(tipo == -1){
                return -1;
            }   
        }
    }
    else if(command->type == 2 || command->type == 4){
        tipo = verificarExp(command->exp,programa);
        if(tipo == -1 || tipo == 2){
            return -1;
        }
        tipo = verificaCMD(programa,command->whil);
        if(tipo == -1){
            return -1;
        }
    }
    else if(command->type == 3){
        tipo = verificaCMD(programa,command->for0);
        if(tipo == -1){
            return -1;
        }
        tipo = verificarExp(command->for1,programa);
        if(tipo == -1){
            return -1;
        }
        tipo = verificarExp(command->for2,programa);
        if(tipo == -1){
            return -1;
        }
        tipo = verificarExp(command->for3,programa);
        if(tipo == -1){
            return -1;
        }
    }
    else if(command->type == 8){
        tipo = verificarExp(command->exp,programa);
        if(tipo == -1){
            return -1;
        }
    }
    else if(command->type == 9){
        tipo = verificarExp(command->exp,programa);
        point = getPointer(funcaoAtual,command->exp->nome,programa);
        retornoValido = 1;
        if(tipo == -1){
            return -1;
        }
        if(tipo != getRetorno(programa,funcaoAtual)){
            if(getRetorno(programa,funcaoAtual) == 2){
                printf("error:semantic:%d:%d: return with a value, in function returning void\n",getLinhaFun(programa,funcaoAtual),getColunaFun(programa,funcaoAtual));
                printLinhaErro(getLinhaFun(programa,funcaoAtual),getColunaFun(programa,funcaoAtual),funcaoAtual);
                return -1;
            }
            if(tipo == 2){  
                printf("error:semantic:%d:%d: return with no value, in function returning non-void\n",command->linha,command->coluna);
                printLinhaErro(command->linha,command->coluna,"return");
                return -1;
            }
            pointer(point);
            printf("error:semantic:%d:%d: incompatible types when returning type '%s%s' ",command->linha,command->coluna,tradutor(tipo),a);
            pointer(getPointer("Global",funcaoAtual,programa));
            printf("but '%s%s' was expected\n",tradutor(getRetorno(programa,funcaoAtual)),a);
            printLinhaErro(command->linha,command->coluna,"return");
            return -1;
        }

    }
    else if(command->type == 5){
        tipo = verificarExp(command->exp,programa);
        if(tipo == -1){
            return -1;
        }
    }
    return 0;
}

int verificarExp(NO no,NO programa){
    identi *h;
    node *exp = (node*)no;
    node *expaux = (node*)no;
    fun *func;
    pro *prog = (pro*)programa;
    par *parametro;
    if(exp == NULL){
        return -2;
    }
    //printf("exp:%d\n",exp->exp);
    //printExp(exp,0);
    //printf("\n");
    int pointer1;
    int pointer2;
    if(exp->direito != NULL){ 
        pointer1 = getPointer(funcaoAtual,exp->direito->nome,programa);
        if(exp->direito->exp == 1 || exp->direito->exp == 0)
            pointer1 = 0;
    }
    if(exp->esquerdo != NULL){    
        pointer2 = getPointer(funcaoAtual,exp->esquerdo->nome,programa);
        if(exp->esquerdo->exp == 1 || exp->esquerdo->exp == 0)
            pointer2 = 0;
    }
    int tipo1;
    int tipo2;
    int count;
    tipo1 = verificarExp(exp->direito,programa);
    if(tipo1 == -1)
        return -1;
    tipo2 = verificarExp(exp->esquerdo,programa);
    if(tipo2 == -1)
        return -1;
    if(exp->exp == 38){
        h = getIdenti(funcaoAtual,exp->nome,programa);
        h->tipo = tipo1;
        h->value = exp->direito->valor;
    }
    if(exp->prox != NULL){
        //printExp(exp->prox,0);
        if(verificarExp(exp->prox,programa) == -1){
            return -1;
        }
    }

    if(exp->exp == 37){
        count = 0;
        h = getIdenti(funcaoAtual,exp->nome,programa);
        expaux = exp->direito;
        while(expaux != NULL){
            if(verificarExp(expaux,programa) == -1){
                return -1;
            }
            h->tamanho[count] = expaux->valor;
            if(h->tamanho[count] < 0){
                printf("error:semantic:%d:%d: size of array '%s' is negative\n",exp->linha,exp->coluna,exp->nome);
                printLinhaErro(exp->linha,exp->coluna,exp->nome);
                return -1;
            }
            if(h->tamanho[count] == 0){
                printf("error:semantic:%d:%d: size of array '%s' is zero\n",exp->linha,exp->coluna,exp->nome);
                printLinhaErro(exp->linha,exp->coluna,exp->nome);
                return -1;
            }
            expaux = expaux->prox;
            count++;
        }
    }

    if(exp->exp == 32){
        if(tipo1 == 0){
            exp->valor = exp->direito->valor*-1;
            return 0;
        }
        else return 1;
    }
    if(exp->exp == 31){
        exp->valor = exp->direito->valor;
        return 0;
    }


    if(exp->exp == 36 || exp->exp == 37){
        tipo1 = searchHash(funcaoAtual,exp->nome,programa);
        h = getIdenti(funcaoAtual,exp->nome,programa);
        exp->valor = h->value;
        if(tipo1 == -1){
            printf("error:semantic:%d:%d: '%s' undeclared\n",exp->linha,exp->coluna,exp->nome);
            printLinhaErro(exp->linha,exp->coluna,exp->nome);
            return -1;
        }
        return tipo1;
    }
    if(exp->exp == 22){
        if(pointer1 > 0 && pointer2 > 0){
            printf("error:semantic:%d:%d: invalid operands to binary '+' (have '%s%s'",exp->linha,exp->coluna,tradutor(tipo1),pointer(pointer1));
            printf(" and '%s%s)\n",tradutor(tipo2),pointer(pointer2));
            printLinhaErro(exp->linha,exp->coluna,exp->nome);
        }
        exp->valor  = exp->direito->valor + exp->esquerdo->valor;
        if(tipo1 == 1 && tipo2 == 1){
            return 1;
        }
        return 0;
    }
    if(exp->exp == 24){
        if(pointer1 > 0){
            pointer(pointer1);
            printf("error:semantic:%d:%d: invalid operands to binary '*' (have '%s%s'",exp->linha,exp->coluna,tradutor(tipo1),a);
            pointer(pointer2);
            printf(" and '%s%s)\n",tradutor(tipo2),a);
            printLinhaErro(exp->linha,exp->coluna,exp->nome);
        }
        exp->valor  = exp->direito->valor * exp->esquerdo->valor;
        if(pointer2 > 0)
            return exp->exp;
        if(tipo1 == 1 && tipo2 == 1){
            return 1;
        }
        return 0;
    }
    if(exp->exp == 21){
        if(pointer1 > 0 && pointer2 > 0){
            pointer(pointer1);
            printf("error:semantic:%d:%d: invalid operands to binary '-' (have '%s%s'",exp->linha,exp->coluna,tradutor(tipo1),a);
            pointer(pointer2);
            printf(" and '%s%s)\n",tradutor(tipo2),a);
            printLinhaErro(exp->linha,exp->coluna,exp->nome);
        }
        exp->valor  = exp->direito->valor - exp->esquerdo->valor;
        if(tipo1 == 1 && tipo2 == 1){
            return 1;
        }
        return 0;
    }
    
    if(exp->exp == 35){
        func = prog->lista_de_funcoes;
        while(strcmp(func->nome,exp->esquerdo->nome) != 0){
            func = func->next;
        }
        expaux = exp->direito;
        parametro = func->parametro;
        count = 0;
        while(expaux != NULL){
            count++;
            h = getIdenti(func->nome,expaux->nome,programa);
            if(h->tipo != searchHash(func->nome,parametro->nome,programa)){
                printf("error:semantic:%d:%d: incompatible type for argument '%d' of '%s' expected '%s' but argument is of type '%s'\n",expaux->linha,expaux->coluna,count,func->nome,tradutor(searchHash(funcaoAtual,parametro->nome,programa)),tradutor(h->tipo));
                printLinhaErro(exp->esquerdo->linha,exp->esquerdo->coluna,exp->esquerdo->nome);
                return -1;
            }
            expaux = expaux->prox;
            parametro = parametro->prox;
        }
            return func->retorno;
    }
    if(exp->exp == 27 || exp->exp == 28 ){
        return tipo1;
    }
    if(exp->exp == 7){
        if(pointer1 != 0 || pointer2 != 0 || tipo1 != tipo2){
            if(exp->esquerdo->declaration == 1)
                printf("error:semantic:%d:%d: incompatible types in initialization when assigning to type '%s%s' from type '%s%s'\n",exp->linha,exp->coluna,tradutor(tipo1),pointer(pointer1),tradutor(tipo2),pointer(pointer2));
            else 
                printf("error:semantic:%d:%d: incompatible types when assigning to type '%s%s' from type '%s%s'\n",exp->linha,exp->coluna,tradutor(tipo1),pointer(pointer1),tradutor(tipo2),pointer(pointer2));
            printLinhaErro(exp->linha,exp->coluna,exp->nome);
            return -1;
        }
        else{
            h = getIdenti(funcaoAtual,exp->esquerdo->nome,programa);
            h->value = exp->direito->valor;
            exp->esquerdo->valor = exp->direito->valor;
            return 0;
        }
    }
    else if(exp->exp == 15){
        if((pointer1 == 0 && pointer2 == 0) || (pointer1 == pointer2 && tipo1 == tipo2))
            return 0;
        else if((pointer1 > 0 && pointer2 == 0) || (pointer1 == 0 && pointer2 > 0)){
            pointer(pointer1);
            printf("warning:%d:%d: comparison between '%s%s'",exp->linha,exp->coluna,tradutor(tipo1),a);
            pointer(pointer2);
            printf(" and '%s%s' operator '%s'\n",tradutor(tipo2),a,tradutor(exp->exp));
            printLinhaErro(exp->linha,exp->coluna,exp->nome);
            return 0;
        }
        else if(pointer1 != pointer2 || tipo1 != tipo2){
            pointer(pointer1);
            printf("error:semantic:%d:%d: comparison between '%s%s'",exp->linha,exp->coluna,tradutor(tipo1),a); 
            pointer(pointer2);
            printf(" and '%s%s' operator '%s'\n",tradutor(tipo2),a,tradutor(exp->exp));
            printLinhaErro(exp->linha,exp->coluna,exp->nome);
            return -1;
        }
        
    }
    return exp->exp; //Caso de erro
}   

char* tradutor(int simbol){
    if(simbol == 0){
        return "int";
    }
    if(simbol == 1){
        return "char";
    }
    if(simbol == 2){
        return "void";
    }
    if(simbol == 3){
        return "+";
    }
    if(simbol == 4){
        return "-";
    }
    if(simbol == 5){
        return "==";
    }
    if(simbol == 6){
        return "!=";
    }
    if(simbol == 7){
        return "=";
    }
    if(simbol == 8){
        return "+=";
    }
    if(simbol == 9){
        return "-=";
    }
    if(simbol == 10){
        return "&&";
    }
    if(simbol == 11){
        return "||";
    }
    if(simbol == 12){
        return "|";
    }
    if(simbol == 13){
        return "^";
    }
    if(simbol == 14){
        return "&";
    }
    if(simbol == 15){
        return "<";
    }
    if(simbol == 16){
        return "<=";
    }
    if(simbol == 17){
        return ">";
    }
    if(simbol == 18){
        return ">=";
    }
    if(simbol == 19){
        return "<<";
    }
    if(simbol == 20){
        return ">>";
    }
    if(simbol == 21){
        return "-";
    }
    if(simbol == 22){
        return "+";
    }
    if(simbol == 23){
        return "/";
    }
    if(simbol == 24){
        return "*";
    }
    if(simbol == 25){
        return "%";
    }
    if(simbol == 26){
        return "cast";
    }
    if(simbol == 27){
        return "++";
    }
    if(simbol == 28){
        return "--";
    }
    if(simbol == 29){
        return "&";
    }
    if(simbol == 30){
        return "*";
    }
    if(simbol == 31){
        return "+";
    }
    if(simbol == 32){
        return "-";
    }
    if(simbol == 33){
        return "~";
    }
    if(simbol == 34){
        return "!";
    }
    if(simbol == 35){
        return "chamada";
    }
    if(simbol == 36){
        return "id";
    }
    if(simbol == 37){
        return "array";
    }
    if(simbol == 38){
        return "define";
    }
    if(simbol == 39){
        return "char*";
    }
    
}

char* pointer(int pointers){
    strcpy(a,"");
    while(pointers > 0){
        strcat(a,"*");
        pointers = pointers - 1;
    }
    return a;
}

int getRetorno(NO programa,char funcao[]){
    pro *prog = (pro*)programa;
    fun *func = prog->lista_de_funcoes;
    while(strcmp(func->nome,funcao) != 0 && func !=  NULL){
        func = func->next;
    }
    if(func == NULL)
        printf("Nome de funcao invalido\n");
    return func->retorno;
}

int getLinhaFun(NO programa,char funcao[]){
    pro *prog = (pro*)programa;
    fun *func = prog->lista_de_funcoes;
    while(strcmp(func->nome,funcao) != 0 && func !=  NULL){
        func = func->next;
    }
    if(func == NULL)
        printf("Nome de funcao invalido\n");
    return func->linha;
}

int getColunaFun(NO programa,char funcao[]){
    pro *prog = (pro*)programa;
    fun *func = prog->lista_de_funcoes;
    while(strcmp(func->nome,funcao) != 0 && func !=  NULL){
        func = func->next;
    }
    if(func == NULL)
        printf("Nome de funcao invalido\n");
    return func->coluna;
}

int verificaParametro(NO programa){
    pro* prog = (pro*)programa;
    identi *h;
    int type1;
    int type2;
    int prototipo;
    int retorno;
    int linha;
    int coluna;
    char nome[100];
    fun *func = prog->lista_de_funcoes;
    while(strcmp(func->nome,funcaoAtual) != 0){
        func = func->next;
        if(func == NULL){
            printf("Função desconhecida\n");
            return -1;
        }
    }
    if(func->prototipo == 0){
        linha = func->linha;
        coluna = func->coluna;
    }
    par *parametro = func->parametro;
    retorno = func->retorno;
    prototipo = func->prototipo;
    strcpy(nome,func->nome);
    if(prototipo == 0){
        linha = func->linha;
        coluna = func->coluna;
    }
    func = func->next;
    if(func == NULL){
        return 0;
    }
    while(strcmp(func->nome,funcaoAtual) != 0){
        func = func->next;
        if(func == NULL){
            return 0;
        }
    }
    if(func->prototipo == 0){
        linha = func->linha;
        coluna = func->coluna;
    }
    par *parametro2 = func->parametro;
    if(retorno != func->retorno){
        printf("error:semantic:%d:%d: conflicting types for '%s'\n",linha,coluna,func->nome);
        printLinhaErro(linha,coluna,funcaoAtual);
        return -1;
    }
    while(parametro != NULL && parametro2 != NULL){
        if(func->prototipo == 1){
            h = getIdenti(funcaoAtual,parametro2->nome,programa);
            type1 = parametro->tipo;
            type2 = parametro2->tipo;
        }
        else{
            h = getIdenti(funcaoAtual,parametro->nome,programa);
            type2 = parametro->tipo;
            type1 = parametro2->tipo;
        }
        if(type1 != type2){
            printf("error:semantic:%d:%d: argument '%s' does not match prototype\n",h->linha,h->coluna,h->id);
            printLinhaErro(h->linha,h->coluna,h->id);
            return -1;
        }
        parametro = parametro->prox;
        parametro2 = parametro2->prox;
    }
    if(prototipo == 1){
        if(parametro == NULL && parametro2 != NULL){
            printf("error:semantic:%d:%d: prototype for '%s' declares fewer arguments\n",func->linha,func->coluna,func->nome);
            printLinhaErro(func->linha,func->coluna,func->nome);
            return -1;
        }
        if(parametro != NULL && parametro2 == NULL){
            printf("error:semantic:%d:%d: prototype for '%s' declares more arguments\n",func->linha,func->coluna,func->nome);
            printLinhaErro(func->linha,func->coluna,func->nome);
            return -1;
        }
    }
    if(func->prototipo == 1){
        if(parametro != NULL && parametro2 == NULL){
            printf("error:semantic:%d:%d: prototype for '%s' declares more arguments\n",linha,coluna,nome);
            printLinhaErro(linha,coluna,nome);
            return -1;
        }
        if(parametro == NULL && parametro2 != NULL){
            printf("error:semantic:%d:%d: prototype for '%s' declares fewer arguments\n",linha,coluna,nome);
            printLinhaErro(linha,coluna,nome);
            return -1;
        }
    }
    return 0;
}