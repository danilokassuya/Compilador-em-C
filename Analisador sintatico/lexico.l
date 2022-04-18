%option noyywrap

%{
#include <ast.h>
#include <string.h>
#include <sintatico.tab.h>
int linha=1;
int coluna=0;
int i = 0;
int j =0;
char infoLinha[200];
int infoColuna;
int erro = 0;
%}

%x COMMENT
%x STRING
%x COMMENT_1LINE
%x CHARACTER

%%
.*					{REJECT;}
"void"					{strcat(infoLinha,yytext);coluna += 4;return VOID;}
"int"					{strcat(infoLinha,yytext);coluna += 3;return INT;}
"char"					{strcat(infoLinha,yytext);coluna += 4;return CHAR;}
"return"				{strcat(infoLinha,yytext);coluna += 6;return RETURN;}
"break"				{strcat(infoLinha,yytext);coluna += 5;return BREAK;}
"switch"				{strcat(infoLinha,yytext);coluna += 6;return SWITCH;}
"case"					{strcat(infoLinha,yytext);coluna += 4;return CASE;}
"default"				{strcat(infoLinha,yytext);coluna += 7;return DEFAULT;}
"do"					{strcat(infoLinha,yytext);coluna += 2;return DO;}
"while"				{strcat(infoLinha,yytext);coluna += 5;return WHILE;}
"for"					{strcat(infoLinha,yytext);coluna += 3;return FOR;}
"if"					{strcat(infoLinha,yytext);coluna += 2;return IF;}
"else"					{strcat(infoLinha,yytext);coluna += 4;return ELSE;}
"typedef"				{strcat(infoLinha,yytext);coluna += 7;return TYPEDEF;}
"struct"				{strcat(infoLinha,yytext);coluna += 6;return STRUCT;}
"+"					{strcat(infoLinha,yytext);coluna ++;return PLUS;}
"-"					{strcat(infoLinha,yytext);coluna ++;return MINUS;}
"*"					{strcat(infoLinha,yytext);coluna ++;return ASTERISCO;}
"/"					{strcat(infoLinha,yytext);coluna ++;return DIV;}
"%"					{strcat(infoLinha,yytext);coluna ++;return REMAINDER;}
"++"					{strcat(infoLinha,yytext);coluna += 2;return INC;}
"--"					{strcat(infoLinha,yytext);coluna += 2;return DEC;}
"&"					{strcat(infoLinha,yytext);coluna ++;return BITWISE_AND;}
"|"					{strcat(infoLinha,yytext);coluna ++;return BITWISE_OR;}
"^"					{strcat(infoLinha,yytext);coluna ++;return BITWISE_XOR;}
"~"					{strcat(infoLinha,yytext);coluna ++;return BITWISE_NOT;}
"!"					{strcat(infoLinha,yytext);coluna ++;return NOT;}
"&&"					{strcat(infoLinha,yytext);coluna += 2;return LOGICALAND;}
"||"					{strcat(infoLinha,yytext);coluna += 2;return LOGICALOR;}
"=="					{strcat(infoLinha,yytext);coluna += 2;return EQUAL;}
"!="					{strcat(infoLinha,yytext);coluna += 2;return NOT_EQUAL;}
">"					{strcat(infoLinha,yytext);coluna ++;return GREATER_THAN;}
"<"					{strcat(infoLinha,yytext);coluna ++;return LESS_THAN;}
">="					{strcat(infoLinha,yytext);coluna += 2;return GREATER_EQUAL;}
"<="					{strcat(infoLinha,yytext);coluna += 2;return LESS_EQUAL;}
">>"					{strcat(infoLinha,yytext);coluna += 2;return R_SHIFT;}
"<<"					{strcat(infoLinha,yytext);coluna += 2;return L_SHIFT;}
"="					{strcat(infoLinha,yytext);coluna ++;return ASSIGN;}
"+="					{strcat(infoLinha,yytext);coluna += 2;return ADD_ASSIGN;}
"-="					{strcat(infoLinha,yytext);coluna += 2;return MINUS_ASSIGN;}
";"					{strcat(infoLinha,yytext);coluna ++;return SEMICOLON;}
","					{strcat(infoLinha,yytext);coluna ++;return COMMA;}
":"					{strcat(infoLinha,yytext);coluna ++;return COLON;}
"("					{strcat(infoLinha,yytext);coluna ++;return ABREPAR;}
")"					{strcat(infoLinha,yytext);coluna ++;return FECHAPAR;}
"{"					{strcat(infoLinha,yytext);coluna ++;return ABRECHAVE;}
"}"					{strcat(infoLinha,yytext);coluna ++;return FECHACHAVE;}
"["					{strcat(infoLinha,yytext);coluna ++;return ABRECOL;}
"]"					{strcat(infoLinha,yytext);coluna ++;return FECHACOL;}
"?"					{strcat(infoLinha,yytext);coluna ++;return TERNARY_CONDITIONAL;}
"#"					{strcat(infoLinha,yytext);coluna ++;return HASH;}
"->"					{strcat(infoLinha,yytext);coluna += 2;return POINTER;}
"printf"				{strcat(infoLinha,yytext);coluna += 6;return PRINTF;}
"scanf"				{strcat(infoLinha,yytext);coluna += 5;return SCANF;}
"define"				{strcat(infoLinha,yytext);coluna += 6;return DEFINE;}
"exit"					{strcat(infoLinha,yytext);coluna += 4;return EXIT;}
"/*"					{coluna += 1; BEGIN COMMENT;}
"//"					{BEGIN COMMENT_1LINE;}
"'"					{strcat(infoLinha,yytext);return CHARACTER; BEGIN CHARACTER;}
([a-zA-Z]|"_")+([a-zA-Z0-9]|"_")*	{strcat(infoLinha,yytext);coluna += strlen(yytext);return IDENTIFICADOR;}
\"					{strcat(infoLinha,yytext);return STRING;BEGIN STRING;}
0("x"|"X")[0-9a-fA-F]+			{coluna += strlen(yytext);return NUM_HEXA;}	
[0][1-7][0-7]*				{coluna += strlen(yytext);return NUM_OCTAL;}	
[0-9]+					{coluna += strlen(yytext);return NUM_INTEGER;}
\n					{if(erro == 1){erroFinal(infoLinha,linha,infoColuna);exit(0);}infoLinha[0] = '\0'; linha++;coluna = 1;}
" "					{strcat(infoLinha,yytext);coluna ++;}
\t					{strcat(infoLinha,yytext);coluna ++;}
"."					{coluna++;if(coluna == 0) coluna = 1;printf("error:lexical:%d:%d: %s",linha,coluna,yytext);}
[^" ".]				{coluna++;if(coluna == 0) coluna = 1;printf("error:lexical:%d:%d: %s",linha,coluna,yytext);}
<COMMENT>{
"*/"					{infoLinha[0] = '\0'; j += 2;linha += i;i = 0;if(j==3){coluna=1;j=0;}else{coluna+=j;j=0;};BEGIN INITIAL;}
<<EOF>>				{printf("error:lexical:%d:%d: unterminated comment",linha,coluna);BEGIN INITIAL;}
\n					{i++;j = 1;}
.					{j++;}
}
<COMMENT_1LINE>{
\n					{infoLinha[0] = '\0'; linha++;coluna = 1;BEGIN INITIAL;}
.					{;}
}
<STRING>{
\\\"					{strcat(infoLinha,yytext);coluna += strlen(yytext);}
\"					{strcat(infoLinha,yytext);BEGIN INITIAL;}
.					{strcat(infoLinha,yytext);coluna++;}
}
<CHARACTER>{
"\\a"					{strcat(infoLinha,yytext);coluna += strlen(yytext);}
"\\b"					{strcat(infoLinha,yytext);coluna += strlen(yytext);}
"\\f"					{strcat(infoLinha,yytext);coluna += strlen(yytext);}
"\\n"					{strcat(infoLinha,yytext);coluna += strlen(yytext);}
"\\r"					{strcat(infoLinha,yytext);coluna += strlen(yytext);}
"\\t"					{strcat(infoLinha,yytext);coluna += strlen(yytext);}
"\\v"					{strcat(infoLinha,yytext);coluna += strlen(yytext);}
"\\\\"					{strcat(infoLinha,yytext);coluna += strlen(yytext);}
"\\'"					{strcat(infoLinha,yytext);coluna += strlen(yytext);}
"\\\""					{strcat(infoLinha,yytext);coluna += strlen(yytext);}
"\\?"					{strcat(infoLinha,yytext);coluna += strlen(yytext);}
"\\0"					{strcat(infoLinha,yytext);coluna += strlen(yytext);}
"'"					{strcat(infoLinha,yytext);coluna ++;BEGIN INITIAL;}
"."					{strcat(infoLinha,yytext);coluna ++;}
}
%%

