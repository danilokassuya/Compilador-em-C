/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "sintatico.y"

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

#line 86 "sintatico.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
#line 16 "sintatico.y"

    int inteiro;
    char *str;
    NO teste;
    pro *programa;
    node *no;
    fun *function;

#line 216 "sintatico.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATICO_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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
#define YYLAST   334

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  228

#define YYUNDEFTOK  2
#define YYMAXUTOK   323


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
static const yytype_int16 yyrline[] =
{
       0,   100,   100,   111,   115,   125,   126,   130,   132,   133,
     137,   151,   152,   156,   157,   161,   165,   166,   170,   171,
     175,   176,   180,   181,   185,   188,   196,   203,   211,   215,
     224,   235,   238,   239,   243,   247,   248,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     268,   269,   273,   274,   278,   282,   286,   293,   294,   299,
     300,   304,   305,   309,   310,   314,   315,   319,   320,   324,
     330,   334,   339,   348,   349,   353,   354,   355,   356,   360,
     361,   362,   366,   367,   368,   372,   373,   374,   375,   379,
     380,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     396,   399,   400,   405,   410,   414,   415,   419,   420,   424,
     430,   433,   439,   445,   451,   455,   459
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
static const yytype_int16 yytoknum[] =
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

#define YYPACT_NINF (-144)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      14,  -144,  -144,  -144,   -53,    16,   -45,    14,    14,  -144,
    -144,     2,   -27,  -144,  -144,  -144,  -144,  -144,     2,   -12,
      -4,   110,  -144,   -16,  -144,   110,   110,   110,   271,   271,
     110,   110,   110,    40,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,    -2,  -144,    -3,    20,    23,    35,    42,    48,    47,
       1,    44,    75,    67,    50,    26,  -144,  -144,   104,   110,
      36,   -20,  -144,  -144,  -144,  -144,   110,  -144,  -144,  -144,
    -144,  -144,     2,    38,   110,   110,   110,  -144,   110,   110,
     110,  -144,  -144,   110,  -144,  -144,  -144,  -144,   110,   110,
     110,   110,   110,   110,   110,   110,  -144,  -144,  -144,   110,
    -144,  -144,   110,   110,    66,     2,    64,   110,    71,  -144,
     104,    69,  -144,  -144,    72,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,    74,
      76,  -144,    77,  -144,    63,  -144,  -144,     2,   225,   104,
       2,   110,   110,   110,  -144,  -144,    73,    68,  -144,   110,
      83,    78,    79,    86,  -144,   225,    92,    94,    95,  -144,
      80,   225,   100,  -144,  -144,  -144,  -144,   101,    73,   103,
    -144,   136,   110,   110,   110,    87,    85,    88,   110,  -144,
    -144,  -144,   104,  -144,   106,   107,   114,   111,  -144,   -18,
     130,   129,  -144,     2,   110,    83,   110,    83,   110,   134,
     153,   137,   123,   138,  -144,   139,   169,   140,  -144,   128,
    -144,    73,   145,   110,    83,   146,   144,   148,  -144,   147,
    -144,  -144,   150,   104,    83,  -144,  -144,  -144
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    33,    31,    32,     0,     0,     0,     6,     6,     8,
       9,    12,     0,     1,     2,     5,     3,     4,    12,     0,
       0,     0,    11,    19,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   109,   116,   114,   115,   112,   111,
       7,    50,    52,    57,    59,    62,    64,    66,    68,    70,
      73,    79,    82,    85,    89,    91,   100,   110,    28,     0,
      23,     0,    96,    89,    97,    95,     0,    92,    93,    94,
      98,    99,    12,     0,     0,     0,     0,    61,     0,     0,
       0,    71,    72,     0,    75,    77,    76,    78,     0,     0,
       0,     0,     0,     0,     0,     0,    54,    55,    56,     0,
     102,   103,   106,     0,     0,    12,     0,     0,    16,    24,
      14,     0,   113,    51,     0,    60,    63,    65,    67,    69,
      74,    81,    80,    84,    83,    87,    86,    88,    53,   108,
       0,   105,     0,    25,     0,    18,    22,    12,     0,    14,
      12,     0,     0,     0,   104,   101,    19,     0,    17,    21,
       0,     0,     0,     0,    48,     0,     0,     0,     0,    49,
       0,    36,     0,    13,    90,    58,   107,    26,    19,     0,
      20,     0,     0,    21,     0,     0,     0,     0,     0,    10,
      35,    47,     0,    46,     0,     0,     0,     0,    34,     0,
       0,     0,    27,    12,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    40,     0,    38,     0,    42,     0,
      45,    19,     0,    21,     0,     0,     0,    29,    37,     0,
      39,    43,     0,     0,     0,    44,    30,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,   195,   188,  -144,  -144,   -10,    58,   -98,    61,
    -133,  -139,  -144,  -144,  -144,  -144,   -24,   -33,  -143,  -140,
    -144,   -19,   -75,  -144,    59,   124,  -144,   125,   126,   122,
     121,  -144,   118,  -144,     7,    13,    17,   -21,   135,  -144,
    -144,    65,  -144,  -144
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,    15,    16,     7,     8,   147,   138,     9,    20,
      60,   169,   108,    10,    61,   104,   192,    11,   159,   160,
     161,   170,    41,    99,    42,    43,    44,    45,    46,    47,
      48,    83,    49,    88,    50,    51,    52,    53,    54,    55,
     130,   131,    56,    57
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      72,    19,    40,    12,    62,    64,    65,   171,    22,    69,
      70,    71,   139,   167,    73,   175,    13,     1,     2,     3,
      14,   180,    18,   109,   128,   105,   198,   129,   110,   199,
      58,    21,   136,    59,   186,    84,    85,    86,    87,    24,
     106,   139,    74,     1,     2,     3,    23,    73,    75,   100,
     101,    76,   204,    77,   206,   113,   114,   205,    25,    26,
      27,    78,   111,    28,    29,    30,     4,    31,   129,    32,
      79,   220,   102,    80,   219,   103,   107,   140,   217,    81,
      82,   227,    89,    90,   132,   112,    33,    93,    94,    95,
      96,    97,    98,    91,    92,   134,   121,   122,    34,    35,
      36,    37,    38,    39,   123,   124,   140,     1,     2,     3,
     125,   126,   127,   133,   135,   137,   141,   142,   143,   162,
     164,   146,    59,   144,   172,   173,   168,   145,    25,    26,
      27,   155,   174,    28,    29,    30,   162,    31,   176,    32,
     177,   178,   162,   181,   179,   182,   183,   189,   184,   193,
     190,   188,   194,   185,   195,   187,    33,   196,   197,   191,
      63,    63,    63,    67,    68,    63,    63,    63,    34,    35,
      36,    37,    38,    39,   200,   203,   201,   208,   209,   207,
     210,   211,   213,   202,   214,   212,   216,   215,   218,   221,
     193,   222,   223,   225,   224,     6,    17,   163,   148,   226,
     115,   165,   118,   116,   119,   117,   120,     0,   166,     0,
       0,    63,     0,    63,    63,    63,     0,     0,    63,     0,
       0,     0,     0,    63,    63,    63,    63,    63,    63,    63,
      63,   149,     0,     0,     0,     0,   150,   151,   152,   153,
       0,     0,     0,    25,    26,    27,     0,     0,    28,    29,
      30,     0,    31,     0,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   154,     0,
       0,    33,     0,   155,     0,     0,    63,    63,     0,   156,
     157,     0,   158,    34,    35,    36,    37,    38,    39,    25,
      26,    27,     0,     0,    28,    29,    30,     0,    31,     0,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
      35,    36,    37,    38,    39
};

static const yytype_int16 yycheck[] =
{
      33,    11,    21,    56,    25,    26,    27,   150,    18,    30,
      31,    32,   110,   146,    33,   155,     0,     3,     4,     5,
      65,   161,    20,    43,    99,    58,    44,   102,    48,    47,
      46,    58,   107,    49,   173,    34,    35,    36,    37,    43,
      59,   139,    44,     3,     4,     5,    58,    66,    51,    23,
      24,    31,   195,    30,   197,    74,    75,   196,    18,    19,
      20,    26,    72,    23,    24,    25,    52,    27,   143,    29,
      28,   214,    46,    25,   213,    49,    40,   110,   211,    32,
      33,   224,    38,    39,   103,    47,    46,    20,    21,    22,
      40,    41,    42,    18,    19,   105,    89,    90,    58,    59,
      60,    61,    62,    63,    91,    92,   139,     3,     4,     5,
      93,    94,    95,    47,    50,    44,    47,    45,    44,   138,
     141,    58,    49,    47,    46,    46,    58,    50,    18,    19,
      20,    48,    46,    23,    24,    25,   155,    27,    46,    29,
      46,    46,   161,    43,    64,    44,    43,    62,    12,   182,
      62,    64,    46,   172,    47,   174,    46,    43,    47,   178,
      25,    26,    27,    28,    29,    30,    31,    32,    58,    59,
      60,    61,    62,    63,    44,   194,    47,    43,    25,   198,
      43,    58,    43,   193,    15,    47,    58,    47,    43,    43,
     223,    47,    44,    43,    47,     0,     8,   139,   137,   223,
      76,   142,    80,    78,    83,    79,    88,    -1,   143,    -1,
      -1,    76,    -1,    78,    79,    80,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    93,    94,
      95,     6,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      -1,    -1,    -1,    18,    19,    20,    -1,    -1,    23,    24,
      25,    -1,    27,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    46,    -1,    48,    -1,    -1,   141,   142,    -1,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    18,
      19,    20,    -1,    -1,    23,    24,    25,    -1,    27,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
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
      48,    75,    47,    90,    90,    94,    96,    97,    98,    99,
     101,   103,   103,   104,   104,   105,   105,   105,    91,    91,
     109,   110,    90,    47,    75,    50,    91,    44,    76,    77,
      86,    47,    45,    44,    47,    50,    58,    75,    78,     6,
      11,    12,    13,    14,    43,    48,    54,    55,    57,    87,
      88,    89,    90,    76,   106,    93,   110,    79,    58,    80,
      90,    87,    46,    46,    46,    88,    46,    46,    46,    64,
      88,    43,    44,    43,    12,    90,    80,    90,    64,    62,
      62,    90,    85,    86,    46,    47,    43,    47,    44,    47,
      44,    47,    75,    90,    87,    80,    87,    90,    43,    25,
      43,    58,    47,    43,    15,    47,    58,    79,    43,    80,
      87,    43,    47,    44,    47,    43,    85,    87
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
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
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     0,     4,     1,     1,
       8,     2,     0,     2,     0,     3,     4,     6,     3,     0,
       1,     0,     2,     0,     5,     3,     4,     6,     0,     4,
       6,     1,     1,     1,     3,     2,     1,     7,     5,     7,
       5,     9,     5,     7,     8,     5,     3,     2,     1,     1,
       1,     3,     1,     3,     1,     1,     1,     1,     5,     1,
       3,     2,     1,     3,     1,     3,     1,     3,     1,     3,
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

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 100 "sintatico.y"
                         {
        pro *programa = (pro*)malloc(sizeof(pro));
        if((yyvsp[-1].function))
            programa->lista_de_funcoes = (yyvsp[-1].function);
        printf("SUCCESSFUL COMPILATION.");
        return 0;
}
#line 1590 "sintatico.tab.c"
    break;

  case 3:
#line 111 "sintatico.y"
                                   { 
            printf("declarado\n");
            (yyval.function) = (yyvsp[0].teste);
        }
#line 1599 "sintatico.tab.c"
    break;

  case 4:
#line 115 "sintatico.y"
                                   { 
            printf("função\n");
            fun* func = (yyvsp[-1].teste);
            if(func)
                func->next = (yyvsp[0].teste);
            (yyval.function) = func;
        }
#line 1611 "sintatico.tab.c"
    break;

  case 5:
#line 125 "sintatico.y"
                {(yyval.teste) = (yyvsp[0].function);}
#line 1617 "sintatico.tab.c"
    break;

  case 6:
#line 126 "sintatico.y"
        {}
#line 1623 "sintatico.tab.c"
    break;

  case 7:
#line 130 "sintatico.y"
                                         {//# DEFINE NOME/ID 
        }
#line 1630 "sintatico.tab.c"
    break;

  case 8:
#line 132 "sintatico.y"
                       {}
#line 1636 "sintatico.tab.c"
    break;

  case 9:
#line 133 "sintatico.y"
                         {}
#line 1642 "sintatico.tab.c"
    break;

  case 10:
#line 137 "sintatico.y"
                                                                                   {
            fun* func = (fun*)malloc(sizeof(fun));
            strcpy(func->nome,(yyvsp[-5].str));
            func->symbolTable = (identi*)malloc(sizeof(identi));
            func->parametro = (par*)malloc(sizeof(par));
            func->retorno = (yyvsp[-7].inteiro);
            func->prototipo = 0;
            func->lista_de_comandos = (cmd*)malloc(sizeof(cmd));
            func->next = NULL;
            (yyval.teste) = func;
        }
#line 1658 "sintatico.tab.c"
    break;

  case 11:
#line 151 "sintatico.y"
                         {(yyval.inteiro) = (yyvsp[0].inteiro)+1;}
#line 1664 "sintatico.tab.c"
    break;

  case 12:
#line 152 "sintatico.y"
        {(yyval.inteiro) = 1;}
#line 1670 "sintatico.tab.c"
    break;

  case 13:
#line 156 "sintatico.y"
                              {}
#line 1676 "sintatico.tab.c"
    break;

  case 14:
#line 157 "sintatico.y"
        {}
#line 1682 "sintatico.tab.c"
    break;

  case 15:
#line 161 "sintatico.y"
                                         {}
#line 1688 "sintatico.tab.c"
    break;

  case 16:
#line 165 "sintatico.y"
                                          {}
#line 1694 "sintatico.tab.c"
    break;

  case 17:
#line 166 "sintatico.y"
                                                                  {}
#line 1700 "sintatico.tab.c"
    break;

  case 18:
#line 170 "sintatico.y"
                                                     {}
#line 1706 "sintatico.tab.c"
    break;

  case 19:
#line 171 "sintatico.y"
        {}
#line 1712 "sintatico.tab.c"
    break;

  case 20:
#line 175 "sintatico.y"
                   {}
#line 1718 "sintatico.tab.c"
    break;

  case 21:
#line 176 "sintatico.y"
        {}
#line 1724 "sintatico.tab.c"
    break;

  case 22:
#line 180 "sintatico.y"
                               {}
#line 1730 "sintatico.tab.c"
    break;

  case 23:
#line 181 "sintatico.y"
        {}
#line 1736 "sintatico.tab.c"
    break;

  case 24:
#line 185 "sintatico.y"
                                             {}
#line 1742 "sintatico.tab.c"
    break;

  case 25:
#line 188 "sintatico.y"
                                          {
            NO no = createPar();
            no = (yyvsp[-1].teste);
            (yyval.teste) = no;
}
#line 1752 "sintatico.tab.c"
    break;

  case 26:
#line 196 "sintatico.y"
                                      {
            par* parametro = (par*)malloc(sizeof(par));
            strcpy(parametro->nome,(yyvsp[-1].str));
            parametro->tipo = (yyvsp[-3].inteiro);
            parametro->ponteiro = (yyvsp[-2].inteiro);
            (yyval.teste) = parametro;
        }
#line 1764 "sintatico.tab.c"
    break;

  case 27:
#line 203 "sintatico.y"
                                                           {
            par* parametro = (par*)malloc(sizeof(par));
            strcpy(parametro->nome,(yyvsp[-3].str));
            parametro->tipo = (yyvsp[-5].inteiro);
            parametro->ponteiro = (yyvsp[-4].inteiro);
            parametro->prox = (yyvsp[0].teste);
            (yyval.teste) = parametro;
    }
#line 1777 "sintatico.tab.c"
    break;

  case 28:
#line 211 "sintatico.y"
        {    }
#line 1783 "sintatico.tab.c"
    break;

  case 29:
#line 215 "sintatico.y"
                                      {
            NO no = createPar();
            char a[100];
            strcpy(a,(yyvsp[-1].str));
            setParNome(no,a);
            setParTipo(no,(yyvsp[-3].inteiro));
            setParPonteiro(no,(yyvsp[-2].inteiro));
            (yyval.teste) = no;
        }
#line 1797 "sintatico.tab.c"
    break;

  case 30:
#line 224 "sintatico.y"
                                                           {
            NO no = createPar();
            setParNome(no,(yyvsp[-3].str));
            setParTipo(no,(yyvsp[-5].inteiro));
            setParPonteiro(no,(yyvsp[-4].inteiro));
            setParProx(no,(yyvsp[0].teste));
            (yyval.teste) = no;
    }
#line 1810 "sintatico.tab.c"
    break;

  case 31:
#line 235 "sintatico.y"
            {
            (yyval.inteiro) = 1;
        }
#line 1818 "sintatico.tab.c"
    break;

  case 32:
#line 238 "sintatico.y"
             {tipo = 2;}
#line 1824 "sintatico.tab.c"
    break;

  case 33:
#line 239 "sintatico.y"
             {tipo = 3;}
#line 1830 "sintatico.tab.c"
    break;

  case 34:
#line 243 "sintatico.y"
                                                 {}
#line 1836 "sintatico.tab.c"
    break;

  case 35:
#line 247 "sintatico.y"
                              {}
#line 1842 "sintatico.tab.c"
    break;

  case 36:
#line 248 "sintatico.y"
                     {}
#line 1848 "sintatico.tab.c"
    break;

  case 37:
#line 252 "sintatico.y"
                                                            {}
#line 1854 "sintatico.tab.c"
    break;

  case 38:
#line 253 "sintatico.y"
                                            {}
#line 1860 "sintatico.tab.c"
    break;

  case 39:
#line 254 "sintatico.y"
                                                       {}
#line 1866 "sintatico.tab.c"
    break;

  case 40:
#line 255 "sintatico.y"
                                               {}
#line 1872 "sintatico.tab.c"
    break;

  case 41:
#line 256 "sintatico.y"
                                                                                                   {}
#line 1878 "sintatico.tab.c"
    break;

  case 42:
#line 257 "sintatico.y"
                                                {}
#line 1884 "sintatico.tab.c"
    break;

  case 43:
#line 258 "sintatico.y"
                                                                 {}
#line 1890 "sintatico.tab.c"
    break;

  case 44:
#line 259 "sintatico.y"
                                                                    {}
#line 1896 "sintatico.tab.c"
    break;

  case 45:
#line 260 "sintatico.y"
                                                  {}
#line 1902 "sintatico.tab.c"
    break;

  case 46:
#line 261 "sintatico.y"
                                        {}
#line 1908 "sintatico.tab.c"
    break;

  case 47:
#line 262 "sintatico.y"
                             {}
#line 1914 "sintatico.tab.c"
    break;

  case 48:
#line 263 "sintatico.y"
                  {}
#line 1920 "sintatico.tab.c"
    break;

  case 49:
#line 264 "sintatico.y"
              {}
#line 1926 "sintatico.tab.c"
    break;

  case 50:
#line 268 "sintatico.y"
                        {(yyval.teste) = (yyvsp[0].teste);}
#line 1932 "sintatico.tab.c"
    break;

  case 51:
#line 269 "sintatico.y"
                                         {}
#line 1938 "sintatico.tab.c"
    break;

  case 52:
#line 273 "sintatico.y"
                              {(yyval.teste) = (yyvsp[0].teste);}
#line 1944 "sintatico.tab.c"
    break;

  case 53:
#line 274 "sintatico.y"
                                                 {}
#line 1950 "sintatico.tab.c"
    break;

  case 54:
#line 278 "sintatico.y"
               {
            NO no = createExpression("ASSIGN",7);
            (yyval.teste) = no;
        }
#line 1959 "sintatico.tab.c"
    break;

  case 55:
#line 282 "sintatico.y"
                   {
            NO no = createExpression("ADD_ASSIGN",8);
            (yyval.teste) = no;
        }
#line 1968 "sintatico.tab.c"
    break;

  case 56:
#line 286 "sintatico.y"
                     {
            NO no = createExpression("MINUS_ASSIGN",8);
            (yyval.teste) = no;
        }
#line 1977 "sintatico.tab.c"
    break;

  case 57:
#line 293 "sintatico.y"
                  {}
#line 1983 "sintatico.tab.c"
    break;

  case 58:
#line 294 "sintatico.y"
                                                                             {}
#line 1989 "sintatico.tab.c"
    break;

  case 59:
#line 299 "sintatico.y"
                   {}
#line 1995 "sintatico.tab.c"
    break;

  case 60:
#line 300 "sintatico.y"
                                        {}
#line 2001 "sintatico.tab.c"
    break;

  case 61:
#line 304 "sintatico.y"
                       {}
#line 2007 "sintatico.tab.c"
    break;

  case 62:
#line 305 "sintatico.y"
           {}
#line 2013 "sintatico.tab.c"
    break;

  case 63:
#line 309 "sintatico.y"
                          {}
#line 2019 "sintatico.tab.c"
    break;

  case 64:
#line 310 "sintatico.y"
            {}
#line 2025 "sintatico.tab.c"
    break;

  case 65:
#line 314 "sintatico.y"
                            {}
#line 2031 "sintatico.tab.c"
    break;

  case 66:
#line 315 "sintatico.y"
            {}
#line 2037 "sintatico.tab.c"
    break;

  case 67:
#line 319 "sintatico.y"
                                           {}
#line 2043 "sintatico.tab.c"
    break;

  case 68:
#line 320 "sintatico.y"
                           {}
#line 2049 "sintatico.tab.c"
    break;

  case 69:
#line 324 "sintatico.y"
                                                           {
            node* exp = (yyvsp[-1].teste);
            exp->direito = (yyvsp[-2].teste);
            exp->esquerdo = (yyvsp[0].teste);
            (yyval.teste) = exp;
        }
#line 2060 "sintatico.tab.c"
    break;

  case 70:
#line 330 "sintatico.y"
                             {(yyval.teste) = (yyvsp[0].teste);}
#line 2066 "sintatico.tab.c"
    break;

  case 71:
#line 334 "sintatico.y"
              { 
            node* exp = (node*)malloc(sizeof(node));
            exp->exp = 3;
            strcpy(exp->nome,"EQUAL");
            (yyval.teste) = exp;}
#line 2076 "sintatico.tab.c"
    break;

  case 72:
#line 339 "sintatico.y"
                  {
            node* exp = (node*)malloc(sizeof(node));
            exp->exp = 4;
            strcpy(exp->nome,"NOT_EQUAL");
            (yyval.teste) = exp;
    }
#line 2087 "sintatico.tab.c"
    break;

  case 73:
#line 348 "sintatico.y"
                        {}
#line 2093 "sintatico.tab.c"
    break;

  case 74:
#line 349 "sintatico.y"
                                                           {}
#line 2099 "sintatico.tab.c"
    break;

  case 75:
#line 353 "sintatico.y"
                  {}
#line 2105 "sintatico.tab.c"
    break;

  case 76:
#line 354 "sintatico.y"
                   {}
#line 2111 "sintatico.tab.c"
    break;

  case 77:
#line 355 "sintatico.y"
                     {}
#line 2117 "sintatico.tab.c"
    break;

  case 78:
#line 356 "sintatico.y"
                      {}
#line 2123 "sintatico.tab.c"
    break;

  case 79:
#line 360 "sintatico.y"
                          {}
#line 2129 "sintatico.tab.c"
    break;

  case 80:
#line 361 "sintatico.y"
                                                  {}
#line 2135 "sintatico.tab.c"
    break;

  case 81:
#line 362 "sintatico.y"
                                                  {}
#line 2141 "sintatico.tab.c"
    break;

  case 82:
#line 366 "sintatico.y"
                           {}
#line 2147 "sintatico.tab.c"
    break;

  case 83:
#line 367 "sintatico.y"
                                                   {}
#line 2153 "sintatico.tab.c"
    break;

  case 84:
#line 368 "sintatico.y"
                                                  {}
#line 2159 "sintatico.tab.c"
    break;

  case 85:
#line 372 "sintatico.y"
                       {}
#line 2165 "sintatico.tab.c"
    break;

  case 86:
#line 373 "sintatico.y"
                                              {}
#line 2171 "sintatico.tab.c"
    break;

  case 87:
#line 374 "sintatico.y"
                                                   {}
#line 2177 "sintatico.tab.c"
    break;

  case 88:
#line 375 "sintatico.y"
                                                    {}
#line 2183 "sintatico.tab.c"
    break;

  case 89:
#line 379 "sintatico.y"
                        {}
#line 2189 "sintatico.tab.c"
    break;

  case 90:
#line 380 "sintatico.y"
                                                    {}
#line 2195 "sintatico.tab.c"
    break;

  case 91:
#line 384 "sintatico.y"
                          {}
#line 2201 "sintatico.tab.c"
    break;

  case 92:
#line 385 "sintatico.y"
                            {}
#line 2207 "sintatico.tab.c"
    break;

  case 93:
#line 386 "sintatico.y"
                            {}
#line 2213 "sintatico.tab.c"
    break;

  case 94:
#line 387 "sintatico.y"
                                   {}
#line 2219 "sintatico.tab.c"
    break;

  case 95:
#line 388 "sintatico.y"
                                {}
#line 2225 "sintatico.tab.c"
    break;

  case 96:
#line 389 "sintatico.y"
                            {}
#line 2231 "sintatico.tab.c"
    break;

  case 97:
#line 390 "sintatico.y"
                             {}
#line 2237 "sintatico.tab.c"
    break;

  case 98:
#line 391 "sintatico.y"
                                   {}
#line 2243 "sintatico.tab.c"
    break;

  case 99:
#line 392 "sintatico.y"
                           {}
#line 2249 "sintatico.tab.c"
    break;

  case 100:
#line 396 "sintatico.y"
                          {
            (yyval.teste) = (yyvsp[0].teste);
        }
#line 2257 "sintatico.tab.c"
    break;

  case 101:
#line 399 "sintatico.y"
                                                                       {}
#line 2263 "sintatico.tab.c"
    break;

  case 102:
#line 400 "sintatico.y"
                              {
            NO no = createExpression("INC",12);
            insertEsquerda(no,(yyvsp[-1].teste));
            (yyval.teste) = no;
        }
#line 2273 "sintatico.tab.c"
    break;

  case 103:
#line 405 "sintatico.y"
                              {
            NO no = createExpression("DEC",13);
            insertEsquerda(no,(yyvsp[-1].teste));
            (yyval.teste) = no;
        }
#line 2283 "sintatico.tab.c"
    break;

  case 104:
#line 410 "sintatico.y"
                                                             {}
#line 2289 "sintatico.tab.c"
    break;

  case 105:
#line 414 "sintatico.y"
                            {}
#line 2295 "sintatico.tab.c"
    break;

  case 106:
#line 415 "sintatico.y"
        {}
#line 2301 "sintatico.tab.c"
    break;

  case 107:
#line 419 "sintatico.y"
                                                  {}
#line 2307 "sintatico.tab.c"
    break;

  case 109:
#line 424 "sintatico.y"
           { 
            node* exp = (node*)malloc(sizeof(node));
            exp->exp = 1;
            strcpy(exp->nome,(yyvsp[0].str));
            (yyval.teste) = exp;   
        }
#line 2318 "sintatico.tab.c"
    break;

  case 110:
#line 430 "sintatico.y"
               {
            (yyval.teste) = (yyvsp[0].teste); 
        }
#line 2326 "sintatico.tab.c"
    break;

  case 111:
#line 433 "sintatico.y"
                  {
            node* exp = (node*)malloc(sizeof(node));
            exp->exp = 11;
            strcpy(exp->nome,(yyvsp[0].str));
            (yyval.teste) = exp; 
        }
#line 2337 "sintatico.tab.c"
    break;

  case 112:
#line 439 "sintatico.y"
               {
            node* exp = (node*)malloc(sizeof(node));
            exp->exp = 14;
            strcpy(exp->nome,(yyvsp[0].str));
            (yyval.teste) = exp; 
    }
#line 2348 "sintatico.tab.c"
    break;

  case 113:
#line 445 "sintatico.y"
                                   {
            (yyval.teste) = (yyvsp[-1].teste); 
    }
#line 2356 "sintatico.tab.c"
    break;

  case 114:
#line 451 "sintatico.y"
                    {
            NO no = createExpression((yyvsp[0].str),8);
            (yyval.teste) = no;
        }
#line 2365 "sintatico.tab.c"
    break;

  case 115:
#line 455 "sintatico.y"
                 {
            NO no = createExpression((yyvsp[0].str),9);
            (yyval.teste) = no;
    }
#line 2374 "sintatico.tab.c"
    break;

  case 116:
#line 459 "sintatico.y"
                  {
            NO no = createExpression((yyvsp[0].str),10);
            (yyval.teste) = no;
    }
#line 2383 "sintatico.tab.c"
    break;


#line 2387 "sintatico.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 465 "sintatico.y"


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
