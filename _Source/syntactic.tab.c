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
#line 3 "_Syntactic/syntactic.y" /* yacc.c:339  */


	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>

	#include"../_Header/Tree.hpp"

	extern int yyerror(const char* msg ); 
    char* yytext;

    int yylex();


	extern Tree *syntax_tree;


#line 84 "_Source/syntactic.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif


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
    SUBTRACAO = 258,
    SOMA = 259,
    MULTIPLICACAO = 260,
    DIVISAO = 261,
    RESTO = 262,
    AND = 263,
    OR = 264,
    NEGACAO = 265,
    IDF = 266,
    ASPAS = 267,
    ATRIBUICAO = 268,
    ABRE_PARENTESES = 269,
    FECHA_PARENTESES = 270,
    ABRE_CHAVE = 271,
    FECHA_CHAVE = 272,
    ABRE_COLCHETE = 273,
    FECHA_COLCHETE = 274,
    PONTO_E_VIRGULA = 275,
    DOIS_PONTOS = 276,
    VIRGULA = 277,
    HASHMARK = 278,
    PONTO = 279,
    PIPE = 280,
    BARRA = 281,
    MAIOR = 282,
    MENOR = 283,
    MAIOR_IGUAL = 284,
    MENOR_IGUAL = 285,
    IGUAL = 286,
    DIFERENTE = 287,
    ESPACO = 288,
    BARRAN = 289,
    BARRAT = 290,
    DIGITO = 291,
    NUMERAL = 292,
    LETRA = 293,
    FRAC_OPT = 294,
    NUM = 295,
    RES_BREAK = 296,
    RES_CASE = 297,
    RES_CHAR = 298,
    RES_DEFAULT = 299,
    RES_DO = 300,
    RES_DOUBLE = 301,
    RES_ELSE = 302,
    RES_FLOAT = 303,
    RES_FOR = 304,
    RES_GOTO = 305,
    RES_IF = 306,
    RES_INT = 307,
    RES_LONG = 308,
    RES_RETURN = 309,
    RES_SIZEOF = 310,
    RES_STATIC = 311,
    RES_STRUCT = 312,
    RES_TYPEDEF = 313,
    RES_VOID = 314,
    RES_WHILE = 315,
    NOME = 316,
    STRING = 317,
    ALGUMA_COISA = 318,
    RES_BOOL = 319
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 21 "_Syntactic/syntactic.y" /* yacc.c:355  */

	char* cadeia;
	class Tree * tree;
	class Node * no;

#line 192 "_Source/syntactic.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);



/* Copy the second part of user declarations.  */

#line 223 "_Source/syntactic.tab.c" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   171

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  118

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   127,   127,   133,   136,   139,   142,   145,   148,   151,
     154,   157,   160,   166,   169,   172,   175,   178,   181,   184,
     187,   190,   193,   198,   203,   206,   211,   214,   219,   222,
     227,   232,   239,   244,   249,   254,   259,   264,   269,   274,
     279,   284,   287,   290,   293,   296,   302,   305,   308,   311,
     314,   319,   322,   327,   330,   333,   336,   339
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SUBTRACAO", "SOMA", "MULTIPLICACAO",
  "DIVISAO", "RESTO", "AND", "OR", "NEGACAO", "IDF", "ASPAS", "ATRIBUICAO",
  "ABRE_PARENTESES", "FECHA_PARENTESES", "ABRE_CHAVE", "FECHA_CHAVE",
  "ABRE_COLCHETE", "FECHA_COLCHETE", "PONTO_E_VIRGULA", "DOIS_PONTOS",
  "VIRGULA", "HASHMARK", "PONTO", "PIPE", "BARRA", "MAIOR", "MENOR",
  "MAIOR_IGUAL", "MENOR_IGUAL", "IGUAL", "DIFERENTE", "ESPACO", "BARRAN",
  "BARRAT", "DIGITO", "NUMERAL", "LETRA", "FRAC_OPT", "NUM", "RES_BREAK",
  "RES_CASE", "RES_CHAR", "RES_DEFAULT", "RES_DO", "RES_DOUBLE",
  "RES_ELSE", "RES_FLOAT", "RES_FOR", "RES_GOTO", "RES_IF", "RES_INT",
  "RES_LONG", "RES_RETURN", "RES_SIZEOF", "RES_STATIC", "RES_STRUCT",
  "RES_TYPEDEF", "RES_VOID", "RES_WHILE", "NOME", "STRING", "ALGUMA_COISA",
  "RES_BOOL", "$accept", "root", "code", "for", "parameters",
  "recursionOP", "recursionDec", "assignment", "var", "semi", "comma",
  "if", "else", "openKey", "closeKey", "openParent", "closeParent",
  "declaration", "boolean_exp", "op", "value", "type", YY_NULLPTR
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
     315,   316,   317,   318,   319
};
# endif

#define YYPACT_NINF -44

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-44)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      58,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     4,
     -44,    16,    13,    -2,     9,   -28,   -44,   -44,   -28,   -44,
     -27,     2,   -44,   -44,   -27,   101,   -44,   -44,    58,   -27,
     -44,    23,   -44,     5,   151,   -44,    22,     8,    33,   101,
     -44,   -44,   -44,   -44,   -44,   -27,   -44,   151,    26,   -27,
     -44,   -44,   -44,   -44,   -44,    58,   -44,   -27,     8,   -44,
      58,    58,   -27,   -27,    35,    58,   -44,    47,   -44,   151,
      58,    58,   -44,    51,   -44,    22,    58,   -44,   -28,   -44,
     -44,    51,   -44,    58,    35,    51,   101,    58,   -44,    58,
      25,   -27,   -44,    51,   -44,    35,    47,    89,    58,   -28,
     -44,    35,    51,     5,    58,    58,   -28,    51,   -44,   156,
     -44,   -27,    22,    35,    58,    51,    58,   -44
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    56,    53,    23,    34,    54,    31,    55,    57,     0,
       2,     0,     0,     0,     0,     0,     1,    38,     0,    30,
       0,     0,    52,    51,     0,     0,    32,    33,     3,     0,
      28,     0,    40,     0,     0,    39,     0,    13,    24,     0,
      42,    43,    44,    45,    41,     0,     4,     0,     0,     0,
      47,    46,    48,    49,    50,    11,    26,     0,    17,    36,
      14,     0,     0,     0,     0,     5,    29,     0,    12,     0,
      18,     0,    15,     0,    25,     0,     0,     6,     0,    27,
      19,     0,    37,     0,     0,     0,     0,     0,    16,     0,
       0,     0,    20,     0,    35,     0,     0,     7,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       9,     0,     0,     0,     0,     0,    21,    22
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -44,   -44,    29,   -44,    14,   -24,    31,    -8,   -13,     6,
      42,   -44,   -15,   -43,   -19,    48,   -35,    60,   -30,   -17,
     -10,   -44
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     9,    10,    11,    36,    55,    28,    20,    12,    56,
      31,    13,    95,    61,    83,    18,    37,    14,    45,    57,
      38,    15
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      23,    58,    32,    25,    16,    33,    29,    23,    23,    63,
      34,    23,    17,    22,    39,    71,    23,    35,    19,    47,
      30,    76,    19,    65,    59,    49,    19,    17,    26,    26,
      17,    27,    23,     6,     6,    64,    23,    35,    22,    67,
      84,    89,    22,    60,    23,    79,    26,    69,    27,    23,
      23,    59,    98,    75,    30,    27,    91,    46,   104,     6,
      21,    24,    87,     6,    70,    86,    90,    26,    82,     1,
     114,     2,    94,    78,    97,     5,    74,   113,    23,    66,
      62,    96,   101,   105,    68,     7,   103,     8,   110,    72,
      73,    48,   111,   109,    77,   106,   116,     0,    23,    80,
      81,   112,    99,     0,     1,    85,     2,     3,     0,     4,
       5,     0,    88,     0,     0,     0,    92,     0,    93,     6,
       7,     0,     8,     0,     0,     0,   100,   102,    40,    41,
      42,    43,    44,   107,   108,     1,    94,     2,     3,     0,
       4,     5,     0,   115,     0,   117,     0,     0,     0,     0,
       6,     7,     0,     8,    50,    51,    52,    53,    54,    50,
      51,    52,    53,    54,     0,     0,     0,     0,     0,     0,
       0,    26
};

static const yytype_int8 yycheck[] =
{
      13,    36,    15,    13,     0,    18,    14,    20,    21,    39,
      20,    24,    14,    40,    24,    58,    29,    15,    13,    29,
      14,    64,    13,    47,    16,    33,    13,    14,    20,    20,
      14,    22,    45,    61,    61,    45,    49,    15,    40,    49,
      75,    84,    40,    37,    57,    69,    20,    57,    22,    62,
      63,    16,    95,    63,    48,    22,    86,    28,   101,    61,
      12,    13,    81,    61,    58,    78,    85,    20,    17,    46,
     113,    48,    47,    67,    93,    52,    62,   112,    91,    48,
      38,    91,    97,   102,    55,    62,    99,    64,   107,    60,
      61,    31,   109,   106,    65,   103,   115,    -1,   111,    70,
      71,   111,    96,    -1,    46,    76,    48,    49,    -1,    51,
      52,    -1,    83,    -1,    -1,    -1,    87,    -1,    89,    61,
      62,    -1,    64,    -1,    -1,    -1,    97,    98,    27,    28,
      29,    30,    31,   104,   105,    46,    47,    48,    49,    -1,
      51,    52,    -1,   114,    -1,   116,    -1,    -1,    -1,    -1,
      61,    62,    -1,    64,     3,     4,     5,     6,     7,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    46,    48,    49,    51,    52,    61,    62,    64,    66,
      67,    68,    73,    76,    82,    86,     0,    14,    80,    13,
      72,    80,    40,    73,    80,    85,    20,    22,    71,    72,
      74,    75,    73,    73,    85,    15,    69,    81,    85,    85,
      27,    28,    29,    30,    31,    83,    67,    85,    82,    72,
       3,     4,     5,     6,     7,    70,    74,    84,    81,    16,
      74,    78,    75,    83,    85,    70,    71,    85,    67,    85,
      74,    78,    67,    67,    69,    85,    78,    67,    74,    70,
      67,    67,    17,    79,    81,    67,    73,    79,    67,    78,
      79,    83,    67,    67,    47,    77,    85,    79,    78,    74,
      67,    77,    67,    73,    78,    79,    72,    67,    67,    73,
      79,    84,    85,    81,    78,    67,    79,    67
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    68,    69,    69,    70,    70,    71,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    83,    83,    83,    83,    84,    84,    84,    84,
      84,    85,    85,    86,    86,    86,    86,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     4,     5,     9,    10,    13,
      12,     4,     5,     3,     4,     5,     7,     4,     5,     6,
       8,    19,    20,     1,     1,     3,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 127 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
        (yyval.tree)=new Tree((yyvsp[0].no));
        syntax_tree=(yyval.tree);
    }
#line 1497 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 133 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[-1]).first_line, code_node, "Declaracao1", (yyvsp[-1].no), (yyvsp[0].no), NULL);
            }
#line 1505 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 136 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    { 
            (yyval.no) = new Node((yylsp[-2]).first_line, code_node, "Declaracao2", (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);
            }
#line 1513 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 139 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    { 
            (yyval.no) = new Node((yylsp[-3]).first_line, code_node, "DeclaracaoAtribuicao", (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);
            }
#line 1521 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 142 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    { 
            (yyval.no) = new Node((yylsp[-4]).first_line, code_node, "DeclaracaoAtribuicao", (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);
            }
#line 1529 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 145 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    { 
            (yyval.no) = new Node((yylsp[-8]).first_line, code_node, "CONDICIONAL-If", (yyvsp[-8].no), (yyvsp[-7].no), (yyvsp[-6].no), (yyvsp[-5].no), (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);
            }
#line 1537 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 148 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    { 
            (yyval.no) = new Node((yylsp[-9]).first_line, code_node, "CONDICIONAL-If", (yyvsp[-9].no), (yyvsp[-8].no), (yyvsp[-7].no), (yyvsp[-6].no), (yyvsp[-5].no), (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);
            }
#line 1545 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 151 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[-12]).first_line, code_node, "CONDICIONAL-IfElse", (yyvsp[-12].no), (yyvsp[-11].no), (yyvsp[-10].no), (yyvsp[-9].no), (yyvsp[-8].no), (yyvsp[-7].no), (yyvsp[-6].no), (yyvsp[-5].no), (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);
            }
#line 1553 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 154 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[-11]).first_line, code_node, "CONDICIONAL-IfElse", (yyvsp[-11].no), (yyvsp[-10].no), (yyvsp[-9].no), (yyvsp[-8].no), (yyvsp[-7].no), (yyvsp[-6].no), (yyvsp[-5].no), (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);
            }
#line 1561 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 157 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[-3]).first_line, code_node, "Atribuicao", (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);
            }
#line 1569 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 160 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[-4]).first_line, code_node, "Atribuicao", (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);
            }
#line 1577 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 166 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[-2]).first_line, code_node, "function", (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);
            }
#line 1585 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 169 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[-3]).first_line, code_node, "function", (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);
            }
#line 1593 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 172 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[-4]).first_line, code_node, "function", (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);
            }
#line 1601 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 175 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[-6]).first_line, code_node, "function", (yyvsp[-6].no), (yyvsp[-5].no), (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);
            }
#line 1609 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 178 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[-3]).first_line, code_node, "function", (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);
            }
#line 1617 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 181 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[-4]).first_line, code_node, "function", (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);
            }
#line 1625 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 184 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[-5]).first_line, code_node, "function", (yyvsp[-5].no), (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);
            }
#line 1633 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 187 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[-7]).first_line, code_node, "function", (yyvsp[-7].no), (yyvsp[-6].no), (yyvsp[-5].no), (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);
            }
#line 1641 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 190 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[-18]).first_line, code_node, "for", (yyvsp[-18].no), (yyvsp[-17].no), (yyvsp[-16].no), (yyvsp[-15].no), (yyvsp[-14].no), (yyvsp[-13].no), (yyvsp[-12].no), (yyvsp[-11].no), (yyvsp[-10].no), (yyvsp[-9].no), (yyvsp[-8].no), (yyvsp[-7].no), (yyvsp[-6].no), (yyvsp[-5].no), (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);
    }
#line 1649 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 193 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[-19]).first_line, code_node, "for", (yyvsp[-19].no), (yyvsp[-18].no), (yyvsp[-17].no), (yyvsp[-16].no), (yyvsp[-15].no), (yyvsp[-14].no), (yyvsp[-13].no), (yyvsp[-12].no), (yyvsp[-11].no), (yyvsp[-10].no), (yyvsp[-9].no), (yyvsp[-8].no), (yyvsp[-7].no), (yyvsp[-6].no), (yyvsp[-5].no), (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);
    }
#line 1657 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 198 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[0]).first_line, for_node, strdup(yytext), NULL);
}
#line 1665 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 203 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
                (yyval.no)=new Node((yylsp[0]).first_line, parameter_node, "parameter", (yyvsp[0].no), NULL);
            }
#line 1673 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 206 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
                (yyval.no)=new Node((yylsp[-2]).first_line, parameter_node, "parameter", (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);
            }
#line 1681 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 211 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
                (yyval.no) = new Node((yylsp[0]).first_line, recursionOP_node, "OperacaoRecursiva", (yyvsp[0].no), NULL);
                }
#line 1689 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 214 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
                (yyval.no) = new Node((yylsp[-2]).first_line, recursionOP_node,"OperacaoRecursiva", (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);
                }
#line 1697 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 219 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
                (yyval.no) = new Node((yylsp[0]).first_line, recursionDec_node, "DeclaracaoRecursiva", (yyvsp[0].no), NULL);
                }
#line 1705 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 222 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
                (yyval.no) = new Node((yylsp[-2]).first_line, recursionDec_node, "DeclaracaoRecursiva", (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);
                }
#line 1713 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 227 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    { 
                (yyval.no) = new Node((yylsp[0]).first_line, assignment_node, strdup(yytext), NULL); 
                }
#line 1721 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 232 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {  

            (yyval.no) = new Node((yylsp[0]).first_line, var_node, strdup(yytext), NULL);
            }
#line 1730 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 239 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
        (yyval.no) = new Node((yylsp[0]).first_line, semi_node, strdup(yytext), NULL);
        }
#line 1738 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 244 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
        (yyval.no) = new Node((yylsp[0]).first_line, comma_node, strdup(yytext), NULL);
        }
#line 1746 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 249 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
        (yyval.no) = new Node((yylsp[0]).first_line, if_node, strdup(yytext), NULL);
        }
#line 1754 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 254 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
        (yyval.no) = new Node((yylsp[0]).first_line, else_node, strdup(yytext), NULL);
        }
#line 1762 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 259 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[0]).first_line, openKey_node, strdup(yytext), NULL);
            }
#line 1770 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 264 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[0]).first_line, closeKey_node, strdup(yytext), NULL);
            }
#line 1778 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 269 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[0]).first_line, openparent_node, strdup(yytext), NULL);
            }
#line 1786 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 274 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[0]).first_line, closeparent_node, strdup(yytext), NULL);
            }
#line 1794 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 279 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
                    (yyval.no) = new Node((yylsp[-1]).first_line, declaration_node, "NT-Declaracao", (yyvsp[-1].no), (yyvsp[0].no), NULL);
                    }
#line 1802 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 284 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
                    (yyval.no) = new Node((yylsp[0]).first_line, boolean_exp_node, strdup(yytext), NULL);
                    }
#line 1810 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 287 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
                    (yyval.no) = new Node((yylsp[0]).first_line, boolean_exp_node, strdup(yytext), NULL);
                    }
#line 1818 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 290 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
                    (yyval.no) = new Node((yylsp[0]).first_line, boolean_exp_node, strdup(yytext), NULL);
                    }
#line 1826 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 293 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
                    (yyval.no) = new Node((yylsp[0]).first_line, boolean_exp_node, strdup(yytext), NULL);
                    }
#line 1834 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 296 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
                    (yyval.no) = new Node((yylsp[0]).first_line, boolean_exp_node, strdup(yytext), NULL);
                    }
#line 1842 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 302 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
        (yyval.no) = new Node((yylsp[0]).first_line, plus_node, strdup(yytext), NULL);
        }
#line 1850 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 305 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
        (yyval.no) = new Node((yylsp[0]).first_line, minus_node, strdup(yytext), NULL);
        }
#line 1858 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 308 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
        (yyval.no) = new Node((yylsp[0]).first_line, times_node, strdup(yytext), NULL);
        }
#line 1866 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 311 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
        (yyval.no) = new Node((yylsp[0]).first_line, divide_node, strdup(yytext), NULL);
        }
#line 1874 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 314 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
        (yyval.no) = new Node((yylsp[0]).first_line, rest_node, strdup(yytext), NULL);
        }
#line 1882 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 319 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[0]).first_line, value_node, "Declaracao", (yyvsp[0].no), NULL);
            }
#line 1890 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 322 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[0]).first_line, value_node, strdup(yytext), NULL);
            }
#line 1898 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 327 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[0]).first_line, float_node, strdup(yytext), NULL);
            }
#line 1906 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 330 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[0]).first_line, int_node, strdup(yytext), NULL);
            }
#line 1914 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 333 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[0]).first_line, char_node, strdup(yytext), NULL);
            }
#line 1922 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 336 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[0]).first_line, double_node, strdup(yytext), NULL);
            }
#line 1930 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 339 "_Syntactic/syntactic.y" /* yacc.c:1646  */
    {
            (yyval.no) = new Node((yylsp[0]).first_line, bool_node, strdup(yytext), NULL);
            }
#line 1938 "_Source/syntactic.tab.c" /* yacc.c:1646  */
    break;


#line 1942 "_Source/syntactic.tab.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 347 "_Syntactic/syntactic.y" /* yacc.c:1906  */

 /* A partir daqui, insere-se qlqer codigo C necessario.
  */