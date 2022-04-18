%option noyywrap

%{
int linha=1;
int coluna=0;
char a[2] = "\0";
int i = 0;
int j =0;
%}

%x COMMENT
%x STRING
%x COMMENT_1LINE
%x CHARACTER

%%
.*					{if(coluna > 0){strcpy(a,"\n");};REJECT;}
"void"					{coluna += 4;printf("%sVOID",a);}
"int"					{coluna += 3;printf("%sINT",a);}
"char"					{coluna += 4;printf("%sCHAR",a);}
"return"				{coluna += 6;printf("%sRETURN",a);}
"break"				{coluna += 5;printf("%sBREAK",a);}
"switch"				{coluna += 6;printf("%sSWITCH",a);}
"case"					{coluna += 4;printf("%sCASE",a);}
"default"				{coluna += 7;printf("%sDEFAULT",a);}
"do"					{coluna += 2;printf("%sDO",a);}
"while"				{coluna += 5;printf("%sWHILE",a);}
"for"					{coluna += 3;printf("%sFOR",a);}
"if"					{coluna += 2;printf("%sIF",a);}
"else"					{coluna += 4;printf("%sELSE",a);}
"typedef"				{coluna += 7;printf("%sTYPEDEF",a);}
"struct"				{coluna += 6;printf("%sSTRUCT",a);}
"+"					{coluna ++;printf("%sPLUS",a);}
"-"					{coluna ++;printf("%sMINUS",a);}
"*"					{coluna ++;printf("%sMULTIPLY",a);}
"/"					{coluna ++;printf("%sDIV",a);}
"%"					{coluna ++;printf("%sREMAINDER",a);}
"++"					{coluna += 2;printf("%sINC",a);}
"--"					{coluna += 2;printf("%sDEC",a);}
"&"					{coluna ++;printf("%sBITWISE_AND",a);}
"|"					{coluna ++;printf("%sBITWISE_OR",a);}
"^"					{coluna ++;printf("%sBITWISE_XOR",a);}
"~"					{coluna ++;printf("%sBITWISE_NOT",a);}
"!"					{coluna ++;printf("%sNOT",a);}
"&&"					{coluna += 2;printf("%sLOGICAL_AND",a);}
"||"					{coluna += 2;printf("%sLOGICAL_OR",a);}
"=="					{coluna += 2;printf("%sEQUAL",a);}
"!="					{coluna += 2;printf("%sNOT_EQUAL",a);}
">"					{coluna ++;printf("%sGREATER_THAN",a);}
"<"					{coluna ++;printf("%sLESS_THAN",a);}
">="					{coluna += 2;printf("%sGREATER_EQUAL",a);}
"<="					{coluna += 2;printf("%sLESS_EQUAL",a);}
">>"					{coluna += 2;printf("%sR_SHIFT",a);}
"<<"					{coluna += 2;printf("%sL_SHIFT",a);}
"="					{coluna ++;printf("%sASSIGN",a);}
"+="					{coluna += 2;printf("%sADD_ASSIGN",a);}
"-="					{coluna += 2;printf("%sMINUS_ASSIGN",a);}
";"					{coluna ++;printf("%sSEMICOLON",a);}
","					{coluna ++;printf("%sCOMMA",a);}
":"					{coluna ++;printf("%sCOLON",a);}
"("					{coluna ++;printf("%sL_PAREN",a);}
")"					{coluna ++;printf("%sR_PAREN",a);}
"{"					{coluna ++;printf("%sL_CURLY_BRACKET",a);}
"}"					{coluna ++;printf("%sR_CURLY_BRACKET",a);}
"["					{coluna ++;printf("%sL_SQUARE_BRACKET",a);}
"]"					{coluna ++;printf("%sR_SQUARE_BRACKET",a);}
"%"					{coluna ++;printf("%sTERNARY_CONDITIONAL",a);}
"#"					{coluna ++;printf("%sNUMBER_SIGN",a);}
"->"					{coluna += 2;printf("%sPOINTER",a);}
"printf"				{coluna += 6;printf("%sPRINTF",a);}
"scanf"				{coluna += 5;printf("%sSCANF",a);}
"define"				{coluna += 6;printf("%sDEFINE",a);}
"exit"					{coluna += 4;printf("%sEXIT",a);}
"/*"					{coluna += 1;BEGIN COMMENT;}
"//"					{BEGIN COMMENT_1LINE;}
"'"					{printf("%sCHARACTER(",a);BEGIN CHARACTER;}
([a-zA-Z]|"_")+([a-zA-Z0-9]|"_")*	{coluna += strlen(yytext);printf("%sIDENTIFIER(%s)",a,yytext);}
\"					{printf("%sSTRING(",a);BEGIN STRING;}
0("x"|"X")[0-9a-fA-F]+			{coluna += strlen(yytext);printf("%sNUM_HEXA(%s)",a,yytext);}	
[0][1-7][0-7]*				{coluna += strlen(yytext);printf("%sNUM_OCTAL(%s)",a,yytext);}	
[0-9]+					{coluna += strlen(yytext);printf("%sNUM_INTEGER(%s)",a,yytext);}
\n					{linha++;coluna = 1;}
" "					{coluna ++;}
\t					{coluna ++;}
[^" ".]				{coluna++;if(coluna == 0) coluna = 1;printf("%serror:lexical:%d:%d: %s",a,linha,coluna,yytext);}
<COMMENT>{
"*/"					{j += 2;linha += i;i = 0;if(j==3){coluna=1;j=0;}else{coluna+=j;j=0;};BEGIN INITIAL;}
<<EOF>>				{printf("%serror:lexical:%d:%d: unterminated comment",a,linha,coluna);BEGIN INITIAL;}
\n					{i++;j = 1;}
.					{j++;}
}
<COMMENT_1LINE>{
\n					{linha++;coluna = 1;BEGIN INITIAL;}
.					{;}
}
<STRING>{
\\\"					{coluna += strlen(yytext);printf("%s",yytext);}
\"					{printf(")");BEGIN INITIAL;}
.					{coluna++;printf("%s",yytext);}
}
<CHARACTER>{
"\\a"					{coluna += strlen(yytext);printf("%s",yytext);}
"\\b"					{coluna += strlen(yytext);printf("%s",yytext);}
"\\f"					{coluna += strlen(yytext);printf("%s",yytext);}
"\\n"					{coluna += strlen(yytext);printf("%s",yytext);}
"\\r"					{coluna += strlen(yytext);printf("%s",yytext);}
"\\t"					{coluna += strlen(yytext);printf("%s",yytext);}
"\\v"					{coluna += strlen(yytext);printf("%s",yytext);}
"\\\\"					{coluna += strlen(yytext);printf("%s",yytext);}
"\\'"					{coluna += strlen(yytext);printf("%s",yytext);}
"\\\""					{coluna += strlen(yytext);printf("%s",yytext);}
"\\?"					{coluna += strlen(yytext);printf("%s",yytext);}
"\\0"					{coluna += strlen(yytext);printf("%s",yytext);}
"'"					{coluna ++;printf(")");BEGIN INITIAL;}
"."					{coluna ++;printf("%s",yytext);}
}
%%

int main(int argc,char **argv)
{
	yylex();
	return 0;
}

