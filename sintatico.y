%{
    #include<stdio.h>
    #include<string.h>
    #include "ast.h"
    #include "symbol.h"
    pro *programa = NULL;
    int cont = 0;
    extern char* yytext;
    extern int yylex();
    extern int characters;
    extern int totalLines;
    int linhaaux;
    int colunaaux;
    extern int lastLine;
    extern char id[200];
    int tipo = 0;
    void yyerror(char *s);
%}
%union{
    int inteiro;
    char *str;
    pro *programa;
    node *no;
    fun *function;
    cmd  *comando;
    int var[2];
    identi *id;
    ret *re;
    lc *lc; 
}

%token VOID
%token <str>INT
%token CHAR
%token <lc>RETURN
%token BREAK
%token SWITCH
%token CASE
%token DEFAULT
%token DO
%token WHILE
%token FOR
%token IF
%token ELSE
%token TYPEDEF
%token STRUCT
%token <lc>PLUS
%token <lc>MINUS
%token <lc>MULTIPLY
%token <lc>DIV
%token <lc>REMAINDER
%token <lc>INC
%token <lc>DEC
%token <lc>BITWISE_AND
%token <lc>BITWISE_OR
%token <lc>BITWISE_NOT
%token <lc>BITWISE_XOR
%token <lc>NOT
%token <lc>LOGICAL_AND
%token <lc>LOGICAL_OR
%token <lc>EQUAL
%token <lc>NOT_EQUAL
%token <lc>LESS_THAN
%token <lc>GREATER_THAN
%token <lc>LESS_EQUAL
%token <lc>GREATER_EQUAL
%token <lc>R_SHIFT
%token <lc>L_SHIFT
%token <lc>ASSIGN
%token <lc>ADD_ASSIGN
%token <lc>MINUS_ASSIGN
%token SEMICOLON
%token COMMA
%token COLON
%token L_PAREN
%token R_PAREN
%token L_CURLY_BRACKET
%token L_SQUARE_BRACKET
%token R_SQUARE_BRACKET
%token TERNARY_CONDITIONAL
%token NUMBER_SIGN
%token POINTER
%token PRINTF
%token SCANF
%token DEFINE
%token EXIT
%token <id>ID
%token <lc>NUM_OCTAL
%token <lc>NUM_INTEGER
%token <lc>NUM_HEXA
%token <lc>STRING
%token <lc>CHARACTER
%token R_CURLY_BRACKET
%token END_OF_FILE
%token UNTERMINATED_COMMENT
%token LEXICAL_ERROR
%token ERRO_HASH
 
%type<inteiro> pointer type
%type<no> expressionAuxB logicalAND logicalOR or and xor aditiveExpression conditionalExpression castExpression comparison primaryExpression equalityExpression operator number atribExpression atribAux  
%type<no> relationalExpression shiftExpression multiplyExpression comparisonAux atribExpressionAux atribExpressionAuxB postfixExpression unaryExpression expression expressionAux
%type<comando> commands commandsList block 
%type<re> varDeclarationAux varDeclaration varAux
%type<id> parameters parametersAux parametersAuxB   


%start start

%%
start:program END_OF_FILE{
        printf("SUCCESSFUL COMPILATION.\n");
        fun *function = programa->lista_de_funcoes;
        /*while(function != NULL){
            printf("%s\n",function->nome);
            function = function->next;
        }*/
        //printf("start\n");
        printHash(programa);
        //printAST(programa);
        verifica(programa);
        return 0;
}
;


program: 
        declarations programAux    { 
        }
    |   function programAux        { 
        }
;

programAux: 
        program {} 
    |   {}
;

declarations: 
        NUMBER_SIGN DEFINE ID expression {  
        identi *id = $3;
        node *no = $4;
		if(no->exp == 2){
			printf("error:semantic:%d:%d: string type is not compatible with define\n",no->linha,no->coluna);
			printLinhaErro(no->linha,no->coluna,no->nome);
			return 0;
        }
        if(insert(programa->globalSymbolTable,id) == 0)
            return 0;
        node *noaux = (node*)malloc(sizeof(node));
        noaux->linha = id->linha;
        noaux->coluna = id->coluna;
        strcpy(noaux->nome,id->id);
        noaux->exp = 38;
        noaux->direito = no;
        noaux->esquerdo = NULL;
        no = noaux;
        noaux = programa->exp;
        if(noaux != NULL){
            while(noaux->prox != NULL){
                noaux = noaux->prox;
            }
            noaux->prox = no;
        }
        programa->exp = no;
        }
    |   varDeclaration {
        ret* retorno = $1;
        identi *id = retorno->identidade;
        node *no = retorno->node;
        if(retorno != NULL){
            if(insert(programa->globalSymbolTable,retorno->identidade) == 0)
                return 0;
            retorno = retorno->prox;
            while(retorno != NULL){
                if(insert(programa->globalSymbolTable,retorno->identidade) == 0)
                    return 0;
                if(retorno->node != NULL){
                    no->prox = retorno->node;
                    no = retorno->node;
                }
                retorno = retorno->prox;
            }
        }
        node *noaux = programa->exp;
        if(noaux != NULL){
            while(noaux->prox != NULL){
                noaux = noaux->prox;
            }
            noaux->prox = no;
        }
        programa->exp = no;
    }
    |   protoDeclaration {}
;

function: 
        type pointer ID parameters L_CURLY_BRACKET varAux commands R_CURLY_BRACKET {
            fun* func = (fun*)malloc(sizeof(fun));
            func->symbolTable = (controle*)malloc(sizeof(controle));
            identi *ide = $3;
            strcpy(func->nome,ide->id);
            ret* retorno = $6;
            node *no = retorno->node;
            node *noaux = retorno->node;
            int i = 0;
            identi *parametro = $4;
            identi *parametroaux;
            while(i< 211){
                func->symbolTable->hash[i] = programa->globalSymbolTable->hash[i];
                i++;
            }   
            while(parametro != NULL){
                if(parametro->tipo == 2){
                    printf("parameter '%s' declared void\n",parametro->id);
                    printLinhaErro(parametro->linha,parametro->coluna,parametro->id);
                    return 0;
                }
                parametroaux = parametro;
                parametro = parametro->i;
                insert(func->symbolTable,parametroaux);
            }
            if(retorno != NULL){
                if(insert(func->symbolTable,retorno->identidade) == 0)
                    return 0;
                retorno = retorno->prox;
                while(retorno != NULL){
                    if(insert(func->symbolTable,retorno->identidade) == 0)
                        return 0;
                    if(retorno->node != NULL){
                        while(no->prox != NULL)
                            no = no->prox;
                        no->prox = retorno->node;
                        no = no->prox;
                    }
                    retorno = retorno->prox;
                }
            }
            cont++;
            func->exp = noaux;
            identi *param = $4;
            par *para = (par*)malloc(sizeof(par));
            while(param != NULL){
                strcpy(para->nome,param->id);
                param = param->i;
                para->prox = (par*)malloc(sizeof(par));
                para = para->prox;
            }
            func->parametro = para;
            func->retorno = $1;
            func->pointer = $2;
            func->prototipo = 0;
            func->linha = ide->linha;
            func->coluna = ide->coluna;
            func->lista_de_comandos = $7;
            func->next = NULL;
            fun *funclist = programa->lista_de_funcoes;
            if(funclist == NULL){
                programa->lista_de_funcoes = func;
            }
            else{
                while(funclist->next != NULL){
                    if(strcmp(funclist->nome,ide->id) ==  0){
                        printf("Erro\n");
                        return 0;
                    }
                    funclist = funclist->next;
                }
                funclist = programa->lista_de_funcoes;
                while(funclist->next != NULL){
                    funclist = funclist->next;
                }
                funclist->next = func;
            }
        }
;

pointer: 
        MULTIPLY pointer {$$ = $2+1 ;}
    |   {$$ = 0;}
;

varAux: 
        varDeclaration varAux {
            ret* retorno = $1;
            node *no = retorno->node;
            identi *id = retorno->identidade;
            retorno->prox = $2;
            $$ = retorno;
        }
    |   {$$ = NULL;}
;

varDeclaration: 
        type varDeclarationAux SEMICOLON {
            ret *retorno = $2;
            identi *ide = retorno->identidade;
            ide->type = 0;
            ide->tipo = $1;
            $$ = retorno;
        }
;

varDeclarationAux: 
        pointer ID expressionAux atribAux {
            identi *ide = $2;
            node *no = $4;
            ret *retorno = (ret*)malloc(sizeof(ret));
            node *noaux = (node*)malloc(sizeof(node));
            noaux->exp = 36;
            noaux->declaration = 1;
            strcpy(noaux->nome,ide->id);
            noaux->linha = ide->linha;
            noaux->coluna = ide->coluna;
            noaux->direito = $3;
            noaux->esquerdo = NULL;
            if(no != NULL){
                no->esquerdo = noaux;
            }
            else{
                no = noaux;
            }
            ide->pointer = $1;
            if($3 != NULL){
                noaux->exp = 37;
                ide->pointer = ide->pointer+1;
            }
            retorno->identidade = ide;
            retorno->node = no;
            $$ = retorno;
        }
    |   pointer ID expressionAux atribAux COMMA varDeclarationAux {
            identi *ide = $2;
            node *no = $4;
            node *noaux = (node*)malloc(sizeof(node));
            noaux->declaration = 1;
            strcpy(noaux->nome,ide->id);
            noaux->linha = ide->linha;
            noaux->coluna = ide->coluna;
            noaux->direito = $3;
            noaux->esquerdo = NULL;
            if(no != NULL){
                no->esquerdo = noaux;
                ret *retorno = $6;
                no->prox = retorno->node;
            }
            else{
                no = noaux;
                ret *retorno = $6;
                no->prox = retorno->node;
            }
            ide->pointer = $1;
            noaux->exp = 36;
            if($3 != NULL){
                noaux->exp = 37;
                ide->pointer = ide->pointer+1;
            }
            ret *retorno = (ret*)malloc(sizeof(ret));
            retorno->identidade = ide;
            retorno->node = no;
            $$ = retorno;
    }
;

expressionAux: 
        L_SQUARE_BRACKET expression R_SQUARE_BRACKET {$$ = $2;}
    |   {$$ = NULL;}
;

expressionAuxB:
        expression {$$ = $1;}
    |   {$$ = NULL;}
;

atribAux: 
        ASSIGN atribExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 7;
            no->direito = $2;
            no->esquerdo = NULL;
            $$ = no;
        }
    |   {$$ = NULL;}
;

protoDeclaration:
        type pointer ID parameters SEMICOLON {
            identi *ide = $3;
            fun* func = (fun*)malloc(sizeof(fun));
            strcpy(func->nome,ide->id);
            func->symbolTable = (controle*)malloc(sizeof(controle));
            int i = 0;
            identi *parametro = $4;
            while(parametro != NULL){
                if(parametro->tipo == 2){
                    printf("parameter '%s' declared void\n",parametro->id);
                    printLinhaErro(parametro->linha,parametro->coluna,parametro->id);
                }
                parametro = parametro->i;
            }   
            identi *param = $4;
            par *para = (par*)malloc(sizeof(par));
            while(param != NULL){
                strcpy(para->nome,param->id);
                param = param->i;
                para = para->prox;
            }
            func->parametro = para;
            func->retorno = $1;
            func->pointer = $2;
            func->prototipo = 1;
            func->lista_de_comandos = NULL;
            func->next = NULL;
            fun *funclist = programa->lista_de_funcoes;
            if(funclist == NULL){
                programa->lista_de_funcoes = func;
            }
            else{
                while(funclist->next != NULL){
                    if(strcmp(funclist->nome,ide->id) ==  0){
                        printf("Erro\n"); 
                        return 0;
                    }
                    funclist = funclist->next;
                }
                funclist = programa->lista_de_funcoes;
                while(funclist->next != NULL){
                    funclist = funclist->next;
                }
                funclist->next = func;
            }
        }
;

parameters: L_PAREN parametersAux R_PAREN {
            $$ = $2;
}
;

parametersAux: 
        type pointer ID expressionAux {
            identi *ide = $3;
            ide->tipo = $1;
            ide->type = 0;
            ide->pointer = $2;
            ide->i = NULL;  
            ide->isParameter = 1;
            $$ = ide;
        }
    |   type pointer ID expressionAux COMMA parametersAuxB {
            identi *ide = $3;
            ide->tipo = $1;
            ide->type = 0;
            ide->pointer = $2;
            ide->i = $6;
            ide->isParameter = 1;
            $$ = ide;
    }
    |   { $$ = NULL;   }
;

parametersAuxB: 
        type pointer ID expressionAux {
            identi *ide = $3;
            ide->tipo = $1;
            ide->type = 0;
            ide->pointer = $2;
            ide->i = NULL;
            ide->isParameter = 1;
            $$ = ide;
        }
    |   type pointer ID expressionAux COMMA parametersAuxB {
            identi *ide = $3;
            ide->tipo = $1;
            ide->type = 0;
            ide->pointer = $2;
            ide->i = $6;
            ide->isParameter = 1;
            $$ = ide;
    }
;

type:
        INT {
            $$ = 0;
        }
    |   CHAR {$$ = 1;}
    |   VOID {$$ = 2;}
;

block:
        L_CURLY_BRACKET commands R_CURLY_BRACKET {$$ = $2;}
;

commands:
        commandsList commands {
            cmd *command = $1;
            if(command == NULL)
                $$ = $2;
            command->next = $2;
            $$ = command;
        }
    |   commandsList {
            cmd *command = $1;
            if(command == NULL)
                $$ = NULL;
            command->next = NULL;
            $$ = command;
    }
;

commandsList:
        DO block WHILE L_PAREN expression R_PAREN SEMICOLON {
        cmd *command = (cmd*)malloc(sizeof(cmd));
        command->type = 4;
        command->exp = $5;
        command->whil = $2;
        $$ = command;
        }
    |   IF L_PAREN expression R_PAREN block {
        cmd *command = (cmd*)malloc(sizeof(cmd));
        command->type = 1;
        command->exp = $3;
        command->then = $5;
        command->els = NULL;
        $$ = command;
    }
    |   IF L_PAREN expression R_PAREN block ELSE block {
        cmd *command = (cmd*)malloc(sizeof(cmd));
        command->type = 1;
        command->exp = $3;
        command->then = $5;
        command->els = $7;
        $$ = command;
    }
    |   WHILE L_PAREN expression R_PAREN block {
        cmd *command = (cmd*)malloc(sizeof(cmd));
        command->type = 2;
        command->exp = $3;
        command->whil = $5;
        $$ = command;
    }
    |   FOR L_PAREN expressionAuxB SEMICOLON expressionAuxB SEMICOLON expressionAuxB R_PAREN block {
        cmd *command = (cmd*)malloc(sizeof(cmd));
        command->type = 3;
        command->for1 = $3;
        command->for2 = $5;
        command->for3 = $7;
        command->for0 = $9;
        $$ = command;
    }
    |   PRINTF L_PAREN STRING R_PAREN SEMICOLON {
        $$ = NULL;
    }
    |   PRINTF L_PAREN STRING COMMA expression R_PAREN SEMICOLON {
        lc *lico = $3;
        cmd *command = (cmd*)malloc(sizeof(cmd));
        command->type = 10;
        command->exp = $5;
        strcpy(command->string,lico->nome);
        $$ = command;
    }
    |   SCANF L_PAREN STRING COMMA BITWISE_AND ID R_PAREN SEMICOLON {
        lc *lico = $3;
        cmd *command = (cmd*)malloc(sizeof(cmd));
        command->type = 12;
        command->identi = $6;
        strcpy(command->string,lico->nome);
        $$ = command;
    }
    |   EXIT L_PAREN expression R_PAREN SEMICOLON {
        cmd *command = (cmd*)malloc(sizeof(cmd));
        command->type = 11;
        command->exp = $3;
        $$ = command;
    }
    |   RETURN expressionAuxB SEMICOLON {
        cmd *command = (cmd*)malloc(sizeof(cmd));
        lc* lc = $1;
        command->type = 9;
        command->linha = lc->linha;
        command->coluna = lc->coluna;       
        if($2  != NULL){
            command->exp = $2;
        }
        else {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 2;
            no->direito = NULL;
            no->esquerdo = NULL;
            command->exp = no;
        }
        $$ = command;
    }
    |   expression SEMICOLON {
        cmd *command = (cmd*)malloc(sizeof(cmd));
        command->type = 8;
        command->exp = $1;
        $$ = command;
    }
    |   SEMICOLON {
        $$ = NULL;
    }
    |   block {
        $$ = $1;
    }
;

expression: 
        atribExpression {$$ = $1;}
    |   atribExpression COMMA expression {
        node *no = $1;
        no->prox = $3;
        $$ = no;
    }
;

atribExpression:
        conditionalExpression {$$ = $1;}
    |   unaryExpression operator atribExpression {
        node *no = $2;
        no->direito = $3;
        no->esquerdo = $1;
    }
;

operator:
        ASSIGN {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 7;
            no->direito = NULL;
            no->esquerdo = NULL;
            lc *lc = $1;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            strcpy(no->nome,lc->nome);
            $$ = no;
        }
    |   ADD_ASSIGN {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 8;
            no->direito = NULL;
            no->esquerdo = NULL;
            lc *lc = $1;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            strcpy(no->nome,lc->nome);
            $$ = no;
        }
    |   MINUS_ASSIGN {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 9;
            no->direito = NULL;
            no->esquerdo = NULL;
            lc *lc = $1;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            strcpy(no->nome,lc->nome);
            $$ = no;
        }
;

conditionalExpression:
        logicalOR {$$ = $1;}
    |   logicalOR TERNARY_CONDITIONAL expression COLON conditionalExpression {
            node *no = $1;
            no->exp = 28;
            no->prox = $3;
            node *noaux = $3;
            noaux->prox = $5;
            $$ = no;
    }
;


logicalOR: 
        logicalAND {$$ = $1;}
    |   logicalAND LOGICAL_OR logicalOR {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 11;
            no->direito = $3;
            no->esquerdo = $1;
            lc *lc = $2;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            $$ = no;
    }
;

logicalAND: 
        or LOGICAL_AND logicalAND{
            node *no = (node*)malloc(sizeof(node));
            no->exp = 10;
            no->direito = $3;
            no->esquerdo = $1;
            lc *lc = $2;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            $$ = no;
        }
    |   or {$$ = $1;}
;

or: 
        xor BITWISE_OR or {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 12;
            no->direito = $3;
            no->esquerdo = $1;
            $$ = no;
        }
    |   xor {$$ = $1;}
;

xor: 
        and BITWISE_XOR xor {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 13;
            no->direito = $3;
            no->esquerdo = $1;
            $$ = no;
        }
    |   and {$$ = $1;}
;

and: 
        equalityExpression BITWISE_AND and {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 14;
            no->direito = $3;
            no->esquerdo = $1;
            $$ = no;
        }
    |   equalityExpression {$$ = $1;}
;

equalityExpression:
        relationalExpression comparison equalityExpression {
            node* exp = $2;
            exp->direito = $1;
            exp->esquerdo = $3;
            $$ = exp;
        }
    |   relationalExpression {$$ = $1;}
;

comparison:
        EQUAL { 
            node* exp = (node*)malloc(sizeof(node));
            exp->exp = 5;
            strcpy(exp->nome,"EQUAL");
            lc *lc = $1;
            exp->linha = lc->linha;
            exp->coluna = lc->coluna;
            exp->esquerdo = NULL;
            exp->direito = NULL;
            strcpy(exp->nome,lc->nome);
            $$ = exp;}
    |   NOT_EQUAL {
            node* exp = (node*)malloc(sizeof(node));
            exp->exp = 6;
            strcpy(exp->nome,"NOT_EQUAL");
            lc *lc = $1;
            exp->linha = lc->linha;
            exp->coluna = lc->coluna;
            exp->esquerdo = NULL;
            exp->direito = NULL;    
            strcpy(exp->nome,lc->nome);
            $$ = exp;
    }
;

relationalExpression:
        shiftExpression {$$ = $1;}
    |   shiftExpression comparisonAux relationalExpression {
            node* exp = $2;
            exp->direito = $1;
            exp->esquerdo = $3;
            $$ = exp;
    }
;

comparisonAux:
        LESS_THAN {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 15;
            no->direito = NULL;
            no->esquerdo = NULL;
            lc *lc = $1;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            strcpy(no->nome,lc->nome);
            $$ = no;
        }
    |   LESS_EQUAL {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 16;
            no->direito = NULL;
            no->esquerdo = NULL;
            lc *lc = $1;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            strcpy(no->nome,lc->nome);
            $$ = no;
    }
    |   GREATER_THAN {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 17;
            no->direito = NULL;
            no->esquerdo = NULL;
            lc *lc = $1;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            strcpy(no->nome,lc->nome);
            $$ = no;
    }
    |   GREATER_EQUAL {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 18;
            no->direito = NULL;
            no->esquerdo = NULL;
            lc *lc = $1;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            strcpy(no->nome,lc->nome);
            $$ = no;
    }
;

shiftExpression:
        aditiveExpression {$$ = $1;}        
    |   aditiveExpression L_SHIFT shiftExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 19;
            no->direito = $3;
            no->esquerdo = $1;
            lc *lc = $2;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            strcpy(no->nome,lc->nome);
            $$ = no;
    }
    |   aditiveExpression R_SHIFT shiftExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 20;
            no->direito = $3;
            no->esquerdo = $1;
            lc *lc = $2;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            strcpy(no->nome,lc->nome);
            $$ = no;
    }
;

aditiveExpression:
        multiplyExpression {$$ = $1;}
    |   multiplyExpression MINUS aditiveExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 21;
            no->direito = $3;
            no->esquerdo = $1;
            lc *lc = $2;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            strcpy(no->nome,lc->nome);
            $$ = no;
    }
    |   multiplyExpression PLUS aditiveExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 22;
            no->direito = $3;
            no->esquerdo = $1;
            lc *lc = $2;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            strcpy(no->nome,lc->nome);
            $$ = no;
    }
;

multiplyExpression:
        castExpression {$$ = $1;}
    |   castExpression DIV multiplyExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 23;
            no->direito = $3;
            no->esquerdo = $1;
            lc *lc = $2;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            strcpy(no->nome,lc->nome);
            $$ = no;
    }
    |   castExpression MULTIPLY multiplyExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 24;
            no->direito = $3;
            no->esquerdo = $1;
            lc *lc = $2;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            strcpy(no->nome,lc->nome);
            $$ = no;
    }
    |   castExpression REMAINDER multiplyExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 25;
            no->direito = $3;
            no->esquerdo = $1;
            lc *lc = $2;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            strcpy(no->nome,lc->nome);
            $$ = no;
    }
;

castExpression:
        unaryExpression {$$ = $1;}
    |   L_PAREN type pointer R_PAREN castExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 26;
            no->direito = $5;
            no->esquerdo = NULL;
            $$ = no;
    }
;

unaryExpression:
        postfixExpression {$$ = $1;}
    |   INC unaryExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 27;
            no->direito = $2;
            no->esquerdo = NULL;
            lc *lc = $1;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            strcpy(no->nome,lc->nome);
            $$ = no;
    }
    |   DEC unaryExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 28;
            no->direito = $2;
            no->esquerdo = NULL;
            lc *lc = $1;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            strcpy(no->nome,lc->nome);
            $$ = no;
    }
    |   BITWISE_AND castExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 29;
            no->direito = $2;
            no->esquerdo = NULL;
            lc *lc = $1;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            strcpy(no->nome,lc->nome);
            $$ = no;
    }
    |   MULTIPLY castExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 30;
            no->direito = $2;
            no->esquerdo = NULL;
            lc *lc = $1;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            strcpy(no->nome,lc->nome);
            $$ = no;
    }
    |   PLUS castExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 31;
            no->direito = $2;
            no->esquerdo = NULL;
            lc *lc = $1;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            strcpy(no->nome,lc->nome);
            $$ = no;
    }
    |   MINUS castExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 32;
            no->direito = $2;
            no->esquerdo = NULL;
            lc *lc = $1;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            strcpy(no->nome,lc->nome);
            $$ = no;
    }
    |   BITWISE_NOT castExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 33;
            no->direito = $2;
            no->esquerdo = NULL;
            lc *lc = $1;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            strcpy(no->nome,lc->nome);
            $$ = no;
    }
    |   NOT castExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 34;
            no->direito = $2;
            no->esquerdo = NULL;
            lc *lc = $1;
            no->linha = lc->linha;
            no->coluna = lc->coluna;
            strcpy(no->nome,lc->nome);
            $$ = no;
    }
;

postfixExpression:
        primaryExpression {
            $$ = $1;
        }
    |   postfixExpression L_SQUARE_BRACKET expression R_SQUARE_BRACKET {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 7;
            no->direito = $1;
            no->esquerdo = NULL;
            $$ = no;
    }
    |   postfixExpression INC {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 27;
            no->direito = $1;
            no->esquerdo = NULL;
            $$ = no;
        }
    |   postfixExpression DEC {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 28;
            no->direito = $1;
            no->esquerdo = NULL;
            $$ = no;
        }
    |   postfixExpression L_PAREN atribExpressionAux R_PAREN {
                //chamada função
            node *no = (node*)malloc(sizeof(node));
            no->exp = 35;
            no->direito = $3;
            no->esquerdo = NULL;
            $$ = no;
    }
;

atribExpressionAux:
        atribExpressionAuxB {$$ = $1;}
    |   {$$ = NULL;}
;

atribExpressionAuxB: 
        atribExpression COMMA atribExpressionAuxB {
            node *no = $1;
            no->prox = $3;
            $$ = no;
        }
    |   atribExpression {
            node *no = $1;
            no->prox = NULL;
            $$  = no;
    }
;

primaryExpression:
        ID { 
            identi *ide = $1;
            node* exp = (node*)malloc(sizeof(node));
            exp->exp = 36;
            exp->direito = NULL;
            exp->esquerdo = NULL;
            strcpy(exp->nome,ide->id);
            exp->linha = ide->linha;
            exp->coluna = ide->coluna;
            $$ = exp;   
        }
    |   number {
            $$ = $1; 
        }
    |   CHARACTER {
            lc *lico = $1;
            node* exp = (node*)malloc(sizeof(node));
            exp->exp =1;
            exp->direito = NULL;
            exp->esquerdo = NULL;
            strcpy(exp->nome,lico->nome);
            exp->linha = lico->linha;
            exp->coluna = lico->coluna;
            $$ = exp; 
        }
    |   STRING {
            lc *lico = $1;
            node* exp = (node*)malloc(sizeof(node));
            exp->exp = 39;
            exp->direito = NULL;
            exp->esquerdo = NULL;
            strcpy(exp->nome,lico->nome);
            exp->linha = lico->linha;
            exp->coluna = lico->coluna;
            $$ = exp; 
    }
    |   L_PAREN expression R_PAREN {
            $$ = $2; 
    }
;

number:
        NUM_INTEGER {
            lc *lico = $1;
            node *no = (node*)malloc(sizeof(node));
            no->exp = 0;
            no->direito = NULL;
            no->esquerdo = NULL;
            no->valor = atoi(lico->nome);
            strcpy(no->nome,lico->nome);
            no->linha = lico->linha;
            no->coluna = lico->coluna;
            $$ = no;
        }
    |   NUM_HEXA {
            lc *lico = $1;
            node *no = (node*)malloc(sizeof(node));
            no->exp = 0;
            no->direito = NULL;
            no->esquerdo = NULL;
            no->valor = atoi(lico->nome);
            strcpy(no->nome,lico->nome);
            no->linha = lico->linha;
            no->coluna = lico->coluna;
            $$ = no;
    }
    |   NUM_OCTAL {
            lc *lico = $1;
            node *no = (node*)malloc(sizeof(node));
            no->exp = 0;
            no->direito = NULL;
            no->esquerdo = NULL;
            no->valor = atoi(lico->nome);
            strcpy(no->nome,lico->nome);
            no->linha = lico->linha;
            no->coluna = lico->coluna;
            $$ = no;
    }
;

%%

void yyerror(char *s) {
    int i;
    int lineNumber = 1;
    char line[1024];
    char aux;
    
    FILE* file = fseek(stdin, 0, SEEK_SET);

    switch(yychar){		
		case LEXICAL_ERROR:
			characters -= strlen(yytext);
			printf("error:lexical:%d:%d: %s", totalLines, characters, yytext);
			break;
		case END_OF_FILE:
			printf("error:syntax:%d:%d: expected declaration or statement at end of input\n", totalLines, characters);
		
			while(lineNumber < totalLines) {
                aux = fgetc(stdin);
                if(aux == '\n') lineNumber++;
                if(aux == EOF) break;
            }

            fgets(line, sizeof(line), stdin);
            printf("%s", line);

            for(i=1;i<characters;i++) {
				printf(" ");
            }
			printf("^");
			break;
        case UNTERMINATED_COMMENT:
			printf("error:lexical:%d:%d: unterminated comment", totalLines, characters);
            break;
		default:
			characters -= strlen(yytext);
			printf("error:syntax:%d:%d: %s\n", totalLines, characters, yytext);
			
			while(lineNumber < totalLines) {
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
			break;
	}
}

int main() {
    programa = (pro*)malloc(sizeof(pro));
    programa->globalSymbolTable = createControl();
    programa->lista_de_funcoes = NULL;
    programa->exp = NULL;
    yyparse();
    return 0;
}