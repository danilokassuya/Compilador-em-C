#include "ast.h"
#include <sintatico.tab.h>

char funcaoAtual[100];
char a[100];
int retornoValido;

void printAST(NO programa){
    pro *prog = (pro*)programa;
    printExp(prog->lista_de_funcoes->next->next->lista_de_comandos->exp,0);
    printf("\n");
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
    printExp(prog->exp,0);
    printf("\n");
    if(verificarExp(prog->exp,programa) == -1){
        printf("Erro\n");   
        return -1;
    }
    cmd *command;
    fun *func = prog->lista_de_funcoes;
    while(func != NULL){
        retornoValido = 0;
        strcpy(funcaoAtual,func->nome);
        printExp(func->exp,0);
        printf("\n");
        if(verificarExp(func->exp,programa) == -1){
            printf("Erro\n");
            return -1;
        }
        command = func->lista_de_comandos;
        while(command != NULL){
            if(verificaCMD(programa,command) == -1)
                return -1;
            command = command->next;
        }
        func = func->next;
    }
}

int verificaCMD(NO programa,NO comm){
    cmd *command = (cmd*)comm;
    printf("comando:%d\n",command->type);
    printExp(command->exp,0);
    printf("\n");
    int tipo;
    if(command->type == 1){
        printf("if\n");
        tipo = verificarExp(command->exp,programa);
        if(tipo == -1 || tipo == 2){
            printf("Erro\n");
            return -1;
        }
        tipo = verificaCMD(programa,command->then);
        if(tipo == -1){
            printf("Erro\n");
            return -1;
        }
        if(command->els != NULL){
            tipo = verificaCMD(programa,command->els);
            if(tipo == -1){
                printf("Erro\n");
                return -1;
            }   
        }
    }
    else if(command->type == 2 || command->type == 4){
        printf("do/while\n");
        tipo = verificarExp(command->exp,programa);
        if(tipo == -1 || tipo == 2){
            printf("Erro\n");
            return -1;
        }
        tipo = verificaCMD(programa,command->whil);
        if(tipo == -1){
            printf("Erro\n");
            return -1;
        }
    }
    else if(command->type == 3){
        printf("for\n");
        tipo = verificaCMD(programa,command->for0);
        if(tipo == -1){
            printf("Erro\n");
            return -1;
        }
        tipo = verificarExp(command->for1,programa);
        if(tipo == -1){
            printf("Erro\n");
            return -1;
        }
        tipo = verificarExp(command->for2,programa);
        if(tipo == -1){
            printf("Erro\n");
            return -1;
        }
        tipo = verificarExp(command->for3,programa);
        if(tipo == -1){
            printf("Erro\n");
            return -1;
        }
    }
    else if(command->type == 8){
        tipo = verificarExp(command->exp,programa);
        printf("%d",tipo);
        if(tipo == -1){
            printf("Erro\n");
            return -1;
        }
    }
    else if(command->type == 9){
        tipo = verificarExp(command->exp,programa);
        if(tipo == -1){
            printf("Erro\n");
            return -1;
        }
        if(tipo != getRetorno(programa,funcaoAtual)){
            if(getRetorno(programa,funcaoAtual) == 2){
                printf("return with a value, in function returning void\n");
                printLinhaErro(getLinhaFun(programa,funcaoAtual),getColunaFun(programa,funcaoAtual),funcaoAtual);
                return -1;
            }
            if(tipo == 2){  
                printf("return with no value, in function returning non-void\n");
                printLinhaErro(command->linha,command->coluna,"return");
                return -1;
            }
        }
        else retornoValido = 1;
    }
    else if(command->type == 5){
        tipo = verificarExp(command->exp,programa);
        printf("%d",tipo);
        if(tipo == -1){
            printf("Erro\n");
            return -1;
        }
    }
    return 0;
}

int verificarExp(NO no,NO programa){
    node *exp = (node*)no;
    if(exp == NULL){
        return -2;
    }
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
    if(exp->prox != NULL){
        if(verifica(exp->prox) == -1)
            return -1;
    }
    tipo1 = verificarExp(exp->direito,programa);
    tipo2 = verificarExp(exp->esquerdo,programa);
    if(tipo1 == 36){
        tipo1 = searchHash(funcaoAtual,exp->direito->nome,programa);
        if(tipo1 == -1){
            printf("error:semantic:%d:%d: '%s' undeclared\n",exp->direito->linha,exp->direito->coluna,exp->direito->nome);
            printLinhaErro(exp->direito->linha,exp->direito->coluna,exp->direito->nome);
            return -1;
        }
    }
    if(tipo2 == 36){
        tipo2 = searchHash(funcaoAtual,exp->esquerdo->nome,programa);
        if(tipo2 == -1){
            printf("error:semantic:%d:%d: '%s' undeclared\n",exp->esquerdo->linha,exp->esquerdo->coluna,exp->esquerdo->nome);
            printLinhaErro(exp->esquerdo->linha,exp->esquerdo->coluna,exp->esquerdo->nome);
            return -1;
        }
    }
    if(tipo1 == -2 && tipo2 == -2){
        return exp->exp;
    }
    
    if(exp->exp == 27){
        exp->direito->value = exp->direito->value + 1;
        return tipo1;
    }
    if(exp->exp == 7){
        printf("%d %d\n",pointer1,pointer2);
        if(pointer1 != 0 || pointer2 != 0){
            if(exp->esquerdo->declaration == 1)
                printf("incompatible types in initialization when assigning to type '%s' from type '%s'\n",tradutor(tipo1),tradutor(tipo2));
            else 
                printf("incompatible types when assigning to type '%s' from type '%s'\n",tradutor(tipo1),tradutor(tipo2));
            printLinhaErro(exp->linha,exp->coluna,exp->nome);
        }
        else
            return 0;
    }
    else if(exp->exp == 15){
        if(pointer1 == 0 && pointer2 == 0)
            return 0;
        else if((pointer1 > 0 && pointer2 == 0) || (pointer1 == 0 && pointer2 > 0)){
            printf("warning:%d:%d: comparison between '%s%s' and '%s%s' operator '%s'\n",exp->linha,exp->coluna,tradutor(tipo1),pointer(pointer1),tradutor(tipo2),pointer(pointer2),tradutor(exp->exp));
            printLinhaErro(exp->linha,exp->coluna,exp->nome);
        }
        else if(pointer1 != pointer2 || tipo1 != tipo2){
            printf("error:semantic:%d:%d: comparison between '%s%s' and '%s%s' operator '%s'\n",exp->linha,exp->coluna,tradutor(tipo1),pointer(pointer1),tradutor(tipo2),pointer(pointer2),tradutor(exp->exp)); 
            printLinhaErro(exp->linha,exp->coluna,exp->nome);
        }
        
        
    }
    return -1; //Caso de erro
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
    if(simbol == 38){
        return "char*";
    }
}

char* pointer(int pointers){
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