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
    #include "symbol.h"
    Identificador hash;
    extern char* yytext;
    extern int yylex();
    extern int characters;
    extern int totalLines;
    extern int lastLine;
    extern char id[200];
    int tipo = 0;
    void yyerror(char *s);

#line 81 "sintatico.tab.c" /* yacc.c:339  */

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
    LEXICAL_ERROR = 322
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

#line 200 "sintatico.tab.c" /* yacc.c:358  */

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   301

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  228

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   322

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
      65,    66,    67
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    87,    87,    88,    92,    93,    97,    98,    99,   103,
     107,   108,   112,   113,   117,   121,   122,   126,   127,   131,
     132,   136,   137,   141,   144,   148,   149,   150,   154,   155,
     159,   160,   161,   165,   169,   170,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   190,
     191,   195,   196,   200,   201,   202,   206,   207,   212,   213,
     217,   218,   222,   223,   227,   228,   232,   233,   237,   238,
     242,   243,   247,   248,   252,   253,   254,   255,   259,   260,
     261,   265,   266,   267,   271,   272,   273,   274,   278,   279,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   295,
     296,   297,   298,   299,   303,   304,   308,   309,   313,   314,
     315,   316,   317,   321,   322,   323
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
  "UNTERMINATED_COMMENT", "LEXICAL_ERROR", "$accept", "program",
  "programAux", "declarations", "function", "pointer", "varAux",
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
     315,   316,   317,   318,   319,   320,   321,   322
};
# endif

#define YYPACT_NINF -153

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-153)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,  -153,  -153,  -153,   -34,    43,    10,    10,  -153,  -153,
      34,    -2,  -153,  -153,     4,    19,    34,    13,    62,   220,
    -153,  -153,  -153,    -1,  -153,   220,   220,   220,   238,   238,
     220,   220,   220,   106,  -153,  -153,  -153,  -153,  -153,  -153,
    -153,    68,  -153,    24,    82,    84,    89,    88,    92,    -6,
      31,    21,    60,    11,    32,     6,  -153,  -153,    78,   220,
      80,   -24,  -153,  -153,  -153,  -153,   220,  -153,  -153,  -153,
    -153,  -153,    34,    71,   220,   220,   220,  -153,   220,   220,
     220,  -153,  -153,   220,  -153,  -153,  -153,  -153,   220,   220,
     220,   220,   220,   220,   220,   220,  -153,  -153,  -153,   220,
    -153,  -153,   220,   220,    75,    34,    73,   220,    83,  -153,
      78,    81,  -153,  -153,    87,  -153,  -153,  -153,  -153,  -153,
    -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,    90,
      93,  -153,    86,  -153,    79,  -153,  -153,    34,   174,    78,
      34,   220,   220,   220,  -153,  -153,    94,    95,  -153,   220,
      91,    96,    99,   100,  -153,   174,   101,   102,   108,  -153,
      77,   174,   113,  -153,  -153,  -153,  -153,   114,    94,   116,
    -153,   148,   220,   220,   220,    98,   109,   110,   220,  -153,
    -153,  -153,    78,  -153,   117,   123,   130,   127,  -153,     3,
     131,   129,  -153,    34,   220,    91,   220,    91,   220,   135,
     154,   139,   125,   142,  -153,   152,   176,   149,  -153,   144,
    -153,    94,   157,   220,    91,   161,   158,   162,  -153,   160,
    -153,  -153,   165,    78,    91,  -153,  -153,  -153
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    32,    30,    31,     0,     0,     5,     5,     7,     8,
      11,     0,     1,     4,     0,     0,    11,     0,     0,     0,
       2,     3,    10,    18,    14,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   108,   115,   113,   114,   111,   110,
       6,    49,    51,    56,    58,    61,    63,    65,    67,    69,
      72,    78,    81,    84,    88,    90,    99,   109,    27,     0,
      22,     0,    95,    88,    96,    94,     0,    91,    92,    93,
      97,    98,    11,     0,     0,     0,     0,    60,     0,     0,
       0,    70,    71,     0,    74,    76,    75,    77,     0,     0,
       0,     0,     0,     0,     0,     0,    53,    54,    55,     0,
     101,   102,   105,     0,     0,    11,     0,     0,    15,    23,
      13,     0,   112,    50,     0,    59,    62,    64,    66,    68,
      73,    80,    79,    83,    82,    86,    85,    87,    52,   107,
       0,   104,     0,    24,     0,    17,    21,    11,     0,    13,
      11,     0,     0,     0,   103,   100,    18,     0,    16,    20,
       0,     0,     0,     0,    47,     0,     0,     0,     0,    48,
       0,    35,     0,    12,    89,    57,   106,    25,    18,     0,
      19,     0,     0,    20,     0,     0,     0,     0,     0,     9,
      34,    46,     0,    45,     0,     0,     0,     0,    33,     0,
       0,     0,    26,    11,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,    39,     0,    37,     0,    41,     0,
      44,    18,     0,    20,     0,     0,     0,    28,    36,     0,
      38,    42,     0,     0,     0,    43,    29,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -153,   209,   203,  -153,  -153,    -9,    72,   -93,    76,  -135,
    -152,  -153,  -153,  -153,  -153,   -11,   -33,  -144,  -143,  -153,
     -17,   -79,  -153,    74,   138,  -153,   137,   140,   141,   143,
    -153,   136,  -153,     1,    16,     0,   -22,     9,  -153,  -153,
     103,  -153,  -153
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,     6,     7,   147,   138,     8,    18,    60,
     169,   108,     9,    61,   104,   192,    10,   159,   160,   161,
     170,    41,    99,    42,    43,    44,    45,    46,    47,    48,
      83,    49,    88,    50,    51,    52,    53,    54,    55,   130,
     131,    56,    57
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      72,    17,    40,    62,    64,    65,   171,    22,    69,    70,
      71,   167,   175,     1,     2,     3,    73,   139,   180,   109,
     128,   186,    11,   129,   110,   105,    81,    82,   136,   100,
     101,    93,    94,    95,    63,    63,    63,    67,    68,    63,
      63,    63,   106,    12,   205,    58,   139,   198,    59,    73,
     199,   204,   102,   206,    16,   103,    19,   113,   114,    89,
      90,   219,     4,   111,   129,    84,    85,    86,    87,    20,
     220,    23,    96,    97,    98,    75,   217,   140,    91,    92,
     227,     1,     2,     3,    21,    63,   132,    63,    63,    63,
     121,   122,    63,   125,   126,   127,   134,    63,    63,    63,
      63,    63,    63,    63,    63,    24,   140,   123,   124,     1,
       2,     3,    74,    76,    77,    78,    79,    80,   112,   164,
     107,   162,   133,   135,    25,    26,    27,   137,   141,    28,
      29,    30,   142,    31,   143,    32,   145,   146,   162,   155,
     144,   179,   172,    59,   162,   173,   174,   176,   177,   193,
      63,    63,    33,   168,   178,   185,   181,   187,   182,   183,
     184,   191,   188,   194,    34,    35,    36,    37,    38,    39,
     195,   189,   190,   196,   197,   200,   201,   203,   208,   209,
     149,   207,   210,   211,   202,   150,   151,   152,   153,   212,
     193,   214,    25,    26,    27,   213,   215,    28,    29,    30,
     218,    31,   216,    32,   221,   222,   223,   224,   225,     5,
      15,   163,   226,   148,   115,   116,   165,   154,     0,   117,
      33,   118,   155,     0,   120,     0,   119,     0,   156,   157,
       0,   158,    34,    35,    36,    37,    38,    39,    25,    26,
      27,     0,     0,    28,    29,    30,   166,    31,     0,    32,
       0,     0,     0,     0,     0,     0,    25,    26,    27,     0,
       0,    28,    29,    30,     0,    31,    33,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,    35,
      36,    37,    38,    39,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    35,    36,    37,
      38,    39
};

static const yytype_int16 yycheck[] =
{
      33,    10,    19,    25,    26,    27,   150,    16,    30,    31,
      32,   146,   155,     3,     4,     5,    33,   110,   161,    43,
      99,   173,    56,   102,    48,    58,    32,    33,   107,    23,
      24,    20,    21,    22,    25,    26,    27,    28,    29,    30,
      31,    32,    59,     0,   196,    46,   139,    44,    49,    66,
      47,   195,    46,   197,    20,    49,    58,    74,    75,    38,
      39,   213,    52,    72,   143,    34,    35,    36,    37,    65,
     214,    58,    40,    41,    42,    51,   211,   110,    18,    19,
     224,     3,     4,     5,    65,    76,   103,    78,    79,    80,
      89,    90,    83,    93,    94,    95,   105,    88,    89,    90,
      91,    92,    93,    94,    95,    43,   139,    91,    92,     3,
       4,     5,    44,    31,    30,    26,    28,    25,    47,   141,
      40,   138,    47,    50,    18,    19,    20,    44,    47,    23,
      24,    25,    45,    27,    44,    29,    50,    58,   155,    48,
      47,    64,    46,    49,   161,    46,    46,    46,    46,   182,
     141,   142,    46,    58,    46,   172,    43,   174,    44,    43,
      12,   178,    64,    46,    58,    59,    60,    61,    62,    63,
      47,    62,    62,    43,    47,    44,    47,   194,    43,    25,
       6,   198,    43,    58,   193,    11,    12,    13,    14,    47,
     223,    15,    18,    19,    20,    43,    47,    23,    24,    25,
      43,    27,    58,    29,    43,    47,    44,    47,    43,     0,
       7,   139,   223,   137,    76,    78,   142,    43,    -1,    79,
      46,    80,    48,    -1,    88,    -1,    83,    -1,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    18,    19,
      20,    -1,    -1,    23,    24,    25,   143,    27,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    -1,
      -1,    23,    24,    25,    -1,    27,    46,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    52,    69,    71,    72,    75,    80,
      84,    56,     0,    69,    70,    70,    20,    73,    76,    58,
      65,    65,    73,    58,    43,    18,    19,    20,    23,    24,
      25,    27,    29,    46,    58,    59,    60,    61,    62,    63,
      88,    89,    91,    92,    93,    94,    95,    96,    97,    99,
     101,   102,   103,   104,   105,   106,   109,   110,    46,    49,
      77,    81,   104,   105,   104,   104,    46,   105,   105,   104,
     104,   104,    84,    88,    44,    51,    31,    30,    26,    28,
      25,    32,    33,    98,    34,    35,    36,    37,   100,    38,
      39,    18,    19,    20,    21,    22,    40,    41,    42,    90,
      23,    24,    46,    49,    82,    84,    88,    40,    79,    43,
      48,    73,    47,    88,    88,    92,    94,    95,    96,    97,
      99,   101,   101,   102,   102,   103,   103,   103,    89,    89,
     107,   108,    88,    47,    73,    50,    89,    44,    74,    75,
      84,    47,    45,    44,    47,    50,    58,    73,    76,     6,
      11,    12,    13,    14,    43,    48,    54,    55,    57,    85,
      86,    87,    88,    74,   104,    91,   108,    77,    58,    78,
      88,    85,    46,    46,    46,    86,    46,    46,    46,    64,
      86,    43,    44,    43,    12,    88,    78,    88,    64,    62,
      62,    88,    83,    84,    46,    47,    43,    47,    44,    47,
      44,    47,    73,    88,    85,    78,    85,    88,    43,    25,
      43,    58,    47,    43,    15,    47,    58,    77,    43,    78,
      85,    43,    47,    44,    47,    43,    83,    85
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    69,    70,    70,    71,    71,    71,    72,
      73,    73,    74,    74,    75,    76,    76,    77,    77,    78,
      78,    79,    79,    80,    81,    82,    82,    82,    83,    83,
      84,    84,    84,    85,    86,    86,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    88,
      88,    89,    89,    90,    90,    90,    91,    91,    92,    92,
      93,    93,    94,    94,    95,    95,    96,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   100,   100,   101,   101,
     101,   102,   102,   102,   103,   103,   103,   103,   104,   104,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   106,
     106,   106,   106,   106,   107,   107,   108,   108,   109,   109,
     109,   109,   109,   110,   110,   110
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     1,     0,     4,     1,     1,     8,
       2,     0,     2,     0,     3,     4,     6,     3,     0,     1,
       0,     2,     0,     5,     3,     4,     6,     0,     4,     6,
       1,     1,     1,     3,     2,     1,     7,     5,     7,     5,
       9,     5,     7,     8,     5,     3,     2,     1,     1,     1,
       3,     1,     3,     1,     1,     1,     1,     5,     1,     3,
       2,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     5,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       4,     2,     2,     4,     1,     0,     3,     1,     1,     1,
       1,     1,     3,     1,     1,     1
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
#line 87 "sintatico.y" /* yacc.c:1646  */
    { printf("SUCCESSFUL COMPILATION."); return 0; }
#line 1465 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 88 "sintatico.y" /* yacc.c:1646  */
    { printf("SUCCESSFUL COMPILATION."); return 0; }
#line 1471 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 92 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1477 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 93 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1483 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 97 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1489 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 98 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1495 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 99 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1501 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 103 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1507 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 107 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1513 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 108 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1519 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 112 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1525 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 113 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1531 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 117 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1537 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 121 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1543 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 122 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1549 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 126 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1555 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 127 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1561 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 131 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1567 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 132 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1573 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 136 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1579 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 137 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1585 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 141 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1591 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 144 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1597 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 148 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1603 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 149 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1609 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 150 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1615 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 154 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1621 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 155 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1627 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 159 "sintatico.y" /* yacc.c:1646  */
    {tipo = 1;}
#line 1633 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 160 "sintatico.y" /* yacc.c:1646  */
    {tipo = 2;}
#line 1639 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 161 "sintatico.y" /* yacc.c:1646  */
    {tipo = 3;}
#line 1645 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 165 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1651 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 169 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1657 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 170 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1663 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 174 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1669 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 175 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1675 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 176 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1681 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 177 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1687 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 178 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1693 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 179 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1699 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 180 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1705 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 181 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1711 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 182 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1717 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 183 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1723 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 184 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1729 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 185 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1735 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 186 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1741 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 190 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1747 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 191 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1753 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 195 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1759 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 196 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1765 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 200 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1771 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 201 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1777 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 202 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1783 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 206 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1789 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 207 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1795 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 212 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1801 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 213 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1807 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 217 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1813 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 218 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1819 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 222 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1825 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 223 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1831 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 227 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1837 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 228 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1843 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 232 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1849 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 233 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1855 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 237 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1861 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 238 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1867 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 242 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1873 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 243 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1879 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 247 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1885 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 248 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1891 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 252 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1897 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 253 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1903 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 254 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1909 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 255 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1915 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 259 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1921 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 260 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1927 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 261 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1933 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 265 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1939 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 266 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1945 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 267 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1951 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 271 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1957 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 272 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1963 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 273 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1969 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 274 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1975 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 278 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1981 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 279 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1987 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 283 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1993 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 284 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1999 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 285 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2005 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 286 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2011 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 287 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2017 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 288 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2023 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 289 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2029 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 290 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2035 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 291 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2041 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 295 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2047 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 296 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2053 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 297 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2059 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 298 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2065 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 299 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2071 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 303 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2077 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 304 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2083 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 308 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2089 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 313 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2095 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 314 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2101 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 315 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2107 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 316 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2113 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 317 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2119 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 321 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2125 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 322 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2131 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 323 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2137 "sintatico.tab.c" /* yacc.c:1646  */
    break;


#line 2141 "sintatico.tab.c" /* yacc.c:1646  */
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
#line 326 "sintatico.y" /* yacc.c:1906  */


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
    hash = createControl();
	clean(hash);
    yyparse();

    return 0;
}
