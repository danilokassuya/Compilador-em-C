%{
    #include<stdio.h>
    #include<string.h>
    #include "ast.h"
    #include "symbol.h"
    pro *programa = NULL;
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

%type<teste> comparison equalityExpression relationalExpression declarations expression 
%type<teste> primaryExpression operator number postfixExpression conditionalExpression atribExpression programAux function parameters parametersAux parametersAuxB
%type<inteiro> pointer type
%type<function> program

%start start

%%
start:program END_OF_FILE{
        pro *programa = (pro*)malloc(sizeof(pro));
        if($1)
            programa->lista_de_funcoes = $1;
        printf("SUCCESSFUL COMPILATION.");
        return 0;
}
;


program: 
        declarations programAux    { 
            printf("declarado\n");
            $$ = $2;
        }
    |   function programAux        { 
            printf("função\n");
            fun* func = $1;
            if(func)
                func->next = $2;
            $$ = func;
        }
;

programAux: 
        program {$$ = $1;} 
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
            fun* func = (fun*)malloc(sizeof(fun));
            strcpy(func->nome,$3);
            func->symbolTable = (identi*)malloc(sizeof(identi));
            func->parametro = (par*)malloc(sizeof(par));
            func->retorno = $1;
            func->prototipo = 0;
            func->lista_de_comandos = (cmd*)malloc(sizeof(cmd));
            func->next = NULL;
            $$ = func;
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
        type pointer ID parameters SEMICOLON {}
;

parameters: L_PAREN parametersAux R_PAREN {
            NO no = createPar();
            no = $2;
            $$ = no;
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
        L_CURLY_BRACKET commands R_CURLY_BRACKET {}
;

commands:
        commandsList commands {}
    |   commandsList {}
;

commandsList:
        DO block WHILE L_PAREN expression R_PAREN SEMICOLON {}
    |   IF L_PAREN expression R_PAREN block {}
    |   IF L_PAREN expression R_PAREN block ELSE block {}
    |   WHILE L_PAREN expression R_PAREN block {}
    |   FOR L_PAREN expressionAuxB SEMICOLON expressionAuxB SEMICOLON expressionAuxB R_PAREN block {}
    |   PRINTF L_PAREN STRING R_PAREN SEMICOLON {}
    |   PRINTF L_PAREN STRING COMMA expression R_PAREN SEMICOLON {}
    |   SCANF L_PAREN STRING COMMA BITWISE_AND ID R_PAREN SEMICOLON {}
    |   EXIT L_PAREN expression R_PAREN SEMICOLON {}
    |   RETURN expressionAuxB SEMICOLON {}
    |   expression SEMICOLON {}
    |   SEMICOLON {}
    |   block {}
;

expression: 
        atribExpression {$$ = $1;}
    |   atribExpression COMMA expression {}
;

atribExpression:
        conditionalExpression {$$ = $1;}
    |   unaryExpression operator atribExpression {}
;

operator:
        ASSIGN {
            NO no = createExpression("ASSIGN",7);
            $$ = no;
        }
    |   ADD_ASSIGN {
            NO no = createExpression("ADD_ASSIGN",8);
            $$ = no;
        }
    |   MINUS_ASSIGN {
            NO no = createExpression("MINUS_ASSIGN",8);
            $$ = no;
        }
;

conditionalExpression:
        logicalOR {}
    |   logicalOR TERNARY_CONDITIONAL expression COLON conditionalExpression {}
;


logicalOR: 
        logicalAND {}
    |   logicalAND LOGICAL_OR logicalOR {}
;

logicalAND: 
        or LOGICAL_AND {}
    |   or {}
;

or: 
        xor BITWISE_OR or {}
    |   xor {}
;

xor: 
        and BITWISE_XOR xor {}
    |   and {}
;

and: 
        equalityExpression BITWISE_AND and {}
    |   equalityExpression {}
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
        shiftExpression {}
    |   shiftExpression comparisonAux relationalExpression {}
;

comparisonAux:
        LESS_THAN {}
    |   LESS_EQUAL {}
    |   GREATER_THAN {}
    |   GREATER_EQUAL {}
;

shiftExpression:
        aditiveExpression {}        
    |   aditiveExpression L_SHIFT shiftExpression {}
    |   aditiveExpression R_SHIFT shiftExpression {}
;

aditiveExpression:
        multiplyExpression {}
    |   multiplyExpression MINUS aditiveExpression {}
    |   multiplyExpression PLUS aditiveExpression {}
;

multiplyExpression:
        castExpression {}
    |   castExpression DIV multiplyExpression {}
    |   castExpression MULTIPLY multiplyExpression {}
    |   castExpression REMAINDER multiplyExpression {}
;

castExpression:
        unaryExpression {}
    |   L_PAREN type pointer R_PAREN castExpression {}
;

unaryExpression:
        postfixExpression {}
    |   INC unaryExpression {}
    |   DEC unaryExpression {}
    |   BITWISE_AND castExpression {}
    |   MULTIPLY castExpression {}
    |   PLUS castExpression {}
    |   MINUS castExpression {}
    |   BITWISE_NOT castExpression {}
    |   NOT castExpression {}
;

postfixExpression:
        primaryExpression {
            $$ = $1;
        }
    |   postfixExpression L_SQUARE_BRACKET expression R_SQUARE_BRACKET {}
    |   postfixExpression INC {
            NO no = createExpression("INC",12);
            insertEsquerda(no,$1);
            $$ = no;
        }
    |   postfixExpression DEC {
            NO no = createExpression("DEC",13);
            insertEsquerda(no,$1);
            $$ = no;
        }
    |   postfixExpression L_PAREN atribExpressionAux R_PAREN {}
;

atribExpressionAux:
        atribExpressionAuxB {}
    |   {}
;

atribExpressionAuxB: 
        atribExpression COMMA atribExpressionAuxB {}
    |   atribExpression
;

primaryExpression:
        ID { 
            node* exp = (node*)malloc(sizeof(node));
            exp->exp = 1;
            strcpy(exp->nome,$1);
            $$ = exp;   
        }
    |   number {
            $$ = $1; 
        }
    |   CHARACTER {
            node* exp = (node*)malloc(sizeof(node));
            exp->exp = 11;
            strcpy(exp->nome,$1);
            $$ = exp; 
        }
    |   STRING {
            node* exp = (node*)malloc(sizeof(node));
            exp->exp = 14;
            strcpy(exp->nome,$1);
            $$ = exp; 
    }
    |   L_PAREN expression R_PAREN {
            $$ = $2; 
    }
;

number:
        NUM_INTEGER {
            NO no = createExpression($1,8);
            $$ = no;
        }
    |   NUM_HEXA {
            NO no = createExpression($1,9);
            $$ = no;
    }
    |   NUM_OCTAL {
            NO no = createExpression($1,10);
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
    yyparse();
    return 0;
}
