/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "sintatico.y" /* yacc.c:339  */

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

#line 85 "sintatico.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "sintatico.tab.h".  */
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
    VOID = 258,
    INT = 259,
    CHAR = 260,
    RETURN = 261,
    BREAK = 262,
    SWITCH = 263,
    CASE = 264,
    DEFAULT = 265,
    DO = 266,
    WHILE = 267,
    FOR = 268,
    IF = 269,
    ELSE = 270,
    TYPEDEF = 271,
    STRUCT = 272,
    PLUS = 273,
    MINUS = 274,
    MULTIPLY = 275,
    DIV = 276,
    REMAINDER = 277,
    INC = 278,
    DEC = 279,
    BITWISE_AND = 280,
    BITWISE_OR = 281,
    BITWISE_NOT = 282,
    BITWISE_XOR = 283,
    NOT = 284,
    LOGICAL_AND = 285,
    LOGICAL_OR = 286,
    EQUAL = 287,
    NOT_EQUAL = 288,
    LESS_THAN = 289,
    GREATER_THAN = 290,
    LESS_EQUAL = 291,
    GREATER_EQUAL = 292,
    R_SHIFT = 293,
    L_SHIFT = 294,
    ASSIGN = 295,
    ADD_ASSIGN = 296,
    MINUS_ASSIGN = 297,
    SEMICOLON = 298,
    COMMA = 299,
    COLON = 300,
    L_PAREN = 301,
    R_PAREN = 302,
    L_CURLY_BRACKET = 303,
    L_SQUARE_BRACKET = 304,
    R_SQUARE_BRACKET = 305,
    TERNARY_CONDITIONAL = 306,
    NUMBER_SIGN = 307,
    POINTER = 308,
    PRINTF = 309,
    SCANF = 310,
    DEFINE = 311,
    EXIT = 312,
    ID = 313,
    NUM_OCTAL = 314,
    NUM_INTEGER = 315,
    NUM_HEXA = 316,
    STRING = 317,
    CHARACTER = 318,
    R_CURLY_BRACKET = 319,
    END_OF_FILE = 320,
    UNTERMINATED_COMMENT = 321,
    LEXICAL_ERROR = 322,
    ERRO_HASH = 323
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 19 "sintatico.y" /* yacc.c:355  */

    int inteiro;
    char *str;
    pro *programa;
    node *no;
    fun *function;
    cmd  *comando;
    int var[2];
    par *para;
    identi *id;

#line 206 "sintatico.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATICO_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 223 "sintatico.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   328

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  229

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   108,   108,   121,   124,   130,   131,   135,   137,   140,
     144,   181,   182,   186,   192,   196,   202,   214,   230,   231,
     235,   236,   240,   246,   250,   285,   291,   299,   308,   312,
     320,   331,   334,   335,   339,   343,   350,   360,   367,   375,
     383,   390,   399,   402,   408,   409,   415,   422,   428,   431,
     437,   438,   446,   447,   455,   462,   469,   479,   480,   492,
     493,   503,   510,   514,   521,   525,   532,   536,   543,   547,
     553,   557,   562,   571,   572,   581,   588,   595,   602,   612,
     613,   620,   630,   631,   638,   648,   649,   656,   663,   673,
     674,   684,   685,   692,   699,   706,   713,   720,   727,   734,
     744,   747,   751,   758,   765,   776,   777,   781,   786,   794,
     800,   803,   809,   816,   822,   830,   838
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "INT", "CHAR", "RETURN", "BREAK",
  "SWITCH", "CASE", "DEFAULT", "DO", "WHILE", "FOR", "IF", "ELSE",
  "TYPEDEF", "STRUCT", "PLUS", "MINUS", "MULTIPLY", "DIV", "REMAINDER",
  "INC", "DEC", "BITWISE_AND", "BITWISE_OR", "BITWISE_NOT", "BITWISE_XOR",
  "NOT", "LOGICAL_AND", "LOGICAL_OR", "EQUAL", "NOT_EQUAL", "LESS_THAN",
  "GREATER_THAN", "LESS_EQUAL", "GREATER_EQUAL", "R_SHIFT", "L_SHIFT",
  "ASSIGN", "ADD_ASSIGN", "MINUS_ASSIGN", "SEMICOLON", "COMMA", "COLON",
  "L_PAREN", "R_PAREN", "L_CURLY_BRACKET", "L_SQUARE_BRACKET",
  "R_SQUARE_BRACKET", "TERNARY_CONDITIONAL", "NUMBER_SIGN", "POINTER",
  "PRINTF", "SCANF", "DEFINE", "EXIT", "ID", "NUM_OCTAL", "NUM_INTEGER",
  "NUM_HEXA", "STRING", "CHARACTER", "R_CURLY_BRACKET", "END_OF_FILE",
  "UNTERMINATED_COMMENT", "LEXICAL_ERROR", "ERRO_HASH", "$accept", "start",
  "program", "programAux", "declarations", "function", "pointer", "varAux",
  "varDeclaration", "varDeclarationAux", "expressionAux", "expressionAuxB",
  "atribAux", "protoDeclaration", "parameters", "parametersAux",
  "parametersAuxB", "type", "block", "commands", "commandsList",
  "expression", "atribExpression", "operator", "conditionalExpression",
  "logicalOR", "logicalAND", "or", "xor", "and", "equalityExpression",
  "comparison", "relationalExpression", "comparisonAux", "shiftExpression",
  "aditiveExpression", "multiplyExpression", "castExpression",
  "unaryExpression", "postfixExpression", "atribExpressionAux",
  "atribExpressionAuxB", "primaryExpression", "number", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323
};
# endif

#define YYPACT_NINF -155

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-155)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      23,  -155,  -155,  -155,   -41,    24,   -27,    23,    23,  -155,
    -155,    26,     3,  -155,  -155,  -155,  -155,  -155,    26,     5,
      40,   247,  -155,    -7,  -155,   247,   247,   247,   265,   265,
     247,   247,   247,   143,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,    50,  -155,    34,    62,    66,    71,    70,    74,    41,
       0,    43,    69,    10,     9,    -5,  -155,  -155,    49,   247,
      60,   -26,  -155,  -155,  -155,  -155,   247,  -155,  -155,  -155,
    -155,  -155,    26,    54,   247,   247,   247,   247,   247,   247,
     247,  -155,  -155,   247,  -155,  -155,  -155,  -155,   247,   247,
     247,   247,   247,   247,   247,   247,  -155,  -155,  -155,   247,
    -155,  -155,   247,   247,    55,    26,    53,   247,    61,  -155,
      49,    57,  -155,  -155,    63,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
      65,    59,  -155,    64,  -155,    52,  -155,  -155,    26,   201,
      49,    26,   247,   247,   247,  -155,  -155,    75,    67,  -155,
     247,    78,    77,    89,    90,  -155,   201,    92,    93,    94,
    -155,    47,   201,    98,  -155,  -155,  -155,  -155,    68,    75,
      99,  -155,   101,   247,   247,   247,    80,    83,    87,   247,
    -155,  -155,  -155,    49,  -155,   105,   106,   109,   108,  -155,
       1,   113,   111,  -155,    26,   247,    78,   247,    78,   247,
     116,   139,   122,   115,   124,  -155,   126,   159,   128,  -155,
     119,  -155,    75,   135,   247,    78,   136,   138,   142,  -155,
     140,  -155,  -155,   145,    49,    78,  -155,  -155,  -155
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    33,    31,    32,     0,     0,     0,     6,     6,     8,
       9,    12,     0,     1,     2,     5,     3,     4,    12,     0,
       0,     0,    11,    19,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   109,   116,   114,   115,   112,   111,
       7,    50,    52,    57,    59,    62,    64,    66,    68,    70,
      73,    79,    82,    85,    89,    91,   100,   110,    28,     0,
      23,     0,    96,    89,    97,    95,     0,    92,    93,    94,
      98,    99,    12,     0,     0,     0,     0,     0,     0,     0,
       0,    71,    72,     0,    75,    77,    76,    78,     0,     0,
       0,     0,     0,     0,     0,     0,    54,    55,    56,     0,
     102,   103,   106,     0,     0,    12,     0,     0,    16,    24,
      14,     0,   113,    51,     0,    60,    61,    63,    65,    67,
      69,    74,    81,    80,    84,    83,    87,    86,    88,    53,
     108,     0,   105,     0,    25,     0,    18,    22,    12,     0,
      14,    12,     0,     0,     0,   104,   101,    19,     0,    17,
      21,     0,     0,     0,     0,    48,     0,     0,     0,     0,
      49,     0,    36,     0,    13,    90,    58,   107,    26,    19,
       0,    20,     0,     0,    21,     0,     0,     0,     0,     0,
      10,    35,    47,     0,    46,     0,     0,     0,     0,    34,
       0,     0,     0,    27,    12,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    40,     0,    38,     0,    42,
       0,    45,    19,     0,    21,     0,     0,     0,    29,    37,
       0,    39,    43,     0,     0,     0,    44,    30,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -155,  -155,   183,   182,  -155,  -155,   -10,    56,  -107,    72,
    -140,  -154,  -155,  -155,  -155,  -155,   -32,   -33,  -139,  -133,
    -155,   -19,   -86,  -155,    51,   117,   118,   120,   121,   129,
     114,  -155,   123,  -155,     2,    -2,   -15,   -21,    39,  -155,
    -155,    73,  -155,  -155
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,    15,    16,     7,     8,   148,   139,     9,    20,
      60,   170,   108,    10,    61,   104,   193,    11,   160,   161,
     162,   171,    41,    99,    42,    43,    44,    45,    46,    47,
      48,    83,    49,    88,    50,    51,    52,    53,    54,    55,
     131,   132,    56,    57
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      72,    19,    40,   140,    62,    64,    65,   168,    22,    69,
      70,    71,   172,   129,    73,    12,   130,   109,   100,   101,
     187,   137,   110,   176,    13,   105,     1,     2,     3,   181,
      93,    94,    95,   140,    84,    85,    86,    87,    14,    58,
     106,   102,    59,   206,   103,   199,    18,    73,   200,    96,
      97,    98,     1,     2,     3,   113,   114,   205,   130,   207,
     220,    21,   111,    23,    63,    63,    63,    67,    68,    63,
      63,    63,   218,    81,    82,     4,   221,   141,   126,   127,
     128,    89,    90,    24,   133,    75,   228,    91,    92,   124,
     125,   122,   123,    76,    74,   135,    77,    78,    79,    80,
     107,   112,   134,   136,   142,   138,   145,   141,   143,   144,
     147,   180,   183,   185,   146,    63,    63,    63,    63,    63,
     163,   165,    63,   173,    59,   169,   156,    63,    63,    63,
      63,    63,    63,    63,    63,   174,   175,   163,   177,   178,
     179,   182,   184,   163,   189,   190,     1,     2,     3,   191,
     194,   195,   197,   196,   186,   198,   188,   201,   202,   209,
     192,    25,    26,    27,   210,   211,    28,    29,    30,   214,
      31,   213,    32,   212,   215,   216,   204,   217,   219,   222,
     208,    63,    63,     6,   203,   223,   224,   225,   226,    33,
      17,   194,   227,   115,   166,   116,   164,   120,   117,     0,
     118,    34,    35,    36,    37,    38,    39,   150,     0,   119,
     149,   121,   151,   152,   153,   154,     0,   167,     0,    25,
      26,    27,     0,     0,    28,    29,    30,     0,    31,     0,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   155,     0,     0,    33,     0,   156,
       0,     0,     0,     0,     0,   157,   158,     0,   159,    34,
      35,    36,    37,    38,    39,    25,    26,    27,     0,     0,
      28,    29,    30,     0,    31,     0,    32,     0,     0,     0,
       0,     0,     0,    25,    26,    27,     0,     0,    28,    29,
      30,     0,    31,    33,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    35,    36,    37,    38,
      39,    66,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36,    37,    38,    39
};

static const yytype_int16 yycheck[] =
{
      33,    11,    21,   110,    25,    26,    27,   147,    18,    30,
      31,    32,   151,    99,    33,    56,   102,    43,    23,    24,
     174,   107,    48,   156,     0,    58,     3,     4,     5,   162,
      20,    21,    22,   140,    34,    35,    36,    37,    65,    46,
      59,    46,    49,   197,    49,    44,    20,    66,    47,    40,
      41,    42,     3,     4,     5,    74,    75,   196,   144,   198,
     214,    58,    72,    58,    25,    26,    27,    28,    29,    30,
      31,    32,   212,    32,    33,    52,   215,   110,    93,    94,
      95,    38,    39,    43,   103,    51,   225,    18,    19,    91,
      92,    89,    90,    31,    44,   105,    30,    26,    28,    25,
      40,    47,    47,    50,    47,    44,    47,   140,    45,    44,
      58,    64,    44,    12,    50,    76,    77,    78,    79,    80,
     139,   142,    83,    46,    49,    58,    48,    88,    89,    90,
      91,    92,    93,    94,    95,    46,    46,   156,    46,    46,
      46,    43,    43,   162,    64,    62,     3,     4,     5,    62,
     183,    46,    43,    47,   173,    47,   175,    44,    47,    43,
     179,    18,    19,    20,    25,    43,    23,    24,    25,    43,
      27,    47,    29,    58,    15,    47,   195,    58,    43,    43,
     199,   142,   143,     0,   194,    47,    44,    47,    43,    46,
       8,   224,   224,    76,   143,    77,   140,    83,    78,    -1,
      79,    58,    59,    60,    61,    62,    63,     6,    -1,    80,
     138,    88,    11,    12,    13,    14,    -1,   144,    -1,    18,
      19,    20,    -1,    -1,    23,    24,    25,    -1,    27,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    18,    19,    20,    -1,    -1,
      23,    24,    25,    -1,    27,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    19,    20,    -1,    -1,    23,    24,
      25,    -1,    27,    46,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      63,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    62,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    52,    70,    71,    73,    74,    77,
      82,    86,    56,     0,    65,    71,    72,    72,    20,    75,
      78,    58,    75,    58,    43,    18,    19,    20,    23,    24,
      25,    27,    29,    46,    58,    59,    60,    61,    62,    63,
      90,    91,    93,    94,    95,    96,    97,    98,    99,   101,
     103,   104,   105,   106,   107,   108,   111,   112,    46,    49,
      79,    83,   106,   107,   106,   106,    46,   107,   107,   106,
     106,   106,    86,    90,    44,    51,    31,    30,    26,    28,
      25,    32,    33,   100,    34,    35,    36,    37,   102,    38,
      39,    18,    19,    20,    21,    22,    40,    41,    42,    92,
      23,    24,    46,    49,    84,    86,    90,    40,    81,    43,
      48,    75,    47,    90,    90,    94,    95,    96,    97,    98,
      99,   101,   103,   103,   104,   104,   105,   105,   105,    91,
      91,   109,   110,    90,    47,    75,    50,    91,    44,    76,
      77,    86,    47,    45,    44,    47,    50,    58,    75,    78,
       6,    11,    12,    13,    14,    43,    48,    54,    55,    57,
      87,    88,    89,    90,    76,   106,    93,   110,    79,    58,
      80,    90,    87,    46,    46,    46,    88,    46,    46,    46,
      64,    88,    43,    44,    43,    12,    90,    80,    90,    64,
      62,    62,    90,    85,    86,    46,    47,    43,    47,    44,
      47,    44,    47,    75,    90,    87,    80,    87,    90,    43,
      25,    43,    58,    47,    43,    15,    47,    58,    79,    43,
      80,    87,    43,    47,    44,    47,    43,    85,    87
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    71,    71,    72,    72,    73,    73,    73,
      74,    75,    75,    76,    76,    77,    78,    78,    79,    79,
      80,    80,    81,    81,    82,    83,    84,    84,    84,    85,
      85,    86,    86,    86,    87,    88,    88,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      90,    90,    91,    91,    92,    92,    92,    93,    93,    94,
      94,    95,    95,    96,    96,    97,    97,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   102,   102,   103,
     103,   103,   104,   104,   104,   105,   105,   105,   105,   106,
     106,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     108,   108,   108,   108,   108,   109,   109,   110,   110,   111,
     111,   111,   111,   111,   112,   112,   112
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     0,     4,     1,     1,
       8,     2,     0,     2,     0,     3,     4,     6,     3,     0,
       1,     0,     2,     0,     5,     3,     4,     6,     0,     4,
       6,     1,     1,     1,     3,     2,     1,     7,     5,     7,
       5,     9,     5,     7,     8,     5,     3,     2,     1,     1,
       1,     3,     1,     3,     1,     1,     1,     1,     5,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       5,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     4,     2,     2,     4,     1,     0,     3,     1,     1,
       1,     1,     1,     3,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 108 "sintatico.y" /* yacc.c:1646  */
    {
        printf("SUCCESSFUL COMPILATION.\n");
        fun *function = programa->lista_de_funcoes;
        while(function != NULL){
            printf("%s\n",function->nome);
            function = function->next;
        }
        return 0;
}
#line 1500 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 121 "sintatico.y" /* yacc.c:1646  */
    { 
            printf("declarado\n");
        }
#line 1508 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 124 "sintatico.y" /* yacc.c:1646  */
    { 
            printf("função\n");
        }
#line 1516 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 130 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1522 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 131 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1528 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 135 "sintatico.y" /* yacc.c:1646  */
    {//# DEFINE NOME/ID 
        }
#line 1535 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 137 "sintatico.y" /* yacc.c:1646  */
    {
        programa->exp = (yyvsp[0].no);
    }
#line 1543 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 140 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1549 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 144 "sintatico.y" /* yacc.c:1646  */
    {
            cont++;
            fun* func = (fun*)malloc(sizeof(fun));
            strcpy(func->nome,(yyvsp[-5].id));
            func->symbolTable = (controle*)malloc(sizeof(controle));
            int i = 0;
            while(i< 211){
                func->symbolTable->hash[i] = programa->globalSymbolTable->hash[i];
                i++;
            }   
            func->parametro = (yyvsp[-4].para);
            func->retorno = (yyvsp[-7].inteiro);
            func->prototipo = 0;
            func->lista_de_comandos = (yyvsp[-1].comando);
            func->next = NULL;
            fun *funclist = programa->lista_de_funcoes;
            if(funclist == NULL){
                programa->lista_de_funcoes = func;
            }
            else{
                while(funclist->next != NULL){
                    if(strcmp(funclist->nome,(yyvsp[-5].id)) ==  0){
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
#line 1588 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 181 "sintatico.y" /* yacc.c:1646  */
    {(yyval.inteiro) = (yyvsp[0].inteiro)+1;}
#line 1594 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 182 "sintatico.y" /* yacc.c:1646  */
    {(yyval.inteiro) = 1;}
#line 1600 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 186 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (yyvsp[-1].no);
            if(no != NULL)
                no->prox = (yyvsp[0].no);
            (yyval.no) = no;
        }
#line 1611 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 192 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = NULL;}
#line 1617 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 196 "sintatico.y" /* yacc.c:1646  */
    {
            (yyval.no) = (yyvsp[-1].no);
        }
#line 1625 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 202 "sintatico.y" /* yacc.c:1646  */
    {
            identi *ide = (yyvsp[-2].id);
            node *no = (yyvsp[0].no);
            if(no != NULL){
                no->esquerdo = (yyvsp[-1].no);
                (yyval.no) = no;
            }
            else{
                no = (yyvsp[-1].no);
                (yyval.no) = no;
            }
        }
#line 1642 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 214 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (yyvsp[-2].no);
            if(no != NULL){
                no->esquerdo = (yyvsp[-3].no);
                no->prox = (yyvsp[0].no);
                (yyval.no) = no;
            }
            else{
                no = (yyvsp[-3].no);
                no->prox = (yyvsp[0].no);
                (yyval.no) = no;
            }
    }
#line 1660 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 230 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no);}
#line 1666 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 231 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = NULL;}
#line 1672 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 235 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1678 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 236 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = NULL;}
#line 1684 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 240 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 7;
            no->direito = (yyvsp[0].no);
            (yyval.no) = no;
        }
#line 1695 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 246 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = NULL;}
#line 1701 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 250 "sintatico.y" /* yacc.c:1646  */
    {
            identi *ide = (yyvsp[-2].id);
            fun* func = (fun*)malloc(sizeof(fun));
            strcpy(func->nome,ide->nome);
            func->symbolTable = (controle*)malloc(sizeof(controle));
            int i = 0;
            while(i< 211){
                func->symbolTable->hash[i] = programa->globalSymbolTable->hash[i];
                i++;
            }   
            func->parametro = (yyvsp[-1].para);
            func->retorno = (yyvsp[-4].inteiro);
            func->prototipo = 1;
            func->lista_de_comandos = NULL;
            func->next = NULL;
            fun *funclist = programa->lista_de_funcoes;
            if(funclist == NULL){
                programa->lista_de_funcoes = func;
            }
            else{
                while(funclist->next != NULL){
                    if(strcmp(funclist->nome,(yyvsp[-2].id)) ==  0){
                        printf("Erro\n"); 
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
#line 1739 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 285 "sintatico.y" /* yacc.c:1646  */
    {
            (yyval.para) = (yyvsp[-1].para);
}
#line 1747 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 291 "sintatico.y" /* yacc.c:1646  */
    {
            identi *ide = (yyvsp[-1].id);
            par* parametro = (par*)malloc(sizeof(par));
            strcpy(parametro->nome,ide->nome);
            parametro->tipo = (yyvsp[-3].inteiro);
            parametro->ponteiro = (yyvsp[-2].inteiro);
            (yyval.para) = parametro;
        }
#line 1760 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 299 "sintatico.y" /* yacc.c:1646  */
    {
            identi *ide = (yyvsp[-3].id);
            par* parametro = (par*)malloc(sizeof(par));
            strcpy(parametro->nome,ide->nome);
            parametro->tipo = (yyvsp[-5].inteiro);
            parametro->ponteiro = (yyvsp[-4].inteiro);
            parametro->prox = (yyvsp[0].para);
            (yyval.para) = parametro;
    }
#line 1774 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 308 "sintatico.y" /* yacc.c:1646  */
    {    }
#line 1780 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 312 "sintatico.y" /* yacc.c:1646  */
    {
            par * parametro = (par*)malloc(sizeof(par*));
            strcpy(parametro->nome,(yyvsp[-1].id));
            parametro->tipo = (yyvsp[-3].inteiro);
            parametro->ponteiro = (yyvsp[-2].inteiro);
            parametro->prox = NULL;
            (yyval.para) = parametro;
        }
#line 1793 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 320 "sintatico.y" /* yacc.c:1646  */
    {
            par * parametro = (par*)malloc(sizeof(par*));
            strcpy(parametro->nome,(yyvsp[-3].id));
            parametro->tipo = (yyvsp[-5].inteiro);
            parametro->ponteiro = (yyvsp[-4].inteiro);
            parametro->prox = (yyvsp[0].para);
            (yyval.para) = parametro;
    }
#line 1806 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 331 "sintatico.y" /* yacc.c:1646  */
    {
            (yyval.inteiro) = 1;
        }
#line 1814 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 334 "sintatico.y" /* yacc.c:1646  */
    {tipo = 2;}
#line 1820 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 335 "sintatico.y" /* yacc.c:1646  */
    {tipo = 3;}
#line 1826 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 339 "sintatico.y" /* yacc.c:1646  */
    {(yyval.comando) = (yyvsp[-1].comando);}
#line 1832 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 343 "sintatico.y" /* yacc.c:1646  */
    {
            cmd *command = (yyvsp[-1].comando);
            if(command == NULL)
                (yyval.comando) = (yyvsp[0].comando);
            command->next = (yyvsp[0].comando);
            (yyval.comando) = command;
        }
#line 1844 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 350 "sintatico.y" /* yacc.c:1646  */
    {
            cmd *command = (yyvsp[0].comando);
            if(command == NULL)
                (yyval.comando) = NULL;
            command->next = NULL;
            (yyval.comando) = command;
    }
#line 1856 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 360 "sintatico.y" /* yacc.c:1646  */
    {
        cmd *command = (cmd*)malloc(sizeof(cmd));
        command->type = 4;
        command->exp = (yyvsp[-2].no);
        command->whil = (yyvsp[-5].comando);
        (yyval.comando) = command;
        }
#line 1868 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 367 "sintatico.y" /* yacc.c:1646  */
    {
        cmd *command = (cmd*)malloc(sizeof(cmd));
        command->type = 1;
        command->exp = (yyvsp[-2].no);
        command->then = (yyvsp[0].comando);
        command->els = NULL;
        (yyval.comando) = command;
    }
#line 1881 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 375 "sintatico.y" /* yacc.c:1646  */
    {
        cmd *command = (cmd*)malloc(sizeof(cmd));
        command->type = 1;
        command->exp = (yyvsp[-4].no);
        command->then = (yyvsp[-2].comando);
        command->els = (yyvsp[0].comando);
        (yyval.comando) = command;
    }
#line 1894 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 383 "sintatico.y" /* yacc.c:1646  */
    {
        cmd *command = (cmd*)malloc(sizeof(cmd));
        command->type = 2;
        command->exp = (yyvsp[-2].no);
        command->whil = (yyvsp[0].comando);
        (yyval.comando) = command;
    }
#line 1906 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 390 "sintatico.y" /* yacc.c:1646  */
    {
        cmd *command = (cmd*)malloc(sizeof(cmd));
        command->type = 3;
        command->for1 = (yyvsp[-6].no);
        command->for2 = (yyvsp[-4].no);
        command->for3 = (yyvsp[-2].no);
        command->for0 = (yyvsp[0].comando);
        (yyval.comando) = command;
    }
#line 1920 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 399 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.comando) = NULL;
    }
#line 1928 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 402 "sintatico.y" /* yacc.c:1646  */
    {
        cmd *command = (cmd*)malloc(sizeof(cmd));
        command->type = 10;
        command->exp = (yyvsp[-2].no);
        (yyval.comando) = command;
    }
#line 1939 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 408 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1945 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 409 "sintatico.y" /* yacc.c:1646  */
    {
        cmd *command = (cmd*)malloc(sizeof(cmd));
        command->type = 11;
        command->exp = (yyvsp[-2].no);
        (yyval.comando) = command;
    }
#line 1956 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 415 "sintatico.y" /* yacc.c:1646  */
    {
        //tipo de retorno
        cmd *command = (cmd*)malloc(sizeof(cmd));
        command->type = 9;
        command->exp = (yyvsp[-1].no);
        (yyval.comando) = command;
    }
#line 1968 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 422 "sintatico.y" /* yacc.c:1646  */
    {
        cmd *command = (cmd*)malloc(sizeof(cmd));
        command->type = 8;
        command->exp = (yyvsp[-1].no);
        (yyval.comando) = command;
    }
#line 1979 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 428 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.comando) = NULL;
    }
#line 1987 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 431 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.comando) = (yyvsp[0].comando);
    }
#line 1995 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 437 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2001 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 438 "sintatico.y" /* yacc.c:1646  */
    {
        node *no = (yyvsp[-2].no);
        no->prox = (yyvsp[0].no);
        (yyval.no) = no;
    }
#line 2011 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 446 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2017 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 447 "sintatico.y" /* yacc.c:1646  */
    {
        node *no = (yyvsp[-1].no);
        no->direito = (yyvsp[0].no);
        no->esquerdo = (yyvsp[-2].no);
    }
#line 2027 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 455 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 7;
            no->direito = NULL;
            no->esquerdo = NULL;
            (yyval.no) = no;
        }
#line 2039 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 462 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 8;
            no->direito = NULL;
            no->esquerdo = NULL;
            (yyval.no) = no;
        }
#line 2051 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 469 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 9;
            no->direito = NULL;
            no->esquerdo = NULL;
            (yyval.no) = no;
        }
#line 2063 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 479 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2069 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 480 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (yyvsp[-4].no);
            no->exp = 28;
            no->prox = (yyvsp[-2].no);
            node *noaux = (yyvsp[-2].no);
            noaux->prox = (yyvsp[0].no);
            (yyval.no) = no;
    }
#line 2082 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 492 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2088 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 493 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 11;
            no->direito = (yyvsp[0].no);
            no->esquerdo = (yyvsp[-2].no);
            (yyval.no) = no;
    }
#line 2100 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 503 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 10;
            no->direito = (yyvsp[0].no);
            no->esquerdo = (yyvsp[-2].no);
            (yyval.no) = no;
        }
#line 2112 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 510 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2118 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 514 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 12;
            no->direito = (yyvsp[0].no);
            no->esquerdo = (yyvsp[-2].no);
            (yyval.no) = no;
        }
#line 2130 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 521 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2136 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 525 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 13;
            no->direito = (yyvsp[0].no);
            no->esquerdo = (yyvsp[-2].no);
            (yyval.no) = no;
        }
#line 2148 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 532 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2154 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 536 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 14;
            no->direito = (yyvsp[0].no);
            no->esquerdo = (yyvsp[-2].no);
            (yyval.no) = no;
        }
#line 2166 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 543 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2172 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 547 "sintatico.y" /* yacc.c:1646  */
    {
            node* exp = (yyvsp[-1].no);
            exp->direito = (yyvsp[-2].no);
            exp->esquerdo = (yyvsp[0].no);
            (yyval.no) = exp;
        }
#line 2183 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 553 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2189 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 557 "sintatico.y" /* yacc.c:1646  */
    { 
            node* exp = (node*)malloc(sizeof(node));
            exp->exp = 3;
            strcpy(exp->nome,"EQUAL");
            (yyval.no) = exp;}
#line 2199 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 562 "sintatico.y" /* yacc.c:1646  */
    {
            node* exp = (node*)malloc(sizeof(node));
            exp->exp = 4;
            strcpy(exp->nome,"NOT_EQUAL");
            (yyval.no) = exp;
    }
#line 2210 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 571 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2216 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 572 "sintatico.y" /* yacc.c:1646  */
    {
            node* exp = (yyvsp[-1].no);
            exp->direito = (yyvsp[-2].no);
            exp->esquerdo = (yyvsp[0].no);
            (yyval.no) = exp;
    }
#line 2227 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 581 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 15;
            no->direito = NULL;
            no->esquerdo = NULL;
            (yyval.no) = no;
        }
#line 2239 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 588 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 16;
            no->direito = NULL;
            no->esquerdo = NULL;
            (yyval.no) = no;
    }
#line 2251 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 595 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 17;
            no->direito = NULL;
            no->esquerdo = NULL;
            (yyval.no) = no;
    }
#line 2263 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 602 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 18;
            no->direito = NULL;
            no->esquerdo = NULL;
            (yyval.no) = no;
    }
#line 2275 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 612 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2281 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 613 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 19;
            no->direito = (yyvsp[0].no);
            no->esquerdo = (yyvsp[-2].no);
            (yyval.no) = no;
    }
#line 2293 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 620 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 20;
            no->direito = (yyvsp[0].no);
            no->esquerdo = (yyvsp[-2].no);
            (yyval.no) = no;
    }
#line 2305 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 630 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2311 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 631 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 21;
            no->direito = (yyvsp[0].no);
            no->esquerdo = (yyvsp[-2].no);
            (yyval.no) = no;
    }
#line 2323 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 638 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 22;
            no->direito = (yyvsp[0].no);
            no->esquerdo = (yyvsp[-2].no);
            (yyval.no) = no;
    }
#line 2335 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 648 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2341 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 649 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 23;
            no->direito = (yyvsp[0].no);
            no->esquerdo = (yyvsp[-2].no);
            (yyval.no) = no;
    }
#line 2353 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 656 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 24;
            no->direito = (yyvsp[0].no);
            no->esquerdo = (yyvsp[-2].no);
            (yyval.no) = no;
    }
#line 2365 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 663 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 25;
            no->direito = (yyvsp[0].no);
            no->esquerdo = (yyvsp[-2].no);
            (yyval.no) = no;
    }
#line 2377 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 673 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2383 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 674 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 26;
            no->direito = (yyvsp[0].no);
            no->esquerdo = NULL;
            (yyval.no) = no;
    }
#line 2395 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 684 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2401 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 685 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 27;
            no->direito = (yyvsp[0].no);
            no->esquerdo = NULL;
            (yyval.no) = no;
    }
#line 2413 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 692 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 28;
            no->direito = (yyvsp[0].no);
            no->esquerdo = NULL;
            (yyval.no) = no;
    }
#line 2425 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 699 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 29;
            no->direito = (yyvsp[0].no);
            no->esquerdo = NULL;
            (yyval.no) = no;
    }
#line 2437 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 706 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 30;
            no->direito = (yyvsp[0].no);
            no->esquerdo = NULL;
            (yyval.no) = no;
    }
#line 2449 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 713 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 31;
            no->direito = (yyvsp[0].no);
            no->esquerdo = NULL;
            (yyval.no) = no;
    }
#line 2461 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 720 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 32;
            no->direito = (yyvsp[0].no);
            no->esquerdo = NULL;
            (yyval.no) = no;
    }
#line 2473 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 727 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 33;
            no->direito = (yyvsp[0].no);
            no->esquerdo = NULL;
            (yyval.no) = no;
    }
#line 2485 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 734 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 34;
            no->direito = (yyvsp[0].no);
            no->esquerdo = NULL;
            (yyval.no) = no;
    }
#line 2497 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 744 "sintatico.y" /* yacc.c:1646  */
    {
            (yyval.no) = (yyvsp[0].no);
        }
#line 2505 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 747 "sintatico.y" /* yacc.c:1646  */
    {
            //array

    }
#line 2514 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 751 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 27;
            no->direito = (yyvsp[-1].no);
            no->esquerdo = NULL;
            (yyval.no) = no;
        }
#line 2526 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 758 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 28;
            no->direito = (yyvsp[-1].no);
            no->esquerdo = NULL;
            (yyval.no) = no;
        }
#line 2538 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 765 "sintatico.y" /* yacc.c:1646  */
    {
                //chamada função
            node *no = (node*)malloc(sizeof(node));
            no->exp = 35;
            no->direito = (yyvsp[-1].no);
            no->esquerdo = NULL;
            (yyval.no) = no;
    }
#line 2551 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 776 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2557 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 777 "sintatico.y" /* yacc.c:1646  */
    {(yyval.no) = NULL;}
#line 2563 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 781 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (yyvsp[-2].no);
            no->prox = (yyvsp[0].no);
            (yyval.no) = no;
        }
#line 2573 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 786 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (yyvsp[0].no);
            no->prox = NULL;
            (yyval.no)  = no;
    }
#line 2583 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 794 "sintatico.y" /* yacc.c:1646  */
    { 
            node* exp = (node*)malloc(sizeof(node));
            exp->exp = 36;
            strcpy(exp->nome,(yyvsp[0].id));
            (yyval.no) = exp;   
        }
#line 2594 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 800 "sintatico.y" /* yacc.c:1646  */
    {
            (yyval.no) = (yyvsp[0].no); 
        }
#line 2602 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 803 "sintatico.y" /* yacc.c:1646  */
    {
            node* exp = (node*)malloc(sizeof(node));
            exp->exp = 2;
            strcpy(exp->nome,(yyvsp[0].str));
            (yyval.no) = exp; 
        }
#line 2613 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 809 "sintatico.y" /* yacc.c:1646  */
    {
                //com ponteiro
            node* exp = (node*)malloc(sizeof(node));
            exp->exp = 2;
            strcpy(exp->nome,(yyvsp[0].str));
            (yyval.no) = exp; 
    }
#line 2625 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 816 "sintatico.y" /* yacc.c:1646  */
    {
            (yyval.no) = (yyvsp[-1].no); 
    }
#line 2633 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 822 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 1;
            no->direito = NULL;
            no->esquerdo = NULL;
            strcpy(no->nome,(yyvsp[0].str));
            (yyval.no) = no;
        }
#line 2646 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 830 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 1;
            no->direito = NULL;
            no->esquerdo = NULL;
            strcpy(no->nome,(yyvsp[0].str));
            (yyval.no) = no;
    }
#line 2659 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 838 "sintatico.y" /* yacc.c:1646  */
    {
            node *no = (node*)malloc(sizeof(node));
            no->exp = 1;
            no->direito = NULL;
            no->esquerdo = NULL;
            strcpy(no->nome,(yyvsp[0].str));
            (yyval.no) = no;
    }
#line 2672 "sintatico.tab.c" /* yacc.c:1646  */
    break;


#line 2676 "sintatico.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 848 "sintatico.y" /* yacc.c:1906  */


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
