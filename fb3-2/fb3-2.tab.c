/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "fb3-2.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <stdarg.h>
    #include <string.h>
    #include <math.h>
    #include "fb3-2.h"

    int yylex();

    #define NHASH 9997
    struct symbol symtab[NHASH];

/* Line 371 of yacc.c  */
#line 82 "fb3-2.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "fb3-2.tab.h".  */
#ifndef YY_YY_FB3_2_TAB_H_INCLUDED
# define YY_YY_FB3_2_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     NAME = 259,
     FUNC = 260,
     EOL = 261,
     IF = 262,
     THEN = 263,
     ELSE = 264,
     WHILE = 265,
     DO = 266,
     LET = 267,
     CMP = 268,
     UMINUS = 269
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 15 "fb3-2.y"

    struct ast *a;
    double d;
    struct symbol *s;
    struct symlist *sl;
    int fn;


/* Line 387 of yacc.c  */
#line 148 "fb3-2.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_FB3_2_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 176 "fb3-2.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   114

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  27
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  7
/* YYNRULES -- Number of rules.  */
#define YYNRULES  29
/* YYNRULES -- Number of states.  */
#define YYNSTATES  63

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   271

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      22,    23,    17,    15,    24,    16,     2,    18,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    21,
       2,    14,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    19,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    20,
      25,    26
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    10,    15,    20,    23,    25,    26,    29,
      33,    37,    41,    45,    49,    52,    56,    59,    61,    63,
      67,    72,    77,    79,    83,    85,    89,    90,    94,   104
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      33,     0,    -1,     7,    30,     8,    29,     9,    29,    -1,
       7,    30,     8,    29,    -1,    10,    30,    11,    29,    -1,
      30,    21,    -1,    30,    -1,    -1,    28,    29,    -1,    30,
      13,    30,    -1,    30,    15,    30,    -1,    30,    16,    30,
      -1,    30,    17,    30,    -1,    30,    18,    30,    -1,    19,
      30,    -1,    22,    30,    23,    -1,    16,    30,    -1,     3,
      -1,     4,    -1,     4,    14,    30,    -1,     5,    22,    31,
      23,    -1,     4,    22,    31,    23,    -1,    30,    -1,    30,
      24,    31,    -1,     4,    -1,     4,    24,    32,    -1,    -1,
      33,    28,     6,    -1,    33,    12,     4,    25,    32,    26,
      14,    29,     6,    -1,    33,     1,     6,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    43,    43,    44,    45,    46,    47,    49,    50,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    71,    72,    74,    75,    77,    78,    82,    86
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "NAME", "FUNC", "EOL", "IF",
  "THEN", "ELSE", "WHILE", "DO", "LET", "CMP", "'='", "'+'", "'-'", "'*'",
  "'/'", "'|'", "UMINUS", "';'", "'('", "')'", "','", "\"(\"", "\")\"",
  "$accept", "stmt", "list", "exp", "explist", "symlist", "calclist", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,    61,    43,    45,    42,    47,   124,
     269,    59,    40,    41,    44,   270,   271
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    27,    28,    28,    28,    28,    28,    29,    29,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    31,    31,    32,    32,    33,    33,    33,    33
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     4,     4,     2,     1,     0,     2,     3,
       3,     3,     3,     3,     2,     3,     2,     1,     1,     3,
       4,     4,     1,     3,     1,     3,     0,     3,     9,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      26,     0,     1,     0,    17,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     6,    29,     0,     0,     0,     0,
       0,     0,    16,    14,     0,    27,     0,     0,     0,     0,
       0,     5,    19,    22,     0,     0,     7,     7,     0,    15,
       9,    10,    11,    12,    13,     0,    21,    20,     7,     3,
       4,    24,     0,    23,     8,     7,     0,     0,     2,    25,
       7,     0,    28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    48,    49,    14,    34,    52,     1
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -31
static const yytype_int8 yypact[] =
{
     -31,    32,   -31,     2,   -31,    -8,     4,    12,    12,    20,
      12,    12,    12,    21,    77,   -31,    12,    12,    12,    62,
      86,    15,   -31,   -31,    68,   -31,    12,    12,    12,    12,
      12,   -31,    96,    50,    18,    27,    42,    42,    39,   -31,
      92,    -5,    -5,   -31,   -31,    12,   -31,   -31,    42,    44,
     -31,    31,    30,   -31,   -31,    42,    39,    43,   -31,   -31,
      42,    53,   -31
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -31,    59,   -30,    -7,   -16,     6,   -31
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int8 yytable[] =
{
      19,    20,    35,    22,    23,    24,    16,    50,    15,    32,
      33,    33,    29,    30,    17,     4,     5,     6,    54,    40,
      41,    42,    43,    44,    21,    58,    18,    25,    10,    53,
      61,    11,     2,     3,    12,     4,     5,     6,    33,     7,
      38,    46,     8,    51,     9,     4,     5,     6,    10,     7,
      47,    11,     8,    55,    12,    56,    57,    60,    10,    62,
      13,    11,    59,    26,    12,    27,    28,    29,    30,     0,
      36,     0,     0,     0,    45,    26,     0,    27,    28,    29,
      30,    26,     0,    27,    28,    29,    30,     0,     0,     0,
      26,    39,    27,    28,    29,    30,     0,    37,    31,    26,
       0,    27,    28,    29,    30,    -1,     0,    27,    28,    29,
      30,    27,    28,    29,    30
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-31)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

static const yytype_int8 yycheck[] =
{
       7,     8,    18,    10,    11,    12,    14,    37,     6,    16,
      17,    18,    17,    18,    22,     3,     4,     5,    48,    26,
      27,    28,    29,    30,     4,    55,    22,     6,    16,    45,
      60,    19,     0,     1,    22,     3,     4,     5,    45,     7,
      25,    23,    10,     4,    12,     3,     4,     5,    16,     7,
      23,    19,    10,     9,    22,    24,    26,    14,    16,     6,
       1,    19,    56,    13,    22,    15,    16,    17,    18,    -1,
       8,    -1,    -1,    -1,    24,    13,    -1,    15,    16,    17,
      18,    13,    -1,    15,    16,    17,    18,    -1,    -1,    -1,
      13,    23,    15,    16,    17,    18,    -1,    11,    21,    13,
      -1,    15,    16,    17,    18,    13,    -1,    15,    16,    17,
      18,    15,    16,    17,    18
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    33,     0,     1,     3,     4,     5,     7,    10,    12,
      16,    19,    22,    28,    30,     6,    14,    22,    22,    30,
      30,     4,    30,    30,    30,     6,    13,    15,    16,    17,
      18,    21,    30,    30,    31,    31,     8,    11,    25,    23,
      30,    30,    30,    30,    30,    24,    23,    23,    28,    29,
      29,     4,    32,    31,    29,     9,    24,    26,    29,    32,
      14,    29,     6
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
      yychar = YYLEX;
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
     `$$ = $1'.

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
/* Line 1792 of yacc.c  */
#line 43 "fb3-2.y"
    { (yyval.a) = newflow('I', (yyvsp[(2) - (6)].a), (yyvsp[(4) - (6)].a), (yyvsp[(6) - (6)].a)); }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 44 "fb3-2.y"
    { (yyval.a) = newflow('I', (yyvsp[(2) - (4)].a), (yyvsp[(4) - (4)].a), NULL); }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 45 "fb3-2.y"
    { (yyval.a) = newflow('W', (yyvsp[(2) - (4)].a), (yyvsp[(4) - (4)].a), NULL); }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 46 "fb3-2.y"
    { (yyval.a) = (yyvsp[(1) - (2)].a); }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 47 "fb3-2.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 49 "fb3-2.y"
    { (yyval.a) = NULL; }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 50 "fb3-2.y"
    { 
        if ((yyvsp[(2) - (2)].a) == NULL) 
            (yyval.a) = (yyvsp[(1) - (2)].a);
        else 
            (yyval.a) = newast('L', (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a));
    }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 57 "fb3-2.y"
    { (yyval.a) = newcmp((yyvsp[(2) - (3)].fn), (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 58 "fb3-2.y"
    { (yyval.a) = newast('+', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 59 "fb3-2.y"
    { (yyval.a) = newast('-', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 60 "fb3-2.y"
    { (yyval.a) = newast('*', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 61 "fb3-2.y"
    { (yyval.a) = newast('/', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 62 "fb3-2.y"
    { (yyval.a) = newast('|', (yyvsp[(2) - (2)].a), NULL); }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 63 "fb3-2.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 64 "fb3-2.y"
    { (yyval.a) = newast('M', (yyvsp[(2) - (2)].a), NULL); }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 65 "fb3-2.y"
    { (yyval.a) = newnum((yyvsp[(1) - (1)].d)); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 66 "fb3-2.y"
    { (yyval.a) = newref((yyvsp[(1) - (1)].s)); }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 67 "fb3-2.y"
    { (yyval.a) = newasgn((yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].a)); }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 68 "fb3-2.y"
    { (yyval.a) = newfunc((yyvsp[(1) - (4)].fn), (yyvsp[(3) - (4)].a)); }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 69 "fb3-2.y"
    { (yyval.a) = newcall((yyvsp[(1) - (4)].s), (yyvsp[(3) - (4)].a)); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 72 "fb3-2.y"
    { (yyval.a) = newast('L', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 74 "fb3-2.y"
    { (yyval.sl) = newsymlist((yyvsp[(1) - (1)].s), NULL); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 75 "fb3-2.y"
    { (yyval.sl) = newsymlist((yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].sl)); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 78 "fb3-2.y"
    { 
        printf("= %4.4g\n> ", eval((yyvsp[(2) - (3)].a))); 
        treefree((yyvsp[(2) - (3)].a));
    }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 82 "fb3-2.y"
    {
        dodef((yyvsp[(3) - (9)].s), (yyvsp[(5) - (9)].sl), (yyvsp[(8) - (9)].a));
        printf("Defined %s\n> ", (yyvsp[(3) - (9)].s)->name);
    }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 86 "fb3-2.y"
    { yyerror("Syntax error"); printf("> "); }
    break;


/* Line 1792 of yacc.c  */
#line 1582 "fb3-2.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 87 "fb3-2.y"


static unsigned symhash(char *sym) { 
    unsigned int hash = 0; 
    unsigned c; 
    
    while(c = *sym++) hash = hash*9 ^ c; 
    
    return hash; 
}

struct symbol *lookup(char* sym) { 
    struct symbol *sp = &symtab[symhash(sym)%NHASH]; 
    int scount = NHASH; 
    
    while(--scount >= 0) { 
        if(sp->name && !strcmp(sp->name, sym)) { return sp; } 
        if(!sp->name) { 
            sp->name = strdup(sym); 
            sp->value = 0; 
            sp->func = NULL; 
            sp->syms = NULL; 
    
            return sp; 
        } 

        if(++sp >= symtab+NHASH) sp = symtab; 
    } 

    yyerror("Symbol table overflow\n"); 
    abort(); 
} 

struct ast * newast(int nodetype, struct ast *l, struct ast *r) { 
    struct ast *a = malloc(sizeof(struct ast)); 

    if(!a) { 
        yyerror("Without available space left"); 
        exit(0); 
    } 

    a->nodetype = nodetype; 
    a->l = l; 
    a->r = r; 

    return a; 
}

struct ast * newnum(double d) { 
    struct numval *a = malloc(sizeof(struct numval)); 
    
    if(!a) { 
        yyerror("Without available space left"); 
        exit(0); 
    } 
    
    a->nodetype = 'K'; 
    a->number = d; 
    
    return (struct ast *)a; 
}

struct ast * newcmp(int cmptype, struct ast *l, struct ast *r) { 
    struct ast *a = malloc(sizeof(struct ast)); 
   
    if(!a) { 
        yyerror("Without available space left"); 
        exit(0); 
    } 
    
    a->nodetype = '0' + cmptype; 
    a->l = l; 
    a->r = r; 

    return a; 
}

struct ast * newfunc(int functype, struct ast *l) { 
    struct fncall *a = malloc(sizeof(struct fncall)); 
    
    if(!a) { 
        yyerror("Without available space left"); 
        exit(0); 
    } 
    
    a->nodetype = 'F'; 
    a->l = l; 
    a->functype = functype; 
    
    return (struct ast *)a; 
} 

struct ast *newcall(struct symbol *s, struct ast *l) { 
    struct ufncall *a = malloc(sizeof(struct ufncall)); 
    
    if(!a) { 
        yyerror("Without available space left"); 
        exit(0); 
    } 
    
    a->nodetype = 'C'; 
    a->l = l; 
    a->s = s; 
    
    return (struct ast *)a; 
}

struct ast *newref(struct symbol *s) { 
    struct symref *a = malloc(sizeof(struct symref)); 
    
    if(!a) { 
        yyerror("Without available space left"); 
        exit(0); 
    } 

    a->nodetype = 'N'; 
    a->s = s; 

    return (struct ast *)a; 
}

struct ast *newasgn(struct symbol *s, struct ast *v) { 
    struct symasgn *a = malloc(sizeof(struct symasgn)); 

    if(!a) { 
        yyerror("Without available space left"); 
        exit(0); 
    } 

    a->nodetype = '='; 
    a->s = s; 
    a->v = v; 

    return (struct ast *)a; 
} 

struct ast *newflow(int nodetype, struct ast *cond, struct ast *tl, struct ast *el) {

    struct flow *a = malloc(sizeof(struct flow)); 
    
    if(!a) { 
        yyerror("Without available space left"); 
        exit(0); 
    } 
    
    a->nodetype = nodetype; 
    a->cond = cond; 
    a->tl = tl; 
    a->el = el; 
    
    return (struct ast *)a; 
}


void treefree(struct ast *a) { 
    switch(a->nodetype) { 
        case '+': 
        case '-': 
        case '*': 
        case '/': 
        case '1':  case '2':  case '3':  case '4':  case '5':  case '6': 
        case 'L': 
            treefree(a->r); 
        case '|': 
        case 'M': case 'C': case 'F': 
            treefree(a->l); 
        case 'K': case 'N': 
            break; 
            case '=': 
                free( ((struct symasgn *)a)->v); 
            break; 
        case 'I': case 'W': 
            free( ((struct flow *)a)->cond); 
            if( ((struct flow *)a)->tl) treefree( ((struct flow *)a)->tl); 
            if( ((struct flow *)a)->el) treefree( ((struct flow *)a)->el); 
            break; 
        default: printf("Intern error: free node not working %c\n",        a->nodetype); 
    }  

    free(a); 
} 

struct symlist *newsymlist(struct symbol *sym, struct symlist *next) { 
    struct symlist *sl = malloc(sizeof(struct symlist)); 
    
    if(!sl) { 
        yyerror("Without available space left"); 
        exit(0); 
    } 
    
    sl->sym = sym; 
    sl->next = next; 

    return sl; 
} 

void symlistfree(struct symlist *sl) { 
    struct symlist *nsl; 
    while(sl) { 
        nsl = sl->next; 
        free(sl); 
        sl = nsl; 
    } 
}

static double callbuiltin(struct fncall *); 
static double calluser(struct ufncall *); 

double eval(struct ast *a) { 
    double v; 
    
    if(!a) { 
        yyerror("Intern error: null eval"); 
        return 0.0; 
    } 
    switch(a->nodetype) { 
        case 'K': v = ((struct numval *)a)->number; break; 
        case 'N': v = ((struct symref *)a)->s->value; break; 
        case '=': v = ((struct symasgn *)a)->s->value = 
            eval(((struct symasgn *)a)->v); break; 
        case '+': v = eval(a->l) + eval(a->r); break; 
        case '-': v = eval(a->l) - eval(a->r); break; 
        case '*': v = eval(a->l) * eval(a->r); break; 
        case '/': v = eval(a->l) / eval(a->r); break; 
        case '|': v = fabs(eval(a->l)); break; 
        case 'M': v = -eval(a->l); break; 
        case '1': v = (eval(a->l) > eval(a->r))? 1 : 0; break; 
        case '2': v = (eval(a->l) < eval(a->r))? 1 : 0; break; 
        case '3': v = (eval(a->l) != eval(a->r))? 1 : 0; break; 
        case '4': v = (eval(a->l) == eval(a->r))? 1 : 0; break; 
        case '5': v = (eval(a->l) >= eval(a->r))? 1 : 0; break; 
        case '6': v = (eval(a->l) <= eval(a->r))? 1 : 0; break; 
        case 'I':  
            if( eval( ((struct flow *)a)->cond) != 0) {  
                if( ((struct flow *)a)->tl) {              
                    v = eval( ((struct flow *)a)->tl); 
                } else { 
                    if( ((struct flow *)a)->el) { 
                        v = eval(((struct flow *)a)->el); 
                    } else {                
                        v = 0.0;
                    } 
                }
            }
            break; 
        case 'W': 
            v = 0.0; 
            if( ((struct flow *)a)->tl) { 
                while( eval(((struct flow *)a)->cond) != 0) 
                    v = eval(((struct flow *)a)->tl);          
            } 
            break; 
        case 'L': eval(a->l); v = eval(a->r); break; 
        case 'F': v = callbuiltin((struct fncall *)a); break; 
        case 'C': v = calluser((struct ufncall *)a); break; 
        default: printf("Intern error: incorrect node operation %c\n", a->nodetype); 
    } 

    return v; 
} 

static double callbuiltin(struct fncall *f) { 
    enum bifs functype = f->functype; 
    double v = eval(f->l); 

    switch(functype) { 
        case B_sqrt: 
            return sqrt(v); 
        case B_exp: 
            return exp(v); 
        case B_log: 
            return log(v); 
        case B_print: 
            printf("= %4.4g\n", v); 
            return v; 
        default: 
            yyerror("Unknown function used for value: %d", functype); 
            return 0.0; 
    }    
}

void dodef(struct symbol *name, struct symlist *syms, struct ast *func) {
    if(name->syms) symlistfree(name->syms); 
    if(name->func) treefree(name->func); 
    name->syms = syms; 
    name->func = func;
}

static double calluser(struct ufncall *f) {
    struct symbol *fn = f->s;
    struct symlist *sl;
    struct ast *args = f->l;

    double *oldval; 
    double *newval;
    double v;

    int nargs;
    int i;

    if (!fn->func) {
        yyerror("Trying to call an undefined function: %s\n", fn->name);
        return 0;
    }

    sl = fn->syms;

    for (nargs = 0; sl; sl = sl->next) {
        nargs++;

        oldval = (double *) malloc(nargs * sizeof(double));
        newval = (double *) malloc(nargs * sizeof(double));

        if (!oldval || !newval) {
            yyerror("No space left in: %s", fn->name);
            
            return 0.0;
        }
    }

    for (i = 0; i < nargs;  i++){
        if (!args) {
            yyerror("No args left or no enough arguments in the call to: %s", fn->name);
            
            free(oldval);
            free(newval);

            return 0.0;
        }

        if (args->nodetype == 'L') {
            newval[i] = eval(args->l);
            args = args->r;
        }
        else {
            newval[i] = eval(args);
            args = NULL;
        }

    }

    sl = fn->syms;

    for (i = 0; i < nargs; i++) {
        struct symbol*s = sl->sym;

        oldval[i] = s->value;
        
        s->value = newval[i];
        sl = sl->next;
    }

    free(newval);

    v = eval(fn->func);

    sl = fn->syms;

    for (i = 0; i < nargs; i++) {
        struct symbol *s = sl->sym;
        s->value = oldval[i];
    } 

    free(oldval);

    return v;
}

void yyerror(char *s, ...) {
    va_list ap; 
    va_start(ap, s); 
    fprintf(stderr, "%d: error: ", yylineno); 
    vfprintf(stderr, s, ap); 
    fprintf(stderr, "\n"); 
}

int main() {
    printf("Mathematical operation or expression\n");
    printf("> ");

    return yyparse();
}