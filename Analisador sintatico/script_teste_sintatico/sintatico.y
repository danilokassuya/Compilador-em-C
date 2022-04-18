%{

#include <stdio.h>
#include <string.h>
extern int yylex();
extern char* yytext;
extern int erro;
extern int infoColuna;
extern int coluna;
extern int linha;
void yyerror(char *s);

%}

/* declare tokens */
%token HASH
%token DEFINE
%token ABRECHAVE
%token FECHACHAVE
%token ASTERISCO
%token SEMICOLON
%token COMMA
%token ABRECOL
%token FECHACOL
%token ASSIGN
%token ABREPAR
%token FECHAPAR
%token IDENTIFICADOR
%token INT
%token CHAR
%token VOID
%token DO
%token WHILE
%token IF
%token ELSE
%token FOR
%token PRINTF
%token STRING
%token SCANF
%token BITWISE_AND
%token EXIT
%token RETURN
%token ADD_ASSIGN
%token MINUS_ASSIGN
%token TERNARY_CONDITIONAL
%token COLON
%token LOGICALAND
%token BITWISE_OR
%token LOGICALOR
%token BITWISE_XOR
%token EQUAL
%token NOT_EQUAL
%token LESS_THAN
%token LESS_EQUAL
%token GREATER_THAN
%token GREATER_EQUAL
%token L_SHIFT
%token R_SHIFT
%token MINUS
%token PLUS
%token DIV
%token REMAINDER
%token INC
%token DEC
%token BITWISE_NOT
%token NOT
%token CARACTER
%token NUM_INTEGER
%token NUM_HEXA
%token NUM_OCTAL
%token BREAK
%token STRUCT
%token POINTER
%token SWITCH
%token CASE
%token DEFAULT
%token TYPEDEF

%start sintatico

%%

sintatico: declaracoes programa 					{ printf("SUCCESSFUL COMPILATION."); return 0; }
	| funcao programa						{ printf("SUCCESSFUL COMPILATION."); return 0; }
	|error '\n'
;

programa: declaracoes programa			{}
	| funcao programa				{}
	|
;	

declaracoes: HASH DEFINE IDENTIFICADOR expressao
	| variaveis
	| prototipos
;
	
funcao: tipo a IDENTIFICADOR parametros ABRECHAVE b comandos FECHACHAVE {}
;

a: ASTERISCO a								{}
	| 							{}
;

b: variaveis b
	|
;

variaveis: tipo a IDENTIFICADOR c d e SEMICOLON
;

e: COMMA IDENTIFICADOR c d e
	|
;

c: ABRECOL expressao FECHACOL c
	|
;

d: ASSIGN atribuicao
	|
;

prototipos: tipo a IDENTIFICADOR parametros SEMICOLON
;

parametros: ABREPAR f FECHAPAR
;

f: tipo a IDENTIFICADOR c g
	|
;

g: COMMA tipo a IDENTIFICADOR c g
	|
;

tipo: INT
	|CHAR
	|VOID
;

bloco: ABRECHAVE comandos FECHACHAVE
;

comandos: lista h
;

h: lista h
	|
;

lista: DO bloco WHILE ABREPAR expressao FECHAPAR SEMICOLON
	|IF ABREPAR expressao FECHAPAR bloco i
	|WHILE ABREPAR expressao FECHAPAR bloco
	|FOR ABREPAR j SEMICOLON j SEMICOLON j FECHAPAR bloco
	|PRINTF ABREPAR STRING k FECHAPAR SEMICOLON
	|SCANF ABREPAR STRING COMMA BITWISE_AND IDENTIFICADOR FECHAPAR SEMICOLON
	|EXIT ABREPAR expressao FECHAPAR SEMICOLON
	|RETURN l SEMICOLON
	|expressao SEMICOLON
	|SEMICOLON
	|bloco
;

i: ELSE bloco
	|
;

j: expressao
	|
;

k: COMMA expressao
	|
;

l: expressao
	|
;

expressao: atribuicao m
;

m: COMMA atribuicao m
	|
;

atribuicao: condicional
	|unaria sim atribuicao
;

sim: ASSIGN
	|ADD_ASSIGN
	|MINUS_ASSIGN
;

condicional: orlogico n
;

n: TERNARY_CONDITIONAL expressao COLON condicional
	|
;

orlogico: andlogico o
;

o: LOGICALOR andlogico o
	|
;

andlogico: or p
;

p: LOGICALAND or p
	|
;

or: xor q
;

q: BITWISE_OR xor q
	|
;

xor: and r
;

r: BITWISE_XOR and r
	|
;

and: igualdade s
;

s: BITWISE_AND igualdade s
	|
;

igualdade: relacional t
;

t: EQUAL relacional t
	|NOT_EQUAL relacional t
	|
;

relacional: shift u
;

u: LESS_THAN shift u
	|LESS_EQUAL shift u
	|GREATER_THAN shift u
	|GREATER_EQUAL shift u
	|
;

shift: aditiva v
;

v: L_SHIFT aditiva v
	|R_SHIFT aditiva v
	|
;

aditiva: multiplicativa w
;

w: MINUS multiplicativa w
	|PLUS multiplicativa w
	|
;

multiplicativa: cast x
;

x: ASTERISCO cast x
	| DIV cast x
	| REMAINDER cast x
	|
;

cast: unaria
	|ABREPAR tipo a FECHAPAR cast
;

unaria: posfixa
	|INC unaria
	|DEC unaria
	|BITWISE_AND cast
	|ASTERISCO cast
	|PLUS cast
	|MINUS cast
	|BITWISE_NOT cast
	|NOT cast
;

posfixa: primaria
	|posfixa y
;

y: INC
	|DEC
	|ABREPAR z FECHAPAR
	|ABRECOL expressao FECHACOL
;

z: atribuicao aa
	|
;

aa: COMMA atribuicao aa
	|
;

primaria: IDENTIFICADOR
	|numero
	|CARACTER
	|STRING
	| ABREPAR expressao FECHAPAR
;

numero: NUM_INTEGER
	|NUM_HEXA
	|NUM_OCTAL

%%

void yyerror(char *s)
{
	printf("error:syntax:%d:%d: %s\n",linha,coluna-1,yytext);
	erro = 1;
	infoColuna = coluna-1;
}

int main(int argc, char **argv)
{
    yyparse();
    return 0;
}
