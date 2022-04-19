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


#include <stdio.h>
#include <string.h>
extern int yylex();
extern char* yytext;
extern int erro;
extern int infoColuna;
extern int coluna;
extern int linha;
void yyerror(char *s);


#line 80 "sintatico.tab.c" /* yacc.c:339  */

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

/* Copy the second part of user declarations.  */

#line 196 "sintatico.tab.c" /* yacc.c:358  */

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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   350

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  273

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      65,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    83,    83,    84,    85,    88,    89,    90,    93,    94,
      95,    98,   101,   102,   105,   106,   109,   112,   113,   116,
     117,   120,   121,   124,   127,   130,   131,   134,   135,   138,
     139,   140,   143,   146,   149,   150,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   166,   167,   170,
     171,   174,   175,   178,   179,   182,   185,   186,   189,   190,
     193,   194,   195,   198,   201,   202,   205,   208,   209,   212,
     215,   216,   219,   222,   223,   226,   229,   230,   233,   236,
     237,   240,   243,   244,   245,   248,   251,   252,   253,   254,
     255,   258,   261,   262,   263,   266,   269,   270,   271,   274,
     277,   278,   279,   280,   283,   284,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   298,   299,   302,   303,   304,
     305,   308,   309,   312,   313,   316,   317,   318,   319,   320,
     323,   324,   325
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "HASH", "DEFINE", "ABRECHAVE",
  "FECHACHAVE", "ASTERISCO", "SEMICOLON", "COMMA", "ABRECOL", "FECHACOL",
  "ASSIGN", "ABREPAR", "FECHAPAR", "IDENTIFICADOR", "INT", "CHAR", "VOID",
  "DO", "WHILE", "IF", "ELSE", "FOR", "PRINTF", "STRING", "SCANF",
  "BITWISE_AND", "EXIT", "RETURN", "ADD_ASSIGN", "MINUS_ASSIGN",
  "TERNARY_CONDITIONAL", "COLON", "LOGICALAND", "BITWISE_OR", "LOGICALOR",
  "BITWISE_XOR", "EQUAL", "NOT_EQUAL", "LESS_THAN", "LESS_EQUAL",
  "GREATER_THAN", "GREATER_EQUAL", "L_SHIFT", "R_SHIFT", "MINUS", "PLUS",
  "DIV", "REMAINDER", "INC", "DEC", "BITWISE_NOT", "NOT", "CARACTER",
  "NUM_INTEGER", "NUM_HEXA", "NUM_OCTAL", "BREAK", "STRUCT", "POINTER",
  "SWITCH", "CASE", "DEFAULT", "TYPEDEF", "'\\n'", "$accept", "sintatico",
  "programa", "declaracoes", "funcao", "a", "b", "variaveis", "e", "c",
  "d", "prototipos", "parametros", "f", "g", "tipo", "bloco", "comandos",
  "h", "lista", "i", "j", "k", "l", "expressao", "m", "atribuicao", "sim",
  "condicional", "n", "orlogico", "o", "andlogico", "p", "or", "q", "xor",
  "r", "and", "s", "igualdade", "t", "relacional", "u", "shift", "v",
  "aditiva", "w", "multiplicativa", "x", "cast", "unaria", "posfixa", "y",
  "z", "aa", "primaria", "numero", YY_NULLPTR
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
     315,   316,   317,   318,   319,    10
};
# endif

#define YYPACT_NINF -230

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-230)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      54,   -60,     7,  -230,  -230,  -230,    19,    50,    50,  -230,
    -230,    14,  -230,    29,  -230,  -230,    50,    50,  -230,    14,
      31,   130,  -230,  -230,  -230,    51,   130,    68,  -230,  -230,
     130,   130,   130,   293,   293,   130,   130,  -230,  -230,  -230,
    -230,  -230,    18,  -230,    16,    42,     1,    45,    55,    67,
      70,   -25,    72,    84,     2,    11,    12,  -230,  -230,   130,
     124,    75,    74,  -230,  -230,    14,    82,  -230,  -230,  -230,
     130,  -230,  -230,  -230,  -230,   130,  -230,   130,  -230,   130,
    -230,   130,  -230,   130,  -230,   130,  -230,   130,  -230,   130,
     130,  -230,   130,   130,   130,   130,  -230,   130,   130,  -230,
     130,   130,  -230,   130,   130,   130,  -230,  -230,  -230,  -230,
     130,   130,   130,  -230,  -230,  -230,    88,    97,    14,   130,
     129,   124,  -230,   119,  -230,    18,   111,    42,     1,    45,
      55,    67,    70,    70,   -25,   -25,   -25,   -25,    72,    72,
      84,    84,     2,     2,     2,  -230,   147,   155,   151,   157,
    -230,   153,  -230,   154,   162,   242,   124,    14,   130,  -230,
     130,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,
    -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,
     130,  -230,  -230,  -230,   157,   157,  -230,   242,  -230,   166,
     159,   160,   161,   175,   179,   180,   130,  -230,   173,   242,
     188,  -230,   182,  -230,  -230,   155,   189,    75,   195,   183,
     130,   130,   130,   177,   181,   130,   196,  -230,  -230,  -230,
     242,  -230,   157,  -230,   124,  -230,   129,  -230,   192,   193,
     194,   204,  -230,   206,   207,   199,  -230,  -230,    14,  -230,
     130,   166,   166,   130,   130,   203,   191,   213,   209,   211,
    -230,   205,   218,  -230,   220,   214,  -230,   157,   222,   166,
    -230,   130,  -230,   217,   189,  -230,  -230,   219,   224,  -230,
     166,  -230,  -230
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    29,    30,    31,     0,     7,     7,     9,
      10,    13,     4,     0,     1,     2,     7,     7,     3,    13,
       0,     0,     5,     6,    12,    20,     0,     0,   125,   128,
       0,     0,     0,     0,     0,     0,     0,   127,   130,   131,
     132,     8,    57,    58,    65,    68,    71,    74,    77,    80,
      84,    90,    94,    98,   103,   104,   106,   115,   126,     0,
      26,    22,     0,   110,   104,    13,     0,   109,   112,   111,
       0,   107,   108,   113,   114,     0,    55,     0,    63,     0,
      66,     0,    69,     0,    72,     0,    75,     0,    78,     0,
       0,    81,     0,     0,     0,     0,    85,     0,     0,    91,
       0,     0,    95,     0,     0,     0,    99,    60,    61,    62,
       0,     0,   122,   117,   118,   116,     0,     0,    13,     0,
      18,    15,    23,     0,   129,    57,     0,    68,    71,    74,
      77,    80,    84,    84,    90,    90,    90,    90,    94,    94,
      98,    98,   103,   103,   103,    59,     0,   124,     0,    20,
      24,     0,    21,     0,     0,     0,    15,    13,     0,    56,
       0,    67,    70,    73,    76,    79,    82,    83,    86,    87,
      88,    89,    92,    93,    96,    97,   100,   101,   102,   120,
       0,   121,   119,    19,    20,    20,    16,     0,    45,     0,
       0,     0,     0,     0,     0,     0,    54,    46,     0,    35,
       0,    14,     0,   105,    64,   124,    28,    22,     0,     0,
       0,     0,    50,     0,     0,     0,     0,    53,    11,    33,
      35,    44,    20,   123,     0,    25,    18,    32,     0,     0,
       0,     0,    49,    52,     0,     0,    43,    34,    13,    17,
       0,     0,     0,    50,     0,     0,     0,     0,     0,     0,
      38,    48,     0,    51,     0,     0,    42,    20,     0,     0,
      37,    50,    40,     0,    28,    36,    47,     0,     0,    27,
       0,    41,    39
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -230,  -230,    57,   234,   235,   -18,    80,  -119,    15,  -145,
      30,  -230,  -230,  -230,   -26,   -24,  -182,    58,    24,  -189,
    -230,  -229,  -230,  -230,    -1,   121,   -67,  -230,    91,  -230,
    -230,   125,   169,   126,   172,   127,   176,   128,   187,   133,
     186,     3,    60,   -30,    34,    13,    56,    20,    62,     4,
      -2,   -21,  -230,  -230,  -230,    69,  -230,  -230
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,    15,    16,    17,    20,   155,     9,   154,    61,
     120,    10,    62,   117,   225,    11,   197,   198,   219,   199,
     260,   231,   245,   216,   200,    76,    42,   110,    43,    78,
      44,    80,    45,    82,    46,    84,    47,    86,    48,    88,
      49,    91,    50,    96,    51,    99,    52,   102,    53,   106,
      54,    64,    56,   115,   148,   181,    57,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      55,    24,   156,    65,   183,    12,    55,   209,   125,   103,
     220,    13,    71,    72,   252,    92,    93,    94,    95,    14,
      41,    19,   111,   107,    63,   112,    66,    75,    67,    68,
      69,   220,   267,    73,    74,    81,   118,   156,    55,   206,
     207,   108,   109,   145,    21,   147,    25,   123,    77,    55,
     104,   105,   152,     2,    55,     1,    55,     2,   116,   250,
     251,    59,   113,   114,    60,    18,     3,     4,     5,    66,
       3,     4,     5,    22,    23,    26,   126,   266,    79,   121,
      83,    27,   122,    28,     3,     4,     5,   119,   272,    55,
      55,    55,    85,    29,    87,    30,   124,   157,    55,   149,
     151,   142,   143,   144,   168,   169,   170,   171,    89,    90,
     146,   150,   264,   205,    31,    32,    97,    98,    33,    34,
      35,    36,    37,    38,    39,    40,   134,   135,   136,   137,
     100,   101,   157,   158,    55,   166,   167,    26,   153,   202,
       3,     4,     5,    27,   160,    28,   176,   177,   178,   132,
     133,   172,   173,   138,   139,    29,   203,    30,   179,    55,
     174,   175,   140,   141,   180,   182,    55,    59,   184,   185,
     186,   187,   210,   211,   212,    55,    31,    32,    55,   218,
      33,    34,    35,    36,    37,    38,    39,    40,   213,    55,
      55,    55,   214,   215,    55,   217,   221,   222,   224,    55,
     238,   227,   233,   228,   236,   240,   234,   241,   242,   229,
     230,   232,   243,   247,   235,   244,   246,   254,   255,    55,
     248,   256,    55,    55,   257,   258,   261,   259,   262,   263,
     265,   268,   271,   270,     7,     8,   201,   226,   269,   249,
      55,   239,   232,   253,   237,   208,   159,   187,   127,    26,
     188,   204,   161,   128,   162,    27,   163,    28,   164,   129,
     232,   189,   190,   191,   165,   192,   193,    29,   194,    30,
     195,   196,   130,   131,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    32,
       0,     0,    33,    34,    35,    36,    37,    38,    39,    40,
      26,     0,     0,     0,     0,     0,    70,     0,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,     0,     0,    33,    34,    35,    36,    37,    38,    39,
      40
};

static const yytype_int16 yycheck[] =
{
      21,    19,   121,    27,   149,    65,    27,   189,    75,     7,
     199,     4,    33,    34,   243,    40,    41,    42,    43,     0,
      21,     7,    10,    12,    26,    13,    27,     9,    30,    31,
      32,   220,   261,    35,    36,    34,    60,   156,    59,   184,
     185,    30,    31,   110,    15,   112,    15,    65,    32,    70,
      48,    49,   119,     3,    75,     1,    77,     3,    59,   241,
     242,    10,    50,    51,    13,     8,    16,    17,    18,    70,
      16,    17,    18,    16,    17,     7,    77,   259,    36,     5,
      35,    13,     8,    15,    16,    17,    18,    12,   270,   110,
     111,   112,    37,    25,    27,    27,    14,   121,   119,    11,
     118,   103,   104,   105,   134,   135,   136,   137,    38,    39,
     111,    14,   257,   180,    46,    47,    44,    45,    50,    51,
      52,    53,    54,    55,    56,    57,    92,    93,    94,    95,
      46,    47,   156,    14,   155,   132,   133,     7,     9,   157,
      16,    17,    18,    13,    33,    15,   142,   143,   144,    89,
      90,   138,   139,    97,    98,    25,   158,    27,    11,   180,
     140,   141,   100,   101,     9,    14,   187,    10,    15,    15,
       8,     5,    13,    13,    13,   196,    46,    47,   199,     6,
      50,    51,    52,    53,    54,    55,    56,    57,    13,   210,
     211,   212,    13,    13,   215,   196,     8,    15,     9,   220,
     224,     6,    25,    20,     8,    13,    25,    14,    14,   210,
     211,   212,     8,    14,   215,     9,     9,    14,    27,   240,
     238,     8,   243,   244,    15,    14,     8,    22,     8,    15,
       8,    14,     8,    14,     0,     0,   156,   207,   264,   240,
     261,   226,   243,   244,   220,   187,   125,     5,    79,     7,
       8,   160,   127,    81,   128,    13,   129,    15,   130,    83,
     261,    19,    20,    21,   131,    23,    24,    25,    26,    27,
      28,    29,    85,    87,   205,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
       7,    -1,    -1,    -1,    -1,    -1,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    16,    17,    18,    67,    69,    70,    73,
      77,    81,    65,     4,     0,    68,    69,    70,    68,     7,
      71,    15,    68,    68,    71,    15,     7,    13,    15,    25,
      27,    46,    47,    50,    51,    52,    53,    54,    55,    56,
      57,    90,    92,    94,    96,    98,   100,   102,   104,   106,
     108,   110,   112,   114,   116,   117,   118,   122,   123,    10,
      13,    75,    78,   116,   117,    81,    90,   116,   116,   116,
      13,   117,   117,   116,   116,     9,    91,    32,    95,    36,
      97,    34,    99,    35,   101,    37,   103,    27,   105,    38,
      39,   107,    40,    41,    42,    43,   109,    44,    45,   111,
      46,    47,   113,     7,    48,    49,   115,    12,    30,    31,
      93,    10,    13,    50,    51,   119,    90,    79,    81,    12,
      76,     5,     8,    71,    14,    92,    90,    98,   100,   102,
     104,   106,   108,   108,   110,   110,   110,   110,   112,   112,
     114,   114,   116,   116,   116,    92,    90,    92,   120,    11,
      14,    71,    92,     9,    74,    72,    73,    81,    14,    91,
      33,    97,    99,   101,   103,   105,   107,   107,   109,   109,
     109,   109,   111,   111,   113,   113,   115,   115,   115,    11,
       9,   121,    14,    75,    15,    15,     8,     5,     8,    19,
      20,    21,    23,    24,    26,    28,    29,    82,    83,    85,
      90,    72,    71,   116,    94,    92,    75,    75,    83,    82,
      13,    13,    13,    13,    13,    13,    89,    90,     6,    84,
      85,     8,    15,   121,     9,    80,    76,     6,    20,    90,
      90,    87,    90,    25,    25,    90,     8,    84,    81,    74,
      13,    14,    14,     8,     9,    88,     9,    14,    71,    90,
      82,    82,    87,    90,    14,    27,     8,    15,    14,    22,
      86,     8,     8,    15,    75,     8,    82,    87,    14,    80,
      14,     8,    82
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    67,    67,    68,    68,    68,    69,    69,
      69,    70,    71,    71,    72,    72,    73,    74,    74,    75,
      75,    76,    76,    77,    78,    79,    79,    80,    80,    81,
      81,    81,    82,    83,    84,    84,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    86,    86,    87,
      87,    88,    88,    89,    89,    90,    91,    91,    92,    92,
      93,    93,    93,    94,    95,    95,    96,    97,    97,    98,
      99,    99,   100,   101,   101,   102,   103,   103,   104,   105,
     105,   106,   107,   107,   107,   108,   109,   109,   109,   109,
     109,   110,   111,   111,   111,   112,   113,   113,   113,   114,
     115,   115,   115,   115,   116,   116,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   118,   118,   119,   119,   119,
     119,   120,   120,   121,   121,   122,   122,   122,   122,   122,
     123,   123,   123
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     0,     4,     1,
       1,     8,     2,     0,     2,     0,     7,     5,     0,     4,
       0,     2,     0,     5,     3,     5,     0,     6,     0,     1,
       1,     1,     3,     2,     2,     0,     7,     6,     5,     9,
       6,     8,     5,     3,     2,     1,     1,     2,     0,     1,
       0,     2,     0,     1,     0,     2,     3,     0,     1,     3,
       1,     1,     1,     2,     4,     0,     2,     3,     0,     2,
       3,     0,     2,     3,     0,     2,     3,     0,     2,     3,
       0,     2,     3,     3,     0,     2,     3,     3,     3,     3,
       0,     2,     3,     3,     0,     2,     3,     3,     0,     2,
       3,     3,     3,     0,     1,     5,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     1,     1,     3,
       3,     2,     0,     3,     0,     1,     1,     1,     1,     3,
       1,     1,     1
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
#line 83 "sintatico.y" /* yacc.c:1646  */
    { printf("SUCCESSFUL COMPILATION."); return 0; }
#line 1489 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 84 "sintatico.y" /* yacc.c:1646  */
    { printf("SUCCESSFUL COMPILATION."); return 0; }
#line 1495 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 88 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1501 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 89 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1507 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 98 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1513 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 101 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1519 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 102 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1525 "sintatico.tab.c" /* yacc.c:1646  */
    break;


#line 1529 "sintatico.tab.c" /* yacc.c:1646  */
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
#line 327 "sintatico.y" /* yacc.c:1906  */


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
