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
    extern int lastLine;
    extern char id[200];
    int tipo = 0;
    void yyerror(char *s);
%}
%union{
    int inteiro;
    char *str;
    NO teste;
    pro *programa;
    node *no;
    fun *function;
    cmd  *comando;
}

%token VOID
%token <str>INT
%token CHAR
%token RETURN
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
%token PLUS
%token MINUS
%token MULTIPLY
%token DIV
%token REMAINDER
%token INC
%token DEC
%token BITWISE_AND
%token BITWISE_OR
%token BITWISE_NOT
%token BITWISE_XOR
%token NOT
%token LOGICAL_AND
%token LOGICAL_OR
%token <teste>EQUAL
%token <teste>NOT_EQUAL
%token LESS_THAN
%token GREATER_THAN
%token LESS_EQUAL
%token GREATER_EQUAL
%token R_SHIFT
%token L_SHIFT
%token ASSIGN
%token ADD_ASSIGN
%token MINUS_ASSIGN
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
%token <str>ID
%token <str>NUM_OCTAL
%token <str>NUM_INTEGER
%token <str>NUM_HEXA
%token <str>STRING
%token <str>CHARACTER
%token <str>R_CURLY_BRACKET
%token END_OF_FILE
%token UNTERMINATED_COMMENT
%token LEXICAL_ERROR
%token ERRO_HASH

%type<teste> comparison equalityExpression declarations expression 
%type<teste> primaryExpression operator number atribExpression programAux function parameters parametersAux parametersAuxB
%type<inteiro> pointer type
%type<no> expressionAuxB logicalAND logicalOR or and xor aditiveExpression conditionalExpression castExpression
%type<no> relationalExpression shiftExpression multiplyExpression comparisonAux atribExpressionAux atribExpressionAuxB postfixExpression unaryExpression
%type<comando> commands commandsList block 


%start start

%%
start:program END_OF_FILE{
        printf("SUCCESSFUL COMPILATION.\n");
        fun *function = programa->lista_de_funcoes;
        while(function != NULL){
            printf("%s\n",function->nome);
            function = function->next;
        }
        return 0;
}
;


program: 
        declarations programAux    { 
            printf("declarado\n");
        }
    |   function programAux        { 
            printf("função\n");
        }
;

programAux: 
        program {} 
    |   {}
;

declarations: 
        NUMBER_SIGN DEFINE ID expression {//# DEFINE NOME/ID 
        }
    |   varDeclaration {}
    |   protoDeclaration {}
;

function: 
        type pointer ID parameters L_CURLY_BRACKET varAux commands R_CURLY_BRACKET {
            cont++;
            fun* func = (fun*)malloc(sizeof(fun));
            strcpy(func->nome,$3);
            func->symbolTable = (controle*)malloc(sizeof(controle));
            int i = 0;
            while(i< 211){
                func->symbolTable->hash[i] = programa->globalSymbolTable->hash[i];
                i++;
            }   
            func->parametro = $4;
            func->retorno = $1;
            func->prototipo = 0;
            func->lista_de_comandos = $7;
            func->next = NULL;
            fun *funclist = programa->lista_de_funcoes;
            if(funclist == NULL){
                programa->lista_de_funcoes = func;
            }
            else{
                while(funclist->next != NULL){
                    funclist = funclist->next;
                }
                funclist->next = func;
            }
        }
;

pointer: 
        MULTIPLY pointer {$$ = $2+1;}
    |   {$$ = 1;}
;

varAux: 
        varDeclaration varAux {}
    |   {}
;

varDeclaration: 
        type varDeclarationAux SEMICOLON {}
;

varDeclarationAux: 
        pointer ID expressionAux atribAux {}
    |   pointer ID expressionAux atribAux COMMA varDeclarationAux {}
;

expressionAux: 
        L_SQUARE_BRACKET expression R_SQUARE_BRACKET {}
    |   {}
;

expressionAuxB:
        expression {}
    |   {}
;

atribAux: 
        ASSIGN atribExpression {}
    |   {}
;

protoDeclaration:
        type pointer ID parameters SEMICOLON {
            fun* func = (fun*)malloc(sizeof(fun));
            strcpy(func->nome,$3);
            func->symbolTable = (controle*)malloc(sizeof(controle));
            int i = 0;
            while(i< 211){
                func->symbolTable->hash[i] = programa->globalSymbolTable->hash[i];
                i++;
            }   
            func->parametro = $4;
            func->retorno = $1;
            func->prototipo = 1;
            func->lista_de_comandos = NULL;
            func->next = NULL;
            fun *funclist = programa->lista_de_funcoes;
            while(funclist != NULL){
                funclist->next;
            }
            funclist = func;
        }
;

parameters: L_PAREN parametersAux R_PAREN {
            $$ = $2;
}
;

parametersAux: 
        type pointer ID expressionAux {
            par* parametro = (par*)malloc(sizeof(par));
            strcpy(parametro->nome,$3);
            parametro->tipo = $1;
            parametro->ponteiro = $2;
            $$ = parametro;
        }
    |   type pointer ID expressionAux COMMA parametersAuxB {
            par* parametro = (par*)malloc(sizeof(par));
            strcpy(parametro->nome,$3);
            parametro->tipo = $1;
            parametro->ponteiro = $2;
            parametro->prox = $6;
            $$ = parametro;
    }
    |   {    }
;

parametersAuxB: 
        type pointer ID expressionAux {
            NO no = createPar();
            char a[100];
            strcpy(a,$3);
            setParNome(no,a);
            setParTipo(no,$1);
            setParPonteiro(no,$2);
            $$ = no;
        }
    |   type pointer ID expressionAux COMMA parametersAuxB {
            NO no = createPar();
            setParNome(no,$3);
            setParTipo(no,$1);
            setParPonteiro(no,$2);
            setParProx(no,$6);
            $$ = no;
    }
;

type:
        INT {
            $$ = 1;
        }
    |   CHAR {tipo = 2;}
    |   VOID {tipo = 3;}
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
        cmd *command = (cmd*)malloc(sizeof(cmd));
        command->type = 10;
        command->exp = $5;
        $$ = command;
    }
    |   SCANF L_PAREN STRING COMMA BITWISE_AND ID R_PAREN SEMICOLON {}
    |   EXIT L_PAREN expression R_PAREN SEMICOLON {
        cmd *command = (cmd*)malloc(sizeof(cmd));
        command->type = 11;
        command->exp = $3;
        $$ = command;
    }
    |   RETURN expressionAuxB SEMICOLON {
        //tipo de retorno
        cmd *command = (cmd*)malloc(sizeof(cmd));
        command->type = 9;
        command->exp = $2;
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
        /*cmd *command = (cmd*)malloc(sizeof(cmd));
        command->type = 6;
        $$ = command;*/
    }
    |   block {
        $$ = $1;
    }
;

expression: 
        atribExpression {$$ = $1;}
    |   atribExpression COMMA expression {}
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
            $$ = no;
        }
    |   ADD_ASSIGN {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 8;
            no->direito = NULL;
            no->esquerdo = NULL;
            $$ = no;
        }
    |   MINUS_ASSIGN {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 9;
            no->direito = NULL;
            no->esquerdo = NULL;
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
            $$ = no;
    }
;

logicalAND: 
        or LOGICAL_AND logicalAND{
            node *no = (node*)malloc(sizeof(node));
            no->exp = 10;
            no->direito = $3;
            no->esquerdo = $1;
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
            exp->exp = 3;
            strcpy(exp->nome,"EQUAL");
            $$ = exp;}
    |   NOT_EQUAL {
            node* exp = (node*)malloc(sizeof(node));
            exp->exp = 4;
            strcpy(exp->nome,"NOT_EQUAL");
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
            $$ = no;
        }
    |   LESS_EQUAL {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 16;
            no->direito = NULL;
            no->esquerdo = NULL;
            $$ = no;
    }
    |   GREATER_THAN {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 17;
            no->direito = NULL;
            no->esquerdo = NULL;
            $$ = no;
    }
    |   GREATER_EQUAL {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 18;
            no->direito = NULL;
            no->esquerdo = NULL;
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
            $$ = no;
    }
    |   aditiveExpression R_SHIFT shiftExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 20;
            no->direito = $3;
            no->esquerdo = $1;
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
            $$ = no;
    }
    |   multiplyExpression PLUS aditiveExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 22;
            no->direito = $3;
            no->esquerdo = $1;
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
            $$ = no;
    }
    |   castExpression MULTIPLY multiplyExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 24;
            no->direito = $3;
            no->esquerdo = $1;
            $$ = no;
    }
    |   castExpression REMAINDER multiplyExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 25;
            no->direito = $3;
            no->esquerdo = $1;
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
            $$ = no;
    }
    |   DEC unaryExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 28;
            no->direito = $2;
            no->esquerdo = NULL;
            $$ = no;
    }
    |   BITWISE_AND castExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 29;
            no->direito = $2;
            no->esquerdo = NULL;
            $$ = no;
    }
    |   MULTIPLY castExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 30;
            no->direito = $2;
            no->esquerdo = NULL;
            $$ = no;
    }
    |   PLUS castExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 31;
            no->direito = $2;
            no->esquerdo = NULL;
            $$ = no;
    }
    |   MINUS castExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 32;
            no->direito = $2;
            no->esquerdo = NULL;
            $$ = no;
    }
    |   BITWISE_NOT castExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 33;
            no->direito = $2;
            no->esquerdo = NULL;
            $$ = no;
    }
    |   NOT castExpression {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 34;
            no->direito = $2;
            no->esquerdo = NULL;
            $$ = no;
    }
;

postfixExpression:
        primaryExpression {
            $$ = $1;
        }
    |   postfixExpression L_SQUARE_BRACKET expression R_SQUARE_BRACKET {
            //array

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
            node* exp = (node*)malloc(sizeof(node));
            exp->exp = 36;
            strcpy(exp->nome,$1);
            $$ = exp;   
        }
    |   number {
            $$ = $1; 
        }
    |   CHARACTER {
            node* exp = (node*)malloc(sizeof(node));
            exp->exp = 2;
            strcpy(exp->nome,$1);
            $$ = exp; 
        }
    |   STRING {
                //com ponteiro
            node* exp = (node*)malloc(sizeof(node));
            exp->exp = 2;
            strcpy(exp->nome,$1);
            $$ = exp; 
    }
    |   L_PAREN expression R_PAREN {
            $$ = $2; 
    }
;

number:
        NUM_INTEGER {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 1;
            no->direito = NULL;
            no->esquerdo = NULL;
            strcpy(no->nome,$1);
            $$ = no;
        }
    |   NUM_HEXA {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 1;
            no->direito = NULL;
            no->esquerdo = NULL;
            strcpy(no->nome,$1);
            $$ = no;
    }
    |   NUM_OCTAL {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 1;
            no->direito = NULL;
            no->esquerdo = NULL;
            strcpy(no->nome,$1);
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
    programa->globalSymbolTable = (controle*)malloc(sizeof(controle));
    programa->lista_de_funcoes = NULL;
    yyparse();
    return 0;
}
