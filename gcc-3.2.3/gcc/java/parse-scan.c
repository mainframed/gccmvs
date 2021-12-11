/* A Bison parser, made by GNU Bison 1.875.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

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
     PLUS_TK = 258,
     MINUS_TK = 259,
     MULT_TK = 260,
     DIV_TK = 261,
     REM_TK = 262,
     LS_TK = 263,
     SRS_TK = 264,
     ZRS_TK = 265,
     AND_TK = 266,
     XOR_TK = 267,
     OR_TK = 268,
     BOOL_AND_TK = 269,
     BOOL_OR_TK = 270,
     EQ_TK = 271,
     NEQ_TK = 272,
     GT_TK = 273,
     GTE_TK = 274,
     LT_TK = 275,
     LTE_TK = 276,
     PLUS_ASSIGN_TK = 277,
     MINUS_ASSIGN_TK = 278,
     MULT_ASSIGN_TK = 279,
     DIV_ASSIGN_TK = 280,
     REM_ASSIGN_TK = 281,
     LS_ASSIGN_TK = 282,
     SRS_ASSIGN_TK = 283,
     ZRS_ASSIGN_TK = 284,
     AND_ASSIGN_TK = 285,
     XOR_ASSIGN_TK = 286,
     OR_ASSIGN_TK = 287,
     PUBLIC_TK = 288,
     PRIVATE_TK = 289,
     PROTECTED_TK = 290,
     STATIC_TK = 291,
     FINAL_TK = 292,
     SYNCHRONIZED_TK = 293,
     VOLATILE_TK = 294,
     TRANSIENT_TK = 295,
     NATIVE_TK = 296,
     PAD_TK = 297,
     ABSTRACT_TK = 298,
     MODIFIER_TK = 299,
     STRICT_TK = 300,
     DECR_TK = 301,
     INCR_TK = 302,
     DEFAULT_TK = 303,
     IF_TK = 304,
     THROW_TK = 305,
     BOOLEAN_TK = 306,
     DO_TK = 307,
     IMPLEMENTS_TK = 308,
     THROWS_TK = 309,
     BREAK_TK = 310,
     IMPORT_TK = 311,
     ELSE_TK = 312,
     INSTANCEOF_TK = 313,
     RETURN_TK = 314,
     VOID_TK = 315,
     CATCH_TK = 316,
     INTERFACE_TK = 317,
     CASE_TK = 318,
     EXTENDS_TK = 319,
     FINALLY_TK = 320,
     SUPER_TK = 321,
     WHILE_TK = 322,
     CLASS_TK = 323,
     SWITCH_TK = 324,
     CONST_TK = 325,
     TRY_TK = 326,
     FOR_TK = 327,
     NEW_TK = 328,
     CONTINUE_TK = 329,
     GOTO_TK = 330,
     PACKAGE_TK = 331,
     THIS_TK = 332,
     BYTE_TK = 333,
     SHORT_TK = 334,
     INT_TK = 335,
     LONG_TK = 336,
     CHAR_TK = 337,
     INTEGRAL_TK = 338,
     FLOAT_TK = 339,
     DOUBLE_TK = 340,
     FP_TK = 341,
     ID_TK = 342,
     REL_QM_TK = 343,
     REL_CL_TK = 344,
     NOT_TK = 345,
     NEG_TK = 346,
     ASSIGN_ANY_TK = 347,
     ASSIGN_TK = 348,
     OP_TK = 349,
     CP_TK = 350,
     OCB_TK = 351,
     CCB_TK = 352,
     OSB_TK = 353,
     CSB_TK = 354,
     SC_TK = 355,
     C_TK = 356,
     DOT_TK = 357,
     STRING_LIT_TK = 358,
     CHAR_LIT_TK = 359,
     INT_LIT_TK = 360,
     FP_LIT_TK = 361,
     TRUE_TK = 362,
     FALSE_TK = 363,
     BOOL_LIT_TK = 364,
     NULL_TK = 365
   };
#endif
#define PLUS_TK 258
#define MINUS_TK 259
#define MULT_TK 260
#define DIV_TK 261
#define REM_TK 262
#define LS_TK 263
#define SRS_TK 264
#define ZRS_TK 265
#define AND_TK 266
#define XOR_TK 267
#define OR_TK 268
#define BOOL_AND_TK 269
#define BOOL_OR_TK 270
#define EQ_TK 271
#define NEQ_TK 272
#define GT_TK 273
#define GTE_TK 274
#define LT_TK 275
#define LTE_TK 276
#define PLUS_ASSIGN_TK 277
#define MINUS_ASSIGN_TK 278
#define MULT_ASSIGN_TK 279
#define DIV_ASSIGN_TK 280
#define REM_ASSIGN_TK 281
#define LS_ASSIGN_TK 282
#define SRS_ASSIGN_TK 283
#define ZRS_ASSIGN_TK 284
#define AND_ASSIGN_TK 285
#define XOR_ASSIGN_TK 286
#define OR_ASSIGN_TK 287
#define PUBLIC_TK 288
#define PRIVATE_TK 289
#define PROTECTED_TK 290
#define STATIC_TK 291
#define FINAL_TK 292
#define SYNCHRONIZED_TK 293
#define VOLATILE_TK 294
#define TRANSIENT_TK 295
#define NATIVE_TK 296
#define PAD_TK 297
#define ABSTRACT_TK 298
#define MODIFIER_TK 299
#define STRICT_TK 300
#define DECR_TK 301
#define INCR_TK 302
#define DEFAULT_TK 303
#define IF_TK 304
#define THROW_TK 305
#define BOOLEAN_TK 306
#define DO_TK 307
#define IMPLEMENTS_TK 308
#define THROWS_TK 309
#define BREAK_TK 310
#define IMPORT_TK 311
#define ELSE_TK 312
#define INSTANCEOF_TK 313
#define RETURN_TK 314
#define VOID_TK 315
#define CATCH_TK 316
#define INTERFACE_TK 317
#define CASE_TK 318
#define EXTENDS_TK 319
#define FINALLY_TK 320
#define SUPER_TK 321
#define WHILE_TK 322
#define CLASS_TK 323
#define SWITCH_TK 324
#define CONST_TK 325
#define TRY_TK 326
#define FOR_TK 327
#define NEW_TK 328
#define CONTINUE_TK 329
#define GOTO_TK 330
#define PACKAGE_TK 331
#define THIS_TK 332
#define BYTE_TK 333
#define SHORT_TK 334
#define INT_TK 335
#define LONG_TK 336
#define CHAR_TK 337
#define INTEGRAL_TK 338
#define FLOAT_TK 339
#define DOUBLE_TK 340
#define FP_TK 341
#define ID_TK 342
#define REL_QM_TK 343
#define REL_CL_TK 344
#define NOT_TK 345
#define NEG_TK 346
#define ASSIGN_ANY_TK 347
#define ASSIGN_TK 348
#define OP_TK 349
#define CP_TK 350
#define OCB_TK 351
#define CCB_TK 352
#define OSB_TK 353
#define CSB_TK 354
#define SC_TK 355
#define C_TK 356
#define DOT_TK 357
#define STRING_LIT_TK 358
#define CHAR_LIT_TK 359
#define INT_LIT_TK 360
#define FP_LIT_TK 361
#define TRUE_TK 362
#define FALSE_TK 363
#define BOOL_LIT_TK 364
#define NULL_TK 365




/* Copy the first part of user declarations.  */
#line 37 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"

#define JC1_LITE

#include "config.h"
#include "system.h"

#include "obstack.h"
#include "toplev.h"

extern char *input_filename;
extern FILE *finput, *out;

/* Obstack for the lexer.  */
struct obstack temporary_obstack;

/* The current parser context.  */
static struct parser_ctxt *ctxp;

/* Error and warning counts, current line number, because they're used
   elsewhere  */
int java_error_count;
int java_warning_count;
int lineno;

/* Tweak default rules when necessary.  */
static int absorber;
#define USE_ABSORBER absorber = 0

/* Keep track of the current class name and package name.  */
static char *current_class;
static const char *package_name;

/* Keep track of the current inner class qualifier. */
static int current_class_length;

/* Keep track of whether things have be listed before.  */
static int previous_output;

/* Record modifier uses  */
static int modifier_value;

/* Record (almost) cyclomatic complexity.  */
static int complexity; 

/* Keeps track of number of bracket pairs after a variable declarator
   id.  */
static int bracket_count; 

/* Numbers anonymous classes */
static int anonymous_count;

/* Record a method declaration  */
struct method_declarator {
  const char *method_name;
  const char *args;
};
#define NEW_METHOD_DECLARATOR(D,N,A)					     \
{									     \
  (D) = 								     \
    (struct method_declarator *)xmalloc (sizeof (struct method_declarator)); \
  (D)->method_name = (N);						     \
  (D)->args = (A);							     \
}

/* Two actions for this grammar */
static void report_class_declaration PARAMS ((const char *));
static void report_main_declaration PARAMS ((struct method_declarator *));
static void push_class_context PARAMS ((const char *));
static void pop_class_context PARAMS ((void));

void report PARAMS ((void)); 

#include "lex.h"
#include "parse.h"


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 113 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
typedef union YYSTYPE {
  char *node;
  struct method_declarator *declarator;
  int value;			/* For modifiers */
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 377 "ps2505.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 119 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"

#include "lex.c"


/* Line 214 of yacc.c.  */
#line 392 "ps2505.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
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
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3238

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  152
/* YYNRULES -- Number of rules. */
#define YYNRULES  351
/* YYNRULES -- Number of states. */
#define YYNSTATES  606

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   365

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      40,    43,    45,    47,    49,    53,    55,    56,    58,    60,
      62,    65,    68,    71,    75,    77,    80,    82,    85,    89,
      91,    93,    97,   103,   105,   107,   109,   111,   114,   115,
     123,   124,   131,   132,   135,   136,   139,   141,   145,   148,
     152,   154,   157,   159,   161,   163,   165,   167,   169,   171,
     173,   175,   179,   184,   186,   190,   192,   196,   198,   202,
     204,   206,   209,   213,   217,   222,   227,   231,   236,   240,
     242,   246,   249,   253,   254,   257,   259,   263,   265,   267,
     270,   272,   276,   281,   286,   292,   296,   301,   304,   308,
     312,   317,   322,   328,   336,   343,   345,   347,   348,   353,
     354,   360,   361,   367,   368,   375,   378,   382,   385,   389,
     391,   394,   396,   398,   400,   402,   404,   407,   410,   414,
     418,   423,   425,   429,   432,   436,   438,   441,   443,   445,
     447,   450,   453,   457,   459,   461,   463,   465,   467,   469,
     471,   473,   475,   477,   479,   481,   483,   485,   487,   489,
     491,   493,   495,   497,   499,   501,   503,   506,   509,   512,
     515,   517,   519,   521,   523,   525,   527,   529,   535,   543,
     551,   557,   560,   564,   568,   573,   575,   578,   581,   583,
     586,   590,   593,   598,   601,   604,   606,   614,   622,   629,
     637,   644,   647,   650,   651,   653,   655,   656,   658,   660,
     664,   667,   671,   674,   678,   681,   685,   689,   695,   701,
     703,   707,   711,   716,   718,   721,   727,   730,   732,   734,
     736,   738,   742,   744,   746,   748,   750,   752,   756,   760,
     764,   768,   772,   778,   783,   785,   790,   796,   802,   809,
     810,   817,   818,   826,   830,   834,   836,   840,   844,   848,
     852,   857,   862,   867,   872,   874,   877,   881,   884,   888,
     892,   896,   900,   905,   911,   918,   924,   931,   936,   941,
     943,   945,   947,   949,   952,   955,   957,   959,   962,   965,
     967,   970,   973,   975,   978,   981,   983,   989,   994,   999,
    1005,  1007,  1011,  1015,  1019,  1021,  1025,  1029,  1031,  1035,
    1039,  1043,  1045,  1049,  1053,  1057,  1061,  1065,  1067,  1071,
    1075,  1077,  1081,  1083,  1087,  1089,  1093,  1095,  1099,  1101,
    1105,  1107,  1113,  1115,  1117,  1121,  1123,  1125,  1127,  1129,
    1131,  1133
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     112,     0,    -1,   125,    -1,   105,    -1,   106,    -1,   109,
      -1,   104,    -1,   103,    -1,   110,    -1,   115,    -1,   116,
      -1,    83,    -1,    86,    -1,    51,    -1,   117,    -1,   120,
      -1,   121,    -1,   117,    -1,   117,    -1,   115,   234,    -1,
     121,   234,    -1,   122,    -1,   123,    -1,   124,    -1,   121,
     102,   124,    -1,    87,    -1,    -1,   128,    -1,   126,    -1,
     127,    -1,   128,   126,    -1,   128,   127,    -1,   126,   127,
      -1,   128,   126,   127,    -1,   129,    -1,   126,   129,    -1,
     132,    -1,   127,   132,    -1,    76,   121,   100,    -1,   130,
      -1,   131,    -1,    56,   121,   100,    -1,    56,   121,   102,
       5,   100,    -1,   134,    -1,   164,    -1,   185,    -1,    44,
      -1,   133,    44,    -1,    -1,   133,    68,   124,   137,   138,
     135,   140,    -1,    -1,    68,   124,   137,   138,   136,   140,
      -1,    -1,    64,   118,    -1,    -1,    53,   139,    -1,   119,
      -1,   139,   101,   119,    -1,    96,    97,    -1,    96,   141,
      97,    -1,   142,    -1,   141,   142,    -1,   143,    -1,   157,
      -1,   159,    -1,   177,    -1,   144,    -1,   149,    -1,   134,
      -1,   164,    -1,   185,    -1,   114,   145,   100,    -1,   133,
     114,   145,   100,    -1,   146,    -1,   145,   101,   146,    -1,
     147,    -1,   147,    93,   148,    -1,   124,    -1,   147,    98,
      99,    -1,   261,    -1,   175,    -1,   150,   156,    -1,   114,
     151,   154,    -1,    60,   151,   154,    -1,   133,   114,   151,
     154,    -1,   133,    60,   151,   154,    -1,   124,    94,    95,
      -1,   124,    94,   152,    95,    -1,   151,    98,    99,    -1,
     153,    -1,   152,   101,   153,    -1,   114,   147,    -1,   133,
     114,   147,    -1,    -1,    54,   155,    -1,   118,    -1,   155,
     101,   118,    -1,   177,    -1,   100,    -1,   158,   177,    -1,
      44,    -1,   160,   154,   161,    -1,   133,   160,   154,   161,
      -1,   160,   154,   161,   100,    -1,   133,   160,   154,   161,
     100,    -1,   122,    94,    95,    -1,   122,    94,   152,    95,
      -1,    96,    97,    -1,    96,   162,    97,    -1,    96,   178,
      97,    -1,    96,   162,   178,    97,    -1,   163,    94,    95,
     100,    -1,   163,    94,   230,    95,   100,    -1,   121,   102,
      66,    94,   230,    95,   100,    -1,   121,   102,    66,    94,
      95,   100,    -1,    77,    -1,    66,    -1,    -1,    62,   124,
     165,   170,    -1,    -1,   133,    62,   124,   166,   170,    -1,
      -1,    62,   124,   169,   167,   170,    -1,    -1,   133,    62,
     124,   169,   168,   170,    -1,    64,   119,    -1,   169,   101,
     119,    -1,    96,    97,    -1,    96,   171,    97,    -1,   172,
      -1,   171,   172,    -1,   173,    -1,   174,    -1,   134,    -1,
     164,    -1,   144,    -1,   150,   100,    -1,    96,    97,    -1,
      96,   176,    97,    -1,    96,   101,    97,    -1,    96,   176,
     101,    97,    -1,   148,    -1,   176,   101,   148,    -1,    96,
      97,    -1,    96,   178,    97,    -1,   179,    -1,   178,   179,
      -1,   180,    -1,   182,    -1,   134,    -1,   181,   100,    -1,
     114,   145,    -1,   133,   114,   145,    -1,   184,    -1,   187,
      -1,   191,    -1,   192,    -1,   201,    -1,   205,    -1,   184,
      -1,   188,    -1,   193,    -1,   202,    -1,   206,    -1,   177,
      -1,   185,    -1,   189,    -1,   194,    -1,   204,    -1,   212,
      -1,   213,    -1,   214,    -1,   216,    -1,   215,    -1,   218,
      -1,   100,    -1,   124,    89,    -1,   186,   182,    -1,   186,
     183,    -1,   190,   100,    -1,   258,    -1,   242,    -1,   243,
      -1,   239,    -1,   240,    -1,   236,    -1,   225,    -1,    49,
      94,   261,    95,   182,    -1,    49,    94,   261,    95,   183,
      57,   182,    -1,    49,    94,   261,    95,   183,    57,   183,
      -1,    69,    94,   261,    95,   195,    -1,    96,    97,    -1,
      96,   198,    97,    -1,    96,   196,    97,    -1,    96,   196,
     198,    97,    -1,   197,    -1,   196,   197,    -1,   198,   178,
      -1,   199,    -1,   198,   199,    -1,    63,   262,    89,    -1,
      48,    89,    -1,    67,    94,   261,    95,    -1,   200,   182,
      -1,   200,   183,    -1,    52,    -1,   203,   182,    67,    94,
     261,    95,   100,    -1,   208,   100,   261,   100,   210,    95,
     182,    -1,   208,   100,   100,   210,    95,   182,    -1,   208,
     100,   261,   100,   210,    95,   183,    -1,   208,   100,   100,
     210,    95,   183,    -1,    72,    94,    -1,   207,   209,    -1,
      -1,   211,    -1,   181,    -1,    -1,   211,    -1,   190,    -1,
     211,   101,   190,    -1,    55,   100,    -1,    55,   124,   100,
      -1,    74,   100,    -1,    74,   124,   100,    -1,    59,   100,
      -1,    59,   261,   100,    -1,    50,   261,   100,    -1,   217,
      94,   261,    95,   177,    -1,   217,    94,   261,    95,     1,
      -1,    44,    -1,    71,   177,   219,    -1,    71,   177,   221,
      -1,    71,   177,   219,   221,    -1,   220,    -1,   219,   220,
      -1,    61,    94,   153,    95,   177,    -1,    65,   177,    -1,
     223,    -1,   231,    -1,   113,    -1,    77,    -1,    94,   261,
      95,    -1,   225,    -1,   235,    -1,   236,    -1,   237,    -1,
     224,    -1,   121,   102,    77,    -1,   121,   102,    68,    -1,
     120,   102,    68,    -1,   115,   102,    68,    -1,    60,   102,
      68,    -1,    73,   118,    94,   230,    95,    -1,    73,   118,
      94,    95,    -1,   226,    -1,   229,   124,    94,    95,    -1,
     229,   124,    94,    95,   140,    -1,   229,   124,    94,   230,
      95,    -1,   229,   124,    94,   230,    95,   140,    -1,    -1,
      73,   118,    94,    95,   227,   140,    -1,    -1,    73,   118,
      94,   230,    95,   228,   140,    -1,   121,   102,    73,    -1,
     222,   102,    73,    -1,   261,    -1,   230,   101,   261,    -1,
     230,   101,     1,    -1,    73,   115,   232,    -1,    73,   117,
     232,    -1,    73,   115,   232,   234,    -1,    73,   117,   232,
     234,    -1,    73,   117,   234,   175,    -1,    73,   115,   234,
     175,    -1,   233,    -1,   232,   233,    -1,    98,   261,    99,
      -1,    98,    99,    -1,   234,    98,    99,    -1,   222,   102,
     124,    -1,    66,   102,   124,    -1,   121,    94,    95,    -1,
     121,    94,   230,    95,    -1,   222,   102,   124,    94,    95,
      -1,   222,   102,   124,    94,   230,    95,    -1,    66,   102,
     124,    94,    95,    -1,    66,   102,   124,    94,   230,    95,
      -1,   121,    98,   261,    99,    -1,   223,    98,   261,    99,
      -1,   222,    -1,   121,    -1,   239,    -1,   240,    -1,   238,
      47,    -1,   238,    46,    -1,   242,    -1,   243,    -1,     3,
     241,    -1,     4,   241,    -1,   244,    -1,    47,   241,    -1,
      46,   241,    -1,   238,    -1,    90,   241,    -1,    91,   241,
      -1,   245,    -1,    94,   115,   234,    95,   241,    -1,    94,
     115,    95,   241,    -1,    94,   261,    95,   244,    -1,    94,
     121,   234,    95,   244,    -1,   241,    -1,   246,     5,   241,
      -1,   246,     6,   241,    -1,   246,     7,   241,    -1,   246,
      -1,   247,     3,   246,    -1,   247,     4,   246,    -1,   247,
      -1,   248,     8,   247,    -1,   248,     9,   247,    -1,   248,
      10,   247,    -1,   248,    -1,   249,    20,   248,    -1,   249,
      18,   248,    -1,   249,    21,   248,    -1,   249,    19,   248,
      -1,   249,    58,   116,    -1,   249,    -1,   250,    16,   249,
      -1,   250,    17,   249,    -1,   250,    -1,   251,    11,   250,
      -1,   251,    -1,   252,    12,   251,    -1,   252,    -1,   253,
      13,   252,    -1,   253,    -1,   254,    14,   253,    -1,   254,
      -1,   255,    15,   254,    -1,   255,    -1,   255,    88,   261,
      89,   256,    -1,   256,    -1,   258,    -1,   259,   260,   257,
      -1,   121,    -1,   235,    -1,   237,    -1,    92,    -1,    93,
      -1,   257,    -1,   261,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   190,   190,   195,   196,   197,   198,   199,   200,   205,
     206,   210,   215,   220,   228,   229,   233,   237,   241,   245,
     250,   259,   260,   264,   268,   275,   279,   280,   281,   282,
     283,   284,   285,   286,   290,   291,   295,   296,   300,   305,
     306,   310,   314,   318,   319,   320,   327,   335,   348,   347,
     354,   353,   358,   359,   362,   363,   367,   369,   374,   376,
     381,   382,   386,   387,   388,   389,   393,   394,   395,   396,
     397,   402,   404,   410,   411,   415,   416,   420,   422,   427,
     428,   433,   437,   439,   440,   442,   450,   456,   462,   466,
     467,   474,   489,   505,   506,   510,   512,   517,   518,   523,
     527,   537,   538,   541,   543,   550,   552,   557,   558,   559,
     560,   565,   566,   569,   571,   576,   577,   584,   583,   587,
     586,   590,   589,   593,   592,   598,   599,   603,   605,   610,
     611,   615,   616,   617,   618,   622,   626,   631,   632,   633,
     634,   638,   639,   644,   645,   649,   650,   654,   655,   656,
     660,   664,   666,   671,   672,   673,   674,   675,   676,   680,
     681,   682,   683,   684,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   702,   706,   711,   715,   721,
     725,   726,   727,   728,   729,   730,   731,   735,   739,   744,
     749,   753,   754,   755,   756,   760,   761,   765,   770,   771,
     775,   776,   780,   784,   788,   792,   796,   801,   802,   806,
     807,   811,   815,   817,   818,   819,   822,   823,   827,   828,
     832,   833,   839,   840,   844,   845,   849,   853,   854,   858,
     863,   864,   865,   869,   870,   874,   878,   883,   884,   888,
     889,   890,   891,   892,   893,   894,   895,   899,   904,   906,
     908,   910,   915,   916,   917,   918,   919,   920,   921,   926,
     925,   929,   928,   934,   936,   940,   941,   942,   946,   947,
     948,   949,   952,   953,   957,   958,   962,   966,   968,   973,
     974,   981,   983,   985,   986,   987,   988,   992,   994,   998,
     999,  1001,  1002,  1006,  1010,  1014,  1015,  1016,  1017,  1018,
    1022,  1026,  1030,  1031,  1032,  1033,  1037,  1038,  1039,  1040,
    1044,  1045,  1046,  1047,  1051,  1052,  1053,  1057,  1058,  1059,
    1060,  1064,  1065,  1066,  1067,  1068,  1069,  1073,  1074,  1075,
    1079,  1080,  1084,  1085,  1089,  1090,  1094,  1095,  1100,  1101,
    1106,  1107,  1112,  1113,  1117,  1121,  1123,  1124,  1128,  1129,
    1133,  1137
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PLUS_TK", "MINUS_TK", "MULT_TK", "DIV_TK", 
  "REM_TK", "LS_TK", "SRS_TK", "ZRS_TK", "AND_TK", "XOR_TK", "OR_TK", 
  "BOOL_AND_TK", "BOOL_OR_TK", "EQ_TK", "NEQ_TK", "GT_TK", "GTE_TK", 
  "LT_TK", "LTE_TK", "PLUS_ASSIGN_TK", "MINUS_ASSIGN_TK", 
  "MULT_ASSIGN_TK", "DIV_ASSIGN_TK", "REM_ASSIGN_TK", "LS_ASSIGN_TK", 
  "SRS_ASSIGN_TK", "ZRS_ASSIGN_TK", "AND_ASSIGN_TK", "XOR_ASSIGN_TK", 
  "OR_ASSIGN_TK", "PUBLIC_TK", "PRIVATE_TK", "PROTECTED_TK", "STATIC_TK", 
  "FINAL_TK", "SYNCHRONIZED_TK", "VOLATILE_TK", "TRANSIENT_TK", 
  "NATIVE_TK", "PAD_TK", "ABSTRACT_TK", "MODIFIER_TK", "STRICT_TK", 
  "DECR_TK", "INCR_TK", "DEFAULT_TK", "IF_TK", "THROW_TK", "BOOLEAN_TK", 
  "DO_TK", "IMPLEMENTS_TK", "THROWS_TK", "BREAK_TK", "IMPORT_TK", 
  "ELSE_TK", "INSTANCEOF_TK", "RETURN_TK", "VOID_TK", "CATCH_TK", 
  "INTERFACE_TK", "CASE_TK", "EXTENDS_TK", "FINALLY_TK", "SUPER_TK", 
  "WHILE_TK", "CLASS_TK", "SWITCH_TK", "CONST_TK", "TRY_TK", "FOR_TK", 
  "NEW_TK", "CONTINUE_TK", "GOTO_TK", "PACKAGE_TK", "THIS_TK", "BYTE_TK", 
  "SHORT_TK", "INT_TK", "LONG_TK", "CHAR_TK", "INTEGRAL_TK", "FLOAT_TK", 
  "DOUBLE_TK", "FP_TK", "ID_TK", "REL_QM_TK", "REL_CL_TK", "NOT_TK", 
  "NEG_TK", "ASSIGN_ANY_TK", "ASSIGN_TK", "OP_TK", "CP_TK", "OCB_TK", 
  "CCB_TK", "OSB_TK", "CSB_TK", "SC_TK", "C_TK", "DOT_TK", 
  "STRING_LIT_TK", "CHAR_LIT_TK", "INT_LIT_TK", "FP_LIT_TK", "TRUE_TK", 
  "FALSE_TK", "BOOL_LIT_TK", "NULL_TK", "$accept", "goal", "literal", 
  "type", "primitive_type", "reference_type", "class_or_interface_type", 
  "class_type", "interface_type", "array_type", "name", "simple_name", 
  "qualified_name", "identifier", "compilation_unit", 
  "import_declarations", "type_declarations", "package_declaration", 
  "import_declaration", "single_type_import_declaration", 
  "type_import_on_demand_declaration", "type_declaration", "modifiers", 
  "class_declaration", "@1", "@2", "super", "interfaces", 
  "interface_type_list", "class_body", "class_body_declarations", 
  "class_body_declaration", "class_member_declaration", 
  "field_declaration", "variable_declarators", "variable_declarator", 
  "variable_declarator_id", "variable_initializer", "method_declaration", 
  "method_header", "method_declarator", "formal_parameter_list", 
  "formal_parameter", "throws", "class_type_list", "method_body", 
  "static_initializer", "static", "constructor_declaration", 
  "constructor_declarator", "constructor_body", 
  "explicit_constructor_invocation", "this_or_super", 
  "interface_declaration", "@3", "@4", "@5", "@6", "extends_interfaces", 
  "interface_body", "interface_member_declarations", 
  "interface_member_declaration", "constant_declaration", 
  "abstract_method_declaration", "array_initializer", 
  "variable_initializers", "block", "block_statements", "block_statement", 
  "local_variable_declaration_statement", "local_variable_declaration", 
  "statement", "statement_nsi", "statement_without_trailing_substatement", 
  "empty_statement", "label_decl", "labeled_statement", 
  "labeled_statement_nsi", "expression_statement", "statement_expression", 
  "if_then_statement", "if_then_else_statement", 
  "if_then_else_statement_nsi", "switch_statement", "switch_block", 
  "switch_block_statement_groups", "switch_block_statement_group", 
  "switch_labels", "switch_label", "while_expression", "while_statement", 
  "while_statement_nsi", "do_statement_begin", "do_statement", 
  "for_statement", "for_statement_nsi", "for_header", "for_begin", 
  "for_init", "for_update", "statement_expression_list", 
  "break_statement", "continue_statement", "return_statement", 
  "throw_statement", "synchronized_statement", "synchronized", 
  "try_statement", "catches", "catch_clause", "finally", "primary", 
  "primary_no_new_array", "type_literals", 
  "class_instance_creation_expression", "anonymous_class_creation", "@7", 
  "@8", "something_dot_new", "argument_list", "array_creation_expression", 
  "dim_exprs", "dim_expr", "dims", "field_access", "method_invocation", 
  "array_access", "postfix_expression", "post_increment_expression", 
  "post_decrement_expression", "unary_expression", 
  "pre_increment_expression", "pre_decrement_expression", 
  "unary_expression_not_plus_minus", "cast_expression", 
  "multiplicative_expression", "additive_expression", "shift_expression", 
  "relational_expression", "equality_expression", "and_expression", 
  "exclusive_or_expression", "inclusive_or_expression", 
  "conditional_and_expression", "conditional_or_expression", 
  "conditional_expression", "assignment_expression", "assignment", 
  "left_hand_side", "assignment_operator", "expression", 
  "constant_expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   111,   112,   113,   113,   113,   113,   113,   113,   114,
     114,   115,   115,   115,   116,   116,   117,   118,   119,   120,
     120,   121,   121,   122,   123,   124,   125,   125,   125,   125,
     125,   125,   125,   125,   126,   126,   127,   127,   128,   129,
     129,   130,   131,   132,   132,   132,   133,   133,   135,   134,
     136,   134,   137,   137,   138,   138,   139,   139,   140,   140,
     141,   141,   142,   142,   142,   142,   143,   143,   143,   143,
     143,   144,   144,   145,   145,   146,   146,   147,   147,   148,
     148,   149,   150,   150,   150,   150,   151,   151,   151,   152,
     152,   153,   153,   154,   154,   155,   155,   156,   156,   157,
     158,   159,   159,   159,   159,   160,   160,   161,   161,   161,
     161,   162,   162,   162,   162,   163,   163,   165,   164,   166,
     164,   167,   164,   168,   164,   169,   169,   170,   170,   171,
     171,   172,   172,   172,   172,   173,   174,   175,   175,   175,
     175,   176,   176,   177,   177,   178,   178,   179,   179,   179,
     180,   181,   181,   182,   182,   182,   182,   182,   182,   183,
     183,   183,   183,   183,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   185,   186,   187,   188,   189,
     190,   190,   190,   190,   190,   190,   190,   191,   192,   193,
     194,   195,   195,   195,   195,   196,   196,   197,   198,   198,
     199,   199,   200,   201,   202,   203,   204,   205,   205,   206,
     206,   207,   208,   209,   209,   209,   210,   210,   211,   211,
     212,   212,   213,   213,   214,   214,   215,   216,   216,   217,
     218,   218,   218,   219,   219,   220,   221,   222,   222,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   224,   224,
     224,   224,   225,   225,   225,   225,   225,   225,   225,   227,
     226,   228,   226,   229,   229,   230,   230,   230,   231,   231,
     231,   231,   231,   231,   232,   232,   233,   234,   234,   235,
     235,   236,   236,   236,   236,   236,   236,   237,   237,   238,
     238,   238,   238,   239,   240,   241,   241,   241,   241,   241,
     242,   243,   244,   244,   244,   244,   245,   245,   245,   245,
     246,   246,   246,   246,   247,   247,   247,   248,   248,   248,
     248,   249,   249,   249,   249,   249,   249,   250,   250,   250,
     251,   251,   252,   252,   253,   253,   254,   254,   255,   255,
     256,   256,   257,   257,   258,   259,   259,   259,   260,   260,
     261,   262
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     1,     3,     1,     0,     1,     1,     1,
       2,     2,     2,     3,     1,     2,     1,     2,     3,     1,
       1,     3,     5,     1,     1,     1,     1,     2,     0,     7,
       0,     6,     0,     2,     0,     2,     1,     3,     2,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     1,     3,     1,     3,     1,     3,     1,
       1,     2,     3,     3,     4,     4,     3,     4,     3,     1,
       3,     2,     3,     0,     2,     1,     3,     1,     1,     2,
       1,     3,     4,     4,     5,     3,     4,     2,     3,     3,
       4,     4,     5,     7,     6,     1,     1,     0,     4,     0,
       5,     0,     5,     0,     6,     2,     3,     2,     3,     1,
       2,     1,     1,     1,     1,     1,     2,     2,     3,     3,
       4,     1,     3,     2,     3,     1,     2,     1,     1,     1,
       2,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     5,     7,     7,
       5,     2,     3,     3,     4,     1,     2,     2,     1,     2,
       3,     2,     4,     2,     2,     1,     7,     7,     6,     7,
       6,     2,     2,     0,     1,     1,     0,     1,     1,     3,
       2,     3,     2,     3,     2,     3,     3,     5,     5,     1,
       3,     3,     4,     1,     2,     5,     2,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     5,     4,     1,     4,     5,     5,     6,     0,
       6,     0,     7,     3,     3,     1,     3,     3,     3,     3,
       4,     4,     4,     4,     1,     2,     3,     2,     3,     3,
       3,     3,     4,     5,     6,     5,     6,     4,     4,     1,
       1,     1,     1,     2,     2,     1,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     5,     4,     4,     5,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     3,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
      26,    46,     0,     0,     0,     0,   175,     0,     2,    28,
      29,    27,    34,    39,    40,    36,     0,    43,    44,    45,
      25,     0,    21,    22,    23,   117,    52,     0,     1,    32,
      35,    37,    30,    31,    47,     0,     0,    41,     0,     0,
       0,   121,     0,    54,    38,     0,    33,   119,    52,     0,
      24,    18,   125,    16,     0,   118,     0,     0,    17,    53,
       0,    50,     0,   123,    54,    42,    13,     0,    11,    12,
     127,     0,     9,    10,    14,    15,    16,     0,   133,   135,
       0,   134,     0,   129,   131,   132,   126,   122,    56,    55,
       0,   120,     0,    48,     0,    93,    77,     0,    73,    75,
      93,     0,    19,    20,     0,     0,   136,   128,   130,     0,
       0,    51,   124,     0,     0,     0,     0,    83,    71,     0,
       0,     0,    82,   277,     0,    93,     0,    93,    57,    46,
       0,    58,    21,     0,    68,     0,    60,    62,    66,    67,
       0,    63,     0,    64,    93,    69,    65,    70,    49,    86,
       0,     0,     0,    89,    95,    94,    88,    77,    74,     0,
       0,     0,     0,     0,     0,     0,   240,     0,     0,     0,
       0,     7,     6,     3,     4,     5,     8,   239,     0,     0,
     290,    76,    80,   289,   237,   246,   242,   254,     0,   238,
     243,   244,   245,   302,   291,   292,   310,   295,   296,   299,
     305,   314,   317,   321,   327,   330,   332,   334,   336,   338,
     340,   342,   350,   343,     0,    79,    78,   278,    85,    72,
      84,    46,     0,     0,   205,     0,     0,     0,     0,     0,
       0,     0,     0,   143,     0,     9,    15,   290,    23,     0,
     149,   164,     0,   145,   147,     0,   148,   153,   165,     0,
     154,   166,     0,   155,   156,   167,     0,   157,     0,   168,
     158,   213,     0,   169,   170,   171,   173,   172,     0,   174,
     242,   244,     0,   183,   184,   181,   182,   180,     0,    93,
      59,    61,    98,    81,    97,    99,     0,    91,     0,    87,
       0,     0,   290,   243,   245,   297,   298,   301,   300,     0,
       0,     0,    17,     0,   303,   304,     0,   290,     0,   137,
       0,   141,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   294,   293,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   348,   349,     0,     0,     0,   220,
       0,   224,     0,     0,     0,     0,   211,   222,     0,     0,
     151,   176,     0,   144,   146,   150,   229,   177,   179,   203,
       0,     0,   215,   218,   212,   214,     0,     0,   105,     0,
       0,     0,   101,    92,    90,    96,   251,   280,     0,   268,
     274,     0,   269,     0,     0,     0,    19,    20,   241,   139,
     138,     0,   250,   249,   281,     0,   265,     0,   248,   263,
     247,   264,   279,     0,     0,   311,   312,   313,   315,   316,
     318,   319,   320,   323,   325,   322,   324,     0,   326,   328,
     329,   331,   333,   335,   337,   339,     0,   344,     0,   226,
     221,   225,     0,     0,     0,     0,   230,   233,   231,   223,
     241,   152,     0,     0,   216,     0,     0,   106,   102,   116,
     240,   107,   290,     0,     0,     0,   103,     0,     0,   275,
     270,   273,   271,   272,   253,     0,   307,     0,     0,   308,
     140,   142,   282,     0,   287,     0,   288,   255,     0,     0,
       0,   202,     0,     0,   236,   234,   232,     0,   219,     0,
     217,   216,     0,   104,     0,   108,     0,     0,   109,   285,
       0,   276,     0,   252,   306,   309,   267,   266,   283,     0,
     256,   257,   341,     0,   187,     0,   153,     0,   160,   161,
       0,   162,   163,     0,     0,   190,     0,     0,     0,     0,
     228,   227,     0,   110,     0,     0,   286,   260,     0,   284,
     258,     0,     0,   178,   204,     0,     0,     0,   191,     0,
     195,     0,   198,     0,     0,   208,     0,     0,   111,     0,
     262,     0,   188,   216,     0,   201,   351,     0,   193,   196,
       0,   192,   197,   199,   235,   206,   207,     0,     0,   112,
       0,     0,   216,   200,   194,   114,     0,     0,     0,     0,
     113,     0,   210,     0,   189,   209
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     7,   177,   234,   178,    73,    74,    59,    52,   179,
     180,    22,    23,    24,     8,     9,    10,    11,    12,    13,
      14,    15,   239,   240,   113,    90,    43,    61,    89,   111,
     135,   136,   137,    79,    97,    98,    99,   181,   139,    80,
      95,   152,   153,   117,   155,   283,   141,   142,   143,   144,
     382,   463,   464,    18,    40,    62,    57,    92,    41,    55,
      82,    83,    84,    85,   182,   312,   241,   582,   243,   244,
     245,   246,   525,   247,   248,   249,   250,   528,   251,   252,
     253,   254,   529,   255,   535,   559,   560,   561,   562,   256,
     257,   531,   258,   259,   260,   532,   261,   262,   374,   499,
     500,   263,   264,   265,   266,   267,   268,   269,   446,   447,
     448,   183,   184,   185,   186,   187,   512,   548,   188,   405,
     189,   389,   390,   103,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   346,
     406,   577
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -489
static const short yypact[] =
{
      55,  -489,   -68,   -68,   -68,   -68,  -489,    61,  -489,   -22,
     100,   -22,  -489,  -489,  -489,  -489,   104,  -489,  -489,  -489,
    -489,   191,  -489,  -489,  -489,    77,   114,   203,  -489,   100,
    -489,  -489,   -22,   100,  -489,   -68,   -68,  -489,     4,   -68,
     -25,    87,   -68,    65,  -489,   -68,   100,    77,   114,   121,
    -489,  -489,  -489,    97,   303,  -489,   -68,   -25,  -489,  -489,
     -68,  -489,   -25,    87,    65,  -489,  -489,   -68,  -489,  -489,
    -489,   -68,   116,  -489,  -489,  -489,   190,   451,  -489,  -489,
     132,  -489,   431,  -489,  -489,  -489,  -489,  -489,  -489,   136,
     149,  -489,   -25,  -489,   196,   -39,   196,     6,  -489,    36,
     -39,   223,   204,   204,   -68,   -68,  -489,  -489,  -489,   -68,
     542,  -489,  -489,   149,   224,   -68,   263,  -489,  -489,   -68,
    1668,   270,  -489,  -489,   285,   -39,   159,   -39,  -489,   229,
    2541,  -489,   340,   451,  -489,   674,  -489,  -489,  -489,  -489,
     238,  -489,   343,  -489,   394,  -489,  -489,  -489,  -489,  -489,
     -68,    84,   139,  -489,  -489,   296,  -489,  -489,  -489,  2340,
    2340,  2340,  2340,   356,   368,   143,  -489,  2340,  2340,  2340,
    1541,  -489,  -489,  -489,  -489,  -489,  -489,  -489,   237,   371,
     645,  -489,  -489,   392,   383,  -489,  -489,  -489,   -68,  -489,
     188,  -489,   300,   379,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,   461,   475,   488,   425,   490,   489,   500,   502,   509,
       9,  -489,  -489,  -489,   429,  -489,  -489,  -489,  -489,  -489,
    -489,   442,   445,  2340,  -489,    89,  1719,   449,   452,   343,
     454,   119,  2340,  -489,   -68,   237,   371,   283,   436,   265,
    -489,  -489,  2608,  -489,  -489,   450,  -489,  -489,  -489,  3010,
    -489,  -489,   457,  -489,  -489,  -489,  3010,  -489,  3010,  -489,
    -489,  3128,   464,  -489,  -489,  -489,  -489,  -489,   458,  -489,
     169,   217,   379,   521,   526,  -489,  -489,  -489,   245,   394,
    -489,  -489,  -489,  -489,  -489,  -489,   473,   483,   -68,  -489,
     344,   -68,   338,  -489,  -489,  -489,  -489,  -489,  -489,   514,
     -68,   494,   494,   505,  -489,  -489,   118,   645,   506,  -489,
     510,  -489,   256,   538,   540,  1780,  1831,   493,    96,  2340,
     515,  -489,  -489,  2340,  2340,  2340,  2340,  2340,  2340,  2340,
    2340,  2340,  2340,  2340,  2340,   143,  2340,  2340,  2340,  2340,
    2340,  2340,  2340,  2340,  -489,  -489,  2340,  2340,   511,  -489,
     512,  -489,   513,  2340,  2340,   318,  -489,  -489,   519,   525,
     520,  -489,   -68,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
     555,    84,  -489,  -489,  -489,   523,  1892,  2340,  -489,   157,
     473,  2675,   527,   483,  -489,  -489,  -489,   539,  1831,   494,
    -489,   378,   494,   378,  1943,  2340,   -77,    59,  1073,  -489,
    -489,  1607,  -489,  -489,  -489,   225,  -489,   532,  -489,  -489,
    -489,  -489,   543,   535,  2004,  -489,  -489,  -489,   461,   461,
     475,   475,   475,   488,   488,   488,   488,   116,  -489,   425,
     425,   490,   489,   500,   502,   509,   552,  -489,   549,  -489,
    -489,  -489,   550,   553,   556,   343,   318,  -489,  -489,  -489,
    -489,   520,   557,  1150,  1150,   559,   560,  -489,   563,   368,
     558,  -489,   609,  2742,   566,  2809,  -489,  2055,   567,  -489,
     204,  -489,   204,  -489,   561,   255,  -489,  2340,  1073,  -489,
    -489,  -489,  -489,  1476,  -489,  2116,  -489,   149,   301,  2340,
    3077,  -489,   573,   344,  -489,  -489,  -489,  2340,  -489,   576,
     523,  1150,     7,  -489,   314,  -489,  2876,  2167,  -489,  -489,
     346,  -489,   149,   577,  -489,  -489,  -489,  -489,  -489,   355,
    -489,   149,  -489,   578,  -489,   618,   619,  3077,  -489,  -489,
    3077,  -489,  -489,   579,    17,  -489,   582,   587,  3010,   589,
    -489,  -489,   591,  -489,   592,   360,  -489,  -489,   149,  -489,
    -489,  2340,  3010,  -489,  -489,  2228,   608,  2340,  -489,    18,
    -489,  2407,  -489,   343,   598,  -489,  3010,  2279,  -489,   600,
    -489,   613,  -489,  1150,   612,  -489,  -489,   620,  -489,  -489,
    2474,  -489,  2943,  -489,  -489,  -489,  -489,   614,   370,  -489,
    3077,   621,  1150,  -489,  -489,  -489,   615,   656,  3077,   622,
    -489,  3077,  -489,  3077,  -489,  -489
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -489,  -489,  -489,   194,   375,   384,   -19,  -111,     0,    23,
      82,   -82,  -489,    -3,  -489,   710,   166,  -489,    54,  -489,
    -489,   253,    16,   695,  -489,  -489,   678,   658,  -489,   -84,
    -489,   594,  -489,   -60,   -95,   611,  -139,  -163,  -489,   -52,
     152,   455,  -285,   -70,  -489,  -489,  -489,  -489,  -489,   599,
     364,  -489,  -489,   -15,  -489,  -489,  -489,  -489,   688,   -45,
    -489,   666,  -489,  -489,    99,  -489,  -104,  -127,  -240,  -489,
     479,   327,  -458,  -438,   778,  -417,  -489,  -489,  -489,  -218,
    -489,  -489,  -489,  -489,  -489,  -489,   192,   205,  -468,  -408,
    -489,  -489,  -489,  -489,  -489,  -489,  -489,  -303,  -489,  -488,
     491,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,   304,
     307,  -489,  -489,  -489,    88,  -489,  -489,  -489,  -489,  -306,
    -489,   456,  -313,   -28,  1131,   193,  1179,   374,   432,   537,
      43,   642,   776,  -384,  -489,   264,   226,   199,   260,   424,
     426,   423,   427,   434,  -489,   278,   435,   821,  -489,  -489,
     942,  -489
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -348
static const short yytable[] =
{
      25,    26,   364,   242,   154,   384,   146,   311,   540,    49,
     126,   287,    87,   539,   479,   115,    16,    91,   477,    20,
      51,   124,     1,    58,   342,    16,    16,    16,   132,   148,
     122,   146,    47,    48,     2,    50,   284,    51,   285,    81,
       3,    51,    50,   373,   102,    16,     4,   112,    16,    16,
     138,   132,   526,   132,   303,   218,    86,   220,   140,   116,
      88,    28,    16,    30,    94,   556,   556,    81,    96,   553,
      77,    54,   554,   527,   286,   138,   469,    75,     6,   469,
     557,   557,   530,   140,    21,   591,    30,    27,   475,   526,
      51,    20,   526,   583,   515,   145,    58,   343,    77,     1,
      75,    94,    96,   130,   599,    75,   118,   119,   488,   128,
     527,     2,   583,   527,   558,   578,   157,     3,    60,   530,
     145,    53,   530,     4,    53,   355,   133,   238,    34,   120,
     151,     5,   597,    75,   121,    66,    76,    75,    53,   360,
     602,    39,    53,   604,     1,   605,   302,   157,    34,   383,
     102,   133,   526,   236,   478,     6,    75,   124,    75,    76,
     526,   510,     3,   526,    76,   526,    35,    68,     4,   411,
      69,    20,    36,   527,    75,    29,    20,    33,    42,   519,
     385,   527,   530,    20,   527,   320,   527,   533,    56,   349,
     530,    53,    76,   530,    66,   530,    76,    53,    46,    45,
       6,   545,   295,   296,   297,   298,    20,   102,   536,   380,
     304,   305,   237,   395,   101,    76,   101,    76,   270,   357,
     313,    65,   350,   100,   533,   364,    68,   533,   358,    69,
      20,   157,   106,    76,   289,   498,   373,   109,   481,   238,
     290,   292,   292,   292,   292,   110,   238,    53,    71,   292,
     292,   307,   457,   238,   465,   238,   125,   127,   290,   219,
     119,   588,    75,    31,  -186,   236,   364,   451,     1,  -186,
    -186,   105,    58,   391,   393,    66,    71,   371,   396,   397,
    -346,  -346,    31,   373,   236,   157,    31,   533,   101,     1,
     114,    37,    45,    38,   151,   533,    66,   387,   533,    31,
     533,    75,   124,    44,    71,    45,   151,    68,   150,    34,
      69,    20,  -185,    75,    50,   412,    66,  -185,  -185,   149,
     482,    76,   123,   271,   237,  -100,   483,   105,    68,    71,
     270,    69,    20,    36,   130,   101,   506,   270,   282,   313,
     378,   494,   364,   237,   270,   288,   270,     1,    68,   270,
     513,    69,    20,   400,    66,   373,   483,   401,    75,   157,
      76,   470,   156,    67,   472,     3,   415,   416,   417,   216,
     -16,     4,    76,    53,   373,  -345,  -345,   315,   238,   444,
     542,   316,   408,   445,   217,   317,    68,   409,     1,    69,
      20,   410,  -347,  -347,    75,    66,   521,   291,   541,   102,
      70,    20,   483,   520,   236,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   292,   292,    76,   292,   292,
     292,   292,   292,   292,   292,   321,   322,    68,   547,    72,
      69,    20,   315,   362,   278,   271,   316,   550,   476,   130,
     317,   546,   271,   331,   332,   333,   334,   483,   115,   271,
     549,   271,    72,    76,   271,   569,   483,    72,   299,   584,
     238,   483,   238,   462,   570,   596,   323,   324,   325,   270,
     300,   483,   150,   314,   170,     1,   124,   292,   326,   327,
     292,   319,    66,   335,   150,    72,   236,   238,   236,    72,
     471,    67,   473,     3,   318,    34,   328,   329,   330,     4,
     338,    50,    66,   238,   272,   235,   336,   337,    72,   151,
      72,   104,   339,    35,    68,   340,    75,    69,    20,    36,
     514,   344,   345,   341,   238,   361,    72,   238,   107,   236,
     423,   424,   425,   426,    68,   238,  -229,    69,    20,   347,
     301,   270,   270,   353,   306,   237,   354,   237,   356,   238,
     365,   270,   377,   270,   420,   421,   422,   368,   238,   292,
     292,   408,   273,   238,   376,   362,   409,  -291,  -291,   381,
     410,   292,  -292,  -292,   271,    76,   367,   238,   270,   238,
      20,   121,   386,   369,   236,   370,   129,   238,   237,   270,
     418,   419,   388,    66,   270,   238,   429,   430,   238,   394,
     238,   398,    67,   236,     3,   236,   402,   399,   403,   414,
       4,   439,   440,   441,    72,   270,   272,   235,   270,   449,
     450,   119,   452,   272,   453,    68,   270,   466,    69,    20,
     272,   484,   272,   467,   486,   272,   235,   485,   130,   131,
     270,   489,     6,   237,   490,   491,   271,   271,   492,   270,
     493,   497,  -115,    72,   270,   502,   271,  -259,   271,   501,
     507,   270,   237,   503,   237,    72,   511,   274,   270,   534,
     270,   538,   551,  -261,   273,   552,  -159,   563,   270,   555,
     270,   273,   564,   271,   566,   567,   270,   150,   273,   270,
     273,   270,   568,   273,   271,    17,   -16,   575,   585,   271,
     589,  -345,  -345,   315,    17,    17,    17,   316,   590,   593,
     427,   504,   592,   601,   595,   600,   598,   603,   129,   428,
     271,    32,    93,   271,    17,    66,    64,    17,    17,   281,
     158,   271,   279,   379,    67,    63,     3,  -345,  -345,   315,
     372,    17,     4,   316,   458,   271,    72,   317,   108,    78,
     495,   579,   375,   496,   271,   272,   235,    68,   392,   271,
      69,    20,   431,   433,   580,   432,   271,   522,   434,     0,
     130,   280,   275,   271,     6,   271,   435,    78,    19,   274,
       0,   437,     0,   271,     0,   271,   274,    19,    19,    19,
       0,   271,     0,   274,   271,   274,   271,     0,   274,     0,
       0,     0,     0,     0,     0,   134,     0,    19,     0,     0,
      19,    19,     0,   273,     0,     0,     0,   524,     0,     0,
       0,     0,     0,     0,    19,     0,     0,   272,   272,     0,
     134,     0,     0,     0,     0,     0,     0,   272,   235,   272,
     235,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   367,     0,     0,   369,     0,     0,
       0,     0,     0,     0,   272,   565,     0,     0,    72,     0,
       0,     0,     0,     0,     0,   272,     0,     0,     0,   572,
     272,   235,     0,     0,   275,   273,   273,     0,   147,     0,
       0,   275,     0,   586,     0,   273,     0,   273,   275,     0,
     275,   272,     0,   275,   272,     0,   276,     0,     0,     0,
       0,     0,   272,   147,     0,     0,     0,   524,   274,     0,
       0,     0,   273,     0,     0,   565,   272,     0,   572,     0,
     586,     0,     0,   273,     0,   272,   235,     0,   273,     0,
     272,     0,     0,     0,     0,     0,     0,   272,     0,     0,
       0,   277,     0,     0,   272,   235,   272,   235,     0,   273,
       0,     0,   273,     0,   272,     0,   272,     0,     0,     0,
     273,     0,   272,     0,     0,   272,     0,   272,     0,     0,
       0,     0,     0,     0,   273,     0,     0,     0,     0,     0,
     274,   274,     0,   273,     0,     0,     0,     0,   273,     0,
     274,     0,   274,     0,     0,   273,     0,     0,     0,     0,
       0,     0,   273,     0,   273,     0,     0,     0,   276,     0,
       0,     0,   273,   275,   273,   276,     0,   274,     0,     0,
     273,     0,   276,   273,   276,   273,     0,   276,   274,     0,
       0,     0,     0,   274,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   215,   277,   274,     0,     0,   274,     0,     0,
     277,     0,     0,     0,     0,   274,     0,   277,     0,   277,
       0,     0,   277,     0,     0,     0,     0,     0,     0,   274,
       0,     0,     0,     0,     0,   275,   275,     0,   274,     0,
       0,     0,     0,   274,     0,   275,     0,   275,     0,     0,
     274,   308,   215,     0,     0,     0,     0,   274,     0,   274,
       0,     0,     0,     0,    66,     0,     0,   274,     0,   274,
       0,     0,   275,   163,     0,   274,     0,     0,   274,   164,
     274,     0,     0,   275,     0,     0,   165,     0,   275,     0,
     166,     0,     0,     0,     0,     0,    68,   276,     0,    69,
      20,     0,     0,   167,   168,   348,     0,   169,   352,   275,
       0,     0,   275,     0,   359,     0,   171,   172,   173,   174,
     275,     0,   175,   176,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   275,     0,   161,   162,     0,     0,
       0,    66,   277,   275,     0,     0,     0,     0,   275,     0,
     163,     0,     0,     0,     0,   275,   164,     0,     0,     0,
       0,     0,   275,   165,   275,     0,     0,   166,     0,   276,
     276,     0,   275,    68,   275,     0,    69,    20,     0,   276,
     275,   276,     0,   275,   232,   275,     0,     0,     0,     0,
       0,     0,     0,   171,   172,   173,   174,     0,   407,   175,
     176,   413,     0,     0,     0,     0,   276,     0,     0,     0,
       0,     0,     0,     0,   277,   277,     0,   276,     0,     0,
       0,     0,   276,     0,   277,   436,   277,     0,     0,   438,
     293,   293,   293,   293,     0,   442,   443,     0,   293,   293,
       0,     0,     0,   276,     0,     0,   276,     0,     0,     0,
       0,   277,     0,     0,   276,     0,     0,     0,   455,   456,
       0,     0,   277,     0,     0,     0,     0,   277,   276,     0,
     468,     0,     0,     0,     0,     0,     0,   276,   294,   294,
     294,   294,   276,   215,     0,     0,   294,   294,   277,   276,
       0,   277,     0,     0,     0,     0,   276,     0,   276,   277,
       0,     0,     0,     0,     0,     0,   276,     0,   276,     0,
       0,     0,     0,   277,   276,     0,     0,   276,     0,   276,
       0,     0,   277,     0,     0,     0,     0,   277,     0,     0,
       0,     0,     0,     0,   277,     0,     0,     0,     0,     0,
       0,   277,     0,   277,     0,     0,     0,     0,     0,     0,
       0,   277,     0,   277,     0,     0,     0,     0,     0,   277,
       0,     0,   277,     0,   277,   517,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   537,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,     0,   293,   293,   293,
     293,   293,   293,   293,     0,     0,     0,   516,     0,   159,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   571,     0,     0,     0,   574,     0,   576,
       0,     0,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,     0,   294,   294,   294,   294,   294,
     294,   294,   161,   162,     0,     0,   293,    66,     0,   293,
       0,     0,     0,     0,     0,     0,   163,     0,     0,     0,
       0,     0,   164,     0,   159,   160,     0,     0,     0,   165,
       0,     0,     0,   166,     0,     0,     0,     0,     0,    68,
       0,     0,    69,    20,     0,     0,   167,   168,     0,     0,
     169,     0,     0,     0,   294,     0,     0,   294,     0,   171,
     172,   173,   174,     0,     0,   175,   176,   161,   162,     0,
       0,     0,    66,     0,     0,     0,     0,     0,     0,     0,
       0,   163,     0,     0,     0,     0,     0,   164,   293,   293,
     159,   160,     0,     0,   165,     0,     0,     0,   166,     0,
     293,     0,     0,     0,    68,     0,     0,    69,    20,     0,
       0,   167,   168,     0,     0,   169,     0,   170,   309,     0,
       0,     0,   310,     0,   171,   172,   173,   174,     0,     0,
     175,   176,     0,   161,   162,     0,   294,   294,    66,     0,
       0,     0,     0,     0,     0,     0,     0,   163,   294,     0,
       0,   159,   160,   164,     0,     0,     0,     0,     0,     0,
     165,     0,     0,     0,   166,     0,     0,     0,     0,     0,
      68,     0,     0,    69,    20,     0,     0,   167,   168,     0,
       0,   169,     0,   170,   480,     0,     0,     0,     0,     0,
     171,   172,   173,   174,   161,   162,   175,   176,     0,    66,
       0,     0,   159,   160,     0,     0,     0,     0,   163,     0,
       0,     0,     0,     0,   164,     0,     0,     0,     0,     0,
       0,   165,     0,     0,     0,   166,     0,     0,     0,     0,
       0,    68,     0,     0,    69,    20,     0,     0,   167,   168,
       0,     0,   169,     0,   170,   161,   162,     0,     0,     0,
      66,   171,   172,   173,   174,     0,     0,   175,   176,   163,
       0,     0,     0,   159,   160,   164,     0,     0,     0,     0,
       0,     0,   165,     0,     0,     0,   166,     0,     0,     0,
       0,     0,    68,     0,     0,    69,    20,     0,     0,   167,
     168,     0,     0,   169,     0,     0,     0,     0,     0,   351,
       0,     0,   171,   172,   173,   174,   161,   162,   175,   176,
       0,    66,     0,     0,   159,   160,     0,     0,     0,     0,
     163,     0,     0,     0,     0,     0,   164,     0,     0,     0,
       0,     0,     0,   165,     0,     0,     0,   166,     0,     0,
       0,     0,     0,    68,     0,     0,    69,    20,     0,     0,
     167,   168,     0,     0,   169,   404,     0,   161,   162,     0,
       0,     0,    66,   171,   172,   173,   174,     0,     0,   175,
     176,   163,     0,     0,     0,   159,   160,   164,     0,     0,
       0,     0,     0,     0,   165,     0,     0,     0,   166,     0,
       0,     0,     0,     0,    68,     0,     0,    69,    20,     0,
       0,   167,   168,     0,     0,   169,     0,     0,     0,     0,
     123,     0,     0,     0,   171,   172,   173,   174,   161,   162,
     175,   176,     0,    66,     0,     0,   159,   160,     0,     0,
       0,     0,   163,     0,     0,     0,     0,     0,   164,     0,
       0,     0,     0,     0,     0,   165,     0,     0,     0,   166,
       0,     0,     0,     0,     0,    68,     0,     0,    69,    20,
       0,     0,   167,   168,     0,     0,   169,     0,     0,   161,
     162,     0,   454,     0,    66,   171,   172,   173,   174,     0,
       0,   175,   176,   163,     0,     0,     0,   159,   160,   164,
       0,     0,     0,     0,     0,     0,   165,     0,     0,     0,
     166,     0,     0,     0,     0,     0,    68,     0,     0,    69,
      20,     0,     0,   167,   168,     0,     0,   169,   474,     0,
       0,     0,     0,     0,     0,     0,   171,   172,   173,   174,
     161,   162,   175,   176,     0,    66,     0,     0,   159,   160,
       0,     0,     0,     0,   163,     0,     0,     0,     0,     0,
     164,     0,     0,     0,     0,     0,     0,   165,     0,     0,
       0,   166,     0,     0,     0,     0,     0,    68,     0,     0,
      69,    20,     0,     0,   167,   168,     0,     0,   169,   487,
       0,   161,   162,     0,     0,     0,    66,   171,   172,   173,
     174,     0,     0,   175,   176,   163,     0,     0,     0,   159,
     160,   164,     0,     0,     0,     0,     0,     0,   165,     0,
       0,     0,   166,     0,     0,     0,     0,     0,    68,     0,
       0,    69,    20,     0,     0,   167,   168,     0,     0,   169,
     509,     0,     0,     0,     0,     0,     0,     0,   171,   172,
     173,   174,   161,   162,   175,   176,     0,    66,     0,     0,
     159,   160,     0,     0,     0,     0,   163,     0,     0,     0,
       0,     0,   164,     0,     0,     0,     0,     0,     0,   165,
       0,     0,     0,   166,     0,     0,     0,     0,     0,    68,
       0,     0,    69,    20,     0,     0,   167,   168,     0,     0,
     169,   518,     0,   161,   162,     0,     0,     0,    66,   171,
     172,   173,   174,     0,     0,   175,   176,   163,     0,     0,
       0,   159,   160,   164,     0,     0,     0,     0,     0,     0,
     165,     0,     0,     0,   166,     0,     0,     0,     0,     0,
      68,     0,     0,    69,    20,     0,     0,   167,   168,     0,
       0,   169,   544,     0,     0,     0,     0,     0,     0,     0,
     171,   172,   173,   174,   161,   162,   175,   176,     0,    66,
       0,     0,   159,   160,     0,     0,     0,     0,   163,     0,
       0,     0,     0,     0,   164,     0,     0,     0,     0,     0,
       0,   165,     0,     0,     0,   166,     0,     0,     0,     0,
       0,    68,     0,     0,    69,    20,     0,     0,   167,   168,
       0,     0,   169,     0,     0,   161,   162,     0,   573,     0,
      66,   171,   172,   173,   174,     0,     0,   175,   176,   163,
       0,     0,     0,   159,   160,   164,     0,     0,     0,     0,
       0,     0,   165,     0,     0,     0,   166,     0,     0,     0,
       0,     0,    68,     0,     0,    69,    20,     0,     0,   167,
     168,     0,     0,   169,   587,     0,     0,     0,     0,     0,
       0,     0,   171,   172,   173,   174,   161,   162,   175,   176,
       0,    66,     0,     0,     0,     0,     0,     0,     0,     0,
     163,     0,     0,     0,     0,     0,   164,     0,     0,     0,
       0,     0,     0,   165,     0,     0,     0,   166,     0,     0,
       0,     0,     0,    68,     0,     0,    69,    20,     0,     0,
     167,   168,     0,     0,   169,     0,     0,     0,     0,     0,
       0,     0,     0,   171,   172,   173,   174,     0,     0,   175,
     176,   221,     0,   161,   162,   556,   222,   223,    66,   224,
       0,     0,   225,     0,     0,     0,   226,   163,     0,     0,
     557,     0,     0,   164,   227,     4,   228,     0,   229,   230,
     165,   231,     0,     0,   166,     0,     0,     0,     0,     0,
      68,     0,     0,    69,    20,     0,     0,     0,     0,     0,
       0,   232,     0,   130,   581,     0,     0,     6,     0,     0,
     171,   172,   173,   174,     0,     0,   175,   176,   221,     0,
     161,   162,   556,   222,   223,    66,   224,     0,     0,   225,
       0,     0,     0,   226,   163,     0,     0,   557,     0,     0,
     164,   227,     4,   228,     0,   229,   230,   165,   231,     0,
       0,   166,     0,     0,     0,     0,     0,    68,     0,     0,
      69,    20,     0,     0,     0,     0,     0,     0,   232,     0,
     130,   594,     0,     0,     6,     0,     0,   171,   172,   173,
     174,     0,     0,   175,   176,   221,     0,   161,   162,     0,
     222,   223,    66,   224,     0,     0,   225,     0,     0,     0,
     226,   163,     0,     0,     0,     0,     0,   164,   227,     4,
     228,     0,   229,   230,   165,   231,     0,     0,   166,     0,
       0,     0,     0,     0,    68,     0,     0,    69,    20,     0,
       0,     0,     0,     0,     0,   232,     0,   130,   233,     0,
       0,     6,     0,     0,   171,   172,   173,   174,     0,     0,
     175,   176,   221,     0,   161,   162,     0,   222,   223,    66,
     224,     0,     0,   225,     0,     0,     0,   226,   163,     0,
       0,     0,     0,     0,   164,   227,     4,   228,     0,   229,
     230,   165,   231,     0,     0,   166,     0,     0,     0,     0,
       0,    68,     0,     0,    69,    20,     0,     0,     0,     0,
       0,     0,   232,     0,   130,   363,     0,     0,     6,     0,
       0,   171,   172,   173,   174,     0,     0,   175,   176,   221,
       0,   161,   162,     0,   222,   223,    66,   224,     0,     0,
     225,     0,     0,     0,   226,   163,     0,     0,     0,     0,
       0,   459,   227,     4,   228,     0,   229,   230,   165,   231,
       0,     0,   460,     0,     0,     0,     0,     0,    68,     0,
       0,    69,    20,     0,     0,     0,     0,     0,     0,   232,
       0,   130,   461,     0,     0,     6,     0,     0,   171,   172,
     173,   174,     0,     0,   175,   176,   221,     0,   161,   162,
       0,   222,   223,    66,   224,     0,     0,   225,     0,     0,
       0,   226,   163,     0,     0,     0,     0,     0,   164,   227,
       4,   228,     0,   229,   230,   165,   231,     0,     0,   166,
       0,     0,     0,     0,     0,    68,     0,     0,    69,    20,
       0,     0,     0,     0,     0,     0,   232,     0,   130,   505,
       0,     0,     6,     0,     0,   171,   172,   173,   174,     0,
       0,   175,   176,   221,     0,   161,   162,     0,   222,   223,
      66,   224,     0,     0,   225,     0,     0,     0,   226,   163,
       0,     0,     0,     0,     0,   164,   227,     4,   228,     0,
     229,   230,   165,   231,     0,     0,   166,     0,     0,     0,
       0,     0,    68,     0,     0,    69,    20,     0,     0,     0,
       0,     0,     0,   232,     0,   130,   508,     0,     0,     6,
       0,     0,   171,   172,   173,   174,     0,     0,   175,   176,
     221,     0,   161,   162,     0,   222,   223,    66,   224,     0,
       0,   225,     0,     0,     0,   226,   163,     0,     0,     0,
       0,     0,   164,   227,     4,   228,     0,   229,   230,   165,
     231,     0,     0,   166,     0,     0,     0,     0,     0,    68,
       0,     0,    69,    20,     0,     0,     0,     0,     0,     0,
     232,     0,   130,   543,     0,     0,     6,     0,     0,   171,
     172,   173,   174,     0,     0,   175,   176,   221,     0,   161,
     162,     0,   222,   223,    66,   224,     0,     0,   225,     0,
       0,     0,   226,   163,     0,     0,     0,     0,     0,   164,
     227,     4,   228,     0,   229,   230,   165,   231,     0,     0,
     166,     0,     0,     0,     0,     0,    68,     0,     0,    69,
      20,     0,     0,     0,     0,     0,     0,   232,     0,   130,
       0,     0,     0,     6,     0,     0,   171,   172,   173,   174,
       0,     0,   175,   176,   366,     0,   161,   162,     0,   222,
     223,    66,   224,     0,     0,   225,     0,     0,     0,   226,
     163,     0,     0,     0,     0,     0,   164,   227,     0,   228,
       0,   229,   230,   165,   231,     0,     0,   166,     0,     0,
       0,     0,     0,    68,     0,     0,    69,    20,     0,     0,
       0,     0,     0,     0,   232,     0,   130,     0,     0,     0,
       6,     0,     0,   171,   172,   173,   174,     0,     0,   175,
     176,   366,     0,   161,   162,     0,   523,   223,    66,   224,
       0,     0,   225,     0,     0,     0,   226,   163,     0,     0,
       0,     0,     0,   164,   227,     0,   228,     0,   229,   230,
     165,   231,     0,     0,   166,     0,     0,     0,     0,     0,
      68,     0,     0,    69,    20,     0,     0,     0,     0,     0,
       0,   232,     1,   130,   161,   162,     0,     6,     0,    66,
     171,   172,   173,   174,     0,     0,   175,   176,   163,     0,
       0,     0,     0,     0,   164,     0,     0,     0,     0,     0,
       0,   165,     0,     0,     0,   166,     0,     0,     0,     0,
       0,    68,     0,     0,    69,    20,     0,     0,     0,     0,
       0,     0,   232,     0,     0,     0,     0,     0,     0,     0,
       0,   171,   172,   173,   174,     0,     0,   175,   176
};

static const short yycheck[] =
{
       3,     4,   242,   130,   115,   290,   110,   170,     1,     5,
     105,   150,    57,   501,   398,    54,     0,    62,    95,    87,
      39,    98,    44,    42,    15,     9,    10,    11,   110,   113,
     100,   135,    35,    36,    56,    38,   140,    56,   142,    54,
      62,    60,    45,   261,    72,    29,    68,    92,    32,    33,
     110,   133,   490,   135,   165,   125,    56,   127,   110,    98,
      60,     0,    46,     9,    67,    48,    48,    82,    71,   527,
      54,    96,   530,   490,   144,   135,   389,    54,   100,   392,
      63,    63,   490,   135,     2,   573,    32,     5,   394,   527,
     109,    87,   530,   561,   478,   110,   115,    88,    82,    44,
      77,   104,   105,    96,   592,    82,   100,   101,   414,   109,
     527,    56,   580,   530,    97,    97,   119,    62,    53,   527,
     135,    39,   530,    68,    42,   229,   110,   130,    44,    93,
     114,    76,   590,   110,    98,    51,    54,   114,    56,   234,
     598,    64,    60,   601,    44,   603,   165,   150,    44,   288,
     178,   135,   590,   130,    95,   100,   133,    98,   135,    77,
     598,   467,    62,   601,    82,   603,    62,    83,    68,    73,
      86,    87,    68,   590,   151,     9,    87,    11,    64,   485,
     291,   598,   590,    87,   601,   188,   603,   490,   101,   100,
     598,   109,   110,   601,    51,   603,   114,   115,    32,   102,
     100,   507,   159,   160,   161,   162,    87,   235,   493,   279,
     167,   168,   130,    95,    98,   133,    98,   135,   130,   100,
     102,   100,   225,    71,   527,   465,    83,   530,   231,    86,
      87,   234,   100,   151,    95,   453,   454,   101,   401,   242,
     101,   159,   160,   161,   162,    96,   249,   165,    54,   167,
     168,   169,    95,   256,   381,   258,   104,   105,   101,   100,
     101,   567,   239,    10,    95,   242,   506,   362,    44,   100,
     101,    77,   291,   301,   302,    51,    82,   261,   306,   307,
      92,    93,    29,   501,   261,   288,    33,   590,    98,    44,
      94,   100,   102,   102,   278,   598,    51,   300,   601,    46,
     603,   278,    98,   100,   110,   102,   290,    83,   114,    44,
      86,    87,    95,   290,   317,   318,    51,   100,   101,    95,
      95,   239,    99,   130,   242,    96,   101,   133,    83,   135,
     242,    86,    87,    68,    96,    98,   463,   249,   100,   102,
      95,   445,   582,   261,   256,   151,   258,    44,    83,   261,
      95,    86,    87,    97,    51,   573,   101,   101,   335,   362,
     278,   389,    99,    60,   392,    62,   323,   324,   325,    99,
      87,    68,   290,   291,   592,    92,    93,    94,   381,    61,
      66,    98,    68,    65,    99,   102,    83,    73,    44,    86,
      87,    77,    92,    93,   371,    51,    95,   101,   502,   427,
      97,    87,   101,   487,   381,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,    46,    47,    83,   512,    54,
      86,    87,    94,   239,    94,   242,    98,   521,   395,    96,
     102,    95,   249,    18,    19,    20,    21,   101,    54,   256,
      95,   258,    77,   371,   261,    95,   101,    82,   102,   563,
     463,   101,   465,   381,   548,    95,     5,     6,     7,   381,
     102,   101,   278,   102,    96,    44,    98,   395,     3,     4,
     398,    98,    51,    58,   290,   110,   463,   490,   465,   114,
     391,    60,   393,    62,   102,    44,     8,     9,    10,    68,
      11,   504,    51,   506,   130,   130,    16,    17,   133,   493,
     135,    60,    12,    62,    83,    13,   493,    86,    87,    68,
     477,    92,    93,    14,   527,    89,   151,   530,    97,   506,
     331,   332,   333,   334,    83,   538,    94,    86,    87,    94,
     165,   453,   454,    94,   169,   463,    94,   465,    94,   552,
     100,   463,    94,   465,   328,   329,   330,   100,   561,   477,
     478,    68,   130,   566,   100,   371,    73,    46,    47,    96,
      77,   489,    46,    47,   381,   493,   249,   580,   490,   582,
      87,    98,    68,   256,   561,   258,    44,   590,   506,   501,
     326,   327,    98,    51,   506,   598,   336,   337,   601,    94,
     603,    95,    60,   580,    62,   582,    68,    97,    68,    94,
      68,   100,   100,   100,   239,   527,   242,   242,   530,   100,
      95,   101,    67,   249,   101,    83,   538,   100,    86,    87,
     256,    99,   258,    94,    99,   261,   261,    94,    96,    97,
     552,    89,   100,   561,    95,    95,   453,   454,    95,   561,
      94,    94,    94,   278,   566,    95,   463,    96,   465,   100,
      94,   573,   580,   100,   582,   290,    99,   130,   580,    96,
     582,    95,    94,    96,   242,    57,    57,    95,   590,   100,
     592,   249,    95,   490,    95,    94,   598,   493,   256,   601,
     258,   603,   100,   261,   501,     0,    87,    89,   100,   506,
     100,    92,    93,    94,     9,    10,    11,    98,    95,    89,
     335,   102,   100,    57,   100,   100,    95,    95,    44,   335,
     527,    11,    64,   530,    29,    51,    48,    32,    33,   135,
     119,   538,   133,   278,    60,    47,    62,    92,    93,    94,
     261,    46,    68,    98,   380,   552,   371,   102,    82,    54,
     446,   559,   261,   446,   561,   381,   381,    83,   302,   566,
      86,    87,   338,   340,   559,   339,   573,   489,   341,    -1,
      96,    97,   130,   580,   100,   582,   342,    82,     0,   242,
      -1,   346,    -1,   590,    -1,   592,   249,     9,    10,    11,
      -1,   598,    -1,   256,   601,   258,   603,    -1,   261,    -1,
      -1,    -1,    -1,    -1,    -1,   110,    -1,    29,    -1,    -1,
      32,    33,    -1,   381,    -1,    -1,    -1,   490,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,   453,   454,    -1,
     135,    -1,    -1,    -1,    -1,    -1,    -1,   463,   463,   465,
     465,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   527,    -1,    -1,   530,    -1,    -1,
      -1,    -1,    -1,    -1,   490,   538,    -1,    -1,   493,    -1,
      -1,    -1,    -1,    -1,    -1,   501,    -1,    -1,    -1,   552,
     506,   506,    -1,    -1,   242,   453,   454,    -1,   110,    -1,
      -1,   249,    -1,   566,    -1,   463,    -1,   465,   256,    -1,
     258,   527,    -1,   261,   530,    -1,   130,    -1,    -1,    -1,
      -1,    -1,   538,   135,    -1,    -1,    -1,   590,   381,    -1,
      -1,    -1,   490,    -1,    -1,   598,   552,    -1,   601,    -1,
     603,    -1,    -1,   501,    -1,   561,   561,    -1,   506,    -1,
     566,    -1,    -1,    -1,    -1,    -1,    -1,   573,    -1,    -1,
      -1,   130,    -1,    -1,   580,   580,   582,   582,    -1,   527,
      -1,    -1,   530,    -1,   590,    -1,   592,    -1,    -1,    -1,
     538,    -1,   598,    -1,    -1,   601,    -1,   603,    -1,    -1,
      -1,    -1,    -1,    -1,   552,    -1,    -1,    -1,    -1,    -1,
     453,   454,    -1,   561,    -1,    -1,    -1,    -1,   566,    -1,
     463,    -1,   465,    -1,    -1,   573,    -1,    -1,    -1,    -1,
      -1,    -1,   580,    -1,   582,    -1,    -1,    -1,   242,    -1,
      -1,    -1,   590,   381,   592,   249,    -1,   490,    -1,    -1,
     598,    -1,   256,   601,   258,   603,    -1,   261,   501,    -1,
      -1,    -1,    -1,   506,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   120,   242,   527,    -1,    -1,   530,    -1,    -1,
     249,    -1,    -1,    -1,    -1,   538,    -1,   256,    -1,   258,
      -1,    -1,   261,    -1,    -1,    -1,    -1,    -1,    -1,   552,
      -1,    -1,    -1,    -1,    -1,   453,   454,    -1,   561,    -1,
      -1,    -1,    -1,   566,    -1,   463,    -1,   465,    -1,    -1,
     573,   169,   170,    -1,    -1,    -1,    -1,   580,    -1,   582,
      -1,    -1,    -1,    -1,    51,    -1,    -1,   590,    -1,   592,
      -1,    -1,   490,    60,    -1,   598,    -1,    -1,   601,    66,
     603,    -1,    -1,   501,    -1,    -1,    73,    -1,   506,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    83,   381,    -1,    86,
      87,    -1,    -1,    90,    91,   223,    -1,    94,   226,   527,
      -1,    -1,   530,    -1,   232,    -1,   103,   104,   105,   106,
     538,    -1,   109,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   552,    -1,    46,    47,    -1,    -1,
      -1,    51,   381,   561,    -1,    -1,    -1,    -1,   566,    -1,
      60,    -1,    -1,    -1,    -1,   573,    66,    -1,    -1,    -1,
      -1,    -1,   580,    73,   582,    -1,    -1,    77,    -1,   453,
     454,    -1,   590,    83,   592,    -1,    86,    87,    -1,   463,
     598,   465,    -1,   601,    94,   603,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   103,   104,   105,   106,    -1,   316,   109,
     110,   319,    -1,    -1,    -1,    -1,   490,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   453,   454,    -1,   501,    -1,    -1,
      -1,    -1,   506,    -1,   463,   343,   465,    -1,    -1,   347,
     159,   160,   161,   162,    -1,   353,   354,    -1,   167,   168,
      -1,    -1,    -1,   527,    -1,    -1,   530,    -1,    -1,    -1,
      -1,   490,    -1,    -1,   538,    -1,    -1,    -1,   376,   377,
      -1,    -1,   501,    -1,    -1,    -1,    -1,   506,   552,    -1,
     388,    -1,    -1,    -1,    -1,    -1,    -1,   561,   159,   160,
     161,   162,   566,   401,    -1,    -1,   167,   168,   527,   573,
      -1,   530,    -1,    -1,    -1,    -1,   580,    -1,   582,   538,
      -1,    -1,    -1,    -1,    -1,    -1,   590,    -1,   592,    -1,
      -1,    -1,    -1,   552,   598,    -1,    -1,   601,    -1,   603,
      -1,    -1,   561,    -1,    -1,    -1,    -1,   566,    -1,    -1,
      -1,    -1,    -1,    -1,   573,    -1,    -1,    -1,    -1,    -1,
      -1,   580,    -1,   582,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   590,    -1,   592,    -1,    -1,    -1,    -1,    -1,   598,
      -1,    -1,   601,    -1,   603,   483,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   497,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,    -1,   336,   337,   338,
     339,   340,   341,   342,    -1,    -1,    -1,     1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   551,    -1,    -1,    -1,   555,    -1,   557,
      -1,    -1,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,    -1,   336,   337,   338,   339,   340,
     341,   342,    46,    47,    -1,    -1,   395,    51,    -1,   398,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    66,    -1,     3,     4,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    86,    87,    -1,    -1,    90,    91,    -1,    -1,
      94,    -1,    -1,    -1,   395,    -1,    -1,   398,    -1,   103,
     104,   105,   106,    -1,    -1,   109,   110,    46,    47,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    66,   477,   478,
       3,     4,    -1,    -1,    73,    -1,    -1,    -1,    77,    -1,
     489,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,    -1,
      -1,    90,    91,    -1,    -1,    94,    -1,    96,    97,    -1,
      -1,    -1,   101,    -1,   103,   104,   105,   106,    -1,    -1,
     109,   110,    -1,    46,    47,    -1,   477,   478,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,   489,    -1,
      -1,     3,     4,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    86,    87,    -1,    -1,    90,    91,    -1,
      -1,    94,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
     103,   104,   105,   106,    46,    47,   109,   110,    -1,    51,
      -1,    -1,     3,     4,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    86,    87,    -1,    -1,    90,    91,
      -1,    -1,    94,    -1,    96,    46,    47,    -1,    -1,    -1,
      51,   103,   104,   105,   106,    -1,    -1,   109,   110,    60,
      -1,    -1,    -1,     3,     4,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    86,    87,    -1,    -1,    90,
      91,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,   103,   104,   105,   106,    46,    47,   109,   110,
      -1,    51,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    86,    87,    -1,    -1,
      90,    91,    -1,    -1,    94,    95,    -1,    46,    47,    -1,
      -1,    -1,    51,   103,   104,   105,   106,    -1,    -1,   109,
     110,    60,    -1,    -1,    -1,     3,     4,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,    -1,
      -1,    90,    91,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,   103,   104,   105,   106,    46,    47,
     109,   110,    -1,    51,    -1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,
      -1,    -1,    90,    91,    -1,    -1,    94,    -1,    -1,    46,
      47,    -1,   100,    -1,    51,   103,   104,   105,   106,    -1,
      -1,   109,   110,    60,    -1,    -1,    -1,     3,     4,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,
      87,    -1,    -1,    90,    91,    -1,    -1,    94,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,   104,   105,   106,
      46,    47,   109,   110,    -1,    51,    -1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      86,    87,    -1,    -1,    90,    91,    -1,    -1,    94,    95,
      -1,    46,    47,    -1,    -1,    -1,    51,   103,   104,   105,
     106,    -1,    -1,   109,   110,    60,    -1,    -1,    -1,     3,
       4,    66,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    86,    87,    -1,    -1,    90,    91,    -1,    -1,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,   104,
     105,   106,    46,    47,   109,   110,    -1,    51,    -1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    86,    87,    -1,    -1,    90,    91,    -1,    -1,
      94,    95,    -1,    46,    47,    -1,    -1,    -1,    51,   103,
     104,   105,   106,    -1,    -1,   109,   110,    60,    -1,    -1,
      -1,     3,     4,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    86,    87,    -1,    -1,    90,    91,    -1,
      -1,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,   104,   105,   106,    46,    47,   109,   110,    -1,    51,
      -1,    -1,     3,     4,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    86,    87,    -1,    -1,    90,    91,
      -1,    -1,    94,    -1,    -1,    46,    47,    -1,   100,    -1,
      51,   103,   104,   105,   106,    -1,    -1,   109,   110,    60,
      -1,    -1,    -1,     3,     4,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    86,    87,    -1,    -1,    90,
      91,    -1,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   103,   104,   105,   106,    46,    47,   109,   110,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    86,    87,    -1,    -1,
      90,    91,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   103,   104,   105,   106,    -1,    -1,   109,
     110,    44,    -1,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    55,    -1,    -1,    -1,    59,    60,    -1,    -1,
      63,    -1,    -1,    66,    67,    68,    69,    -1,    71,    72,
      73,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    96,    97,    -1,    -1,   100,    -1,    -1,
     103,   104,   105,   106,    -1,    -1,   109,   110,    44,    -1,
      46,    47,    48,    49,    50,    51,    52,    -1,    -1,    55,
      -1,    -1,    -1,    59,    60,    -1,    -1,    63,    -1,    -1,
      66,    67,    68,    69,    -1,    71,    72,    73,    74,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      96,    97,    -1,    -1,   100,    -1,    -1,   103,   104,   105,
     106,    -1,    -1,   109,   110,    44,    -1,    46,    47,    -1,
      49,    50,    51,    52,    -1,    -1,    55,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,
      69,    -1,    71,    72,    73,    74,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    96,    97,    -1,
      -1,   100,    -1,    -1,   103,   104,   105,   106,    -1,    -1,
     109,   110,    44,    -1,    46,    47,    -1,    49,    50,    51,
      52,    -1,    -1,    55,    -1,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    -1,    66,    67,    68,    69,    -1,    71,
      72,    73,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    96,    97,    -1,    -1,   100,    -1,
      -1,   103,   104,   105,   106,    -1,    -1,   109,   110,    44,
      -1,    46,    47,    -1,    49,    50,    51,    52,    -1,    -1,
      55,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      -1,    66,    67,    68,    69,    -1,    71,    72,    73,    74,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      -1,    96,    97,    -1,    -1,   100,    -1,    -1,   103,   104,
     105,   106,    -1,    -1,   109,   110,    44,    -1,    46,    47,
      -1,    49,    50,    51,    52,    -1,    -1,    55,    -1,    -1,
      -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    -1,    71,    72,    73,    74,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,    97,
      -1,    -1,   100,    -1,    -1,   103,   104,   105,   106,    -1,
      -1,   109,   110,    44,    -1,    46,    47,    -1,    49,    50,
      51,    52,    -1,    -1,    55,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    -1,
      71,    72,    73,    74,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    -1,    96,    97,    -1,    -1,   100,
      -1,    -1,   103,   104,   105,   106,    -1,    -1,   109,   110,
      44,    -1,    46,    47,    -1,    49,    50,    51,    52,    -1,
      -1,    55,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,    66,    67,    68,    69,    -1,    71,    72,    73,
      74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    96,    97,    -1,    -1,   100,    -1,    -1,   103,
     104,   105,   106,    -1,    -1,   109,   110,    44,    -1,    46,
      47,    -1,    49,    50,    51,    52,    -1,    -1,    55,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    66,
      67,    68,    69,    -1,    71,    72,    73,    74,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,
      -1,    -1,    -1,   100,    -1,    -1,   103,   104,   105,   106,
      -1,    -1,   109,   110,    44,    -1,    46,    47,    -1,    49,
      50,    51,    52,    -1,    -1,    55,    -1,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    69,
      -1,    71,    72,    73,    74,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    -1,    96,    -1,    -1,    -1,
     100,    -1,    -1,   103,   104,   105,   106,    -1,    -1,   109,
     110,    44,    -1,    46,    47,    -1,    49,    50,    51,    52,
      -1,    -1,    55,    -1,    -1,    -1,    59,    60,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    69,    -1,    71,    72,
      73,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    44,    96,    46,    47,    -1,   100,    -1,    51,
     103,   104,   105,   106,    -1,    -1,   109,   110,    60,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,   104,   105,   106,    -1,    -1,   109,   110
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,    44,    56,    62,    68,    76,   100,   112,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   164,   185,
      87,   121,   122,   123,   124,   124,   124,   121,     0,   127,
     129,   132,   126,   127,    44,    62,    68,   100,   102,    64,
     165,   169,    64,   137,   100,   102,   127,   124,   124,     5,
     124,   117,   119,   121,    96,   170,   101,   167,   117,   118,
      53,   138,   166,   169,   137,   100,    51,    60,    83,    86,
      97,   114,   115,   116,   117,   120,   121,   133,   134,   144,
     150,   164,   171,   172,   173,   174,   119,   170,   119,   139,
     136,   170,   168,   138,   124,   151,   124,   145,   146,   147,
     151,    98,   234,   234,    60,   114,   100,    97,   172,   101,
      96,   140,   170,   135,    94,    54,    98,   154,   100,   101,
      93,    98,   154,    99,    98,   151,   145,   151,   119,    44,
      96,    97,   122,   133,   134,   141,   142,   143,   144,   149,
     150,   157,   158,   159,   160,   164,   177,   185,   140,    95,
     114,   133,   152,   153,   118,   155,    99,   124,   146,     3,
       4,    46,    47,    60,    66,    73,    77,    90,    91,    94,
      96,   103,   104,   105,   106,   109,   110,   113,   115,   120,
     121,   148,   175,   222,   223,   224,   225,   226,   229,   231,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   261,    99,    99,   154,   100,
     154,    44,    49,    50,    52,    55,    59,    67,    69,    71,
      72,    74,    94,    97,   114,   115,   120,   121,   124,   133,
     134,   177,   178,   179,   180,   181,   182,   184,   185,   186,
     187,   189,   190,   191,   192,   194,   200,   201,   203,   204,
     205,   207,   208,   212,   213,   214,   215,   216,   217,   218,
     225,   236,   238,   239,   240,   242,   243,   258,    94,   160,
      97,   142,   100,   156,   177,   177,   154,   147,   114,    95,
     101,   101,   121,   235,   237,   241,   241,   241,   241,   102,
     102,   115,   117,   118,   241,   241,   115,   121,   261,    97,
     101,   148,   176,   102,   102,    94,    98,   102,   102,    98,
     124,    46,    47,     5,     6,     7,     3,     4,     8,     9,
      10,    18,    19,    20,    21,    58,    16,    17,    11,    12,
      13,    14,    15,    88,    92,    93,   260,    94,   261,   100,
     124,   100,   261,    94,    94,   177,    94,   100,   124,   261,
     145,    89,   114,    97,   179,   100,    44,   182,   100,   182,
     182,   133,   181,   190,   209,   211,   100,    94,    95,   152,
     154,    96,   161,   147,   153,   118,    68,   124,    98,   232,
     233,   234,   232,   234,    94,    95,   234,   234,    95,    97,
      97,   101,    68,    68,    95,   230,   261,   261,    68,    73,
      77,    73,   124,   261,    94,   241,   241,   241,   246,   246,
     247,   247,   247,   248,   248,   248,   248,   115,   116,   249,
     249,   250,   251,   252,   253,   254,   261,   257,   261,   100,
     100,   100,   261,   261,    61,    65,   219,   220,   221,   100,
      95,   145,    67,   101,   100,   261,   261,    95,   161,    66,
      77,    97,   121,   162,   163,   178,   100,    94,   261,   233,
     234,   175,   234,   175,    95,   230,   241,    95,    95,   244,
      97,   148,    95,   101,    99,    94,    99,    95,   230,    89,
      95,    95,    95,    94,   177,   220,   221,    94,   190,   210,
     211,   100,    95,   100,   102,    97,   178,    94,    97,    95,
     230,    99,   227,    95,   241,   244,     1,   261,    95,   230,
     140,    95,   256,    49,   182,   183,   184,   186,   188,   193,
     200,   202,   206,   208,    96,   195,   153,   261,    95,   210,
       1,   177,    66,    97,    95,   230,    95,   140,   228,    95,
     140,    94,    57,   183,   183,   100,    48,    63,    97,   196,
     197,   198,   199,    95,    95,   182,    95,    94,   100,    95,
     140,   261,   182,   100,   261,    89,   261,   262,    97,   197,
     198,    97,   178,   199,   177,   100,   182,    95,   230,   100,
      95,   210,   100,    89,    97,   100,    95,   183,    95,   210,
     100,    57,   183,    95,   183,   183
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1

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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
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
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
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
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  /* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

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
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
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

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
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
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
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

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
        case 11:
#line 211 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    {
		  /* use preset global here. FIXME */
		  yyval.node = xstrdup ("int");
		;}
    break;

  case 12:
#line 216 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    {
		  /* use preset global here. FIXME */
		  yyval.node = xstrdup ("double");
		;}
    break;

  case 13:
#line 221 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    {
		  /* use preset global here. FIXME */
		  yyval.node = xstrdup ("boolean");
		;}
    break;

  case 19:
#line 246 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    {
	          while (bracket_count-- > 0) 
		    yyval.node = concat ("[", yyvsp[-1].node, NULL);
		;}
    break;

  case 20:
#line 251 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    {
	          while (bracket_count-- > 0) 
		    yyval.node = concat ("[", yyvsp[-1].node, NULL);
		;}
    break;

  case 24:
#line 269 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { 
		  yyval.node = concat (yyvsp[-2].node, ".", yyvsp[0].node, NULL);
		;}
    break;

  case 38:
#line 301 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { package_name = yyvsp[-1].node; ;}
    break;

  case 46:
#line 328 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { 
		  if (yyvsp[0].value == PUBLIC_TK)
		    modifier_value++;
                  if (yyvsp[0].value == STATIC_TK)
                    modifier_value++;
	          USE_ABSORBER;
		;}
    break;

  case 47:
#line 336 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { 
		  if (yyvsp[0].value == PUBLIC_TK)
		    modifier_value++;
                  if (yyvsp[0].value == STATIC_TK)
                    modifier_value++;
		  USE_ABSORBER;
		;}
    break;

  case 48:
#line 348 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { 
		  report_class_declaration(yyvsp[-2].node);
		  modifier_value = 0;
                ;}
    break;

  case 50:
#line 354 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { report_class_declaration(yyvsp[-2].node); ;}
    break;

  case 56:
#line 368 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;

  case 57:
#line 370 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;

  case 58:
#line 375 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { pop_class_context (); ;}
    break;

  case 59:
#line 377 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { pop_class_context (); ;}
    break;

  case 71:
#line 403 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;

  case 72:
#line 405 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { modifier_value = 0; ;}
    break;

  case 77:
#line 421 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { bracket_count = 0; USE_ABSORBER; ;}
    break;

  case 78:
#line 423 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { ++bracket_count; ;}
    break;

  case 82:
#line 438 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;

  case 84:
#line 441 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { modifier_value = 0; ;}
    break;

  case 85:
#line 443 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { 
                  report_main_declaration (yyvsp[-1].declarator);
		  modifier_value = 0;
		;}
    break;

  case 86:
#line 451 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { 
		  struct method_declarator *d;
		  NEW_METHOD_DECLARATOR (d, yyvsp[-2].node, NULL);
		  yyval.declarator = d;
		;}
    break;

  case 87:
#line 457 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { 
		  struct method_declarator *d;
		  NEW_METHOD_DECLARATOR (d, yyvsp[-3].node, yyvsp[-1].node);
		  yyval.declarator = d;
		;}
    break;

  case 90:
#line 468 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    {
		  yyval.node = concat (yyvsp[-2].node, ",", yyvsp[0].node, NULL);
		;}
    break;

  case 91:
#line 475 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { 
		  USE_ABSORBER;
		  if (bracket_count)
		    {
		      int i;
		      char *n = xmalloc (bracket_count + 1 + strlen (yyval.node));
		      for (i = 0; i < bracket_count; ++i)
			n[i] = '[';
		      strcpy (n + bracket_count, yyval.node);
		      yyval.node = n;
		    }
		  else
		    yyval.node = yyvsp[-1].node;
		;}
    break;

  case 92:
#line 490 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    {
		  if (bracket_count)
		    {
		      int i;
		      char *n = xmalloc (bracket_count + 1 + strlen (yyval.node));
		      for (i = 0; i < bracket_count; ++i)
			n[i] = '[';
		      strcpy (n + bracket_count, yyval.node);
		      yyval.node = n;
		    }
		  else
		    yyval.node = yyvsp[-1].node;
		;}
    break;

  case 95:
#line 511 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;

  case 96:
#line 513 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;

  case 100:
#line 528 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;

  case 102:
#line 539 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { modifier_value = 0; ;}
    break;

  case 104:
#line 544 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { modifier_value = 0; ;}
    break;

  case 105:
#line 551 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;

  case 106:
#line 553 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;

  case 113:
#line 570 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;

  case 114:
#line 572 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;

  case 117:
#line 584 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { report_class_declaration (yyvsp[0].node); modifier_value = 0; ;}
    break;

  case 119:
#line 587 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { report_class_declaration (yyvsp[0].node); modifier_value = 0; ;}
    break;

  case 121:
#line 590 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { report_class_declaration (yyvsp[-1].node); modifier_value = 0; ;}
    break;

  case 123:
#line 593 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { report_class_declaration (yyvsp[-1].node); modifier_value = 0; ;}
    break;

  case 127:
#line 604 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { pop_class_context (); ;}
    break;

  case 128:
#line 606 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { pop_class_context (); ;}
    break;

  case 151:
#line 665 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;

  case 152:
#line 667 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { modifier_value = 0; ;}
    break;

  case 176:
#line 707 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;

  case 187:
#line 735 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { ++complexity; ;}
    break;

  case 188:
#line 740 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { ++complexity; ;}
    break;

  case 189:
#line 745 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { ++complexity; ;}
    break;

  case 197:
#line 765 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { ++complexity; ;}
    break;

  case 202:
#line 780 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { ++complexity; ;}
    break;

  case 206:
#line 797 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { ++complexity; ;}
    break;

  case 212:
#line 815 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { ++complexity; ;}
    break;

  case 223:
#line 840 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { ++complexity; ;}
    break;

  case 226:
#line 849 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { ++complexity; ;}
    break;

  case 229:
#line 859 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;

  case 235:
#line 874 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { ++complexity; ;}
    break;

  case 236:
#line 878 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { ++complexity; ;}
    break;

  case 247:
#line 900 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;

  case 248:
#line 905 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;

  case 249:
#line 907 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;

  case 250:
#line 909 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;

  case 251:
#line 911 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;

  case 259:
#line 926 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { report_class_declaration (NULL); ;}
    break;

  case 261:
#line 929 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { report_class_declaration (NULL); ;}
    break;

  case 263:
#line 935 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;

  case 277:
#line 967 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { bracket_count = 1; ;}
    break;

  case 278:
#line 969 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { bracket_count++; ;}
    break;

  case 281:
#line 982 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ++complexity; ;}
    break;

  case 282:
#line 984 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ++complexity; ;}
    break;

  case 283:
#line 985 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { ++complexity; ;}
    break;

  case 284:
#line 986 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { ++complexity; ;}
    break;

  case 285:
#line 987 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { ++complexity; ;}
    break;

  case 286:
#line 988 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { ++complexity; ;}
    break;

  case 287:
#line 993 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;

  case 290:
#line 1000 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;

  case 337:
#line 1096 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { ++complexity; ;}
    break;

  case 339:
#line 1102 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { ++complexity; ;}
    break;

  case 341:
#line 1108 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { ++complexity; ;}
    break;

  case 345:
#line 1122 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"
    { USE_ABSORBER; ;}
    break;


    }

/* Line 991 of yacc.c.  */
#line 2917 "ps2505.c"

  yyvsp -= yylen;
  yyssp -= yylen;


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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab2;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:

  /* Suppress GCC warning that yyerrlab1 is unused when no action
     invokes YYERROR.  */
#if defined (__GNUC_MINOR__) && 2093 <= (__GNUC__ * 1000 + __GNUC_MINOR__)
 __attribute__ ((__unused__));
#endif


  goto yyerrlab2;


/*---------------------------------------------------------------.
| yyerrlab2 -- pop states until the error token can be shifted.  |
`---------------------------------------------------------------*/
yyerrlab2:
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


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
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 1140 "/u/molotova/0/galaad/gdosreis/gcc-3.2.3/gcc-3.2.3/gcc/java/parse-scan.y"


/* Create a new parser context */

void
java_push_parser_context ()
{
  struct parser_ctxt *new = 
    (struct parser_ctxt *) xcalloc (1, sizeof (struct parser_ctxt));

  new->next = ctxp;
  ctxp = new;
}  

static void
push_class_context (name)
    const char *name;
{
  /* If we already have CURRENT_CLASS set, we're in an inter
     class. Mangle its name. */
  if (current_class)
    {
      const char *p;
      char anonymous [3];
      int additional_length;
      
      /* NAME set to NULL indicates an anonymous class, which are named by
	 numbering them. */
      if (!name)
	{
	  sprintf (anonymous, "%d", ++anonymous_count);
	  p = anonymous;
	}
      else
	p = name;
      
      additional_length = strlen (p)+1; /* +1 for `$' */
      current_class = xrealloc (current_class, 
				current_class_length + additional_length + 1);
      current_class [current_class_length] = '$';
      strcpy (&current_class [current_class_length+1], p);
      current_class_length += additional_length;
    }
  else
    {
      if (!name)
	return;
      current_class_length = strlen (name);
      current_class = xmalloc (current_class_length+1);
      strcpy (current_class, name);
    }
}

static void
pop_class_context ()
{
  /* Go back to the last `$' and cut. */
  while (--current_class_length > 0
        && current_class [current_class_length] != '$')
    ;
  if (current_class_length)
    {
      current_class = xrealloc (current_class, current_class_length+1);
      current_class [current_class_length] = '\0';
    }
  else
    {
      current_class = NULL;
      anonymous_count = 0;
    }
}

/* Actions defined here */

static void
report_class_declaration (name)
     const char * name;
{
  extern int flag_dump_class, flag_list_filename;

  push_class_context (name);
  if (flag_dump_class)
    {
      if (!previous_output)
	{
	  if (flag_list_filename)
	    fprintf (out, "%s: ", input_filename);
	  previous_output = 1;
	}
	
      if (package_name)
	fprintf (out, "%s.%s ", package_name, current_class);
      else
	fprintf (out, "%s ", current_class);
    }
}

static void
report_main_declaration (declarator)
     struct method_declarator *declarator;
{
  extern int flag_find_main;

  if (flag_find_main
      && modifier_value == 2
      && !strcmp (declarator->method_name, "main") 
      && declarator->args 
      && declarator->args [0] == '[' 
      && (! strcmp (declarator->args+1, "String")
	  || ! strcmp (declarator->args + 1, "java.lang.String"))
      && current_class)
    {
      if (!previous_output)
	{
	  if (package_name)
	    fprintf (out, "%s.%s ", package_name, current_class);
	  else
	    fprintf (out, "%s", current_class);
	  previous_output = 1;
	}
    }
}

void
report ()
{
  extern int flag_complexity;
  if (flag_complexity)
    fprintf (out, "%s %d\n", input_filename, complexity);
}

/* Reset global status used by the report functions.  */

void reset_report ()
{
  previous_output = 0;
  package_name = NULL;
  current_class = NULL;
  complexity = 0;
}

void
yyerror (msg)
     const char *msg ATTRIBUTE_UNUSED;
{
  fprintf (stderr, "%s: %d: %s\n", input_filename, lineno, msg);
  exit (1);
}


