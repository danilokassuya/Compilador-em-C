/* Nao usar a biblioteca do flex*/
%option noyywrap

%{
	#include <string.h>
	#include "symbol.h"	
	#include "ast.h"
	#include <sintatico.tab.h>
	extern Identificador hash;
	int totalLines = 1;
	int characters = 1;
	int lastLine;
	extern int tipo;
	char identifier[200] = "";
	char id[200];
%}

%x IDENTIFIER
%x COMMENT

%%
      
<INITIAL>{
" "						characters ++;
"void"					characters += strlen(yytext); return VOID;
"int"					characters += strlen(yytext); yylval.str = strdup(yytext); return INT;
"char"					characters += strlen(yytext); return CHAR;
"return"				yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return RETURN;
"break"					characters += strlen(yytext); return BREAK;
"switch"				characters += strlen(yytext); return SWITCH;
"case"					characters += strlen(yytext); return CASE;
"default"				characters += strlen(yytext); return DEFAULT;
"do"					characters += strlen(yytext); return DO;
"while"					characters += strlen(yytext); return WHILE;
"for"					characters += strlen(yytext); return FOR;
"if"					characters += strlen(yytext); return IF;
"else"					characters += strlen(yytext); return ELSE;
"typedef"				characters += strlen(yytext); return TYPEDEF;
"struct"				characters += strlen(yytext); return STRUCT;
"+"						yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return PLUS;
"-"						yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return MINUS;
"*"						yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return MULTIPLY;
"/"						yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return DIV;
"%"						yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return REMAINDER;
"++"					yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return INC;
"--"					yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return DEC;
"&"						yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return BITWISE_AND;
"|"						yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return BITWISE_OR;
"~"						yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return BITWISE_NOT;
"^"						yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return BITWISE_XOR;
"!"						yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return NOT;
"&&"					yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return LOGICAL_AND;
"||"					yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return LOGICAL_OR;
"=="					yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return EQUAL;
"!="					yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return NOT_EQUAL;
"<"						yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return LESS_THAN;
">"						yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return GREATER_THAN;
"<="					yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return LESS_EQUAL;
">="					yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return GREATER_EQUAL;
">>"					yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return R_SHIFT;
"<<"					yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return L_SHIFT;
"="						yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return ASSIGN;
"+="					yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return ADD_ASSIGN;
"-="					yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return MINUS_ASSIGN;
";"						characters += strlen(yytext); return SEMICOLON;
","						characters += strlen(yytext); return COMMA;
":"						characters += strlen(yytext); return COLON;
"("						characters += strlen(yytext); return L_PAREN;
")"						characters += strlen(yytext); return R_PAREN;
"{"						characters += strlen(yytext); return L_CURLY_BRACKET;
"["						characters += strlen(yytext); return L_SQUARE_BRACKET;
"]"						characters += strlen(yytext); return R_SQUARE_BRACKET;
"?"						characters += strlen(yytext); return TERNARY_CONDITIONAL;
"#"						characters += strlen(yytext); return NUMBER_SIGN;
"->"					characters += strlen(yytext); return POINTER;
"printf"				characters += strlen(yytext); return PRINTF;
"scanf"					characters += strlen(yytext); return SCANF;
"define"				characters += strlen(yytext); return DEFINE;
"exit"					characters += strlen(yytext); return EXIT;
"/*" 					lastLine = totalLines; BEGIN(COMMENT);
"//".*\n				totalLines++;
[_a-zA-Z][_a-zA-Z0-9]*			yylval.id = createIdenti(totalLines,characters,yytext);characters += strlen(yytext);return ID;
"0"[0-9]+				yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext);  return NUM_OCTAL;
[0-9][0-9]*				yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext);  return NUM_INTEGER;
"0"[x|X][a-fA-F0-9]*			yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext);  return NUM_HEXA;
\"(\\.|[^"\\])*\"			 yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext) ;return STRING;
'([^'\\\n]|\\.)'			yylval.lc = createLC(totalLines,characters,yytext);characters += strlen(yytext); return CHARACTER;
\t						characters += strlen(yytext);
\r
\n						totalLines++; characters = 1;
<<EOF>>					return END_OF_FILE;
"}"						characters += strlen(yytext); return R_CURLY_BRACKET;
.						return LEXICAL_ERROR;
}

<COMMENT>{
"*/"  					BEGIN(INITIAL); 
[^*\n]					
"*"       
\n        			 	totalLines ++; 
<<EOF>>  				return UNTERMINATED_COMMENT;
}

%%