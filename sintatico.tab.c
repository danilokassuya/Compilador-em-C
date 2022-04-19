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
    extern char* yytext;
    extern int yylex();
    extern int characters;
    extern int totalLines;
    extern int lastLine;

    void yyerror(char *s);

#line 78 "sintatico.tab.c" /* yacc.c:339  */

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

#line 197 "sintatico.tab.c" /* yacc.c:358  */

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
       0,    84,    84,    85,    89,    90,    94,    95,    96,   100,
     104,   105,   109,   110,   114,   118,   119,   123,   124,   128,
     129,   133,   134,   138,   141,   145,   146,   147,   151,   152,
     156,   157,   158,   162,   166,   167,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   187,
     188,   192,   193,   197,   198,   199,   203,   204,   209,   210,
     214,   215,   219,   220,   224,   225,   229,   230,   234,   235,
     239,   240,   244,   245,   249,   250,   251,   252,   256,   257,
     258,   262,   263,   264,   268,   269,   270,   271,   275,   276,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   292,
     293,   294,   295,   296,   300,   301,   305,   306,   310,   311,
     312,   313,   314,   318,   319,   320
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
#line 84 "sintatico.y" /* yacc.c:1646  */
    { printf("SUCCESSFUL COMPILATION."); return 0; }
#line 1462 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 85 "sintatico.y" /* yacc.c:1646  */
    { printf("SUCCESSFUL COMPILATION."); return 0; }
#line 1468 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 89 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1474 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 90 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1480 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 94 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1486 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 95 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1492 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 96 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1498 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 100 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1504 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 104 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1510 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 105 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1516 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 109 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1522 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 110 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1528 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 114 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1534 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 118 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1540 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 119 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1546 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 123 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1552 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 124 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1558 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 128 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1564 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 129 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1570 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 133 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1576 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 134 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1582 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 138 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1588 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 141 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1594 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 145 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1600 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 146 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1606 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 147 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1612 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 151 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1618 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 152 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1624 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 156 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1630 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 157 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1636 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 158 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1642 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 162 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1648 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 166 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1654 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 167 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1660 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 171 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1666 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 172 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1672 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 173 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1678 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 174 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1684 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 175 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1690 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 176 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1696 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 177 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1702 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 178 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1708 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 179 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1714 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 180 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1720 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 181 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1726 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 182 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1732 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 183 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1738 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 187 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1744 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 188 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1750 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 192 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1756 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 193 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1762 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 197 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1768 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 198 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1774 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 199 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1780 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 203 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1786 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 204 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1792 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 209 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1798 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 210 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1804 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 214 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1810 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 215 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1816 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 219 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1822 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 220 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1828 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 224 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1834 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 225 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1840 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 229 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1846 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 230 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1852 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 234 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1858 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 235 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1864 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 239 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1870 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 240 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1876 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 244 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1882 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 245 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1888 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 249 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1894 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 250 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1900 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 251 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1906 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 252 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1912 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 256 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1918 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 257 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1924 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 258 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1930 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 262 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1936 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 263 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1942 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 264 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1948 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 268 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1954 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 269 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1960 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 270 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1966 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 271 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1972 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 275 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1978 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 276 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1984 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 280 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1990 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 281 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1996 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 282 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2002 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 283 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2008 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 284 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2014 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 285 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2020 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 286 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2026 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 287 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2032 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 288 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2038 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 292 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2044 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 293 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2050 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 294 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2056 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 295 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2062 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 296 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2068 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 300 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2074 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 301 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2080 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 305 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2086 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 310 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2092 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 311 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2098 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 312 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2104 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 313 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2110 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 314 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2116 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 318 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2122 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 319 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2128 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 320 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2134 "sintatico.tab.c" /* yacc.c:1646  */
    break;


#line 2138 "sintatico.tab.c" /* yacc.c:1646  */
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
#line 323 "sintatico.y" /* yacc.c:1906  */


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
    yyparse();

    return 0;
}
