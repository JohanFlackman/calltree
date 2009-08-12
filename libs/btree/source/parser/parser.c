/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_ROOT = 258,
     T_NODE = 259,
     T_ID = 260,
     T_COLON = 261,
     T_SEMICOLON = 262,
     T_COMMA = 263,
     T_ASSIGNMENT = 264,
     T_SEQUENCE = 265,
     T_SELECTOR = 266,
     T_DSELECTOR = 267,
     T_PARALLEL = 268,
     T_ACTION = 269,
     T_DECORATOR = 270,
     T_INT32 = 271,
     T_BOOL = 272,
     T_FLOAT = 273,
     T_STRING = 274,
     T_INT32_VALUE = 275,
     T_BOOL_VALUE = 276,
     T_FLOAT_VALUE = 277,
     T_STRING_VALUE = 278,
     T_END_OF_FILE = 279
   };
#endif
/* Tokens.  */
#define T_ROOT 258
#define T_NODE 259
#define T_ID 260
#define T_COLON 261
#define T_SEMICOLON 262
#define T_COMMA 263
#define T_ASSIGNMENT 264
#define T_SEQUENCE 265
#define T_SELECTOR 266
#define T_DSELECTOR 267
#define T_PARALLEL 268
#define T_ACTION 269
#define T_DECORATOR 270
#define T_INT32 271
#define T_BOOL 272
#define T_FLOAT 273
#define T_STRING 274
#define T_INT32_VALUE 275
#define T_BOOL_VALUE 276
#define T_FLOAT_VALUE 277
#define T_STRING_VALUE 278
#define T_END_OF_FILE 279




/* Copy the first part of user declarations.  */
#line 18 "libs\\btree\\source\\parser\\parser.y"

#include "common.h"

#define YYMALLOC malloc
#define YYFREE free


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 48 "libs\\btree\\source\\parser\\parser.y"
{
    Node*          m_Node;
    Identifier*    m_Id;
    NodeGrist*     m_NodeGrist;
    FunctionGrist* m_FuncGrist;
    NodeList*      m_NodeList;
    Action*        m_Action;
    Decorator*     m_Decorator;
    int            m_Integer;
    float          m_Float;
    const char*    m_String;
    Variable*      m_Variable;
	VariableList*  m_VariableList;
}
/* Line 193 of yacc.c.  */
#line 166 "libs\\btree\\source\\parser\\parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 179 "libs\\btree\\source\\parser\\parser.c"

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
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   120

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  25
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  53
/* YYNRULES -- Number of states.  */
#define YYNSTATES  116

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   279

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    13,    15,    17,    19,
      21,    28,    39,    41,    51,    59,    67,    73,    79,    84,
      86,    88,    90,    92,    94,    96,   101,   106,   111,   116,
     123,   132,   137,   144,   145,   149,   151,   153,   155,   157,
     159,   160,   164,   166,   169,   172,   175,   178,   179,   183,
     185,   189,   193,   197
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      26,     0,    -1,    27,    24,    -1,    27,    28,    -1,    28,
      -1,    29,    -1,    30,    -1,    33,    -1,    34,    -1,     7,
      -1,    14,     6,    46,     6,    31,    32,    -1,    15,     6,
      46,     6,    31,     6,    21,     6,    21,    32,    -1,    20,
      -1,     6,    21,     6,    21,     6,    20,     6,    47,     7,
      -1,     6,    21,     6,    21,     6,    47,     7,    -1,     6,
      21,     6,    21,     6,    20,     7,    -1,     6,    21,     6,
      21,     7,    -1,     4,     6,    46,     6,    35,    -1,     3,
       6,    43,     7,    -1,    36,    -1,    37,    -1,    38,    -1,
      39,    -1,    40,    -1,    41,    -1,    11,     6,    42,     7,
      -1,    12,     6,    42,     7,    -1,    10,     6,    42,     7,
      -1,    13,     6,    42,     7,    -1,    15,     6,    45,     6,
      43,     7,    -1,    15,     6,    45,     6,    43,     6,    49,
       7,    -1,    14,     6,    44,     7,    -1,    14,     6,    44,
       6,    49,     7,    -1,    -1,    42,     8,    43,    -1,    43,
      -1,    46,    -1,    46,    -1,    46,    -1,     5,    -1,    -1,
      47,     8,    48,    -1,    48,    -1,    19,     5,    -1,    16,
       5,    -1,    18,     5,    -1,    17,     5,    -1,    -1,    49,
       8,    50,    -1,    50,    -1,     5,     9,    23,    -1,     5,
       9,    20,    -1,     5,     9,    22,    -1,     5,     9,    21,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   115,   117,   122,   124,   126,   128,   130,
     136,   159,   186,   194,   204,   213,   222,   233,   260,   268,
     273,   278,   283,   288,   293,   301,   310,   319,   328,   338,
     346,   365,   371,   390,   394,   413,   436,   453,   470,   487,
     496,   500,   512,   526,   534,   542,   550,   562,   566,   577,
     591,   599,   607,   615
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_ROOT", "T_NODE", "T_ID", "T_COLON",
  "T_SEMICOLON", "T_COMMA", "T_ASSIGNMENT", "T_SEQUENCE", "T_SELECTOR",
  "T_DSELECTOR", "T_PARALLEL", "T_ACTION", "T_DECORATOR", "T_INT32",
  "T_BOOL", "T_FLOAT", "T_STRING", "T_INT32_VALUE", "T_BOOL_VALUE",
  "T_FLOAT_VALUE", "T_STRING_VALUE", "T_END_OF_FILE", "$accept",
  "nt_behaviour_tree", "nt_declaration_list", "nt_declaration",
  "nt_action_dec", "nt_decorator_dec", "nt_function_id",
  "nt_function_grist", "nt_node_dec", "nt_root_dec", "nt_node_grist",
  "nt_selector_node_grist", "nt_dyn_selector_node_grist",
  "nt_sequence_node_grist", "nt_parallel_node_grist",
  "nt_decorator_node_grist", "nt_action_node_grist", "nt_node_list",
  "nt_node_ref", "nt_action_ref", "nt_decorator_ref", "nt_id",
  "nt_variable_dec_list", "nt_variable_dec", "nt_variable_list",
  "nt_variable", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    25,    26,    27,    27,    28,    28,    28,    28,    28,
      29,    30,    31,    32,    32,    32,    32,    33,    34,    35,
      35,    35,    35,    35,    35,    36,    37,    38,    39,    40,
      40,    41,    41,    42,    42,    42,    43,    44,    45,    46,
      47,    47,    47,    48,    48,    48,    48,    49,    49,    49,
      50,    50,    50,    50
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       6,    10,     1,     9,     7,     7,     5,     5,     4,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     6,
       8,     4,     6,     0,     3,     1,     1,     1,     1,     1,
       0,     3,     1,     2,     2,     2,     2,     0,     3,     1,
       3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     9,     0,     0,     0,     0,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     1,     2,     3,
      39,     0,    36,     0,     0,     0,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17,    19,    20,    21,
      22,    23,    24,    12,     0,     0,    33,    33,    33,    33,
       0,     0,     0,    10,     0,     0,    35,     0,     0,     0,
       0,    37,     0,    38,     0,     0,    27,     0,    25,    26,
      28,    47,    31,     0,     0,     0,    34,     0,     0,    49,
       0,     0,     0,     0,    32,     0,    47,    29,    40,    16,
      11,    51,    53,    52,    50,    48,     0,     0,     0,     0,
       0,     0,     0,    42,    30,    44,    46,    45,    43,    40,
      15,    14,     0,     0,    41,    13
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    10,    44,    53,    11,    12,
      36,    37,    38,    39,    40,    41,    42,    55,    56,    60,
      62,    22,   102,   103,    78,    79
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -16
static const yytype_int8 yypact[] =
{
       4,    -5,    47,   -16,    53,    63,    70,     2,   -16,   -16,
     -16,   -16,   -16,     5,     5,     5,     5,   -16,   -16,   -16,
     -16,    64,   -16,    66,    67,    68,   -16,    10,    55,    55,
      71,    72,    73,    74,    75,    76,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,    77,    78,     5,     5,     5,     5,
       5,     5,    65,   -16,    69,    29,   -16,    36,    38,    40,
      43,   -16,    79,   -16,    81,    82,   -16,     5,   -16,   -16,
     -16,    84,   -16,     5,    80,    83,   -16,    85,    44,   -16,
      49,    51,    77,    -8,   -16,    84,    84,   -16,    11,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,    54,    86,    87,    88,
      90,    57,    58,   -16,   -16,   -16,   -16,   -16,   -16,    16,
     -16,   -16,    16,    60,   -16,   -16
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -16,   -16,   -16,    89,   -16,   -16,    91,    -6,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,   -16,    -7,   -13,   -16,
     -16,   -12,   -11,   -15,    13,    15
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      21,    13,    23,    24,    25,     1,     2,     1,     2,     3,
      20,     3,    91,    92,    93,    94,     4,     5,     4,     5,
      30,    31,    32,    33,    34,    35,    18,    97,    98,    99,
     100,   101,    97,    98,    99,   100,    66,    67,    61,    63,
      57,    58,    59,    68,    67,    69,    67,    70,    67,    71,
      72,    84,    85,    14,    76,    86,    87,    88,    89,    15,
      80,   104,    85,   109,   110,   111,   112,   115,   112,    16,
      17,    26,    27,    28,    29,    43,    90,    46,    47,    48,
      49,    50,    51,    52,    54,    73,    64,    74,    75,    77,
      65,   105,   106,   107,    83,   108,    19,   114,   113,    96,
      95,    81,     0,     0,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      45
};

static const yytype_int8 yycheck[] =
{
      13,     6,    14,    15,    16,     3,     4,     3,     4,     7,
       5,     7,    20,    21,    22,    23,    14,    15,    14,    15,
      10,    11,    12,    13,    14,    15,    24,    16,    17,    18,
      19,    20,    16,    17,    18,    19,     7,     8,    50,    51,
      47,    48,    49,     7,     8,     7,     8,     7,     8,     6,
       7,     7,     8,     6,    67,     6,     7,     6,     7,     6,
      73,     7,     8,     6,     7,     7,     8,     7,     8,     6,
       0,     7,     6,     6,     6,    20,    82,     6,     6,     6,
       6,     6,     6,     6,     6,     6,    21,     6,     6,     5,
      21,     5,     5,     5,     9,     5,     7,   112,   109,    86,
      85,    21,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     7,    14,    15,    26,    27,    28,    29,
      30,    33,    34,     6,     6,     6,     6,     0,    24,    28,
       5,    43,    46,    46,    46,    46,     7,     6,     6,     6,
      10,    11,    12,    13,    14,    15,    35,    36,    37,    38,
      39,    40,    41,    20,    31,    31,     6,     6,     6,     6,
       6,     6,     6,    32,     6,    42,    43,    42,    42,    42,
      44,    46,    45,    46,    21,    21,     7,     8,     7,     7,
       7,     6,     7,     6,     6,     6,    43,     5,    49,    50,
      43,    21,    21,     9,     7,     8,     6,     7,     6,     7,
      32,    20,    21,    22,    23,    50,    49,    16,    17,    18,
      19,    20,    47,    48,     7,     5,     5,     5,     5,     6,
       7,     7,     8,    47,    48,     7
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (ctx, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, scanner)
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
		  Type, Value, ctx, scanner); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, ParserContext* ctx, void* scanner)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, ctx, scanner)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    ParserContext* ctx;
    void* scanner;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (ctx);
  YYUSE (scanner);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, ParserContext* ctx, void* scanner)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, ctx, scanner)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    ParserContext* ctx;
    void* scanner;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, ctx, scanner);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, ParserContext* ctx, void* scanner)
#else
static void
yy_reduce_print (yyvsp, yyrule, ctx, scanner)
    YYSTYPE *yyvsp;
    int yyrule;
    ParserContext* ctx;
    void* scanner;
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , ctx, scanner);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, ctx, scanner); \
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, ParserContext* ctx, void* scanner)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, ctx, scanner)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    ParserContext* ctx;
    void* scanner;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (ctx);
  YYUSE (scanner);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {
      case 5: /* "T_ID" */
#line 84 "libs\\btree\\source\\parser\\parser.y"
	{ ctx->m_Tree->FreeId( (yyvaluep->m_Id) ); };
#line 1182 "libs\\btree\\source\\parser\\parser.c"
	break;
      case 32: /* "nt_function_grist" */
#line 101 "libs\\btree\\source\\parser\\parser.y"
	{ ctx->m_Tree->FreeFunctionGrist( (yyvaluep->m_FuncGrist) ); };
#line 1187 "libs\\btree\\source\\parser\\parser.c"
	break;
      case 33: /* "nt_node_dec" */
#line 85 "libs\\btree\\source\\parser\\parser.y"
	{ ctx->m_Tree->FreeNode( (yyvaluep->m_Node) ); };
#line 1192 "libs\\btree\\source\\parser\\parser.c"
	break;
      case 35: /* "nt_node_grist" */
#line 90 "libs\\btree\\source\\parser\\parser.y"
	{ ctx->m_Tree->FreeNodeGrist( (yyvaluep->m_NodeGrist) ); };
#line 1197 "libs\\btree\\source\\parser\\parser.c"
	break;
      case 36: /* "nt_selector_node_grist" */
#line 91 "libs\\btree\\source\\parser\\parser.y"
	{ ctx->m_Tree->FreeNodeGrist( (yyvaluep->m_NodeGrist) ); };
#line 1202 "libs\\btree\\source\\parser\\parser.c"
	break;
      case 37: /* "nt_dyn_selector_node_grist" */
#line 92 "libs\\btree\\source\\parser\\parser.y"
	{ ctx->m_Tree->FreeNodeGrist( (yyvaluep->m_NodeGrist) ); };
#line 1207 "libs\\btree\\source\\parser\\parser.c"
	break;
      case 38: /* "nt_sequence_node_grist" */
#line 93 "libs\\btree\\source\\parser\\parser.y"
	{ ctx->m_Tree->FreeNodeGrist( (yyvaluep->m_NodeGrist) ); };
#line 1212 "libs\\btree\\source\\parser\\parser.c"
	break;
      case 39: /* "nt_parallel_node_grist" */
#line 94 "libs\\btree\\source\\parser\\parser.y"
	{ ctx->m_Tree->FreeNodeGrist( (yyvaluep->m_NodeGrist) ); };
#line 1217 "libs\\btree\\source\\parser\\parser.c"
	break;
      case 40: /* "nt_decorator_node_grist" */
#line 95 "libs\\btree\\source\\parser\\parser.y"
	{ ctx->m_Tree->FreeNodeGrist( (yyvaluep->m_NodeGrist) ); };
#line 1222 "libs\\btree\\source\\parser\\parser.c"
	break;
      case 41: /* "nt_action_node_grist" */
#line 96 "libs\\btree\\source\\parser\\parser.y"
	{ ctx->m_Tree->FreeNodeGrist( (yyvaluep->m_NodeGrist) ); };
#line 1227 "libs\\btree\\source\\parser\\parser.c"
	break;
      case 42: /* "nt_node_list" */
#line 89 "libs\\btree\\source\\parser\\parser.y"
	{ ctx->m_Tree->FreeNodeList( (yyvaluep->m_NodeList) ); };
#line 1232 "libs\\btree\\source\\parser\\parser.c"
	break;
      case 43: /* "nt_node_ref" */
#line 86 "libs\\btree\\source\\parser\\parser.y"
	{ /* do nothing */ };
#line 1237 "libs\\btree\\source\\parser\\parser.c"
	break;
      case 44: /* "nt_action_ref" */
#line 87 "libs\\btree\\source\\parser\\parser.y"
	{ /* do nothing */ };
#line 1242 "libs\\btree\\source\\parser\\parser.c"
	break;
      case 45: /* "nt_decorator_ref" */
#line 88 "libs\\btree\\source\\parser\\parser.y"
	{ /* do nothing */ };
#line 1247 "libs\\btree\\source\\parser\\parser.c"
	break;
      case 46: /* "nt_id" */
#line 83 "libs\\btree\\source\\parser\\parser.y"
	{ ctx->m_Tree->FreeId( (yyvaluep->m_Id) ); };
#line 1252 "libs\\btree\\source\\parser\\parser.c"
	break;
      case 47: /* "nt_variable_dec_list" */
#line 99 "libs\\btree\\source\\parser\\parser.y"
	{ ctx->m_Tree->FreeVariableList( (yyvaluep->m_VariableList) ); };
#line 1257 "libs\\btree\\source\\parser\\parser.c"
	break;
      case 48: /* "nt_variable_dec" */
#line 97 "libs\\btree\\source\\parser\\parser.y"
	{ ctx->m_Tree->FreeVariable( (yyvaluep->m_Variable) ); };
#line 1262 "libs\\btree\\source\\parser\\parser.c"
	break;
      case 49: /* "nt_variable_list" */
#line 100 "libs\\btree\\source\\parser\\parser.y"
	{ ctx->m_Tree->FreeVariableList( (yyvaluep->m_VariableList) ); };
#line 1267 "libs\\btree\\source\\parser\\parser.c"
	break;
      case 50: /* "nt_variable" */
#line 98 "libs\\btree\\source\\parser\\parser.y"
	{ ctx->m_Tree->FreeVariable( (yyvaluep->m_Variable) ); };
#line 1272 "libs\\btree\\source\\parser\\parser.c"
	break;

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (ParserContext* ctx, void* scanner);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






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
yyparse (ParserContext* ctx, void* scanner)
#else
int
yyparse (ctx, scanner)
    ParserContext* ctx;
    void* scanner;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
#line 108 "libs\\btree\\source\\parser\\parser.y"
    {
    YYACCEPT;
;}
    break;

  case 10:
#line 137 "libs\\btree\\source\\parser\\parser.y"
    {
    Action* a = ctx->m_Tree->CreateAction( (yyvsp[(3) - (6)].m_Id) );
    if( !a )
    {
        a = ctx->m_Tree->LookupAction( (yyvsp[(3) - (6)].m_Id) );

        char tmp[2048];
        sprintf( tmp, "action \"%s\" was previously declared on line %d.\n", (yyvsp[(3) - (6)].m_Id)->m_Text, a->m_Id->m_Line );
        yyerror( ctx, scanner, tmp );

        ctx->m_Tree->FreeFunctionGrist( (yyvsp[(6) - (6)].m_FuncGrist) );
        ctx->m_Tree->FreeId( (yyvsp[(3) - (6)].m_Id) );

        YYERROR;
    }
    a->m_FunctionId = (yyvsp[(5) - (6)].m_Integer);
    a->m_Grist      = (yyvsp[(6) - (6)].m_FuncGrist);
;}
    break;

  case 11:
#line 160 "libs\\btree\\source\\parser\\parser.y"
    {
    Decorator* d = ctx->m_Tree->CreateDecorator( (yyvsp[(3) - (10)].m_Id) );
    if( !d )
    {
        d = ctx->m_Tree->LookupDecorator( (yyvsp[(3) - (10)].m_Id) );


        char tmp[2048];
        sprintf( tmp, "decorator \"%s\" was previously declared on line %d.\n", (yyvsp[(3) - (10)].m_Id)->m_Text, d->m_Id->m_Line );
        yyerror( ctx, scanner, tmp );

        ctx->m_Tree->FreeFunctionGrist( (yyvsp[(10) - (10)].m_FuncGrist) );
        ctx->m_Tree->FreeId( (yyvsp[(3) - (10)].m_Id) );

        YYERROR;
    }
    d->m_Id         = (yyvsp[(3) - (10)].m_Id);
    d->m_FunctionId = (yyvsp[(5) - (10)].m_Integer);
    d->m_Grist      = (yyvsp[(10) - (10)].m_FuncGrist);
    d->m_Prune      = (yyvsp[(7) - (10)].m_Integer) == 1;
    d->m_Modify     = (yyvsp[(9) - (10)].m_Integer) == 1;
;}
    break;

  case 12:
#line 187 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_Integer) = (yyvsp[(1) - (1)].m_Integer);
;}
    break;

  case 13:
#line 195 "libs\\btree\\source\\parser\\parser.y"
    {
    /* bss-value and variable list grist */
    (yyval.m_FuncGrist) = ctx->m_Tree->CreateFunctionGrist();
    (yyval.m_FuncGrist)->m_bssSize   = (yyvsp[(6) - (9)].m_Integer);
    (yyval.m_FuncGrist)->m_Variables = (yyvsp[(8) - (9)].m_VariableList);
    (yyval.m_FuncGrist)->m_Construct = (yyvsp[(2) - (9)].m_Integer) == 1;
    (yyval.m_FuncGrist)->m_Destruct  = (yyvsp[(2) - (9)].m_Integer) == 1;
;}
    break;

  case 14:
#line 205 "libs\\btree\\source\\parser\\parser.y"
    {
    /* only a variable declaration list grist */
    (yyval.m_FuncGrist) = ctx->m_Tree->CreateFunctionGrist();
    (yyval.m_FuncGrist)->m_Variables = (yyvsp[(6) - (7)].m_VariableList);
    (yyval.m_FuncGrist)->m_Construct = (yyvsp[(2) - (7)].m_Integer) == 1;
    (yyval.m_FuncGrist)->m_Destruct  = (yyvsp[(4) - (7)].m_Integer) == 1;
;}
    break;

  case 15:
#line 214 "libs\\btree\\source\\parser\\parser.y"
    {
    /* only a bss-value grist */
    (yyval.m_FuncGrist) = ctx->m_Tree->CreateFunctionGrist();
    (yyval.m_FuncGrist)->m_bssSize   = (yyvsp[(6) - (7)].m_Integer);
    (yyval.m_FuncGrist)->m_Construct = (yyvsp[(2) - (7)].m_Integer) == 1;
    (yyval.m_FuncGrist)->m_Destruct  = (yyvsp[(4) - (7)].m_Integer) == 1;
;}
    break;

  case 16:
#line 223 "libs\\btree\\source\\parser\\parser.y"
    {
    /* essentialy, no grist */
    (yyval.m_FuncGrist) = ctx->m_Tree->CreateFunctionGrist();
    (yyval.m_FuncGrist)->m_Construct = (yyvsp[(2) - (5)].m_Integer) == 1;
    (yyval.m_FuncGrist)->m_Destruct  = (yyvsp[(4) - (5)].m_Integer) == 1;
;}
    break;

  case 17:
#line 234 "libs\\btree\\source\\parser\\parser.y"
    {
    Node* n = ctx->m_Tree->CreateNode( (yyvsp[(3) - (5)].m_Id) );
    if( !n )
    {
        n = ctx->m_Tree->LookupNode( (yyvsp[(3) - (5)].m_Id) );


        char tmp[2048];
        sprintf( tmp, "node \"%s\" was previously declared on line %d.\n", (yyvsp[(3) - (5)].m_Id)->m_Text, n->m_Id->m_Line );
        yyerror( ctx, scanner, tmp );

        ctx->m_Tree->FreeId( (yyvsp[(3) - (5)].m_Id) );
        ctx->m_Tree->FreeNodeGrist( (yyvsp[(5) - (5)].m_NodeGrist) );

        YYERROR;
    }

    n->m_Id     = (yyvsp[(3) - (5)].m_Id);
    n->m_Grist  = (yyvsp[(5) - (5)].m_NodeGrist);
    (yyvsp[(5) - (5)].m_NodeGrist)->SetChaff( n );
    (yyval.m_Node) = n;
;}
    break;

  case 18:
#line 261 "libs\\btree\\source\\parser\\parser.y"
    {
    ctx->m_Tree->SetRootNode( (yyvsp[(3) - (4)].m_Node) );
;}
    break;

  case 19:
#line 269 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_NodeGrist) = (yyvsp[(1) - (1)].m_NodeGrist);
;}
    break;

  case 20:
#line 274 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_NodeGrist) = (yyvsp[(1) - (1)].m_NodeGrist);
;}
    break;

  case 21:
#line 279 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_NodeGrist) = (yyvsp[(1) - (1)].m_NodeGrist);
;}
    break;

  case 22:
#line 284 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_NodeGrist) = (yyvsp[(1) - (1)].m_NodeGrist);
;}
    break;

  case 23:
#line 289 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_NodeGrist) = (yyvsp[(1) - (1)].m_NodeGrist);
;}
    break;

  case 24:
#line 294 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_NodeGrist) = (yyvsp[(1) - (1)].m_NodeGrist);
;}
    break;

  case 25:
#line 302 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_NodeGrist) = ctx->m_Tree->CreateNodeGrist( E_GRIST_SELECTOR );
    static_cast<SelectorNodeGrist*>( (yyval.m_NodeGrist) )->SetChildList( (yyvsp[(3) - (4)].m_NodeList) );
;}
    break;

  case 26:
#line 311 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_NodeGrist) = ctx->m_Tree->CreateNodeGrist( E_GRIST_DYN_SELECTOR );
    static_cast<DynamicSelectorNodeGrist*>( (yyval.m_NodeGrist) )->SetChildList( (yyvsp[(3) - (4)].m_NodeList) );
;}
    break;

  case 27:
#line 320 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_NodeGrist) = ctx->m_Tree->CreateNodeGrist( E_GRIST_SEQUENCE );
    static_cast<SequenceNodeGrist*>( (yyval.m_NodeGrist) )->SetChildList( (yyvsp[(3) - (4)].m_NodeList) );
;}
    break;

  case 28:
#line 329 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_NodeGrist) = ctx->m_Tree->CreateNodeGrist( E_GRIST_PARALLEL );
    ParallelNodeGrist* grist = static_cast<ParallelNodeGrist*>( (yyval.m_NodeGrist) );
    grist->SetChildList( (yyvsp[(3) - (4)].m_NodeList) );
;}
    break;

  case 29:
#line 339 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_NodeGrist) = ctx->m_Tree->CreateNodeGrist( E_GRIST_DECORATOR );
    DecoratorNodeGrist* grist = static_cast<DecoratorNodeGrist*>((yyval.m_NodeGrist));
    grist->SetDecorator( (yyvsp[(3) - (6)].m_Decorator) );
    grist->SetChild( (yyvsp[(5) - (6)].m_Node) );
;}
    break;

  case 30:
#line 347 "libs\\btree\\source\\parser\\parser.y"
    {
    if( !(yyvsp[(3) - (8)].m_Decorator)->m_Grist->ValiadateVariables( (yyvsp[(7) - (8)].m_VariableList) ) )
    {
        ctx->m_Tree->FreeVariableList( (yyvsp[(7) - (8)].m_VariableList) );
        yyerror( ctx, scanner, "variable list is invalid." );
        YYERROR;
    }

    (yyval.m_NodeGrist) = ctx->m_Tree->CreateNodeGrist( E_GRIST_DECORATOR );
    DecoratorNodeGrist* grist = static_cast<DecoratorNodeGrist*>((yyval.m_NodeGrist));
    grist->SetDecorator( (yyvsp[(3) - (8)].m_Decorator) );
    grist->SetChild( (yyvsp[(5) - (8)].m_Node) );
    grist->SetVariableList( (yyvsp[(7) - (8)].m_VariableList) );
;}
    break;

  case 31:
#line 366 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_NodeGrist) = ctx->m_Tree->CreateNodeGrist( E_GRIST_ACTION );
    static_cast<ActionNodeGrist*>((yyval.m_NodeGrist))->SetAction( (yyvsp[(3) - (4)].m_Action) );
;}
    break;

  case 32:
#line 372 "libs\\btree\\source\\parser\\parser.y"
    {
    if( !(yyvsp[(3) - (6)].m_Action)->m_Grist->ValiadateVariables( (yyvsp[(5) - (6)].m_VariableList) ) )
    {
        ctx->m_Tree->FreeVariableList( (yyvsp[(5) - (6)].m_VariableList) );
        yyerror( ctx, scanner, "variable list is invalid." );
        YYERROR;
    }

    (yyval.m_NodeGrist) = ctx->m_Tree->CreateNodeGrist( E_GRIST_ACTION );
    ActionNodeGrist* grist = static_cast<ActionNodeGrist*>((yyval.m_NodeGrist));
    grist->SetAction( (yyvsp[(3) - (6)].m_Action) );
    grist->SetVariableList( (yyvsp[(5) - (6)].m_VariableList) );
;}
    break;

  case 33:
#line 390 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_NodeList) = ctx->m_Tree->CreateNodeList();
;}
    break;

  case 34:
#line 395 "libs\\btree\\source\\parser\\parser.y"
    {
    if( (yyvsp[(3) - (3)].m_Node)->m_IsChild  )
    {
        ctx->m_Tree->FreeNodeList( (yyvsp[(1) - (3)].m_NodeList) );
        char tmp[2048];
        sprintf( tmp, "child node \"%s\" already has a parent.", (yyvsp[(3) - (3)].m_Node)->m_Id->m_Text );
        yyerror( ctx, scanner, tmp );
        YYERROR;
    }
    if( !(yyvsp[(1) - (3)].m_NodeList)->Append( (yyvsp[(3) - (3)].m_Node) ) )
    {
        ctx->m_Tree->FreeNodeList( (yyvsp[(1) - (3)].m_NodeList) );
        yyerror( ctx, scanner, "number of allowed child-nodes exceeded." );
        YYERROR;
    }
    (yyval.m_NodeList) = (yyvsp[(1) - (3)].m_NodeList);
;}
    break;

  case 35:
#line 414 "libs\\btree\\source\\parser\\parser.y"
    {
    if( (yyvsp[(1) - (1)].m_Node)->m_IsChild  )
    {
        char tmp[2048];
        sprintf( tmp, "child node \"%s\" has a parent.", (yyvsp[(1) - (1)].m_Node)->m_Id->m_Text );
        yyerror( ctx, scanner, tmp );
        YYERROR;
    }
    NodeList* cl = ctx->m_Tree->CreateNodeList();
    if( !cl->Append( (yyvsp[(1) - (1)].m_Node) ) )
    {
        ctx->m_Tree->FreeNodeList( cl );
        yyerror( ctx, scanner, "number of allowed child-nodes exceeded." );
        YYERROR;
    }
    (yyval.m_NodeList) = cl;
;}
    break;

  case 36:
#line 437 "libs\\btree\\source\\parser\\parser.y"
    {
    Node* n = ctx->m_Tree->LookupNode( (yyvsp[(1) - (1)].m_Id) );
    if( n == 0x0 )
    {
        char tmp[2048];
        sprintf( tmp, "node \"%s\" has not been declared.\n", (yyvsp[(1) - (1)].m_Id)->m_Text );
        ctx->m_Tree->FreeId( (yyvsp[(1) - (1)].m_Id) );
        yyerror( ctx, scanner, tmp );
        YYERROR;
    }
    (yyval.m_Node) = n;
;}
    break;

  case 37:
#line 454 "libs\\btree\\source\\parser\\parser.y"
    {
    Action* a = ctx->m_Tree->LookupAction( (yyvsp[(1) - (1)].m_Id) );
    if( a == 0x0 )
    {
        char tmp[2048];
        sprintf( tmp, "action \"%s\" has not been declared.\n", (yyvsp[(1) - (1)].m_Id)->m_Text );
        ctx->m_Tree->FreeId( (yyvsp[(1) - (1)].m_Id) );
        yyerror( ctx, scanner, tmp );
        YYERROR;
    }
    (yyval.m_Action) = a;
;}
    break;

  case 38:
#line 471 "libs\\btree\\source\\parser\\parser.y"
    {
    Decorator* d = ctx->m_Tree->LookupDecorator( (yyvsp[(1) - (1)].m_Id) );
    if( d == 0x0 )
    {
        char tmp[2048];
        sprintf( tmp, "decorator \"%s\" has not been declared.", (yyvsp[(1) - (1)].m_Id)->m_Text );
        ctx->m_Tree->FreeId( (yyvsp[(1) - (1)].m_Id) );
        yyerror( ctx, scanner, tmp );
        YYERROR;
    }
    (yyval.m_Decorator) = d;
;}
    break;

  case 39:
#line 488 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_Id) = (yyvsp[(1) - (1)].m_Id);
;}
    break;

  case 40:
#line 496 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_VariableList) = ctx->m_Tree->CreateVariableList();
;}
    break;

  case 41:
#line 501 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_VariableList) = (yyvsp[(1) - (3)].m_VariableList);
    if( !(yyval.m_VariableList)->Append( (yyvsp[(3) - (3)].m_Variable) ) )
    {
        ctx->m_Tree->FreeVariableList( (yyval.m_VariableList) );
        yyerror( ctx, scanner, "number of variable declarations exceeds allowed maximum." );
        YYERROR;
    }

;}
    break;

  case 42:
#line 513 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_VariableList) = ctx->m_Tree->CreateVariableList();
    if( !(yyval.m_VariableList)->Append( (yyvsp[(1) - (1)].m_Variable) ) )
    {
        ctx->m_Tree->FreeVariableList( (yyval.m_VariableList) );
        yyerror( ctx, scanner, "number of variable declarations exceeds allowed maximum." );
        YYERROR;
    }
;}
    break;

  case 43:
#line 527 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_Variable)                  = ctx->m_Tree->CreateVariable();
    (yyval.m_Variable)->m_Type          = Variable::E_VART_STRING;
    (yyval.m_Variable)->m_Id            = (yyvsp[(2) - (2)].m_Id);
    (yyval.m_Variable)->m_Data.m_Int    = 0;
;}
    break;

  case 44:
#line 535 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_Variable)                  = ctx->m_Tree->CreateVariable();
    (yyval.m_Variable)->m_Type          = Variable::E_VART_INTEGER;
    (yyval.m_Variable)->m_Id            = (yyvsp[(2) - (2)].m_Id);
    (yyval.m_Variable)->m_Data.m_Int    = 0;
;}
    break;

  case 45:
#line 543 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_Variable)                  = ctx->m_Tree->CreateVariable();
    (yyval.m_Variable)->m_Type          = Variable::E_VART_FLOAT;
    (yyval.m_Variable)->m_Id            = (yyvsp[(2) - (2)].m_Id);
    (yyval.m_Variable)->m_Data.m_Int    = 0;
;}
    break;

  case 46:
#line 551 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_Variable)                  = ctx->m_Tree->CreateVariable();
    (yyval.m_Variable)->m_Type          = Variable::E_VART_BOOL;
    (yyval.m_Variable)->m_Id            = (yyvsp[(2) - (2)].m_Id);
    (yyval.m_Variable)->m_Data.m_Int    = 0;
;}
    break;

  case 47:
#line 562 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_VariableList) = ctx->m_Tree->CreateVariableList();
;}
    break;

  case 48:
#line 567 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_VariableList) = (yyvsp[(1) - (3)].m_VariableList);
    if( !(yyval.m_VariableList)->Append( (yyvsp[(3) - (3)].m_Variable) ) )
    {
        ctx->m_Tree->FreeVariableList( (yyval.m_VariableList) );
        yyerror( ctx, scanner, "number of variables exceeds allowed maximum." );
        YYERROR;
    }
;}
    break;

  case 49:
#line 578 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_VariableList) = ctx->m_Tree->CreateVariableList();
    if( !(yyval.m_VariableList)->Append( (yyvsp[(1) - (1)].m_Variable) ) )
    {
        ctx->m_Tree->FreeVariableList( (yyval.m_VariableList) );
        yyerror( ctx, scanner, "number of variables exceeds allowed maximum." );
        YYERROR;
    }
;}
    break;

  case 50:
#line 592 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_Variable)                  = ctx->m_Tree->CreateVariable();
    (yyval.m_Variable)->m_Type          = Variable::E_VART_STRING;
    (yyval.m_Variable)->m_Id            = (yyvsp[(1) - (3)].m_Id);
    (yyval.m_Variable)->m_Data.m_String = (yyvsp[(3) - (3)].m_String);
;}
    break;

  case 51:
#line 600 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_Variable)                  = ctx->m_Tree->CreateVariable();
    (yyval.m_Variable)->m_Type          = Variable::E_VART_INTEGER;
    (yyval.m_Variable)->m_Id            = (yyvsp[(1) - (3)].m_Id);
    (yyval.m_Variable)->m_Data.m_Int    = (yyvsp[(3) - (3)].m_Integer);
;}
    break;

  case 52:
#line 608 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_Variable)                  = ctx->m_Tree->CreateVariable();
    (yyval.m_Variable)->m_Type          = Variable::E_VART_FLOAT;
    (yyval.m_Variable)->m_Id            = (yyvsp[(1) - (3)].m_Id);
    (yyval.m_Variable)->m_Data.m_Float  = (yyvsp[(3) - (3)].m_Float);
;}
    break;

  case 53:
#line 616 "libs\\btree\\source\\parser\\parser.y"
    {
    (yyval.m_Variable)                  = ctx->m_Tree->CreateVariable();
    (yyval.m_Variable)->m_Type          = Variable::E_VART_BOOL;
    (yyval.m_Variable)->m_Id            = (yyvsp[(1) - (3)].m_Id);
    (yyval.m_Variable)->m_Data.m_Int    = (yyvsp[(3) - (3)].m_Integer);
;}
    break;


/* Line 1267 of yacc.c.  */
#line 2101 "libs\\btree\\source\\parser\\parser.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (ctx, scanner, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (ctx, scanner, yymsg);
	  }
	else
	  {
	    yyerror (ctx, scanner, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval, ctx, scanner);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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
      if (yyn != YYPACT_NINF)
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
		  yystos[yystate], yyvsp, ctx, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (ctx, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, ctx, scanner);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, ctx, scanner);
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


