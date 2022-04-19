/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_SINTATICO_TAB_H_INCLUDED
# define YY_YY_SINTATICO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    HASH = 258,
    DEFINE = 259,
    ABRECHAVE = 260,
    FECHACHAVE = 261,
    ASTERISCO = 262,
    SEMICOLON = 263,
    COMMA = 264,
    ABRECOL = 265,
    FECHACOL = 266,
    ASSIGN = 267,
    ABREPAR = 268,
    FECHAPAR = 269,
    IDENTIFICADOR = 270,
    INT = 271,
    CHAR = 272,
    VOID = 273,
    DO = 274,
    WHILE = 275,
    IF = 276,
    ELSE = 277,
    FOR = 278,
    PRINTF = 279,
    STRING = 280,
    SCANF = 281,
    BITWISE_AND = 282,
    EXIT = 283,
    RETURN = 284,
    ADD_ASSIGN = 285,
    MINUS_ASSIGN = 286,
    TERNARY_CONDITIONAL = 287,
    COLON = 288,
    LOGICALAND = 289,
    BITWISE_OR = 290,
    LOGICALOR = 291,
    BITWISE_XOR = 292,
    EQUAL = 293,
    NOT_EQUAL = 294,
    LESS_THAN = 295,
    LESS_EQUAL = 296,
    GREATER_THAN = 297,
    GREATER_EQUAL = 298,
    L_SHIFT = 299,
    R_SHIFT = 300,
    MINUS = 301,
    PLUS = 302,
    DIV = 303,
    REMAINDER = 304,
    INC = 305,
    DEC = 306,
    BITWISE_NOT = 307,
    NOT = 308,
    CARACTER = 309,
    NUM_INTEGER = 310,
    NUM_HEXA = 311,
    NUM_OCTAL = 312,
    BREAK = 313,
    STRUCT = 314,
    POINTER = 315,
    SWITCH = 316,
    CASE = 317,
    DEFAULT = 318,
    TYPEDEF = 319
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATICO_TAB_H_INCLUDED  */
