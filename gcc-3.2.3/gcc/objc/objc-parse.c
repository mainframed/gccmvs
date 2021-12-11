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
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     TYPENAME = 259,
     SCSPEC = 260,
     TYPESPEC = 261,
     TYPE_QUAL = 262,
     CONSTANT = 263,
     STRING = 264,
     ELLIPSIS = 265,
     SIZEOF = 266,
     ENUM = 267,
     STRUCT = 268,
     UNION = 269,
     IF = 270,
     ELSE = 271,
     WHILE = 272,
     DO = 273,
     FOR = 274,
     SWITCH = 275,
     CASE = 276,
     DEFAULT = 277,
     BREAK = 278,
     CONTINUE = 279,
     RETURN = 280,
     GOTO = 281,
     ASM_KEYWORD = 282,
     TYPEOF = 283,
     ALIGNOF = 284,
     ATTRIBUTE = 285,
     EXTENSION = 286,
     LABEL = 287,
     REALPART = 288,
     IMAGPART = 289,
     VA_ARG = 290,
     CHOOSE_EXPR = 291,
     TYPES_COMPATIBLE_P = 292,
     PTR_VALUE = 293,
     PTR_BASE = 294,
     PTR_EXTENT = 295,
     STRING_FUNC_NAME = 296,
     VAR_FUNC_NAME = 297,
     ASSIGN = 298,
     OROR = 299,
     ANDAND = 300,
     EQCOMPARE = 301,
     ARITHCOMPARE = 302,
     RSHIFT = 303,
     LSHIFT = 304,
     MINUSMINUS = 305,
     PLUSPLUS = 306,
     UNARY = 307,
     HYPERUNARY = 308,
     POINTSAT = 309,
     INTERFACE = 310,
     IMPLEMENTATION = 311,
     END = 312,
     SELECTOR = 313,
     DEFS = 314,
     ENCODE = 315,
     CLASSNAME = 316,
     PUBLIC = 317,
     PRIVATE = 318,
     PROTECTED = 319,
     PROTOCOL = 320,
     OBJECTNAME = 321,
     CLASS = 322,
     ALIAS = 323
   };
#endif
#define IDENTIFIER 258
#define TYPENAME 259
#define SCSPEC 260
#define TYPESPEC 261
#define TYPE_QUAL 262
#define CONSTANT 263
#define STRING 264
#define ELLIPSIS 265
#define SIZEOF 266
#define ENUM 267
#define STRUCT 268
#define UNION 269
#define IF 270
#define ELSE 271
#define WHILE 272
#define DO 273
#define FOR 274
#define SWITCH 275
#define CASE 276
#define DEFAULT 277
#define BREAK 278
#define CONTINUE 279
#define RETURN 280
#define GOTO 281
#define ASM_KEYWORD 282
#define TYPEOF 283
#define ALIGNOF 284
#define ATTRIBUTE 285
#define EXTENSION 286
#define LABEL 287
#define REALPART 288
#define IMAGPART 289
#define VA_ARG 290
#define CHOOSE_EXPR 291
#define TYPES_COMPATIBLE_P 292
#define PTR_VALUE 293
#define PTR_BASE 294
#define PTR_EXTENT 295
#define STRING_FUNC_NAME 296
#define VAR_FUNC_NAME 297
#define ASSIGN 298
#define OROR 299
#define ANDAND 300
#define EQCOMPARE 301
#define ARITHCOMPARE 302
#define RSHIFT 303
#define LSHIFT 304
#define MINUSMINUS 305
#define PLUSPLUS 306
#define UNARY 307
#define HYPERUNARY 308
#define POINTSAT 309
#define INTERFACE 310
#define IMPLEMENTATION 311
#define END 312
#define SELECTOR 313
#define DEFS 314
#define ENCODE 315
#define CLASSNAME 316
#define PUBLIC 317
#define PRIVATE 318
#define PROTECTED 319
#define PROTOCOL 320
#define OBJECTNAME 321
#define CLASS 322
#define ALIAS 323




/* Copy the first part of user declarations.  */
#line 33 "objc-parse.y"

#include "config.h"
#include "system.h"
#include "tree.h"
#include "input.h"
#include "cpplib.h"
#include "intl.h"
#include "timevar.h"
#include "c-lex.h"
#include "c-tree.h"
#include "c-pragma.h"
#include "flags.h"
#include "output.h"
#include "toplev.h"
#include "ggc.h"
  
#ifdef MULTIBYTE_CHARS
#include <locale.h>
#endif

#include "objc-act.h"

/* Like YYERROR but do call yyerror.  */
#define YYERROR1 { yyerror ("syntax error"); YYERROR; }

/* Cause the "yydebug" variable to be defined.  */
#define YYDEBUG 1

/* Rename the "yyparse" function so that we can override it elsewhere.  */
#define yyparse yyparse_1


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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 67 "objc-parse.y"
typedef union YYSTYPE {long itype; tree ttype; enum tree_code code;
	const char *filename; int lineno; } YYSTYPE;
/* Line 191 of yacc.c.  */
#line 246 "op2534.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 211 "objc-parse.y"

/* Number of statements (loosely speaking) and compound statements 
   seen so far.  */
static int stmt_count;
static int compstmt_count;
  
/* Input file and line number of the end of the body of last simple_if;
   used by the stmt-rule immediately after simple_if returns.  */
static const char *if_stmt_file;
static int if_stmt_line;

/* List of types and structure classes of the current declaration.  */
static tree current_declspecs = NULL_TREE;
static tree prefix_attributes = NULL_TREE;

/* List of all the attributes applying to the identifier currently being
   declared; includes prefix_attributes and possibly some more attributes
   just after a comma.  */
static tree all_prefix_attributes = NULL_TREE;

/* Stack of saved values of current_declspecs, prefix_attributes and
   all_prefix_attributes.  */
static tree declspec_stack;

/* PUSH_DECLSPEC_STACK is called from setspecs; POP_DECLSPEC_STACK
   should be called from the productions making use of setspecs.  */
#define PUSH_DECLSPEC_STACK						 \
  do {									 \
    declspec_stack = tree_cons (build_tree_list (prefix_attributes,	 \
						 all_prefix_attributes), \
				current_declspecs,			 \
				declspec_stack);			 \
  } while (0)

#define POP_DECLSPEC_STACK						\
  do {									\
    current_declspecs = TREE_VALUE (declspec_stack);			\
    prefix_attributes = TREE_PURPOSE (TREE_PURPOSE (declspec_stack));	\
    all_prefix_attributes = TREE_VALUE (TREE_PURPOSE (declspec_stack));	\
    declspec_stack = TREE_CHAIN (declspec_stack);			\
  } while (0)

/* For __extension__, save/restore the warning flags which are
   controlled by __extension__.  */
#define SAVE_WARN_FLAGS()			\
	size_int (pedantic			\
		  | (warn_pointer_arith << 1)	\
		  | (warn_traditional << 2))

#define RESTORE_WARN_FLAGS(tval)		\
  do {						\
    int val = tree_low_cst (tval, 0);		\
    pedantic = val & 1;				\
    warn_pointer_arith = (val >> 1) & 1;	\
    warn_traditional = (val >> 2) & 1;		\
  } while (0)

/* Objective-C specific parser/lexer information */

static enum tree_code objc_inherit_code;
static int objc_pq_context = 0, objc_public_flag = 0;

/* The following flag is needed to contextualize ObjC lexical analysis.
   In some cases (e.g., 'int NSObject;'), it is undesirable to bind 
   an identifier to an ObjC class, even if a class with that name 
   exists.  */
static int objc_need_raw_identifier;
#define OBJC_NEED_RAW_IDENTIFIER(VAL)	objc_need_raw_identifier = VAL


/* Tell yyparse how to print a token's value, if yydebug is set.  */

#define YYPRINT(FILE,YYCHAR,YYLVAL) yyprint(FILE,YYCHAR,YYLVAL)

static void yyprint	  PARAMS ((FILE *, int, YYSTYPE));
static void yyerror	  PARAMS ((const char *));
static int yylexname	  PARAMS ((void));
static inline int _yylex  PARAMS ((void));
static int  yylex	  PARAMS ((void));
static void init_reswords PARAMS ((void));

/* Add GC roots for variables local to this file.  */
void
c_parse_init ()
{
  init_reswords ();

  ggc_add_tree_root (&declspec_stack, 1);
  ggc_add_tree_root (&current_declspecs, 1);
  ggc_add_tree_root (&prefix_attributes, 1);
  ggc_add_tree_root (&all_prefix_attributes, 1);
}



/* Line 214 of yacc.c.  */
#line 352 "op2534.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4983

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  266
/* YYNRULES -- Number of rules. */
#define YYNRULES  724
/* YYNRULES -- Number of states. */
#define YYNSTATES  1164

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,     2,     2,     2,    60,    51,     2,
      66,    83,    58,    56,    88,    57,    65,    59,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,    84,
       2,    43,     2,    45,    91,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    90,    50,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    89,    49,    85,    86,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    44,    47,
      48,    52,    53,    54,    55,    61,    62,    63,    64,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     4,     6,     7,    10,    11,    15,    17,
      19,    21,    27,    30,    34,    39,    44,    47,    50,    53,
      55,    56,    57,    67,    72,    73,    74,    84,    89,    90,
      91,   100,   104,   106,   108,   110,   112,   114,   116,   118,
     120,   122,   124,   126,   128,   129,   131,   133,   137,   139,
     142,   145,   148,   151,   154,   159,   162,   167,   170,   173,
     175,   177,   179,   181,   186,   188,   192,   196,   200,   204,
     208,   212,   216,   220,   224,   228,   232,   236,   237,   242,
     243,   248,   249,   250,   258,   259,   265,   269,   273,   275,
     277,   279,   281,   282,   290,   294,   298,   302,   306,   311,
     318,   327,   334,   339,   343,   347,   350,   353,   355,   357,
     359,   361,   363,   365,   368,   371,   375,   376,   378,   381,
     385,   387,   389,   392,   395,   400,   405,   408,   411,   415,
     416,   418,   423,   428,   432,   436,   439,   442,   444,   447,
     450,   453,   456,   459,   461,   464,   466,   469,   472,   475,
     478,   481,   484,   486,   489,   492,   495,   498,   501,   504,
     507,   510,   513,   516,   519,   522,   525,   528,   531,   534,
     536,   539,   542,   545,   548,   551,   554,   557,   560,   563,
     566,   569,   572,   575,   578,   581,   584,   587,   590,   593,
     596,   599,   602,   605,   608,   611,   614,   617,   620,   623,
     626,   629,   632,   635,   638,   641,   644,   647,   650,   653,
     656,   659,   662,   665,   668,   670,   672,   674,   676,   678,
     680,   682,   684,   686,   688,   690,   692,   694,   696,   698,
     700,   702,   704,   706,   708,   710,   712,   714,   716,   718,
     720,   722,   724,   726,   728,   730,   732,   734,   736,   738,
     740,   742,   744,   746,   748,   750,   752,   754,   756,   758,
     760,   762,   764,   766,   768,   770,   772,   774,   776,   778,
     780,   781,   783,   785,   787,   789,   791,   793,   795,   797,
     800,   803,   805,   810,   815,   817,   822,   824,   829,   830,
     835,   836,   843,   847,   848,   855,   859,   860,   862,   864,
     867,   874,   876,   880,   881,   883,   888,   895,   900,   902,
     904,   906,   908,   910,   911,   916,   918,   919,   922,   924,
     928,   932,   935,   936,   941,   943,   944,   949,   951,   953,
     955,   958,   961,   962,   963,   971,   972,   973,   981,   983,
     985,   990,   994,   997,  1001,  1003,  1005,  1007,  1009,  1013,
    1016,  1018,  1020,  1024,  1027,  1031,  1035,  1040,  1044,  1049,
    1053,  1056,  1058,  1060,  1063,  1065,  1068,  1070,  1073,  1074,
    1082,  1088,  1089,  1097,  1103,  1104,  1113,  1114,  1122,  1125,
    1128,  1131,  1132,  1134,  1135,  1137,  1139,  1142,  1143,  1147,
    1150,  1155,  1159,  1164,  1168,  1170,  1172,  1175,  1177,  1182,
    1184,  1189,  1194,  1201,  1207,  1212,  1219,  1225,  1227,  1231,
    1233,  1235,  1239,  1240,  1244,  1245,  1247,  1248,  1250,  1253,
    1255,  1257,  1259,  1263,  1266,  1270,  1275,  1279,  1282,  1285,
    1287,  1291,  1296,  1299,  1303,  1307,  1312,  1317,  1323,  1329,
    1331,  1333,  1335,  1337,  1339,  1342,  1345,  1348,  1351,  1353,
    1356,  1359,  1362,  1364,  1367,  1370,  1373,  1376,  1378,  1381,
    1383,  1385,  1387,  1389,  1392,  1393,  1394,  1395,  1396,  1397,
    1399,  1401,  1404,  1408,  1410,  1413,  1415,  1417,  1423,  1425,
    1427,  1430,  1433,  1436,  1439,  1440,  1446,  1447,  1452,  1453,
    1454,  1456,  1459,  1463,  1467,  1471,  1472,  1477,  1479,  1483,
    1484,  1485,  1493,  1499,  1502,  1503,  1504,  1505,  1506,  1519,
    1520,  1527,  1530,  1532,  1534,  1537,  1541,  1544,  1547,  1550,
    1554,  1561,  1570,  1581,  1594,  1598,  1603,  1605,  1609,  1615,
    1618,  1624,  1625,  1627,  1628,  1630,  1631,  1633,  1635,  1639,
    1644,  1652,  1654,  1658,  1659,  1663,  1666,  1667,  1668,  1675,
    1678,  1679,  1681,  1683,  1687,  1689,  1693,  1698,  1703,  1707,
    1712,  1716,  1721,  1726,  1730,  1735,  1739,  1741,  1742,  1746,
    1748,  1751,  1753,  1757,  1759,  1763,  1765,  1767,  1769,  1771,
    1773,  1775,  1777,  1779,  1783,  1787,  1792,  1793,  1794,  1805,
    1806,  1813,  1814,  1815,  1828,  1829,  1838,  1839,  1846,  1849,
    1850,  1859,  1864,  1865,  1875,  1881,  1882,  1889,  1893,  1894,
    1896,  1900,  1904,  1906,  1908,  1910,  1912,  1913,  1917,  1920,
    1924,  1928,  1930,  1931,  1933,  1938,  1940,  1944,  1947,  1949,
    1951,  1952,  1953,  1954,  1962,  1963,  1964,  1967,  1969,  1971,
    1974,  1975,  1979,  1981,  1983,  1984,  1985,  1991,  1996,  1998,
    2004,  2007,  2008,  2011,  2012,  2014,  2016,  2018,  2021,  2024,
    2029,  2032,  2035,  2037,  2041,  2044,  2047,  2049,  2050,  2053,
    2054,  2058,  2060,  2062,  2065,  2067,  2069,  2071,  2073,  2075,
    2077,  2079,  2081,  2083,  2085,  2087,  2089,  2091,  2093,  2095,
    2097,  2099,  2101,  2103,  2105,  2107,  2109,  2111,  2113,  2115,
    2117,  2124,  2128,  2134,  2137,  2139,  2141,  2143,  2146,  2148,
    2152,  2155,  2157,  2159,  2160,  2161,  2168,  2170,  2172,  2174,
    2177,  2180,  2182,  2187,  2192
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
      93,     0,    -1,    -1,    94,    -1,    -1,    95,    97,    -1,
      -1,    94,    96,    97,    -1,    99,    -1,    98,    -1,   293,
      -1,    27,    66,   108,    83,    84,    -1,   292,    97,    -1,
     131,   165,    84,    -1,   151,   131,   165,    84,    -1,   150,
     131,   164,    84,    -1,   157,    84,    -1,     1,    84,    -1,
       1,    85,    -1,    84,    -1,    -1,    -1,   150,   131,   193,
     100,   126,   101,   253,   254,   242,    -1,   150,   131,   193,
       1,    -1,    -1,    -1,   151,   131,   198,   102,   126,   103,
     253,   254,   242,    -1,   151,   131,   198,     1,    -1,    -1,
      -1,   131,   198,   104,   126,   105,   253,   254,   242,    -1,
     131,   198,     1,    -1,     3,    -1,     4,    -1,    80,    -1,
      75,    -1,    51,    -1,    57,    -1,    56,    -1,    62,    -1,
      61,    -1,    86,    -1,    87,    -1,   110,    -1,    -1,   110,
      -1,   116,    -1,   110,    88,   116,    -1,   122,    -1,    58,
     115,    -1,   292,   115,    -1,   107,   115,    -1,    48,   106,
      -1,   112,   111,    -1,   112,    66,   219,    83,    -1,   113,
     111,    -1,   113,    66,   219,    83,    -1,    33,   115,    -1,
      34,   115,    -1,    11,    -1,    29,    -1,    28,    -1,   111,
      -1,    66,   219,    83,   115,    -1,   115,    -1,   116,    56,
     116,    -1,   116,    57,   116,    -1,   116,    58,   116,    -1,
     116,    59,   116,    -1,   116,    60,   116,    -1,   116,    55,
     116,    -1,   116,    54,   116,    -1,   116,    53,   116,    -1,
     116,    52,   116,    -1,   116,    51,   116,    -1,   116,    49,
     116,    -1,   116,    50,   116,    -1,    -1,   116,    48,   117,
     116,    -1,    -1,   116,    47,   118,   116,    -1,    -1,    -1,
     116,    45,   119,   108,    46,   120,   116,    -1,    -1,   116,
      45,   121,    46,   116,    -1,   116,    43,   116,    -1,   116,
      44,   116,    -1,     3,    -1,     8,    -1,   124,    -1,    42,
      -1,    -1,    66,   219,    83,    89,   123,   179,    85,    -1,
      66,   108,    83,    -1,    66,     1,    83,    -1,   246,   244,
      83,    -1,   246,     1,    83,    -1,   122,    66,   109,    83,
      -1,    35,    66,   116,    88,   219,    83,    -1,    36,    66,
     116,    88,   116,    88,   116,    83,    -1,    37,    66,   219,
      88,   219,    83,    -1,   122,    67,   108,    90,    -1,   122,
      65,   106,    -1,   122,    68,   106,    -1,   122,    62,    -1,
     122,    61,    -1,   349,    -1,   355,    -1,   356,    -1,   357,
      -1,   125,    -1,     9,    -1,   124,     9,    -1,    91,     9,
      -1,   125,    91,     9,    -1,    -1,   128,    -1,   128,    10,
      -1,   253,   254,   129,    -1,   127,    -1,   234,    -1,   128,
     127,    -1,   127,   234,    -1,   152,   131,   164,    84,    -1,
     153,   131,   165,    84,    -1,   152,    84,    -1,   153,    84,
      -1,   253,   254,   133,    -1,    -1,   171,    -1,   150,   131,
     164,    84,    -1,   151,   131,   165,    84,    -1,   150,   131,
     187,    -1,   151,   131,   190,    -1,   157,    84,    -1,   292,
     133,    -1,     7,    -1,   134,     7,    -1,   135,     7,    -1,
     134,   172,    -1,   136,     7,    -1,   137,     7,    -1,   172,
      -1,   136,   172,    -1,   159,    -1,   138,     7,    -1,   139,
       7,    -1,   138,   161,    -1,   139,   161,    -1,   134,   159,
      -1,   135,   159,    -1,   160,    -1,   138,   172,    -1,   138,
     162,    -1,   139,   162,    -1,   134,   160,    -1,   135,   160,
      -1,   140,     7,    -1,   141,     7,    -1,   140,   161,    -1,
     141,   161,    -1,   136,   159,    -1,   137,   159,    -1,   140,
     172,    -1,   140,   162,    -1,   141,   162,    -1,   136,   160,
      -1,   137,   160,    -1,     5,    -1,   142,     7,    -1,   143,
       7,    -1,   134,     5,    -1,   135,     5,    -1,   142,     5,
      -1,   143,     5,    -1,   142,   172,    -1,   144,     7,    -1,
     145,     7,    -1,   136,     5,    -1,   137,     5,    -1,   144,
       5,    -1,   145,     5,    -1,   144,   172,    -1,   146,     7,
      -1,   147,     7,    -1,   146,   161,    -1,   147,   161,    -1,
     142,   159,    -1,   143,   159,    -1,   138,     5,    -1,   139,
       5,    -1,   146,     5,    -1,   147,     5,    -1,   146,   172,
      -1,   146,   162,    -1,   147,   162,    -1,   142,   160,    -1,
     143,   160,    -1,   148,     7,    -1,   149,     7,    -1,   148,
     161,    -1,   149,   161,    -1,   144,   159,    -1,   145,   159,
      -1,   140,     5,    -1,   141,     5,    -1,   148,     5,    -1,
     149,     5,    -1,   148,   172,    -1,   148,   162,    -1,   149,
     162,    -1,   144,   160,    -1,   145,   160,    -1,   138,    -1,
     139,    -1,   140,    -1,   141,    -1,   146,    -1,   147,    -1,
     148,    -1,   149,    -1,   134,    -1,   135,    -1,   136,    -1,
     137,    -1,   142,    -1,   143,    -1,   144,    -1,   145,    -1,
     138,    -1,   139,    -1,   146,    -1,   147,    -1,   134,    -1,
     135,    -1,   142,    -1,   143,    -1,   138,    -1,   139,    -1,
     140,    -1,   141,    -1,   134,    -1,   135,    -1,   136,    -1,
     137,    -1,   138,    -1,   139,    -1,   140,    -1,   141,    -1,
     134,    -1,   135,    -1,   136,    -1,   137,    -1,   134,    -1,
     135,    -1,   136,    -1,   137,    -1,   138,    -1,   139,    -1,
     140,    -1,   141,    -1,   142,    -1,   143,    -1,   144,    -1,
     145,    -1,   146,    -1,   147,    -1,   148,    -1,   149,    -1,
      -1,   155,    -1,   161,    -1,   163,    -1,   162,    -1,     6,
      -1,   207,    -1,   202,    -1,     4,    -1,    75,   309,    -1,
      80,   309,    -1,   310,    -1,   114,    66,   108,    83,    -1,
     114,    66,   219,    83,    -1,   167,    -1,   164,    88,   132,
     167,    -1,   169,    -1,   165,    88,   132,   169,    -1,    -1,
      27,    66,   124,    83,    -1,    -1,   193,   166,   171,    43,
     168,   177,    -1,   193,   166,   171,    -1,    -1,   198,   166,
     171,    43,   170,   177,    -1,   198,   166,   171,    -1,    -1,
     172,    -1,   173,    -1,   172,   173,    -1,    30,    66,    66,
     174,    83,    83,    -1,   175,    -1,   174,    88,   175,    -1,
      -1,   176,    -1,   176,    66,     3,    83,    -1,   176,    66,
       3,    88,   110,    83,    -1,   176,    66,   109,    83,    -1,
     106,    -1,     5,    -1,     6,    -1,     7,    -1,   116,    -1,
      -1,    89,   178,   179,    85,    -1,     1,    -1,    -1,   180,
     208,    -1,   181,    -1,   180,    88,   181,    -1,   185,    43,
     183,    -1,   186,   183,    -1,    -1,   106,    46,   182,   183,
      -1,   183,    -1,    -1,    89,   184,   179,    85,    -1,   116,
      -1,     1,    -1,   186,    -1,   185,   186,    -1,    65,   106,
      -1,    -1,    -1,   193,   188,   126,   189,   253,   254,   247,
      -1,    -1,    -1,   198,   191,   126,   192,   253,   254,   247,
      -1,   194,    -1,   198,    -1,    66,   171,   194,    83,    -1,
     194,    66,   287,    -1,   194,   227,    -1,    58,   158,   194,
      -1,     4,    -1,    80,    -1,   196,    -1,   197,    -1,   196,
      66,   287,    -1,   196,   227,    -1,     4,    -1,    80,    -1,
     197,    66,   287,    -1,   197,   227,    -1,    58,   158,   196,
      -1,    58,   158,   197,    -1,    66,   171,   197,    83,    -1,
     198,    66,   287,    -1,    66,   171,   198,    83,    -1,    58,
     158,   198,    -1,   198,   227,    -1,     3,    -1,    13,    -1,
      13,   172,    -1,    14,    -1,    14,   172,    -1,    12,    -1,
      12,   172,    -1,    -1,   199,   106,    89,   203,   210,    85,
     171,    -1,   199,    89,   210,    85,   171,    -1,    -1,   200,
     106,    89,   204,   210,    85,   171,    -1,   200,    89,   210,
      85,   171,    -1,    -1,   201,   106,    89,   205,   217,   209,
      85,   171,    -1,    -1,   201,    89,   206,   217,   209,    85,
     171,    -1,   199,   106,    -1,   200,   106,    -1,   201,   106,
      -1,    -1,    88,    -1,    -1,    88,    -1,   211,    -1,   211,
     212,    -1,    -1,   211,   212,    84,    -1,   211,    84,    -1,
      73,    66,    75,    83,    -1,   154,   131,   213,    -1,   154,
     131,   253,   254,    -1,   155,   131,   214,    -1,   155,    -1,
       1,    -1,   292,   212,    -1,   215,    -1,   213,    88,   132,
     215,    -1,   216,    -1,   214,    88,   132,   216,    -1,   253,
     254,   193,   171,    -1,   253,   254,   193,    46,   116,   171,
      -1,   253,   254,    46,   116,   171,    -1,   253,   254,   198,
     171,    -1,   253,   254,   198,    46,   116,   171,    -1,   253,
     254,    46,   116,   171,    -1,   218,    -1,   217,    88,   218,
      -1,     1,    -1,   106,    -1,   106,    43,   116,    -1,    -1,
     156,   220,   221,    -1,    -1,   223,    -1,    -1,   223,    -1,
     224,   172,    -1,   225,    -1,   224,    -1,   226,    -1,    58,
     158,   224,    -1,    58,   158,    -1,    58,   158,   225,    -1,
      66,   171,   223,    83,    -1,   226,    66,   277,    -1,   226,
     227,    -1,    66,   277,    -1,   227,    -1,    67,   108,    90,
      -1,    67,   156,   108,    90,    -1,    67,    90,    -1,    67,
     156,    90,    -1,    67,    58,    90,    -1,    67,   156,    58,
      90,    -1,    67,     5,   108,    90,    -1,    67,     5,   156,
     108,    90,    -1,    67,   156,     5,   108,    90,    -1,   229,
      -1,   230,    -1,   231,    -1,   232,    -1,   257,    -1,   229,
     257,    -1,   230,   257,    -1,   231,   257,    -1,   232,   257,
      -1,   130,    -1,   229,   130,    -1,   230,   130,    -1,   232,
     130,    -1,   258,    -1,   229,   258,    -1,   230,   258,    -1,
     231,   258,    -1,   232,   258,    -1,   234,    -1,   233,   234,
      -1,   229,    -1,   230,    -1,   231,    -1,   232,    -1,     1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,   241,
      -1,   240,   241,    -1,    32,   291,    84,    -1,   247,    -1,
       1,   247,    -1,    89,    -1,    85,    -1,   235,   239,   245,
      85,   236,    -1,   228,    -1,     1,    -1,    66,    89,    -1,
     243,   244,    -1,   249,   256,    -1,   249,     1,    -1,    -1,
      15,   250,    66,   108,    83,    -1,    -1,    18,   252,   256,
      17,    -1,    -1,    -1,   257,    -1,   258,   255,    -1,   237,
     255,   238,    -1,   253,   254,   269,    -1,   253,   254,   270,
      -1,    -1,   248,    16,   260,   256,    -1,   248,    -1,   248,
      16,     1,    -1,    -1,    -1,    17,   261,    66,   108,    83,
     262,   256,    -1,   251,    66,   108,    83,    84,    -1,   251,
       1,    -1,    -1,    -1,    -1,    -1,    19,   263,    66,   268,
     264,   272,    84,   265,   272,    83,   266,   256,    -1,    -1,
      20,    66,   108,    83,   267,   256,    -1,   272,    84,    -1,
     133,    -1,   247,    -1,   108,    84,    -1,   237,   259,   238,
      -1,    23,    84,    -1,    24,    84,    -1,    25,    84,    -1,
      25,   108,    84,    -1,    27,   271,    66,   108,    83,    84,
      -1,    27,   271,    66,   108,    46,   273,    83,    84,    -1,
      27,   271,    66,   108,    46,   273,    46,   273,    83,    84,
      -1,    27,   271,    66,   108,    46,   273,    46,   273,    46,
     276,    83,    84,    -1,    26,   106,    84,    -1,    26,    58,
     108,    84,    -1,    84,    -1,    21,   116,    46,    -1,    21,
     116,    10,   116,    46,    -1,    22,    46,    -1,   106,   253,
     254,    46,   171,    -1,    -1,     7,    -1,    -1,   108,    -1,
      -1,   274,    -1,   275,    -1,   274,    88,   275,    -1,     9,
      66,   108,    83,    -1,    67,   106,    90,     9,    66,   108,
      83,    -1,   124,    -1,   276,    88,   124,    -1,    -1,   171,
     278,   279,    -1,   282,    83,    -1,    -1,    -1,   283,    84,
     280,   171,   281,   279,    -1,     1,    83,    -1,    -1,    10,
      -1,   283,    -1,   283,    88,    10,    -1,   285,    -1,   283,
      88,   284,    -1,   150,   131,   195,   171,    -1,   150,   131,
     198,   171,    -1,   150,   131,   222,    -1,   151,   131,   198,
     171,    -1,   151,   131,   222,    -1,   152,   286,   195,   171,
      -1,   152,   286,   198,   171,    -1,   152,   286,   222,    -1,
     153,   286,   198,   171,    -1,   153,   286,   222,    -1,   131,
      -1,    -1,   171,   288,   289,    -1,   279,    -1,   290,    83,
      -1,     3,    -1,   290,    88,     3,    -1,   106,    -1,   291,
      88,   106,    -1,    31,    -1,   297,    -1,   295,    -1,   296,
      -1,   307,    -1,   318,    -1,    71,    -1,   106,    -1,   294,
      88,   106,    -1,    81,   294,    84,    -1,    82,   106,   106,
      84,    -1,    -1,    -1,    69,   106,   309,    89,   298,   311,
      85,   299,   322,    71,    -1,    -1,    69,   106,   309,   300,
     322,    71,    -1,    -1,    -1,    69,   106,    46,   106,   309,
      89,   301,   311,    85,   302,   322,    71,    -1,    -1,    69,
     106,    46,   106,   309,   303,   322,    71,    -1,    -1,    70,
     106,    89,   304,   311,    85,    -1,    70,   106,    -1,    -1,
      70,   106,    46,   106,    89,   305,   311,    85,    -1,    70,
     106,    46,   106,    -1,    -1,    69,   106,    66,   106,    83,
     309,   306,   322,    71,    -1,    70,   106,    66,   106,    83,
      -1,    -1,    79,   106,   309,   308,   322,    71,    -1,    79,
     294,    84,    -1,    -1,   310,    -1,    53,   294,    53,    -1,
     311,   312,   313,    -1,   313,    -1,    77,    -1,    78,    -1,
      76,    -1,    -1,   313,   314,    84,    -1,   313,    84,    -1,
     154,   131,   315,    -1,   155,   131,   315,    -1,     1,    -1,
      -1,   316,    -1,   315,    88,   132,   316,    -1,   193,    -1,
     193,    46,   116,    -1,    46,   116,    -1,    56,    -1,    57,
      -1,    -1,    -1,    -1,   317,   319,   330,   320,   331,   321,
     242,    -1,    -1,    -1,   323,   324,    -1,   327,    -1,    98,
      -1,   324,   327,    -1,    -1,   324,   325,    98,    -1,    84,
      -1,     1,    -1,    -1,    -1,   317,   328,   330,   329,   326,
      -1,    66,   219,    83,   339,    -1,   339,    -1,    66,   219,
      83,   340,   337,    -1,   340,   337,    -1,    -1,    84,   332,
      -1,    -1,   333,    -1,   334,    -1,   234,    -1,   333,   334,
      -1,   334,   234,    -1,   150,   131,   335,    84,    -1,   150,
      84,    -1,   151,    84,    -1,   336,    -1,   335,    88,   336,
      -1,   195,   171,    -1,   198,   171,    -1,   222,    -1,    -1,
      88,    10,    -1,    -1,    88,   338,   282,    -1,   341,    -1,
     343,    -1,   340,   343,    -1,     3,    -1,     4,    -1,    75,
      -1,    80,    -1,   342,    -1,    12,    -1,    13,    -1,    14,
      -1,    15,    -1,    16,    -1,    17,    -1,    18,    -1,    19,
      -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,    24,
      -1,    25,    -1,    26,    -1,    27,    -1,    11,    -1,    28,
      -1,    29,    -1,     6,    -1,     7,    -1,   341,    46,    66,
     219,    83,   106,    -1,   341,    46,   106,    -1,    46,    66,
     219,    83,   106,    -1,    46,   106,    -1,   341,    -1,   345,
      -1,   347,    -1,   345,   347,    -1,   110,    -1,   341,    46,
     346,    -1,    46,   346,    -1,   108,    -1,    75,    -1,    -1,
      -1,    67,   350,   348,   351,   344,    90,    -1,   341,    -1,
     353,    -1,   354,    -1,   353,   354,    -1,   341,    46,    -1,
      46,    -1,    72,    66,   352,    83,    -1,    79,    66,   106,
      83,    -1,    74,    66,   219,    83,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   308,   308,   312,   327,   327,   328,   328,   332,   333,
     334,   335,   343,   348,   355,   357,   359,   361,   362,   363,
     370,   375,   369,   381,   384,   389,   383,   395,   398,   403,
     397,   409,   414,   415,   416,   417,   420,   422,   424,   427,
     429,   431,   433,   437,   443,   444,   448,   450,   455,   456,
     459,   462,   466,   483,   489,   492,   495,   498,   500,   505,
     509,   513,   517,   518,   523,   524,   526,   528,   530,   532,
     534,   536,   538,   540,   542,   544,   546,   549,   548,   555,
     554,   561,   564,   560,   570,   569,   579,   586,   597,   603,
     604,   606,   609,   608,   621,   626,   628,   644,   651,   653,
     656,   666,   676,   678,   685,   694,   696,   698,   700,   702,
     704,   706,   712,   713,   722,   724,   728,   730,   731,   742,
     747,   748,   749,   750,   758,   760,   762,   765,   774,   783,
     793,   798,   800,   802,   804,   806,   808,   865,   868,   871,
     877,   883,   886,   892,   895,   901,   904,   907,   910,   913,
     916,   919,   925,   928,   931,   934,   937,   940,   946,   949,
     952,   955,   958,   961,   967,   970,   973,   976,   979,   985,
     988,   991,   994,  1000,  1006,  1012,  1021,  1027,  1030,  1033,
    1039,  1045,  1051,  1060,  1066,  1069,  1072,  1075,  1078,  1081,
    1084,  1090,  1096,  1102,  1111,  1114,  1117,  1120,  1123,  1129,
    1132,  1135,  1138,  1141,  1144,  1147,  1153,  1159,  1165,  1174,
    1177,  1180,  1183,  1186,  1193,  1194,  1195,  1196,  1197,  1198,
    1199,  1200,  1204,  1205,  1206,  1207,  1208,  1209,  1210,  1211,
    1215,  1216,  1217,  1218,  1222,  1223,  1224,  1225,  1229,  1230,
    1231,  1232,  1236,  1237,  1238,  1239,  1243,  1244,  1245,  1246,
    1247,  1248,  1249,  1250,  1254,  1255,  1256,  1257,  1258,  1259,
    1260,  1261,  1262,  1263,  1264,  1265,  1266,  1267,  1268,  1269,
    1275,  1276,  1302,  1303,  1307,  1311,  1313,  1317,  1321,  1325,
    1327,  1332,  1334,  1336,  1343,  1344,  1348,  1349,  1354,  1355,
    1363,  1362,  1370,  1379,  1378,  1386,  1395,  1396,  1401,  1403,
    1408,  1413,  1415,  1421,  1422,  1424,  1426,  1428,  1436,  1437,
    1438,  1439,  1445,  1447,  1446,  1450,  1457,  1459,  1463,  1464,
    1470,  1473,  1477,  1476,  1482,  1487,  1486,  1490,  1492,  1496,
    1497,  1501,  1510,  1522,  1509,  1540,  1552,  1539,  1572,  1573,
    1579,  1581,  1586,  1588,  1590,  1591,  1599,  1600,  1604,  1609,
    1611,  1612,  1616,  1621,  1623,  1625,  1627,  1635,  1640,  1642,
    1644,  1646,  1650,  1652,  1657,  1659,  1664,  1666,  1678,  1677,
    1683,  1688,  1687,  1691,  1696,  1695,  1701,  1700,  1708,  1710,
    1712,  1720,  1722,  1725,  1727,  1733,  1735,  1741,  1742,  1744,
    1748,  1764,  1767,  1777,  1780,  1785,  1787,  1793,  1794,  1799,
    1800,  1805,  1808,  1812,  1818,  1821,  1825,  1836,  1837,  1842,
    1848,  1850,  1856,  1855,  1864,  1865,  1870,  1873,  1877,  1884,
    1885,  1889,  1890,  1895,  1897,  1902,  1904,  1906,  1908,  1910,
    1917,  1919,  1921,  1923,  1925,  1927,  1929,  1933,  1937,  1950,
    1951,  1952,  1956,  1960,  1961,  1962,  1963,  1964,  1968,  1969,
    1972,  1973,  1977,  1978,  1979,  1980,  1981,  1985,  1986,  1990,
    1991,  1992,  1993,  1996,  2000,  2009,  2014,  2032,  2046,  2048,
    2054,  2055,  2059,  2073,  2075,  2078,  2082,  2084,  2092,  2093,
    2097,  2114,  2122,  2127,  2140,  2139,  2154,  2153,  2173,  2179,
    2185,  2186,  2191,  2197,  2211,  2221,  2220,  2228,  2240,  2251,
    2254,  2250,  2260,  2263,  2266,  2270,  2273,  2276,  2265,  2280,
    2279,  2287,  2289,  2295,  2297,  2300,  2304,  2307,  2310,  2313,
    2316,  2320,  2324,  2329,  2333,  2345,  2351,  2359,  2362,  2365,
    2368,  2385,  2387,  2393,  2394,  2400,  2401,  2405,  2406,  2411,
    2413,  2418,  2420,  2431,  2430,  2441,  2443,  2451,  2442,  2455,
    2462,  2463,  2473,  2475,  2480,  2482,  2489,  2494,  2499,  2502,
    2508,  2516,  2521,  2526,  2529,  2535,  2541,  2551,  2550,  2561,
    2562,  2580,  2582,  2588,  2590,  2595,  2605,  2606,  2607,  2608,
    2609,  2610,  2625,  2627,  2632,  2639,  2647,  2653,  2646,  2664,
    2663,  2677,  2683,  2676,  2694,  2693,  2707,  2706,  2718,  2727,
    2726,  2738,  2747,  2746,  2759,  2770,  2769,  2784,  2792,  2795,
    2799,  2809,  2810,  2814,  2815,  2816,  2821,  2824,  2825,  2843,
    2846,  2849,  2855,  2856,  2857,  2861,  2868,  2874,  2884,  2886,
    2892,  2898,  2907,  2891,  2920,  2922,  2922,  2926,  2927,  2928,
    2929,  2929,  2933,  2934,  2939,  2944,  2938,  2956,  2961,  2966,
    2971,  2980,  2982,  2988,  2990,  2994,  2995,  2996,  2997,  3001,
    3003,  3005,  3010,  3012,  3020,  3024,  3028,  3034,  3037,  3043,
    3042,  3055,  3059,  3061,  3068,  3069,  3070,  3071,  3072,  3076,
    3076,  3076,  3076,  3076,  3076,  3076,  3076,  3077,  3077,  3077,
    3077,  3077,  3077,  3078,  3078,  3078,  3078,  3078,  3079,  3079,
    3083,  3088,  3093,  3098,  3105,  3106,  3110,  3111,  3119,  3131,
    3135,  3142,  3143,  3151,  3153,  3150,  3161,  3162,  3166,  3167,
    3174,  3178,  3185,  3192,  3201
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPENAME", "SCSPEC", 
  "TYPESPEC", "TYPE_QUAL", "CONSTANT", "STRING", "ELLIPSIS", "SIZEOF", 
  "ENUM", "STRUCT", "UNION", "IF", "ELSE", "WHILE", "DO", "FOR", "SWITCH", 
  "CASE", "DEFAULT", "BREAK", "CONTINUE", "RETURN", "GOTO", "ASM_KEYWORD", 
  "TYPEOF", "ALIGNOF", "ATTRIBUTE", "EXTENSION", "LABEL", "REALPART", 
  "IMAGPART", "VA_ARG", "CHOOSE_EXPR", "TYPES_COMPATIBLE_P", "PTR_VALUE", 
  "PTR_BASE", "PTR_EXTENT", "STRING_FUNC_NAME", "VAR_FUNC_NAME", "'='", 
  "ASSIGN", "'?'", "':'", "OROR", "ANDAND", "'|'", "'^'", "'&'", 
  "EQCOMPARE", "ARITHCOMPARE", "RSHIFT", "LSHIFT", "'+'", "'-'", "'*'", 
  "'/'", "'%'", "MINUSMINUS", "PLUSPLUS", "UNARY", "HYPERUNARY", "'.'", 
  "'('", "'['", "POINTSAT", "INTERFACE", "IMPLEMENTATION", "END", 
  "SELECTOR", "DEFS", "ENCODE", "CLASSNAME", "PUBLIC", "PRIVATE", 
  "PROTECTED", "PROTOCOL", "OBJECTNAME", "CLASS", "ALIAS", "')'", "';'", 
  "'}'", "'~'", "'!'", "','", "'{'", "']'", "'@'", "$accept", "program", 
  "extdefs", "@1", "@2", "extdef", "datadef", "fndef", "@3", "@4", "@5", 
  "@6", "@7", "@8", "identifier", "unop", "expr", "exprlist", 
  "nonnull_exprlist", "unary_expr", "sizeof", "alignof", "typeof", 
  "cast_expr", "expr_no_commas", "@9", "@10", "@11", "@12", "@13", 
  "primary", "@14", "string", "objc_string", "old_style_parm_decls", 
  "lineno_datadecl", "datadecls", "datadecl", "lineno_decl", "setspecs", 
  "maybe_resetattrs", "decl", "declspecs_nosc_nots_nosa_noea", 
  "declspecs_nosc_nots_nosa_ea", "declspecs_nosc_nots_sa_noea", 
  "declspecs_nosc_nots_sa_ea", "declspecs_nosc_ts_nosa_noea", 
  "declspecs_nosc_ts_nosa_ea", "declspecs_nosc_ts_sa_noea", 
  "declspecs_nosc_ts_sa_ea", "declspecs_sc_nots_nosa_noea", 
  "declspecs_sc_nots_nosa_ea", "declspecs_sc_nots_sa_noea", 
  "declspecs_sc_nots_sa_ea", "declspecs_sc_ts_nosa_noea", 
  "declspecs_sc_ts_nosa_ea", "declspecs_sc_ts_sa_noea", 
  "declspecs_sc_ts_sa_ea", "declspecs_ts", "declspecs_nots", 
  "declspecs_ts_nosa", "declspecs_nots_nosa", "declspecs_nosc_ts", 
  "declspecs_nosc_nots", "declspecs_nosc", "declspecs", 
  "maybe_type_quals_attrs", "typespec_nonattr", "typespec_attr", 
  "typespec_reserved_nonattr", "typespec_reserved_attr", 
  "typespec_nonreserved_nonattr", "initdecls", "notype_initdecls", 
  "maybeasm", "initdcl", "@15", "notype_initdcl", "@16", 
  "maybe_attribute", "attributes", "attribute", "attribute_list", 
  "attrib", "any_word", "init", "@17", "initlist_maybe_comma", 
  "initlist1", "initelt", "@18", "initval", "@19", "designator_list", 
  "designator", "nested_function", "@20", "@21", "notype_nested_function", 
  "@22", "@23", "declarator", "after_type_declarator", "parm_declarator", 
  "parm_declarator_starttypename", "parm_declarator_nostarttypename", 
  "notype_declarator", "struct_head", "union_head", "enum_head", 
  "structsp_attr", "@24", "@25", "@26", "@27", "structsp_nonattr", 
  "maybecomma", "maybecomma_warn", "component_decl_list", 
  "component_decl_list2", "component_decl", "components", 
  "components_notype", "component_declarator", 
  "component_notype_declarator", "enumlist", "enumerator", "typename", 
  "@28", "absdcl", "absdcl_maybe_attribute", "absdcl1", "absdcl1_noea", 
  "absdcl1_ea", "direct_absdcl1", "array_declarator", "stmts_and_decls", 
  "lineno_stmt_decl_or_labels_ending_stmt", 
  "lineno_stmt_decl_or_labels_ending_decl", 
  "lineno_stmt_decl_or_labels_ending_label", 
  "lineno_stmt_decl_or_labels_ending_error", "lineno_stmt_decl_or_labels", 
  "errstmt", "pushlevel", "poplevel", "c99_block_start", "c99_block_end", 
  "maybe_label_decls", "label_decls", "label_decl", "compstmt_or_error", 
  "compstmt_start", "compstmt_nostart", "compstmt_contents_nonempty", 
  "compstmt_primary_start", "compstmt", "simple_if", "if_prefix", "@29", 
  "do_stmt_start", "@30", "save_filename", "save_lineno", 
  "lineno_labeled_stmt", "c99_block_lineno_labeled_stmt", "lineno_stmt", 
  "lineno_label", "select_or_iter_stmt", "@31", "@32", "@33", "@34", 
  "@35", "@36", "@37", "@38", "for_init_stmt", "stmt", "label", 
  "maybe_type_qual", "xexpr", "asm_operands", "nonnull_asm_operands", 
  "asm_operand", "asm_clobbers", "parmlist", "@39", "parmlist_1", "@40", 
  "@41", "parmlist_2", "parms", "parm", "firstparm", "setspecs_fp", 
  "parmlist_or_identifiers", "@42", "parmlist_or_identifiers_1", 
  "identifiers", "identifiers_or_typenames", "extension", "objcdef", 
  "identifier_list", "classdecl", "aliasdecl", "classdef", "@43", "@44", 
  "@45", "@46", "@47", "@48", "@49", "@50", "@51", "protocoldef", "@52", 
  "protocolrefs", "non_empty_protocolrefs", "ivar_decl_list", 
  "visibility_spec", "ivar_decls", "ivar_decl", "ivars", 
  "ivar_declarator", "methodtype", "methoddef", "@53", "@54", "@55", 
  "methodprotolist", "@56", "methodprotolist2", "@57", "semi_or_error", 
  "methodproto", "@58", "@59", "methoddecl", "optarglist", "myxdecls", 
  "mydecls", "mydecl", "myparms", "myparm", "optparmlist", "@60", 
  "unaryselector", "keywordselector", "selector", "reservedwords", 
  "keyworddecl", "messageargs", "keywordarglist", "keywordexpr", 
  "keywordarg", "receiver", "objcmessageexpr", "@61", "@62", 
  "selectorarg", "keywordnamelist", "keywordname", "objcselectorexpr", 
  "objcprotocolexpr", "objcencodeexpr", 0
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
     295,   296,   297,    61,   298,    63,    58,   299,   300,   124,
      94,    38,   301,   302,   303,   304,    43,    45,    42,    47,
      37,   305,   306,   307,   308,    46,    40,    91,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,    41,    59,   125,   126,    33,    44,   123,
      93,    64
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,    92,    93,    93,    95,    94,    96,    94,    97,    97,
      97,    97,    97,    98,    98,    98,    98,    98,    98,    98,
     100,   101,    99,    99,   102,   103,    99,    99,   104,   105,
      99,    99,   106,   106,   106,   106,   107,   107,   107,   107,
     107,   107,   107,   108,   109,   109,   110,   110,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   112,
     113,   114,   115,   115,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   117,   116,   118,
     116,   119,   120,   116,   121,   116,   116,   116,   122,   122,
     122,   122,   123,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   124,   124,   125,   125,   126,   126,   126,   127,
     128,   128,   128,   128,   129,   129,   129,   129,   130,   131,
     132,   133,   133,   133,   133,   133,   133,   134,   134,   134,
     135,   136,   136,   137,   137,   138,   138,   138,   138,   138,
     138,   138,   139,   139,   139,   139,   139,   139,   140,   140,
     140,   140,   140,   140,   141,   141,   141,   141,   141,   142,
     142,   142,   142,   142,   142,   142,   143,   144,   144,   144,
     144,   144,   144,   145,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   147,   147,   147,   147,   147,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   149,
     149,   149,   149,   149,   150,   150,   150,   150,   150,   150,
     150,   150,   151,   151,   151,   151,   151,   151,   151,   151,
     152,   152,   152,   152,   153,   153,   153,   153,   154,   154,
     154,   154,   155,   155,   155,   155,   156,   156,   156,   156,
     156,   156,   156,   156,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     158,   158,   159,   159,   160,   161,   161,   162,   163,   163,
     163,   163,   163,   163,   164,   164,   165,   165,   166,   166,
     168,   167,   167,   170,   169,   169,   171,   171,   172,   172,
     173,   174,   174,   175,   175,   175,   175,   175,   176,   176,
     176,   176,   177,   178,   177,   177,   179,   179,   180,   180,
     181,   181,   182,   181,   181,   184,   183,   183,   183,   185,
     185,   186,   188,   189,   187,   191,   192,   190,   193,   193,
     194,   194,   194,   194,   194,   194,   195,   195,   196,   196,
     196,   196,   197,   197,   197,   197,   197,   198,   198,   198,
     198,   198,   199,   199,   200,   200,   201,   201,   203,   202,
     202,   204,   202,   202,   205,   202,   206,   202,   207,   207,
     207,   208,   208,   209,   209,   210,   210,   211,   211,   211,
     211,   212,   212,   212,   212,   212,   212,   213,   213,   214,
     214,   215,   215,   215,   216,   216,   216,   217,   217,   217,
     218,   218,   220,   219,   221,   221,   222,   222,   222,   223,
     223,   224,   224,   225,   225,   226,   226,   226,   226,   226,
     227,   227,   227,   227,   227,   227,   227,   227,   227,   228,
     228,   228,   228,   229,   229,   229,   229,   229,   230,   230,
     230,   230,   231,   231,   231,   231,   231,   232,   232,   233,
     233,   233,   233,   234,   235,   236,   237,   238,   239,   239,
     240,   240,   241,   242,   242,   243,   244,   244,   245,   245,
     246,   247,   248,   248,   250,   249,   252,   251,   253,   254,
     255,   255,   256,   257,   258,   260,   259,   259,   259,   261,
     262,   259,   259,   259,   263,   264,   265,   266,   259,   267,
     259,   268,   268,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   270,   270,   270,
     270,   271,   271,   272,   272,   273,   273,   274,   274,   275,
     275,   276,   276,   278,   277,   279,   280,   281,   279,   279,
     282,   282,   282,   282,   283,   283,   284,   284,   284,   284,
     284,   285,   285,   285,   285,   285,   286,   288,   287,   289,
     289,   290,   290,   291,   291,   292,   293,   293,   293,   293,
     293,   293,   294,   294,   295,   296,   298,   299,   297,   300,
     297,   301,   302,   297,   303,   297,   304,   297,   297,   305,
     297,   297,   306,   297,   297,   308,   307,   307,   309,   309,
     310,   311,   311,   312,   312,   312,   313,   313,   313,   314,
     314,   314,   315,   315,   315,   316,   316,   316,   317,   317,
     319,   320,   321,   318,   322,   323,   322,   324,   324,   324,
     325,   324,   326,   326,   328,   329,   327,   330,   330,   330,
     330,   331,   331,   332,   332,   333,   333,   333,   333,   334,
     334,   334,   335,   335,   336,   336,   336,   337,   337,   338,
     337,   339,   340,   340,   341,   341,   341,   341,   341,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     343,   343,   343,   343,   344,   344,   345,   345,   346,   347,
     347,   348,   348,   350,   351,   349,   352,   352,   353,   353,
     354,   354,   355,   356,   357
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     1,     0,     2,     0,     3,     1,     1,
       1,     5,     2,     3,     4,     4,     2,     2,     2,     1,
       0,     0,     9,     4,     0,     0,     9,     4,     0,     0,
       8,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     3,     1,     2,
       2,     2,     2,     2,     4,     2,     4,     2,     2,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     0,     4,     0,
       4,     0,     0,     7,     0,     5,     3,     3,     1,     1,
       1,     1,     0,     7,     3,     3,     3,     3,     4,     6,
       8,     6,     4,     3,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     0,     1,     2,     3,
       1,     1,     2,     2,     4,     4,     2,     2,     3,     0,
       1,     4,     4,     3,     3,     2,     2,     1,     2,     2,
       2,     2,     2,     1,     2,     1,     2,     2,     2,     2,
       2,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     4,     4,     1,     4,     1,     4,     0,     4,
       0,     6,     3,     0,     6,     3,     0,     1,     1,     2,
       6,     1,     3,     0,     1,     4,     6,     4,     1,     1,
       1,     1,     1,     0,     4,     1,     0,     2,     1,     3,
       3,     2,     0,     4,     1,     0,     4,     1,     1,     1,
       2,     2,     0,     0,     7,     0,     0,     7,     1,     1,
       4,     3,     2,     3,     1,     1,     1,     1,     3,     2,
       1,     1,     3,     2,     3,     3,     4,     3,     4,     3,
       2,     1,     1,     2,     1,     2,     1,     2,     0,     7,
       5,     0,     7,     5,     0,     8,     0,     7,     2,     2,
       2,     0,     1,     0,     1,     1,     2,     0,     3,     2,
       4,     3,     4,     3,     1,     1,     2,     1,     4,     1,
       4,     4,     6,     5,     4,     6,     5,     1,     3,     1,
       1,     3,     0,     3,     0,     1,     0,     1,     2,     1,
       1,     1,     3,     2,     3,     4,     3,     2,     2,     1,
       3,     4,     2,     3,     3,     4,     4,     5,     5,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     1,     2,
       2,     2,     1,     2,     2,     2,     2,     1,     2,     1,
       1,     1,     1,     2,     0,     0,     0,     0,     0,     1,
       1,     2,     3,     1,     2,     1,     1,     5,     1,     1,
       2,     2,     2,     2,     0,     5,     0,     4,     0,     0,
       1,     2,     3,     3,     3,     0,     4,     1,     3,     0,
       0,     7,     5,     2,     0,     0,     0,     0,    12,     0,
       6,     2,     1,     1,     2,     3,     2,     2,     2,     3,
       6,     8,    10,    12,     3,     4,     1,     3,     5,     2,
       5,     0,     1,     0,     1,     0,     1,     1,     3,     4,
       7,     1,     3,     0,     3,     2,     0,     0,     6,     2,
       0,     1,     1,     3,     1,     3,     4,     4,     3,     4,
       3,     4,     4,     3,     4,     3,     1,     0,     3,     1,
       2,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     4,     0,     0,    10,     0,
       6,     0,     0,    12,     0,     8,     0,     6,     2,     0,
       8,     4,     0,     9,     5,     0,     6,     3,     0,     1,
       3,     3,     1,     1,     1,     1,     0,     3,     2,     3,
       3,     1,     0,     1,     4,     1,     3,     2,     1,     1,
       0,     0,     0,     7,     0,     0,     2,     1,     1,     2,
       0,     3,     1,     1,     0,     0,     5,     4,     1,     5,
       2,     0,     2,     0,     1,     1,     1,     2,     2,     4,
       2,     2,     1,     3,     2,     2,     1,     0,     2,     0,
       3,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       6,     3,     5,     2,     1,     1,     1,     2,     1,     3,
       2,     1,     1,     0,     0,     6,     1,     1,     1,     2,
       2,     1,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       4,     0,     6,     0,     1,     0,     0,   278,   169,   275,
     137,   366,   362,   364,     0,    61,     0,   575,     0,   628,
     629,     0,     0,   581,   608,     0,   608,     0,     0,    19,
       5,     9,     8,     0,     0,   222,   223,   224,   225,   214,
     215,   216,   217,   226,   227,   228,   229,   218,   219,   220,
     221,   129,   129,     0,   145,   152,   272,   274,   273,   143,
     298,     0,     0,     0,   277,   276,     0,    10,   577,   578,
     576,   579,   281,   630,   580,     7,    17,    18,   367,   363,
     365,     0,     0,    32,    33,    35,    34,   582,     0,   608,
     598,   279,   609,   608,     0,   280,     0,     0,     0,   361,
     270,   296,     0,   286,     0,   172,   138,   150,   156,   140,
     173,   139,   151,   157,   179,   141,   162,   167,   144,   180,
     142,   163,   168,   190,   146,   148,   154,   153,   191,   147,
     149,   155,   205,   158,   160,   165,   164,   206,   159,   161,
     166,   174,   170,   188,   197,   176,   175,   171,   189,   198,
     181,   177,   203,   212,   183,   182,   178,   204,   213,   192,
     184,   186,   195,   194,   193,   185,   187,   196,   207,   199,
     201,   210,   209,   208,   200,   202,   211,     0,     0,    16,
     299,   387,   378,   387,   379,   376,   380,    12,     0,    88,
      89,   112,    59,    60,     0,     0,     0,     0,     0,    91,
       0,    36,    38,    37,     0,    40,    39,     0,   713,     0,
       0,     0,    41,    42,     0,     0,     0,    43,    62,     0,
       0,    64,    46,    48,    90,   111,     0,     0,   107,   108,
     109,   110,   303,   610,     0,     0,     0,   589,     0,     0,
     596,   605,   607,   584,     0,     0,   250,   251,   252,   253,
     246,   247,   248,   249,   412,     0,   242,   243,   244,   245,
     271,     0,     0,   297,    13,   296,    31,     0,   296,     0,
       0,   296,   360,   344,   270,   296,   345,     0,   284,     0,
     338,   339,     0,     0,     0,     0,     0,   368,     0,   371,
       0,   374,   674,   675,   698,   699,   695,   679,   680,   681,
     682,   683,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   696,   697,     0,     0,   676,   677,   631,
     648,   667,   671,   678,   672,    57,    58,     0,     0,     0,
      52,    49,     0,   480,     0,     0,     0,     0,     0,     0,
     114,    51,     0,     0,     0,    53,     0,    55,     0,     0,
      81,    79,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   106,   105,     0,    44,     0,
       0,   113,     0,     0,   476,   468,     0,    50,   309,   310,
     311,   308,     0,   301,   304,   583,   608,     0,   586,   635,
     601,     0,   616,   635,   585,   282,   414,   283,   359,     0,
       0,   130,     0,   567,   357,     0,     0,   432,     0,     0,
       0,    29,     0,   488,   121,   489,   295,     0,     0,    15,
     296,    23,     0,   296,   296,   342,    14,    27,     0,     0,
     296,   395,   389,   242,   243,   244,   245,   238,   239,   240,
     241,   129,   129,   386,     0,   387,   296,   387,   409,   410,
     383,   407,     0,     0,   703,     0,   651,   669,   650,     0,
     673,     0,     0,     0,     0,    95,    94,     0,   712,   711,
     714,   721,   716,     0,   717,   718,     0,     0,    11,    47,
       0,     0,    86,    87,     0,     0,     0,     0,    75,    76,
      74,    73,    72,    71,    70,    65,    66,    67,    68,    69,
     103,     0,    45,     0,   104,   115,    97,     0,     0,   469,
     470,    96,     0,   303,    44,   594,   608,   616,     0,     0,
     599,   604,     0,     0,     0,   270,   296,   413,   415,   420,
     419,   421,   429,   358,   287,   288,     0,     0,     0,     0,
     434,   430,     0,     0,   433,     0,   463,   488,   123,   118,
     122,     0,   293,   343,     0,     0,    21,   292,   341,    25,
       0,   370,   488,   488,   388,   396,     0,   373,     0,     0,
     384,     0,   383,     0,     0,     0,   632,   668,   550,     0,
     701,     0,     0,     0,    92,    63,     0,   720,   722,     0,
     719,   724,   723,    54,    56,     0,     0,    80,    78,    98,
     102,   573,     0,   479,   448,   478,   488,   488,   488,   488,
       0,   457,     0,   489,   443,   452,   471,   300,   302,    88,
       0,   591,   635,   602,     0,   590,   638,     0,   129,   129,
     644,   640,   637,   616,   615,   613,   614,   597,   616,   621,
     618,   129,   129,     0,   606,   423,   543,   428,   296,   427,
     289,     0,   571,   551,   234,   235,   230,   231,   236,   237,
     232,   233,   129,   129,   569,     0,   552,   554,   568,     0,
     436,     0,     0,   435,   431,   489,   119,   129,   129,     0,
     340,   285,   288,   488,   290,   488,   390,   391,   397,   489,
     393,   399,   489,   296,   296,   411,   408,   296,     0,     0,
     647,   667,   222,   223,   224,   225,   214,   215,   216,   217,
     226,   227,   228,   229,   218,   219,   220,   221,   129,     0,
     656,   652,   654,     0,     0,   670,   552,     0,     0,     0,
       0,     0,     0,   704,     0,   705,   706,    82,    85,   472,
       0,   449,   444,   453,   450,   445,   454,   489,   446,   455,
     451,   447,   456,   458,   465,   466,   305,     0,   307,   616,
       0,   635,   587,     0,     0,     0,     0,   639,     0,     0,
     622,   622,   617,   422,   424,     0,     0,   543,   426,   549,
     566,   416,   416,   545,   546,     0,   570,     0,   437,   438,
       0,   126,     0,   127,     0,   315,   313,   312,   294,   489,
       0,   489,   296,   392,   296,     0,   369,   372,   377,   296,
     702,   649,   660,   416,   661,   657,   658,     0,   475,   633,
     464,   473,     0,    99,     0,   101,   328,    88,     0,   325,
       0,   327,     0,   381,   318,   324,     0,     0,   708,   710,
       0,   715,     0,   707,     0,   574,   466,   477,   278,     0,
       0,     0,     0,     0,     0,   531,   608,   608,   526,   488,
       0,   128,   129,   129,     0,     0,   513,   493,   494,     0,
       0,     0,   595,     0,   635,   645,   641,   600,     0,   625,
     619,   623,   620,   425,   544,   350,   270,   296,   351,   296,
     346,   347,   296,   563,   417,   420,   270,   296,   296,   565,
     296,   553,   129,   129,   555,   572,    30,     0,     0,     0,
       0,   291,     0,   488,     0,   296,   488,     0,   296,   375,
     296,   296,   666,     0,   662,   474,   481,   700,     0,   331,
       0,   322,    93,     0,   317,     0,   330,   321,   709,    83,
       0,   529,   516,   517,   518,     0,     0,     0,   532,     0,
     489,   514,     0,     0,   135,   484,   499,   486,   504,     0,
     497,     0,     0,   467,   136,   306,   592,   603,     0,     0,
     627,     0,   296,   423,   543,   561,   296,   349,   296,   353,
     562,   418,   423,   543,   564,   547,   416,   416,   124,   125,
       0,    22,    26,   398,   489,   296,     0,   401,   400,   296,
       0,   404,   664,   665,   659,   416,   100,     0,     0,   319,
     320,     0,   527,   519,     0,   524,     0,     0,     0,   133,
     332,     0,   134,   335,     0,     0,   466,     0,     0,     0,
     483,   488,   482,   503,     0,   515,   635,   588,   643,   642,
     646,   626,     0,   354,   355,     0,   348,   352,     0,   296,
     296,   558,   296,   560,   314,     0,   403,   296,   406,   296,
     663,   326,   323,     0,   525,     0,   296,   131,     0,   132,
       0,     0,     0,     0,   533,     0,   498,   466,   467,   490,
     488,     0,     0,   624,   356,   548,   556,   557,   559,   402,
     405,   528,   535,     0,   530,   333,   336,     0,     0,   487,
     534,   512,   505,     0,   509,   496,   492,   491,     0,   593,
       0,     0,     0,   536,   537,   520,   488,   488,   485,   500,
     533,   511,   466,   502,     0,     0,   535,     0,     0,   489,
     489,   466,     0,   510,     0,     0,     0,   521,   538,     0,
       0,   501,   506,   539,     0,     0,     0,   334,   337,   533,
       0,   541,     0,   522,     0,     0,     0,     0,   507,   540,
     523,   542,   466,   508
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,     2,     3,     5,    30,    31,    32,   422,   683,
     428,   685,   270,   547,   830,   215,   334,   501,   217,   218,
     219,   220,    33,   221,   222,   487,   486,   484,   844,   485,
     223,   731,   224,   225,   411,   412,   413,   676,   604,    34,
     400,   861,   246,   247,   248,   249,   250,   251,   252,   253,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
     662,   663,   441,   260,   254,    53,   261,    54,    55,    56,
      57,    58,   277,   102,   271,   278,   800,   103,   679,   401,
     263,    60,   382,   383,   384,   798,   909,   832,   833,   834,
    1008,   835,   930,   836,   837,  1019,  1068,  1116,  1022,  1070,
    1117,   682,   280,   920,   890,   891,   281,    61,    62,    63,
      64,   445,   447,   452,   290,    65,   934,   571,   285,   286,
     443,   687,   690,   688,   691,   450,   451,   255,   396,   527,
     922,   894,   895,   530,   531,   272,   605,   606,   607,   608,
     609,   610,   414,   375,   847,  1031,  1035,   508,   509,   510,
     819,   820,   376,   612,   226,   821,   960,   961,  1024,   962,
    1026,   415,   551,  1078,  1032,  1079,  1080,   963,  1077,  1025,
    1131,  1027,  1120,  1149,  1162,  1122,  1102,   867,   868,   949,
    1103,  1112,  1113,  1114,  1152,   647,   776,   664,   900,  1048,
     665,   666,   904,   667,   781,   404,   537,   668,   669,   602,
     227,    67,    88,    68,    69,    70,   517,   874,   389,   759,
    1036,   622,   392,   633,   761,    71,   393,    91,    72,   522,
     638,   523,   643,   880,   881,    73,    74,   188,   456,   724,
     518,   519,   631,   766,  1040,   632,   765,   969,   319,   576,
     721,   722,   723,   923,   924,   458,   578,   320,   321,   322,
     323,   324,   734,   735,   839,   736,   470,   228,   336,   586,
     473,   474,   475,   229,   230,   231
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -972
static const short yypact[] =
{
     123,   143,   153,  3997,  -972,  3997,   453,  -972,  -972,  -972,
    -972,    75,    75,    75,    45,  -972,   127,  -972,   805,  -972,
    -972,   805,   805,  -972,   162,   805,   162,   805,   805,  -972,
    -972,  -972,  -972,   185,   216,  2496,  4262,  4170,  4279,   498,
     121,   687,   557,  4181,  4291,  4234,  4317,   812,   848,   858,
    1003,  -972,  -972,   210,  -972,  -972,  -972,  -972,  -972,    75,
    -972,   337,   382,   402,  -972,  -972,  3997,  -972,  -972,  -972,
    -972,  -972,  -972,  -972,  -972,  -972,  -972,  -972,    75,    75,
      75,  3527,   236,  -972,  -972,  -972,  -972,  -972,   110,   322,
      78,  -972,  -972,   285,    41,  -972,   260,   805,  3046,  -972,
      91,    75,   392,  -972,  1290,  -972,  -972,  -972,  -972,    75,
    -972,  -972,  -972,  -972,  -972,  -972,  -972,  -972,    75,  -972,
    -972,  -972,  -972,  -972,  -972,  -972,  -972,    75,  -972,  -972,
    -972,  -972,  -972,  -972,  -972,  -972,    75,  -972,  -972,  -972,
    -972,  -972,  -972,  -972,  -972,    75,  -972,  -972,  -972,  -972,
    -972,  -972,  -972,  -972,    75,  -972,  -972,  -972,  -972,  -972,
    -972,  -972,  -972,    75,  -972,  -972,  -972,  -972,  -972,  -972,
    -972,  -972,    75,  -972,  -972,  -972,  -972,   142,   216,  -972,
    -972,   251,   241,   251,   267,  -972,   305,  -972,  4392,  -972,
    -972,  -972,  -972,  -972,  3527,  3527,   239,   331,   341,  -972,
     805,  -972,  -972,  -972,  3527,  -972,  -972,  1501,  -972,   347,
     349,   357,  -972,  -972,   416,  3527,   353,   361,  -972,  3594,
    3661,  -972,  4329,  1418,   442,   373,  1954,  3527,  -972,  -972,
    -972,  -972,  1096,  -972,   805,   805,   805,   384,   805,   805,
    -972,  -972,  -972,  -972,   397,   403,  4682,  1753,  4686,  4830,
     729,  1067,   999,  1179,  -972,   410,   254,   476,   269,   489,
    -972,   216,   216,    75,  -972,    75,  -972,   433,    75,  2798,
    3768,    75,  -972,  -972,    91,    75,  -972,   400,  -972,  1619,
     623,   690,   406,  1354,   436,   422,  3977,  -972,   435,  -972,
     464,  -972,  -972,  -972,  -972,  -972,  -972,  -972,  -972,  -972,
    -972,  -972,  -972,  -972,  -972,  -972,  -972,  -972,  -972,  -972,
    -972,  -972,  -972,  -972,  -972,   315,  4714,  -972,  -972,  -972,
    -972,  3847,   497,  -972,  -972,  -972,  -972,  3527,  3527,  4714,
    -972,  -972,   465,  -972,   473,   478,  3186,  4428,  4714,   805,
    -972,  -972,   475,  3527,  1501,  -972,  1501,  -972,  3527,  3527,
     526,  -972,  -972,  3527,  3527,  3527,  3527,  3527,  3527,  3527,
    3527,  3527,  3527,  3527,  3527,  -972,  -972,   805,  3527,  3527,
     805,  -972,   574,   502,  -972,   559,   521,  -972,  -972,  -972,
    -972,  -972,   232,  -972,   541,  -972,   162,   527,  -972,   548,
     523,   555,  -972,   548,  -972,  -972,   362,  -972,   690,   146,
     216,  -972,   616,  -972,  -972,  3046,  3259,  -972,   562,  3119,
     601,  -972,  1464,    70,  -972,  -972,   644,   142,   142,  -972,
      75,  -972,  3768,    75,    75,  -972,  -972,  -972,  3768,   630,
      75,  -972,  -972,  4682,  1753,  4686,  4830,   729,  1067,   999,
    1179,  -972,   678,   614,   971,   251,    75,   251,  -972,   675,
     638,  -972,   464,  4714,  -972,   645,   646,   722,  -972,   497,
    -972,   870,  1882,  4812,   652,  -972,  -972,  3326,  -972,  -972,
    -972,  -972,   699,   670,  4428,  -972,   682,   701,  -972,  4329,
     707,   731,  4329,  4329,  3527,   736,  3527,  3527,  1394,  1802,
    1213,  1358,  1331,   906,   906,   649,   649,  -972,  -972,  -972,
    -972,   755,   361,   721,  -972,  -972,  -972,   805,  2043,   559,
    -972,  -972,   756,  1096,  3728,   741,   162,  -972,   772,  4030,
    -972,  -972,   441,  3876,   775,    91,    75,  -972,  -972,  -972,
    -972,   702,  -972,  -972,  -972,   180,    67,  4116,   757,  3527,
    -972,  -972,  3527,  3393,  -972,   761,  -972,  -972,  -972,  -972,
    -972,  4742,  -972,   623,   352,   142,  -972,   809,  -972,  -972,
     783,  -972,  -972,  -972,  -972,  -972,   773,  -972,   782,  3527,
     805,   791,   638,   794,  4472,  1708,  -972,  -972,  4564,  4714,
    -972,  4714,  3527,  4714,  -972,  -972,  4508,  -972,  -972,   699,
    -972,  -972,  -972,   798,   798,   846,  3527,  1675,  1601,  -972,
    -972,  -972,   443,   601,  -972,  -972,    73,    85,    93,    96,
     896,  -972,   822,  -972,  -972,  -972,  -972,  -972,  -972,   283,
     826,  -972,   548,  -972,   546,  -972,  -972,   216,  -972,  -972,
    -972,   509,  -972,  -972,  -972,  -972,  -972,  -972,  -972,  -972,
    -972,  -972,  -972,   833,  -972,   362,   362,  -972,    75,  -972,
    -972,   827,  -972,  -972,  4590,  4746,  1130,   917,  4594,  4772,
    1276,  1054,  -972,  -972,  -972,   838,   462,  -972,  -972,   310,
    -972,   837,   845,  -972,  -972,  -972,  -972,   855,   857,  2553,
    -972,  -972,   916,  -972,  -972,  -972,  -972,   860,  -972,  -972,
     865,  -972,  -972,    75,    75,  4329,  -972,    75,   861,   805,
    -972,  3847,  4590,  4746,  4622,  4800,  1130,   917,  1317,  1160,
    4594,  4772,  4650,  4826,  1276,  1054,  1339,  1205,   871,   872,
    -972,  -972,  4654,  1812,    83,  -972,   866,   877,   884,  4864,
     886,  2310,  3527,   925,   883,  4508,  -972,  -972,  2275,  -972,
     805,  -972,  -972,  -972,  -972,  -972,  -972,  -972,  -972,  -972,
    -972,  -972,  -972,  -972,  -972,  2709,  -972,  3527,  -972,  -972,
     903,   548,  -972,   142,   216,  4392,  4088,  -972,   619,  3895,
     455,   455,  -972,  -972,  -972,   897,  4152,  -972,  -972,  -972,
    -972,   712,   165,  -972,  -972,  4536,  -972,   976,  -972,  -972,
      83,  -972,   142,  -972,   216,  -972,  -972,  4329,  -972,  -972,
    2553,  -972,    75,   747,    75,   111,  -972,  -972,  -972,    75,
    -972,  -972,  -972,   712,  -972,  -972,  -972,   899,  -972,  -972,
     909,  -972,   805,  -972,  3527,  -972,  -972,   949,   805,  -972,
     951,  4329,   913,   912,  -972,  -972,    48,  2486,   361,  -972,
    3527,  -972,   925,  -972,  3527,  -972,  2871,  -972,   968,  3527,
     972,   936,   937,  3460,   680,  1015,   356,   393,  -972,  -972,
     939,  -972,  -972,  -972,   946,   627,  -972,  -972,  -972,  2960,
     359,   817,  -972,   963,   548,  -972,  -972,  -972,  3527,   985,
     947,  -972,   947,  -972,  -972,  -972,    91,    75,  -972,    75,
     714,   728,   292,  -972,  -972,    75,    91,    75,   292,  -972,
      75,  -972,  -972,  -972,  -972,  -972,  -972,   470,   542,  2310,
      83,  -972,    83,  -972,  3527,   213,  -972,  3527,   247,  -972,
      75,   292,  -972,   573,  -972,  -972,  -972,  -972,  4882,  -972,
    2310,  -972,  -972,  2399,  -972,  2620,  -972,  -972,  -972,  2275,
    1550,  -972,  -972,  -972,  -972,   957,  3527,   959,  -972,   979,
    -972,  -972,   142,   216,  -972,  -972,  -972,  -972,  -972,   981,
    1033,  2132,    76,  -972,  -972,  -972,  -972,  -972,   982,   118,
    4329,  3527,    75,   712,   325,  -972,    75,  -972,    75,  -972,
    -972,    75,   165,   165,  -972,  -972,   712,   165,  -972,  -972,
     965,  -972,  -972,  -972,  -972,  3779,  3527,  -972,  -972,  3779,
    3527,  -972,  -972,  -972,  -972,   712,  -972,   969,  2620,  -972,
    -972,  3527,  -972,  -972,   973,  -972,  3527,  1010,   586,  -972,
     636,   592,  -972,   960,   992,  1005,  -972,  1011,  3527,  2221,
    -972,  -972,  -972,  -972,  3527,  -972,   548,  -972,  -972,  -972,
    -972,  4329,   455,   714,   728,   449,  -972,  -972,  4152,    75,
     292,  -972,   292,  -972,  -972,   747,  -972,  3779,  -972,  3779,
    -972,  -972,  -972,  4923,  -972,    66,    75,  -972,  3768,  -972,
    3768,  3527,  3527,  1052,  2960,  1007,  -972,  -972,  -972,  -972,
    -972,  1009,  1023,  -972,  -972,  -972,  -972,  -972,  -972,  -972,
    -972,  -972,    69,   998,  -972,  -972,  -972,  1012,  1014,  -972,
    -972,  -972,  -972,  1002,  -972,  -972,  -972,  -972,  1021,  -972,
    1040,   805,   101,  1020,  -972,  -972,  -972,  -972,  -972,  -972,
    3527,  -972,  -972,  -972,  3527,  1019,    69,  1026,    69,  -972,
    -972,  -972,  1028,  -972,  1031,  1108,   128,  -972,  -972,   899,
     899,  -972,  -972,  -972,  1053,   616,  1034,  -972,  -972,  3527,
    3527,   442,   372,  -972,  1037,  1038,  1043,   616,  -972,  -972,
    -972,   442,  -972,  -972
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -972,  -972,  -972,  -972,  -972,    82,  -487,  -972,  -972,  -972,
    -972,  -972,  -972,  -972,   -18,  -972,    -9,   608,  -353,   578,
    -972,  -972,  -972,   -95,   841,  -972,  -972,  -972,  -972,  -972,
    -972,  -972,  -396,  -972,  -417,   715,  -972,  -972,   105,   597,
    -394,  -819,    30,    65,    22,    90,   113,   135,   159,   183,
    -345,  -225,  -551,  -535,  -208,  -148,  -533,  -528,  -485,  -468,
     579,   587,  -484,  -240,  -202,  -732,  -257,  1088,  1209,  1174,
    1237,  -972,  -743,  -177,  -266,   593,  -972,   751,  -972,   343,
      17,   117,  -972,   640,  -972,   354,  -972,  -621,  -972,   222,
    -972,  -780,  -972,  -972,   321,  -972,  -972,  -972,  -972,  -972,
    -972,  -136,   383,  -722,   197,  -152,   176,  -972,  -972,  -972,
    -972,  -972,  -972,  -972,  -972,  -972,  -972,   584,  -122,  -972,
     733,  -972,  -972,   262,   264,   730,   618,   726,  -972,  -972,
    -680,  -388,  -314,  -608,  -972,   102,  -972,  -972,  -972,  -972,
    -972,  -972,  -309,  -972,  -972,  -692,   100,  -972,  -972,   697,
    -737,  -972,   387,  -972,  -972,  -707,  -972,  -972,  -972,  -972,
    -972,   -84,  -509,   140,  -971,  -367,  -272,  -972,  -972,  -972,
    -972,  -972,  -972,  -972,  -972,  -972,  -972,  -972,  -972,  -972,
    -893,   103,  -972,    80,  -972,   580,  -972,  -738,  -972,  -972,
     653,   656,  -972,  -972,   564,  -403,  -972,  -972,  -972,  -972,
       9,  -972,   320,  -972,  -972,  -972,  -972,  -972,  -972,  -972,
    -972,  -972,  -972,  -972,  -972,  -972,  -972,   -24,    -8,  -481,
    -972,   598,  -972,   466,   200,  -446,  -972,  -972,  -972,  -972,
    -374,  -972,  -972,  -972,  -972,   617,  -972,  -972,   484,  -972,
    -972,  -972,   528,  -972,   246,   561,  -972,   706,   718,  -229,
    -972,  -290,  -972,  -972,   458,   558,  -972,  -972,  -972,  -972,
    -972,  -972,   825,  -972,  -972,  -972
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -656
static const short yytable[] =
{
      87,   282,    95,    89,    90,   556,   536,    93,   528,    87,
      97,   559,    66,   423,    66,   502,    92,   417,    92,   524,
      59,   558,    59,   864,   712,    37,   555,    37,    78,    79,
      80,   460,   626,    35,   628,    35,   624,   774,   884,   641,
     713,   279,   716,   182,   184,   186,   442,   717,   866,   907,
     964,   629,   109,   906,   118,  1073,   127,   937,   136,   889,
     145,   288,   154,   865,   163,   237,   172,   409,    36,   241,
      36,  -117,   216,   630,  -459,    66,   371,  1033,  1110,   244,
     549,    92,   529,    59,   817,    92,  -460,    75,    37,   245,
     718,   935,   459,    38,  -461,    38,    35,  -462,    10,   325,
     326,   893,   899,   548,   755,    16,  1105,   719,   472,   331,
     925,    81,  1092,   828,    99,    59,    39,    59,    39,  1038,
     341,    16,   258,    -2,   238,   242,   128,     9,   129,   234,
     256,    36,   377,    11,    12,    13,  1111,   864,    40,   866,
      40,   614,  1034,     4,   239,    99,   273,  1126,   187,  1093,
     650,  1133,   768,    -3,   865,  1010,    38,   917,  -439,  -117,
    1141,   502,    41,   233,    41,   257,   790,   240,    99,   100,
    -440,   712,   818,   991,  1145,   992,   180,   101,  -441,    39,
     803,  -442,   330,   805,  1127,   630,    42,   713,    42,   716,
     259,  1163,   658,    82,   717,   180,   180,   180,   234,   611,
     274,    40,  1039,   539,   442,  -259,   658,   267,   275,  1018,
     104,  1146,   268,   269,   381,    18,   385,   386,   387,    99,
     390,   391,   276,   896,    59,    41,   180,  1132,  1062,   533,
     710,   897,   269,   658,   712,   180,   615,   718,   846,   742,
     745,   748,   751,    16,   180,   589,   268,   269,   760,    42,
     713,    98,   716,   180,   719,  1101,  1154,   717,   775,   996,
     408,   106,   180,   109,  1049,   118,   720,   127,   645,   136,
     862,   180,   449,   109,   100,   118,   115,    16,   871,   876,
     180,   628,   101,   642,    16,   641,    59,   863,   990,   180,
     910,    59,   912,  1000,   179,   444,   258,   454,   629,    16,
     902,   753,   232,    59,   256,   327,  1051,  1053,   435,  1007,
    1085,   331,   659,   268,   269,   512,   433,   903,    83,    84,
     513,   477,    16,   566,   284,   568,   659,   469,    99,   660,
     287,   773,   529,    59,   743,   746,   749,   752,    18,   257,
      83,    84,   864,   660,   243,    94,    59,    96,   234,   500,
     711,   434,   504,   659,   283,    59,   289,   733,   268,   269,
     503,    59,   515,    59,   259,   774,   756,   714,   235,  -582,
     660,   757,   585,  -582,   774,    18,   436,   710,    92,   838,
     180,   453,   425,   886,   862,    83,    84,   873,   236,   661,
      85,   887,   269,   786,   291,    86,   538,   328,   787,   437,
     545,   863,   -35,   661,   870,    83,    84,   329,   913,    18,
     916,   460,    85,   337,   816,   338,   423,    86,   424,   269,
     525,   438,    59,   339,   613,   340,   181,   715,   526,   269,
     661,   658,  1147,  1148,   449,   680,   342,   398,   399,   -34,
     710,  1017,   965,   580,   262,   439,    18,   343,   331,   343,
     109,   371,   118,   444,   127,  1156,   136,    85,    99,   273,
    1157,    59,    86,   675,   372,   448,   435,    83,    84,   440,
      59,   183,   459,   388,   433,   595,   264,    85,   689,   692,
     265,   394,    86,   111,   419,  1055,   395,   838,   420,   601,
     426,   185,   623,   397,   265,   381,   120,   711,   532,   402,
     968,   878,   429,   123,     9,   124,   842,   430,    92,   434,
      11,    12,    13,   274,   714,   978,   269,   634,   635,   636,
     446,   275,   613,   613,   747,   613,   637,   739,    16,   642,
     671,   740,  1084,   672,   436,   276,    59,    76,    77,    85,
      59,    37,    59,   461,    86,   435,   784,   258,   465,    35,
     785,   659,   449,   433,   988,   256,   466,   437,   420,   478,
     711,   467,   137,     9,   138,    19,    20,   654,   660,    11,
      12,    13,   -84,  1046,   715,  1047,   535,   714,  1042,   438,
    -636,   654,  -258,   505,    36,   506,   775,   282,   434,   862,
     257,   507,    59,   398,   399,   775,    59,   704,    59,   799,
      59,   801,   655,   439,   511,   702,   863,   514,   654,    38,
     516,   403,   520,   436,   416,   259,   655,   908,   418,  -634,
    1139,  1140,   634,   635,   636,   191,   989,   440,   661,   973,
     265,   762,    39,   649,   879,   879,   437,   715,   521,   982,
     703,  -261,   955,   655,   956,   957,   958,   959,   177,   178,
     656,  1095,   541,  1096,    40,   425,   425,  1004,   438,   773,
     529,  1005,  1082,   267,   656,   705,  -288,   915,   773,   529,
    1067,   109,   657,   127,   420,   145,  1069,   163,    41,  -288,
     265,   810,   439,    83,    84,   546,   657,   552,   706,   424,
     269,   656,   132,     9,   133,   634,   635,   636,   564,    11,
      12,    13,    42,   658,   877,   560,   440,   362,   363,   364,
     707,   741,   744,   657,   750,    99,   885,    16,   569,   109,
    -288,   118,   845,   127,  -288,   136,   570,   145,   574,   154,
     575,   163,   577,   172,   708,     9,   124,   859,   946,    59,
     583,    11,    12,    13,   704,   587,   860,   532,   532,  1151,
      99,   273,   702,   588,   423,    85,   268,   269,   709,    16,
      86,  1161,  -394,  -394,   869,   591,   557,   403,   648,   269,
     886,  -260,    59,   561,   377,   950,  1021,    37,   887,   269,
     976,   269,   596,    59,   592,    35,    59,   703,    37,   567,
     593,   435,   888,   914,   978,   269,    35,   345,   347,   433,
     553,   554,    59,   535,   927,   274,   654,   704,    83,    84,
     929,   600,   705,   275,   594,   702,  1020,   159,     9,   160,
      36,  1044,  1045,   659,    11,    12,    13,   276,   859,   994,
     621,    36,   692,    95,   434,   706,   947,   860,   599,   617,
     660,   655,    16,   625,   945,    38,   644,   670,    92,    92,
     703,   674,   684,   164,     9,   165,    38,   707,   693,   436,
      11,    12,    13,   168,     9,   169,   686,   694,    39,   646,
      11,    12,    13,    83,    84,   705,   697,   699,   869,    39,
      85,   708,   437,   532,   532,    86,    59,   584,    16,   656,
      40,    37,   737,   634,   635,   636,  -266,   410,   706,    35,
     661,    40,   966,    59,   438,   709,   879,   754,   258,   758,
     779,   657,   981,    59,    41,   532,   256,   772,   258,   915,
     707,   783,   128,     9,   129,    41,   256,   788,   439,    11,
      12,    13,  -267,   335,    36,   789,   579,  1014,    42,   791,
     535,   793,  -268,   267,   708,    85,   809,   747,   802,    42,
      86,   257,   440,   804,   785,   812,   814,   892,   898,    38,
     822,   257,   360,   361,   362,   363,   364,   823,   709,   825,
     535,   840,   431,   841,   872,     7,   259,     9,    10,   905,
     883,   918,    39,    11,    12,    13,   259,   267,   818,   921,
    -288,   777,   977,   979,   374,   -32,   747,   931,   932,    15,
     933,    16,    17,  -288,    40,     9,   133,  1065,   173,     9,
     174,    11,    12,    13,   -33,    11,    12,    13,   941,  1075,
     942,   943,   948,   951,    18,  1081,   268,   269,    41,    16,
     954,   971,  1129,  1130,   967,   972,   806,   807,   562,   563,
     808,  1013,   455,  1015,  -288,  1016,    24,  1028,  -288,  1029,
    1054,    26,    42,  1037,  1061,   464,  1066,  1064,  1071,   164,
       9,   165,  1097,  1098,   476,  1100,    11,    12,    13,  1099,
     480,  1072,   481,     9,   129,   532,   532,  1074,   654,    11,
      12,    13,  1115,   869,   532,   532,  1121,  -269,   532,   532,
    1104,    59,  1108,  1125,  1109,  1118,    37,  1119,   180,    83,
      84,   378,   379,   380,    35,  1123,  1124,   532,  1128,  1135,
    1137,  1100,  1142,   655,  1143,  1134,   627,  1144,  1153,  1150,
    1158,  1159,   620,   107,   112,   116,   121,  1160,   550,  1023,
     677,   143,   148,   152,   157,   123,     9,   124,   678,    36,
    1100,  1155,    11,    12,    13,   977,   979,   979,   681,   398,
     399,   534,   919,   618,   911,  1009,   698,   936,   398,   399,
      16,   656,  1050,  1052,    38,   137,     9,   138,   462,   463,
    1043,    85,    11,    12,    13,   993,    86,   565,  1106,   573,
     998,   921,   572,   657,   479,     9,   138,    39,   696,   482,
     483,    11,    12,    13,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   616,   926,  1138,    40,
     173,     9,   174,   125,   130,   134,   139,    11,    12,    13,
    1107,   161,   166,   170,   175,   763,   764,   782,   778,  1136,
     974,   725,   975,    41,   726,   980,   769,   882,   770,   771,
     983,   984,  1083,   985,   108,   113,   117,   122,   767,   875,
     815,  1060,   144,   149,   153,   158,     0,    42,   997,   780,
     780,  1001,   811,  1002,  1003,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   792,   794,   126,   131,   135,   140,
     700,   159,     9,   160,   162,   167,   171,   176,    11,    12,
      13,   266,   701,   843,   -28,   -28,   -28,   -28,   938,   590,
       0,     0,   -28,   -28,   -28,   727,    16,   728,     0,   730,
       0,     0,     0,     0,     0,   813,     0,   267,   -28,   403,
    -288,   403,   132,     9,   133,     0,     0,   597,   598,    11,
      12,    13,     0,  -288,   107,   112,   116,   121,  1056,     0,
       0,     0,  1058,   -28,   168,     9,   169,    16,     0,     0,
       0,    11,    12,    13,     0,   427,   268,   269,   -24,   -24,
     -24,   -24,     0,   627,     0,   -28,   -24,   -24,   -24,    16,
     -28,     0,     0,     0,  -288,     0,     0,     0,  -288,   -28,
       0,   267,   -24,     0,  -288,   358,   359,   360,   361,   362,
     363,   364,  1086,  1087,     0,  1088,     0,  -288,     0,     0,
    1089,     0,  1090,     0,     0,     0,     0,   -24,     0,  1094,
     695,   357,   358,   359,   360,   361,   362,   363,   364,     0,
     268,   269,     0,   729,   125,   130,   134,   139,     0,   -24,
       0,     0,     0,     0,   -24,     0,     0,   738,  -288,     0,
       0,     0,  -288,   -24,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   108,   113,   117,   122,   952,
     953,     0,     0,     0,     0,   410,     0,     0,  -120,  -120,
    -120,  -120,     0,     0,  -120,     0,  -120,  -120,  -120,   365,
     366,     0,     0,   367,   368,   369,   370,   126,   131,   135,
     140,     0,  -120,     0,     0,     0,     0,     0,     0,   986,
     987,     0,   332,     0,   189,     7,     0,     9,    10,   190,
     191,     0,   192,    11,    12,    13,     0,  -120,     0,     0,
     797,   107,   112,   116,   121,     0,     0,     0,     0,    15,
     193,    16,    17,     0,   194,   195,   196,   197,   198,  -120,
       0,     0,     0,   199,  -120,     0,     0,     0,     0,   200,
       0,     0,   201,  -120,    18,     0,     0,   202,   203,   204,
    1011,     0,   205,   206,     0,     0,     0,   207,   208,     0,
       0,     0,   831,   209,     0,   210,    24,     0,     0,     0,
     211,    26,     0,     0,     0,     0,     0,   212,   213,     0,
     333,     0,   214,   348,   349,   350,  1012,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   125,   130,   134,   139,     0,     0,     0,     0,     0,
     421,     0,     0,   -20,   -20,   -20,   -20,     0,     0,     0,
       0,   -20,   -20,   -20,     0,     0,     0,     0,     0,     0,
       0,   797,   108,   113,   117,   122,   267,   -20,     0,  -288,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,  -288,     0,     0,   928,     0,     0,     0,     0,
       0,     0,   -20,     0,   126,   131,   135,   140,   831,     0,
       0,     0,     0,     0,     0,   939,     0,     0,     0,     0,
     940,     0,     0,     0,   -20,     0,     0,     0,     0,   -20,
       0,     0,     0,  -288,     0,     0,     0,  -288,   -20,   410,
       0,     0,     7,     8,     9,    10,     0,     0,     0,   970,
      11,    12,    13,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,    15,     0,    16,     0,
       0,     0,   107,   112,     0,     0,   143,   148,     0,     0,
     831,     0,     0,     0,     0,   995,     0,     7,   999,     9,
     111,    18,     0,     0,     0,    11,    12,    13,     0,     0,
       0,   831,     0,     0,   831,     0,   831,     0,     0,     0,
       0,    15,     0,    24,     0,     0,     0,     0,    26,     0,
     107,   112,   116,   121,     0,     0,     0,  -653,   143,   148,
     152,   157,     0,     0,     0,     0,    18,     0,     0,     0,
       0,     0,  1041,   410,     0,     0,  -655,  -655,  -655,  -655,
       0,     0,     0,     0,  -655,  -655,  -655,     0,    24,     0,
     125,   130,     0,    26,   161,   166,     0,  1057,     0,     0,
    -655,  1059,  -655,     0,     0,     0,     0,     0,     0,   831,
       0,     0,  1063,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   108,   113,  -655,     0,   144,   149,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,   130,   134,   139,     0,     0,     0,  -655,   161,   166,
     170,   175,  -655,   126,   131,     0,     0,   162,   167,     0,
       0,  -655,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   108,   113,   117,   122,     0,     0,     0,     0,   144,
     149,   153,   158,     0,     0,   348,   349,   350,     0,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   126,   131,   135,   140,     0,     0,     0,
       0,   162,   167,   171,   176,   373,     0,  -464,  -464,  -464,
    -464,  -464,  -464,  -464,     0,  -464,  -464,  -464,  -464,  -464,
     581,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,
    -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,
    -464,  -464,     0,     0,     0,     0,  -464,     0,     0,     0,
       0,     0,  -464,     0,     0,  -464,     0,  -464,     0,     0,
    -464,  -464,  -464,     0,     0,  -464,  -464,     0,     0,     0,
    -464,  -464,     0,     0,     0,     0,  -464,     0,  -464,  -464,
       0,     0,     0,  -464,  -464,     0,     0,     0,  -464,   374,
    -464,  -464,     0,  -464,   603,  -464,  -488,  -488,  -488,  -488,
    -488,  -488,  -488,     0,  -488,  -488,  -488,  -488,  -488,     0,
    -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,
    -488,  -488,  -488,  -488,  -488,     0,  -488,  -488,  -488,  -488,
    -488,     0,     0,     0,     0,  -488,     0,     0,     0,     0,
       0,  -488,     0,     0,  -488,     0,  -488,     0,     0,  -488,
    -488,  -488,     0,     0,  -488,  -488,     0,     0,     0,  -488,
    -488,     0,     0,     0,     0,  -488,     0,  -488,  -488,     0,
       0,     0,  -488,  -488,     0,     0,     0,  -488,     0,  -488,
    -488,     0,  -488,  1030,  -488,  -466,  -466,     0,     0,     0,
    -466,  -466,     0,  -466,     0,     0,     0,  -466,     0,  -466,
    -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,
       0,  -466,     0,  -466,     0,  -466,  -466,  -466,  -466,  -466,
       0,     0,     0,     0,  -466,     0,     0,     0,     0,     0,
    -466,     0,     0,  -466,     0,     0,     0,     0,  -466,  -466,
    -466,     0,     0,  -466,  -466,     0,     0,     0,  -466,  -466,
       0,     0,     0,     0,  -466,     0,  -466,  -466,     0,     0,
       0,  -466,  -466,     0,     0,     0,  -466,     0,  -466,  -466,
       0,  -466,  1076,  -466,  -495,  -495,     0,     0,     0,  -495,
    -495,     0,  -495,     0,     0,     0,  -495,     0,  -495,  -495,
    -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,     0,
    -495,     0,  -495,     0,  -495,  -495,  -495,  -495,  -495,     0,
       0,     0,     0,  -495,     0,     0,     0,     0,     0,  -495,
       0,     0,  -495,     0,     0,     0,     0,  -495,  -495,  -495,
       0,     0,  -495,  -495,     0,     0,     0,  -495,  -495,     0,
       0,     0,     0,  -495,     0,  -495,  -495,     0,     0,     0,
    -495,  -495,     0,     0,     0,  -495,     0,  -495,  -495,     0,
    -495,   826,  -495,   827,    84,     0,     0,     0,   190,   191,
     350,   192,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,     0,     0,     0,   193,
       0,    17,     0,   194,   195,   196,   197,   198,     0,     0,
       0,     0,   199,     0,     0,     0,     0,     0,   200,     0,
       0,   201,     0,     0,     0,     0,   202,   203,   204,     0,
       0,   205,   206,     0,     0,   828,   207,   208,     0,     0,
       0,     0,   209,     0,   210,    85,     0,     0,     0,   211,
      86,     0,     0,     0,     0,  -316,   212,   213,     0,   829,
     826,   214,   827,    84,     0,     0,     0,   190,   191,     0,
     192,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   193,     0,
      17,     0,   194,   195,   196,   197,   198,     0,     0,     0,
       0,   199,     0,     0,     0,     0,     0,   200,     0,     0,
     201,     0,     0,     0,     0,   202,   203,   204,     0,     0,
     205,   206,     0,     0,   828,   207,   208,     0,     0,     0,
       0,   209,     0,   210,    85,     0,     0,     0,   211,    86,
       0,     0,     0,     0,  -382,   212,   213,   826,   829,   189,
     214,     0,     0,     0,   190,   191,     0,   192,     0,     0,
       7,   105,     9,   106,     0,     0,     0,     0,    11,    12,
      13,     0,     0,     0,     0,   193,     0,    17,     0,   194,
     195,   196,   197,   198,    15,     0,    16,     0,   199,  -329,
       0,     0,     0,     0,   200,     0,     0,   201,     0,     0,
       0,     0,   202,   203,   204,     0,     0,   205,   206,    18,
       0,  -329,   207,   208,   795,     0,   189,     0,   209,     0,
     210,   190,   191,     0,   192,   211,     0,     0,     0,     0,
       0,    24,   212,   213,     0,   829,    26,   214,     0,     0,
    -254,     0,   193,     0,    17,     0,   194,   195,   196,   197,
     198,     0,     0,     0,     0,   199,     0,     0,     0,     0,
       0,   200,     0,     0,   201,     0,     0,     0,     0,   202,
     203,   204,     0,     0,   205,   206,     0,     0,     0,   207,
     208,   826,     0,   189,     0,   209,     0,   210,   190,   191,
       0,   192,   211,     0,     0,     0,     0,     0,     0,   212,
     213,     0,   796,     0,   214,     0,     0,     0,     0,   193,
       0,    17,     0,   194,   195,   196,   197,   198,     0,     0,
       0,     0,   199,     0,     0,     0,     0,     0,   200,     0,
       0,   201,     0,     0,     0,     0,   202,   203,   204,     0,
       0,   205,   206,     0,     0,     0,   207,   208,     0,     0,
       0,     0,   209,     0,   210,     0,     0,     0,     0,   211,
       0,     0,     0,     0,     0,     0,   212,   213,     0,   829,
       0,   214,   827,   848,     8,     9,    10,   190,   191,     0,
     192,    11,    12,    13,     0,     0,     0,     0,     0,     0,
     849,   850,   851,   852,   853,   854,   855,    15,   193,    16,
      17,     0,   194,   195,   196,   197,   198,     0,     0,     0,
       0,   199,     0,     0,     0,     0,     0,   200,     0,     0,
     201,     0,    18,     0,     0,   202,   203,   204,     0,     0,
     205,   206,     0,     0,     0,   207,   208,     0,     0,     0,
       0,   209,     0,   210,   856,     0,     0,     0,   211,   857,
       0,     0,     0,   858,     0,   212,   213,     0,   818,     0,
     214,   189,     7,   405,     9,    10,   190,   191,     0,   192,
      11,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,   193,    16,    17,
       0,   194,   195,   196,   197,   198,     0,     0,     0,     0,
     199,     0,     0,     0,     0,     0,   200,     0,     0,   201,
       0,    18,     0,     0,   202,   203,   406,     0,     0,   205,
     206,     0,     0,     0,   207,   208,     0,     0,     0,     0,
     209,     0,   210,    24,   827,    84,     0,   211,    26,   190,
     191,     0,   192,     0,   212,   213,     0,     0,   407,   214,
       0,     0,   849,   850,   851,   852,   853,   854,   855,     0,
     193,     0,    17,     0,   194,   195,   196,   197,   198,     0,
       0,     0,     0,   199,     0,     0,     0,     0,     0,   200,
       0,     0,   201,     0,     0,     0,     0,   202,   203,   204,
       0,     0,   205,   206,     0,     0,     0,   207,   208,     0,
       0,     0,     0,   209,     0,   210,    85,     0,     0,     0,
     211,    86,     0,     0,     0,   858,     0,   212,   213,     0,
     818,     0,   214,   189,     7,     8,     9,    10,   190,   191,
       0,   192,    11,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,   193,
      16,    17,     0,   194,   195,   196,   197,   198,     0,     0,
       0,     0,   199,     0,     0,     0,     0,     0,   200,     0,
       0,   201,     0,    18,     0,     0,   202,   203,   204,     0,
       0,   205,   206,     0,     0,     0,   207,   208,     0,     0,
       0,     0,   209,     0,   210,    24,     0,     0,     0,   211,
      26,     0,     0,     0,     0,     0,   212,   213,     0,   189,
       7,   214,     9,    10,   190,   191,     0,   192,    11,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,   193,    16,    17,     0,   194,
     195,   196,   197,   198,     0,     0,     0,     0,   199,     0,
       0,     0,     0,     0,   200,     0,     0,   201,     0,    18,
       0,     0,   202,   203,   204,     0,     0,   205,   206,     0,
       0,     0,   207,   208,     0,     0,     0,     0,   209,     0,
     210,    24,   189,     0,   542,   211,    26,   190,   191,     0,
     192,     0,   212,   213,     0,     0,     0,   214,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   193,     0,
      17,     0,   194,   195,   196,   197,   198,     0,     0,     0,
       0,   199,     0,     0,     0,     0,     0,   200,     0,     0,
     201,     0,     0,     0,     0,   202,   203,   543,     0,     0,
     205,   206,     0,     0,     0,   207,   208,     0,     0,   189,
       0,   209,     0,   210,   190,   191,     0,   192,   211,     0,
       0,     0,     0,     0,     0,   212,   213,     0,     0,   544,
     214,     0,     0,     0,     0,   193,     0,    17,     0,   194,
     195,   196,   197,   198,     0,     0,     0,     0,   199,     0,
       0,     0,     0,     0,   200,     0,     0,   201,     0,     0,
       0,     0,   202,   203,   204,     0,     0,   205,   206,     0,
       0,     0,   207,   208,     0,     0,     0,     0,   209,     0,
     210,   468,   189,     0,     0,   211,     0,   190,   191,     0,
     192,     0,   212,   213,     0,     0,     0,   214,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   193,     0,
      17,     0,   194,   195,   196,   197,   198,     0,     0,     0,
       0,   199,     0,     0,     0,     0,     0,   200,     0,     0,
     201,     0,     0,     0,     0,   202,   203,   204,     0,     0,
     205,   206,     0,     0,     0,   207,   208,     0,     0,   189,
       0,   209,     0,   210,   190,   191,     0,   192,   211,     0,
       0,     0,     0,     0,     0,   212,   213,     0,     0,   540,
     214,     0,     0,     0,     0,   193,     0,    17,     0,   194,
     195,   196,   197,   198,     0,     0,     0,     0,   199,     0,
       0,     0,     0,     0,   200,     0,     0,   201,     0,     0,
       0,     0,   202,   203,   204,     0,     0,   205,   206,     0,
       0,     0,   207,   208,     0,     0,   189,     0,   209,     0,
     210,   190,   191,     0,   192,   211,     0,     0,     0,     0,
       0,     0,   212,   213,     0,   584,     0,   214,     0,     0,
       0,     0,   193,     0,    17,     0,   194,   195,   196,   197,
     198,     0,     0,     0,     0,   199,     0,     0,     0,     0,
       0,   200,     0,     0,   201,     0,     0,     0,     0,   202,
     203,   204,     0,     0,   205,   206,     0,     0,     0,   207,
     208,     0,     0,   189,     0,   209,     0,   210,   190,   191,
       0,   192,   211,     0,     0,     0,     0,     0,     0,   212,
     213,     0,     0,   673,   214,     0,     0,     0,     0,   193,
       0,    17,     0,   194,   195,   196,   197,   198,     0,     0,
       0,     0,   199,     0,     0,     0,     0,     0,   200,     0,
       0,   201,     0,     0,     0,     0,   202,   203,   204,     0,
       0,   205,   206,     0,     0,     0,   207,   208,     0,     0,
     189,     0,   209,     0,   210,   190,   191,     0,   192,   211,
       0,     0,     0,     0,   944,     0,   212,   213,     0,     0,
       0,   214,     0,     0,     0,     0,   193,     0,    17,     0,
     194,   195,   196,   197,   198,     0,     0,     0,     0,   199,
       0,     0,     0,     0,     0,   200,     0,     0,   201,     0,
       0,     0,     0,   202,   203,   204,     0,     0,   205,   206,
       0,     0,     0,   207,   208,     0,     0,   189,     0,   209,
       0,   210,   190,   191,     0,   192,   211,     0,     0,     0,
       0,     0,     0,   212,   213,     0,     0,     0,   214,     0,
       0,     0,     0,   193,     0,    17,     0,   194,   195,   196,
     197,   198,     0,     0,     0,     0,   199,     0,     0,     0,
       0,     0,   200,     0,     0,   201,     0,     0,     0,     0,
     202,   203,   204,     0,     0,   205,   206,     0,     0,     0,
     344,   208,     0,     0,   189,     0,   209,     0,   210,   190,
     191,     0,   192,   211,     0,     0,     0,     0,     0,     0,
     212,   213,     0,     0,     0,   214,     0,     0,     0,     0,
     193,     0,    17,     0,   194,   195,   196,   197,   198,     0,
       0,     0,     0,   199,     0,     0,     0,     0,     0,   200,
       0,     0,   201,     0,     0,     0,     0,   202,   203,   204,
       0,     0,   205,   206,     0,     0,     0,   346,   208,     0,
       0,   619,     0,   209,     0,   210,   190,   191,     0,   192,
     211,     0,     0,     0,     0,     0,     0,   212,   213,     0,
       0,     0,   214,     0,     0,     0,     0,   193,     0,    17,
       0,   194,   195,   196,   197,   198,     0,     0,     0,   410,
     199,     0,  -488,  -488,  -488,  -488,   200,     0,     0,   201,
    -488,  -488,  -488,     0,   202,   203,   204,     0,     0,   205,
     206,     0,     0,     0,   207,   208,  -488,     0,     0,     0,
     209,     0,   210,     0,     0,     0,     0,   211,     0,    16,
       0,     0,     0,     0,   212,   213,     0,     0,     0,   214,
       0,  -488,   348,   349,   350,     0,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
       0,     0,     0,  -488,     0,     0,     0,     0,  -488,     0,
     292,   293,     0,   294,   295,     0,     0,  -116,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   639,     0,     0,
       7,     0,     9,    10,     0,     0,     0,     0,    11,    12,
      13,     0,     0,   315,     0,     0,   639,     0,     0,     7,
       0,     9,    10,     0,    15,     0,    16,    11,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   317,    15,     0,    16,     0,   318,     0,    18,
       0,     0,     0,     0,     0,   457,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
       0,    24,  -612,  -612,  -612,     0,    26,     0,     0,     0,
     640,  -612,     0,     0,     0,     0,     0,     0,     0,     0,
      24,  -611,  -611,  -611,     0,    26,     0,     0,   431,   640,
    -611,     7,     0,     9,    10,     0,     0,     0,     0,    11,
      12,    13,     0,     0,     0,     0,     0,     0,     6,     0,
    -129,     7,     8,     9,    10,    15,     0,    16,    17,    11,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,    15,     0,    16,    17,     0,
      18,     6,     0,  -129,     7,     8,     9,    10,     0,     0,
       0,     0,    11,    12,    13,     0,     0,     0,     0,     0,
      18,     0,    24,    19,    20,  -129,     0,    26,    15,     0,
      16,   432,  -385,  -129,     0,     0,    21,    22,    23,     0,
       0,     0,    24,     0,     0,     0,    25,    26,    27,    28,
       0,    29,     0,    18,     0,     0,    19,    20,  -129,     6,
       0,  -129,     7,     8,     9,    10,  -129,     0,     0,     0,
      11,    12,    13,     0,     0,    24,     0,     0,     0,     0,
      26,     0,     0,     0,    29,     0,    15,   651,    16,   652,
       7,     8,     9,    10,     0,     0,   653,     0,    11,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,     0,     0,    15,     0,  -129,     0,     0,     0,
       0,     0,     0,   651,  -129,     0,     7,     8,     9,    10,
       0,     0,   653,    24,    11,    12,    13,     0,    26,    18,
       0,     0,    29,     0,     7,   114,     9,   115,     0,     0,
      15,     0,    11,    12,    13,     7,   141,     9,   142,     0,
       0,    24,     0,    11,    12,    13,    26,     0,    15,  -550,
      16,     0,     0,     0,     0,    18,     0,     0,     0,    15,
       0,    16,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,    24,     0,     0,
       0,     0,    26,     0,    18,  -550,     0,     0,     7,   150,
       9,   151,     0,     0,     0,    24,    11,    12,    13,     0,
      26,     0,     0,     0,  -256,     0,    24,     0,     0,     0,
       0,    26,    15,     0,    16,  -262,     7,   110,     9,   111,
       0,     0,     0,     0,    11,    12,    13,     0,     0,     0,
       0,     0,     0,     7,   119,     9,   120,    18,     0,     0,
      15,    11,    12,    13,     0,     7,   146,     9,   147,     0,
       0,     0,     0,    11,    12,    13,     0,    15,     0,    24,
       0,     0,     0,     0,    26,    18,     0,     0,  -264,    15,
       0,     7,   155,     9,   156,     0,     0,     0,     0,    11,
      12,    13,    18,     0,     0,     0,     0,    24,     0,     0,
       0,     0,    26,     0,    18,    15,  -255,     0,     0,     0,
       0,     0,     0,     0,    24,     0,     0,     0,     0,    26,
       0,     0,     0,  -257,     0,     0,    24,     0,     0,     0,
      18,    26,   348,   349,   350,  -263,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
       0,     0,    24,     0,     0,   292,   293,    26,   294,   295,
       0,  -265,     0,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   292,   293,     0,   294,   295,     0,     0,   315,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   316,     0,
       0,     0,     0,     0,     0,     0,     0,   317,     0,     0,
       0,     0,   318,     0,   471,   292,   293,     0,   294,   295,
       0,     0,     0,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,     0,   317,     0,     0,     0,     0,   318,     0,
       0,   292,   293,     0,   294,   295,     0,     0,   315,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,     0,     0,
       7,     8,     9,    10,     0,     0,   901,   317,    11,    12,
      13,     0,   318,     0,   732,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,     0,    16,     0,     7,     8,
       9,    10,     0,     0,   653,     0,    11,    12,    13,     0,
       0,     0,     0,   317,     0,     0,     0,     0,   318,    18,
       0,     0,    15,     0,     7,   105,     9,   106,     7,   141,
       9,   142,    11,    12,    13,     0,    11,    12,    13,     0,
       0,    24,     0,     0,     0,     0,    26,    18,    15,     0,
      16,     0,    15,     0,    16,     0,     7,   114,     9,   115,
       0,     0,     0,     0,    11,    12,    13,     0,     0,    24,
       0,     0,     0,    18,    26,     0,     0,    18,     0,     0,
      15,     0,    16,     0,     7,   150,     9,   151,     7,     8,
       9,    10,    11,    12,    13,    24,    11,    12,    13,    24,
      26,     0,     0,     0,    26,    18,     0,     0,    15,     0,
      16,     0,    15,     0,    16,     0,     7,     0,     9,   106,
       7,     0,     9,   115,    11,    12,    13,    24,    11,    12,
      13,     0,    26,    18,     0,     0,     0,    18,     0,     0,
      15,     0,    16,     0,    15,     0,    16,     0,     7,     0,
       9,    10,     0,     0,     0,    24,    11,    12,    13,    24,
      26,     0,     0,     0,    26,    18,     0,     0,     0,    18,
       0,     0,    15,     0,    16,     0,     7,     8,     9,    10,
       7,   110,     9,   111,    11,    12,    13,    24,    11,    12,
      13,    24,    26,     0,     0,     0,    26,    18,     0,     0,
      15,     0,     0,     0,    15,     0,     7,   146,     9,   147,
       0,     0,     0,     0,    11,    12,    13,     0,     0,    24,
       0,     0,     0,     0,    26,    18,     0,     0,     0,    18,
      15,     0,     0,     0,     7,   119,     9,   120,     0,     0,
       0,     0,    11,    12,    13,     0,     0,    24,     0,     0,
       0,    24,    26,     0,     0,    18,    26,     0,    15,     0,
       7,   155,     9,   156,     7,     0,     9,   120,    11,    12,
      13,     0,    11,    12,    13,     0,     0,    24,     0,     0,
       0,     0,    26,    18,    15,   348,   349,   350,    15,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,     0,     0,    24,     0,     0,     0,    18,
      26,     0,     0,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     582,    24,     0,     0,     0,    24,    26,   348,   349,   350,
      26,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   348,   349,   350,     0,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   824,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1006,   348,   349,   350,  1091,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364
};

static const short yycheck[] =
{
      18,   178,    26,    21,    22,   422,   402,    25,   396,    27,
      28,   428,     3,   279,     5,   368,    24,   274,    26,   393,
       3,   424,     5,   755,   575,     3,   420,     5,    11,    12,
      13,   321,   519,     3,   519,     5,   517,   645,   776,   523,
     575,   177,   575,    61,    62,    63,   286,   575,   755,   792,
     869,   519,    35,   790,    37,  1026,    39,   837,    41,   781,
      43,   183,    45,   755,    47,    89,    49,   269,     3,    93,
       5,     1,    81,   519,     1,    66,     9,     1,     9,    97,
      10,    89,   396,    66,     1,    93,     1,     5,    66,    98,
     575,    43,   321,     3,     1,     5,    66,     1,     7,   194,
     195,   781,   782,   412,   613,    30,  1077,   575,   337,   204,
     817,    66,    46,    65,     3,    98,     3,   100,     5,     1,
     215,    30,   100,     0,    46,    84,     5,     6,     7,    88,
     100,    66,   227,    12,    13,    14,    67,   869,     3,   846,
       5,   508,    66,     0,    66,     3,     4,    46,    66,    83,
      83,  1122,   633,     0,   846,   935,    66,    46,    85,    89,
    1131,   514,     3,    53,     5,   100,   675,    89,     3,    58,
      85,   722,    89,   910,    46,   912,    59,    66,    85,    66,
     689,    85,   200,   692,    83,   631,     3,   722,     5,   722,
     100,  1162,   537,    66,   722,    78,    79,    80,    88,   508,
      58,    66,    84,   405,   444,    84,   551,    27,    66,   952,
      34,    83,    66,    67,   232,    53,   234,   235,   236,     3,
     238,   239,    80,    58,   207,    66,   109,  1120,  1008,    83,
     575,    66,    67,   578,   785,   118,   508,   722,   747,   606,
     607,   608,   609,    30,   127,   474,    66,    67,   622,    66,
     785,    66,   785,   136,   722,  1074,  1149,   785,   646,    46,
     269,     7,   145,   246,   986,   248,   575,   250,   525,   252,
     755,   154,   290,   256,    58,   258,     7,    30,   759,   766,
     163,   766,    66,   523,    30,   769,   269,   755,   909,   172,
     799,   274,   801,    46,    84,   286,   274,   315,   766,    30,
     785,   610,    66,   286,   274,    66,   986,   987,   286,   930,
    1048,   406,   537,    66,    67,    83,   286,   785,     3,     4,
      88,   339,    30,   445,    73,   447,   551,   336,     3,   537,
      89,   645,   646,   316,   606,   607,   608,   609,    53,   274,
       3,     4,  1074,   551,    84,    25,   329,    27,    88,   367,
     575,   286,   370,   578,   178,   338,    89,   586,    66,    67,
     369,   344,   386,   346,   274,   973,    83,   575,    46,    84,
     578,    88,   467,    88,   982,    53,   286,   722,   386,   732,
     263,    66,   280,    58,   869,     3,     4,   761,    66,   537,
      75,    66,    67,    83,    89,    80,   405,    66,    88,   286,
     409,   869,    46,   551,   757,     3,     4,    66,   802,    53,
     804,   701,    75,    66,   723,    66,   682,    80,    66,    67,
      58,   286,   405,    66,   508,     9,    89,   575,    66,    67,
     578,   776,  1139,  1140,   452,    83,    83,   261,   262,    46,
     785,   950,    83,   461,   101,   286,    53,    88,   543,    88,
     433,     9,   435,   444,   437,    83,   439,    75,     3,     4,
      88,   444,    80,   547,    91,     1,   444,     3,     4,   286,
     453,    89,   701,    89,   444,   484,    84,    75,   562,   563,
      88,    84,    80,     7,    84,   994,    83,   840,    88,   507,
      84,    89,   516,    83,    88,   513,     7,   722,   396,    66,
     874,    46,    66,     5,     6,     7,   735,    85,   516,   444,
      12,    13,    14,    58,   722,    66,    67,    76,    77,    78,
      85,    66,   606,   607,   608,   609,    85,    84,    30,   769,
     539,    88,    83,   542,   444,    80,   519,    84,    85,    75,
     523,   519,   525,    46,    80,   523,    84,   525,    83,   519,
      88,   776,   570,   523,    84,   525,    83,   444,    88,    84,
     785,    83,     5,     6,     7,    56,    57,   537,   776,    12,
      13,    14,    46,   976,   722,   978,   400,   785,   972,   444,
      71,   551,    84,     9,   519,    83,   974,   764,   523,  1074,
     525,    32,   575,   417,   418,   983,   579,   575,   581,   683,
     583,   685,   537,   444,    83,   575,  1074,    66,   578,   519,
      83,   268,    89,   523,   271,   525,   551,   794,   275,    71,
    1129,  1130,    76,    77,    78,     9,    84,   444,   776,   886,
      88,    85,   519,   531,   770,   771,   523,   785,    83,   896,
     575,    84,    15,   578,    17,    18,    19,    20,    51,    52,
     537,  1068,    90,  1070,   519,   553,   554,    84,   523,   973,
     974,    88,  1036,    27,   551,   575,    30,   803,   982,   983,
      84,   654,   537,   656,    88,   658,    84,   660,   519,    43,
      88,   699,   523,     3,     4,    84,   551,    43,   575,    66,
      67,   578,     5,     6,     7,    76,    77,    78,    84,    12,
      13,    14,   519,  1048,    85,    75,   523,    58,    59,    60,
     575,   606,   607,   578,   609,     3,     4,    30,    43,   702,
      84,   704,   740,   706,    88,   708,    88,   710,    83,   712,
      84,   714,    10,   716,   575,     6,     7,   755,    58,   722,
      88,    12,    13,    14,   722,    46,   755,   645,   646,  1145,
       3,     4,   722,    83,  1020,    75,    66,    67,   575,    30,
      80,  1157,    84,    85,   755,    83,   423,   424,    66,    67,
      58,    84,   755,   430,   869,   859,   953,   755,    66,    67,
      66,    67,    46,   766,    83,   755,   769,   722,   766,   446,
      83,   769,    80,    46,    66,    67,   766,   219,   220,   769,
     417,   418,   785,   627,   822,    58,   776,   785,     3,     4,
     828,    90,   722,    66,    83,   785,   952,     5,     6,     7,
     755,   973,   974,  1048,    12,    13,    14,    80,   846,   913,
      89,   766,   916,   857,   769,   722,   854,   846,    83,    83,
    1048,   776,    30,    71,   853,   755,    71,    90,   856,   857,
     785,    90,    43,     5,     6,     7,   766,   722,    85,   769,
      12,    13,    14,     5,     6,     7,    83,    85,   755,   526,
      12,    13,    14,     3,     4,   785,    85,    83,   869,   766,
      75,   722,   769,   781,   782,    80,   869,    89,    30,   776,
     755,   869,    46,    76,    77,    78,    84,     1,   785,   869,
    1048,   766,    85,   886,   769,   722,  1042,    85,   886,    83,
      83,   776,   895,   896,   755,   813,   886,    84,   896,  1055,
     785,    83,     5,     6,     7,   766,   896,    90,   769,    12,
      13,    14,    84,   207,   869,    90,    66,   946,   755,    84,
     764,    84,    84,    27,   785,    75,    85,  1031,    88,   766,
      80,   886,   769,    88,    88,    84,    84,   781,   782,   869,
      83,   896,    56,    57,    58,    59,    60,    83,   785,    83,
     794,    46,     1,    90,    71,     4,   886,     6,     7,     3,
      83,   805,   869,    12,    13,    14,   896,    27,    89,   813,
      30,   648,   890,   891,    85,    46,  1080,    46,    85,    28,
      88,    30,    31,    43,   869,     6,     7,  1016,     5,     6,
       7,    12,    13,    14,    46,    12,    13,    14,    46,  1028,
      84,    84,     7,    84,    53,  1034,    66,    67,   869,    30,
      84,    46,  1116,  1117,    71,    88,   693,   694,   441,   442,
     697,    84,   316,    84,    84,    66,    75,    66,    88,    16,
      85,    80,   869,    71,    85,   329,    46,    84,    66,     5,
       6,     7,  1071,  1072,   338,  1074,    12,    13,    14,    17,
     344,    66,   346,     6,     7,   973,   974,    66,  1048,    12,
      13,    14,    84,  1074,   982,   983,    84,    84,   986,   987,
      83,  1074,    83,  1111,    71,    83,  1074,    83,   981,     3,
       4,     5,     6,     7,  1074,    84,    66,  1005,    88,    90,
      84,  1120,    84,  1048,    83,  1124,   519,     9,    84,    66,
      83,    83,   514,    35,    36,    37,    38,    84,   413,   953,
     551,    43,    44,    45,    46,     5,     6,     7,   551,  1074,
    1149,  1150,    12,    13,    14,  1043,  1044,  1045,   555,   973,
     974,   400,   809,   513,   800,   933,   572,   836,   982,   983,
      30,  1048,   986,   987,  1074,     5,     6,     7,   327,   328,
     973,    75,    12,    13,    14,   913,    80,   444,  1078,   453,
     916,  1005,   452,  1048,   343,     6,     7,  1074,   570,   348,
     349,    12,    13,    14,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   509,   820,  1128,  1074,
       5,     6,     7,    39,    40,    41,    42,    12,    13,    14,
    1080,    47,    48,    49,    50,   628,   629,   663,   648,  1126,
     887,   578,   889,  1074,   578,   892,   638,   771,   641,   642,
     897,   898,  1042,   900,    35,    36,    37,    38,   631,   765,
     722,  1005,    43,    44,    45,    46,    -1,  1074,   915,   662,
     663,   918,   701,   920,   921,    52,    53,    54,    55,    56,
      57,    58,    59,    60,   677,   678,    39,    40,    41,    42,
     574,     5,     6,     7,    47,    48,    49,    50,    12,    13,
      14,     1,   574,   735,     4,     5,     6,     7,   840,   474,
      -1,    -1,    12,    13,    14,   579,    30,   581,    -1,   583,
      -1,    -1,    -1,    -1,    -1,   718,    -1,    27,    28,   976,
      30,   978,     5,     6,     7,    -1,    -1,   486,   487,    12,
      13,    14,    -1,    43,   246,   247,   248,   249,   995,    -1,
      -1,    -1,   999,    53,     5,     6,     7,    30,    -1,    -1,
      -1,    12,    13,    14,    -1,     1,    66,    67,     4,     5,
       6,     7,    -1,   766,    -1,    75,    12,    13,    14,    30,
      80,    -1,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,
      -1,    27,    28,    -1,    30,    54,    55,    56,    57,    58,
      59,    60,  1049,  1050,    -1,  1052,    -1,    43,    -1,    -1,
    1057,    -1,  1059,    -1,    -1,    -1,    -1,    53,    -1,  1066,
     569,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      66,    67,    -1,   582,   250,   251,   252,   253,    -1,    75,
      -1,    -1,    -1,    -1,    80,    -1,    -1,   596,    84,    -1,
      -1,    -1,    88,    89,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,   246,   247,   248,   249,   862,
     863,    -1,    -1,    -1,    -1,     1,    -1,    -1,     4,     5,
       6,     7,    -1,    -1,    10,    -1,    12,    13,    14,    61,
      62,    -1,    -1,    65,    66,    67,    68,   250,   251,   252,
     253,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,   902,
     903,    -1,     1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    -1,    11,    12,    13,    14,    -1,    53,    -1,    -1,
     679,   433,   434,   435,   436,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    37,    75,
      -1,    -1,    -1,    42,    80,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    51,    89,    53,    -1,    -1,    56,    57,    58,
      10,    -1,    61,    62,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,   731,    72,    -1,    74,    75,    -1,    -1,    -1,
      79,    80,    -1,    -1,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,   437,   438,   439,   440,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   800,   433,   434,   435,   436,    27,    28,    -1,    30,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    43,    -1,    -1,   824,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,   437,   438,   439,   440,   837,    -1,
      -1,    -1,    -1,    -1,    -1,   844,    -1,    -1,    -1,    -1,
     849,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,     1,
      -1,    -1,     4,     5,     6,     7,    -1,    -1,    -1,   878,
      12,    13,    14,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    28,    -1,    30,    -1,
      -1,    -1,   654,   655,    -1,    -1,   658,   659,    -1,    -1,
     909,    -1,    -1,    -1,    -1,   914,    -1,     4,   917,     6,
       7,    53,    -1,    -1,    -1,    12,    13,    14,    -1,    -1,
      -1,   930,    -1,    -1,   933,    -1,   935,    -1,    -1,    -1,
      -1,    28,    -1,    75,    -1,    -1,    -1,    -1,    80,    -1,
     702,   703,   704,   705,    -1,    -1,    -1,    89,   710,   711,
     712,   713,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,   971,     1,    -1,    -1,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    14,    -1,    75,    -1,
     656,   657,    -1,    80,   660,   661,    -1,   996,    -1,    -1,
      28,  1000,    30,    -1,    -1,    -1,    -1,    -1,    -1,  1008,
      -1,    -1,  1011,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,   654,   655,    53,    -1,   658,   659,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     706,   707,   708,   709,    -1,    -1,    -1,    75,   714,   715,
     716,   717,    80,   656,   657,    -1,    -1,   660,   661,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   702,   703,   704,   705,    -1,    -1,    -1,    -1,   710,
     711,   712,   713,    -1,    -1,    43,    44,    45,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,   706,   707,   708,   709,    -1,    -1,    -1,
      -1,   714,   715,   716,   717,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    13,    14,    15,
      88,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    51,    -1,    53,    -1,    -1,
      56,    57,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,
      66,    67,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,
      -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    84,    85,
      86,    87,    -1,    89,     1,    91,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    51,    -1,    53,    -1,    -1,    56,
      57,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,    -1,
      -1,    -1,    79,    80,    -1,    -1,    -1,    84,    -1,    86,
      87,    -1,    89,     1,    91,     3,     4,    -1,    -1,    -1,
       8,     9,    -1,    11,    -1,    -1,    -1,    15,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    29,    -1,    31,    -1,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    -1,    51,    -1,    -1,    -1,    -1,    56,    57,
      58,    -1,    -1,    61,    62,    -1,    -1,    -1,    66,    67,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    -1,    -1,
      -1,    79,    80,    -1,    -1,    -1,    84,    -1,    86,    87,
      -1,    89,     1,    91,     3,     4,    -1,    -1,    -1,     8,
       9,    -1,    11,    -1,    -1,    -1,    15,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      29,    -1,    31,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    56,    57,    58,
      -1,    -1,    61,    62,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,    -1,    72,    -1,    74,    75,    -1,    -1,    -1,
      79,    80,    -1,    -1,    -1,    84,    -1,    86,    87,    -1,
      89,     1,    91,     3,     4,    -1,    -1,    -1,     8,     9,
      45,    11,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    -1,    -1,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,
      -1,    61,    62,    -1,    -1,    65,    66,    67,    -1,    -1,
      -1,    -1,    72,    -1,    74,    75,    -1,    -1,    -1,    79,
      80,    -1,    -1,    -1,    -1,    85,    86,    87,    -1,    89,
       1,    91,     3,     4,    -1,    -1,    -1,     8,     9,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,    -1,
      61,    62,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,
      -1,    72,    -1,    74,    75,    -1,    -1,    -1,    79,    80,
      -1,    -1,    -1,    -1,    85,    86,    87,     1,    89,     3,
      91,    -1,    -1,    -1,     8,     9,    -1,    11,    -1,    -1,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,
      34,    35,    36,    37,    28,    -1,    30,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    56,    57,    58,    -1,    -1,    61,    62,    53,
      -1,    65,    66,    67,     1,    -1,     3,    -1,    72,    -1,
      74,     8,     9,    -1,    11,    79,    -1,    -1,    -1,    -1,
      -1,    75,    86,    87,    -1,    89,    80,    91,    -1,    -1,
      84,    -1,    29,    -1,    31,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    -1,    56,
      57,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,    66,
      67,     1,    -1,     3,    -1,    72,    -1,    74,     8,     9,
      -1,    11,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    -1,    -1,    -1,    -1,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,
      -1,    61,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,
      -1,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    53,    -1,    -1,    56,    57,    58,    -1,    -1,
      61,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
      -1,    72,    -1,    74,    75,    -1,    -1,    -1,    79,    80,
      -1,    -1,    -1,    84,    -1,    86,    87,    -1,    89,    -1,
      91,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,
      -1,    53,    -1,    -1,    56,    57,    58,    -1,    -1,    61,
      62,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    -1,
      72,    -1,    74,    75,     3,     4,    -1,    79,    80,     8,
       9,    -1,    11,    -1,    86,    87,    -1,    -1,    90,    91,
      -1,    -1,    21,    22,    23,    24,    25,    26,    27,    -1,
      29,    -1,    31,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    56,    57,    58,
      -1,    -1,    61,    62,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,    -1,    72,    -1,    74,    75,    -1,    -1,    -1,
      79,    80,    -1,    -1,    -1,    84,    -1,    86,    87,    -1,
      89,    -1,    91,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    51,    -1,    53,    -1,    -1,    56,    57,    58,    -1,
      -1,    61,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,
      -1,    -1,    72,    -1,    74,    75,    -1,    -1,    -1,    79,
      80,    -1,    -1,    -1,    -1,    -1,    86,    87,    -1,     3,
       4,    91,     6,     7,     8,     9,    -1,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    53,
      -1,    -1,    56,    57,    58,    -1,    -1,    61,    62,    -1,
      -1,    -1,    66,    67,    -1,    -1,    -1,    -1,    72,    -1,
      74,    75,     3,    -1,     5,    79,    80,     8,     9,    -1,
      11,    -1,    86,    87,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,    -1,
      61,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,     3,
      -1,    72,    -1,    74,     8,     9,    -1,    11,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    90,
      91,    -1,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    56,    57,    58,    -1,    -1,    61,    62,    -1,
      -1,    -1,    66,    67,    -1,    -1,    -1,    -1,    72,    -1,
      74,    75,     3,    -1,    -1,    79,    -1,     8,     9,    -1,
      11,    -1,    86,    87,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,    -1,
      61,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,     3,
      -1,    72,    -1,    74,     8,     9,    -1,    11,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    90,
      91,    -1,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    56,    57,    58,    -1,    -1,    61,    62,    -1,
      -1,    -1,    66,    67,    -1,    -1,     3,    -1,    72,    -1,
      74,     8,     9,    -1,    11,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    -1,    -1,
      -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    -1,    56,
      57,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,    66,
      67,    -1,    -1,     3,    -1,    72,    -1,    74,     8,     9,
      -1,    11,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,
      -1,    61,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,
       3,    -1,    72,    -1,    74,     8,     9,    -1,    11,    79,
      -1,    -1,    -1,    -1,    84,    -1,    86,    87,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    29,    -1,    31,    -1,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    56,    57,    58,    -1,    -1,    61,    62,
      -1,    -1,    -1,    66,    67,    -1,    -1,     3,    -1,    72,
      -1,    74,     8,     9,    -1,    11,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      56,    57,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,
      66,    67,    -1,    -1,     3,    -1,    72,    -1,    74,     8,
       9,    -1,    11,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      29,    -1,    31,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    56,    57,    58,
      -1,    -1,    61,    62,    -1,    -1,    -1,    66,    67,    -1,
      -1,     3,    -1,    72,    -1,    74,     8,     9,    -1,    11,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    29,    -1,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,     1,
      42,    -1,     4,     5,     6,     7,    48,    -1,    -1,    51,
      12,    13,    14,    -1,    56,    57,    58,    -1,    -1,    61,
      62,    -1,    -1,    -1,    66,    67,    28,    -1,    -1,    -1,
      72,    -1,    74,    -1,    -1,    -1,    -1,    79,    -1,    30,
      -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    91,
      -1,    53,    43,    44,    45,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,    -1,
       3,     4,    -1,     6,     7,    -1,    -1,    89,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     1,    -1,    -1,
       4,    -1,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      14,    -1,    -1,    46,    -1,    -1,     1,    -1,    -1,     4,
      -1,     6,     7,    -1,    28,    -1,    30,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    28,    -1,    30,    -1,    80,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    78,    -1,    80,    -1,    -1,     1,    84,
      85,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,    28,    -1,    30,    31,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    -1,    30,    31,    -1,
      53,     1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    75,    56,    57,    58,    -1,    80,    28,    -1,
      30,    84,    85,    66,    -1,    -1,    69,    70,    71,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    -1,    53,    -1,    -1,    56,    57,    58,     1,
      -1,     3,     4,     5,     6,     7,    66,    -1,    -1,    -1,
      12,    13,    14,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    -1,    84,    -1,    28,     1,    30,     3,
       4,     5,     6,     7,    -1,    -1,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    28,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    66,    -1,     4,     5,     6,     7,
      -1,    -1,    10,    75,    12,    13,    14,    -1,    80,    53,
      -1,    -1,    84,    -1,     4,     5,     6,     7,    -1,    -1,
      28,    -1,    12,    13,    14,     4,     5,     6,     7,    -1,
      -1,    75,    -1,    12,    13,    14,    80,    -1,    28,    83,
      30,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    28,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    80,    -1,    53,    83,    -1,    -1,     4,     5,
       6,     7,    -1,    -1,    -1,    75,    12,    13,    14,    -1,
      80,    -1,    -1,    -1,    84,    -1,    75,    -1,    -1,    -1,
      -1,    80,    28,    -1,    30,    84,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,     4,     5,     6,     7,    53,    -1,    -1,
      28,    12,    13,    14,    -1,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    14,    -1,    28,    -1,    75,
      -1,    -1,    -1,    -1,    80,    53,    -1,    -1,    84,    28,
      -1,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    14,    53,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    80,    -1,    53,    28,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    84,    -1,    -1,    75,    -1,    -1,    -1,
      53,    80,    43,    44,    45,    84,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    -1,    75,    -1,    -1,     3,     4,    80,     6,     7,
      -1,    84,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,     6,     7,    -1,    -1,    46,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    80,    -1,    46,     3,     4,    -1,     6,     7,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    75,    -1,    -1,    -1,    -1,    80,    -1,
      -1,     3,     4,    -1,     6,     7,    -1,    -1,    46,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
       4,     5,     6,     7,    -1,    -1,    10,    75,    12,    13,
      14,    -1,    80,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    -1,     4,     5,
       6,     7,    -1,    -1,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,    53,
      -1,    -1,    28,    -1,     4,     5,     6,     7,     4,     5,
       6,     7,    12,    13,    14,    -1,    12,    13,    14,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    80,    53,    28,    -1,
      30,    -1,    28,    -1,    30,    -1,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    14,    -1,    -1,    75,
      -1,    -1,    -1,    53,    80,    -1,    -1,    53,    -1,    -1,
      28,    -1,    30,    -1,     4,     5,     6,     7,     4,     5,
       6,     7,    12,    13,    14,    75,    12,    13,    14,    75,
      80,    -1,    -1,    -1,    80,    53,    -1,    -1,    28,    -1,
      30,    -1,    28,    -1,    30,    -1,     4,    -1,     6,     7,
       4,    -1,     6,     7,    12,    13,    14,    75,    12,    13,
      14,    -1,    80,    53,    -1,    -1,    -1,    53,    -1,    -1,
      28,    -1,    30,    -1,    28,    -1,    30,    -1,     4,    -1,
       6,     7,    -1,    -1,    -1,    75,    12,    13,    14,    75,
      80,    -1,    -1,    -1,    80,    53,    -1,    -1,    -1,    53,
      -1,    -1,    28,    -1,    30,    -1,     4,     5,     6,     7,
       4,     5,     6,     7,    12,    13,    14,    75,    12,    13,
      14,    75,    80,    -1,    -1,    -1,    80,    53,    -1,    -1,
      28,    -1,    -1,    -1,    28,    -1,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    14,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    80,    53,    -1,    -1,    -1,    53,
      28,    -1,    -1,    -1,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    14,    -1,    -1,    75,    -1,    -1,
      -1,    75,    80,    -1,    -1,    53,    80,    -1,    28,    -1,
       4,     5,     6,     7,     4,    -1,     6,     7,    12,    13,
      14,    -1,    12,    13,    14,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    80,    53,    28,    43,    44,    45,    28,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    -1,    75,    -1,    -1,    -1,    53,
      80,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    75,    -1,    -1,    -1,    75,    80,    43,    44,    45,
      80,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    43,    44,    45,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,    93,    94,    95,     0,    96,     1,     4,     5,     6,
       7,    12,    13,    14,    27,    28,    30,    31,    53,    56,
      57,    69,    70,    71,    75,    79,    80,    81,    82,    84,
      97,    98,    99,   114,   131,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   157,   159,   160,   161,   162,   163,   172,
     173,   199,   200,   201,   202,   207,   292,   293,   295,   296,
     297,   307,   310,   317,   318,    97,    84,    85,   172,   172,
     172,    66,    66,     3,     4,    75,    80,   106,   294,   106,
     106,   309,   310,   106,   294,   309,   294,   106,    66,     3,
      58,    66,   165,   169,   198,     5,     7,   159,   160,   172,
       5,     7,   159,   160,     5,     7,   159,   160,   172,     5,
       7,   159,   160,     5,     7,   161,   162,   172,     5,     7,
     161,   162,     5,     7,   161,   162,   172,     5,     7,   161,
     162,     5,     7,   159,   160,   172,     5,     7,   159,   160,
       5,     7,   159,   160,   172,     5,     7,   159,   160,     5,
       7,   161,   162,   172,     5,     7,   161,   162,     5,     7,
     161,   162,   172,     5,     7,   161,   162,   131,   131,    84,
     173,    89,   106,    89,   106,    89,   106,    97,   319,     3,
       8,     9,    11,    29,    33,    34,    35,    36,    37,    42,
      48,    51,    56,    57,    58,    61,    62,    66,    67,    72,
      74,    79,    86,    87,    91,   107,   108,   110,   111,   112,
     113,   115,   116,   122,   124,   125,   246,   292,   349,   355,
     356,   357,    66,    53,    88,    46,    66,   309,    46,    66,
      89,   309,    84,    84,   106,   108,   134,   135,   136,   137,
     138,   139,   140,   141,   156,   219,   134,   135,   136,   137,
     155,   158,   171,   172,    84,    88,     1,    27,    66,    67,
     104,   166,   227,     4,    58,    66,    80,   164,   167,   193,
     194,   198,   165,   198,    73,   210,   211,    89,   210,    89,
     206,    89,     3,     4,     6,     7,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    46,    66,    75,    80,   330,
     339,   340,   341,   342,   343,   115,   115,    66,    66,    66,
     106,   115,     1,    89,   108,   219,   350,    66,    66,    66,
       9,   115,    83,    88,    66,   111,    66,   111,    43,    44,
      45,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    65,    66,    67,
      68,     9,    91,     1,    85,   235,   244,   115,     5,     6,
       7,   106,   174,   175,   176,   106,   106,   106,    89,   300,
     106,   106,   304,   308,    84,    83,   220,    83,   198,   198,
     132,   171,    66,   171,   287,     5,    58,    90,   108,   156,
       1,   126,   127,   128,   234,   253,   171,   158,   171,    84,
      88,     1,   100,   166,    66,   227,    84,     1,   102,    66,
      85,     1,    84,   134,   135,   136,   137,   138,   139,   140,
     141,   154,   155,   212,   292,   203,    85,   204,     1,   106,
     217,   218,   205,    66,   106,   219,   320,    88,   337,   341,
     343,    46,   116,   116,   219,    83,    83,    83,    75,   108,
     348,    46,   341,   352,   353,   354,   219,   106,    84,   116,
     219,   219,   116,   116,   119,   121,   118,   117,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     106,   109,   110,   108,   106,     9,    83,    32,   239,   240,
     241,    83,    83,    88,    66,   309,    83,   298,   322,   323,
      89,    83,   311,   313,   322,    58,    66,   221,   223,   224,
     225,   226,   227,    83,   169,   198,   124,   288,   108,   156,
      90,    90,     5,    58,    90,   108,    84,   105,   234,    10,
     127,   254,    43,   194,   194,   132,   126,   171,   287,   126,
      75,   171,   131,   131,    84,   212,   210,   171,   210,    43,
      88,   209,   217,   219,    83,    84,   331,    10,   338,    66,
     106,    88,    88,    88,    89,   115,   351,    46,    83,   341,
     354,    83,    83,    83,    83,   108,    46,   116,   116,    83,
      90,   106,   291,     1,   130,   228,   229,   230,   231,   232,
     233,   234,   245,   253,   257,   258,   241,    83,   175,     3,
     109,    89,   303,   309,   311,    71,    98,   131,   150,   151,
     317,   324,   327,   305,    76,    77,    78,    85,   312,     1,
      84,   154,   155,   314,    71,   158,   171,   277,    66,   227,
      83,     1,     3,    10,   134,   135,   138,   139,   142,   143,
     146,   147,   152,   153,   279,   282,   283,   285,   289,   290,
      90,   108,   108,    90,    90,   253,   129,   152,   153,   170,
      83,   167,   193,   101,    43,   103,    83,   213,   215,   253,
     214,   216,   253,    85,    85,   116,   218,    85,   209,    83,
     339,   340,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     234,   332,   333,   334,   321,   282,   283,   219,   219,   116,
     219,   123,    46,   341,   344,   345,   347,    46,   116,    84,
      88,   130,   257,   258,   130,   257,   258,   253,   257,   258,
     130,   257,   258,   234,    85,   254,    83,    88,    83,   301,
     322,   306,    85,   131,   131,   328,   325,   327,   311,   313,
     131,   131,    84,   224,   225,   223,   278,   171,   277,    83,
     131,   286,   286,    83,    84,    88,    83,    88,    90,    90,
     254,    84,   131,    84,   131,     1,    89,   116,   177,   253,
     168,   253,    88,   254,    88,   254,   171,   171,   171,    85,
     106,   337,    84,   131,    84,   334,   234,     1,    89,   242,
     243,   247,    83,    83,    88,    83,     1,     3,    65,    89,
     106,   116,   179,   180,   181,   183,   185,   186,   110,   346,
      46,    90,   341,   347,   120,   106,   254,   236,     4,    21,
      22,    23,    24,    25,    26,    27,    75,    80,    84,   106,
     108,   133,   150,   151,   157,   237,   247,   269,   270,   292,
     110,   311,    71,   322,   299,   330,    98,    85,    46,   193,
     315,   316,   315,    83,   279,     4,    58,    66,    80,   195,
     196,   197,   198,   222,   223,   224,    58,    66,   198,   222,
     280,    10,   150,   151,   284,     3,   242,   164,   165,   178,
     254,   177,   254,   132,    46,   193,   132,    46,   198,   171,
     195,   198,   222,   335,   336,   247,   244,   106,   116,   106,
     184,    46,    85,    88,   208,    43,   186,   183,   346,   116,
     116,    46,    84,    84,    84,   108,    58,   106,     7,   271,
     253,    84,   131,   131,    84,    15,    17,    18,    19,    20,
     248,   249,   251,   259,   133,    83,    85,    71,   322,   329,
     116,    46,    88,   158,   171,   171,    66,   227,    66,   227,
     171,   172,   158,   171,   171,   171,   131,   131,    84,    84,
     179,   242,   242,   215,   253,   116,    46,   171,   216,   116,
      46,   171,   171,   171,    84,    88,    83,   179,   182,   181,
     183,    10,    46,    84,   108,    84,    66,   254,   164,   187,
     193,   165,   190,   198,   250,   261,   252,   263,    66,    16,
       1,   237,   256,     1,    66,   238,   302,    71,     1,    84,
     326,   116,   132,   196,   197,   197,   287,   287,   281,   195,
     198,   222,   198,   222,    85,   254,   171,   116,   171,   116,
     336,    85,   183,   116,    84,   108,    46,    84,   188,    84,
     191,    66,    66,   256,    66,   108,     1,   260,   255,   257,
     258,   108,   322,   316,    83,   279,   171,   171,   171,   171,
     171,    46,    46,    83,   171,   126,   126,   108,   108,    17,
     108,   133,   268,   272,    83,   256,   238,   255,    83,    71,
       9,    67,   273,   274,   275,    84,   189,   192,    83,    83,
     264,    84,   267,    84,    66,   106,    46,    83,    88,   253,
     253,   262,   272,   256,   108,    90,   273,    84,   275,   254,
     254,   256,    84,    83,     9,    46,    83,   247,   247,   265,
      66,   124,   276,    84,   272,   108,    83,    88,    83,    83,
      84,   124,   266,   256
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



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



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
        case 2:
#line 308 "objc-parse.y"
    { if (pedantic)
		    pedwarn ("ISO C forbids an empty source file");
		  finish_file ();
		;}
    break;

  case 3:
#line 313 "objc-parse.y"
    {
		  /* In case there were missing closebraces,
		     get us back to the global binding level.  */
		  while (! global_bindings_p ())
		    poplevel (0, 0, 0);
                  finish_file ();
		;}
    break;

  case 4:
#line 327 "objc-parse.y"
    {yyval.ttype = NULL_TREE; ;}
    break;

  case 6:
#line 328 "objc-parse.y"
    {yyval.ttype = NULL_TREE; ggc_collect(); ;}
    break;

  case 11:
#line 336 "objc-parse.y"
    { STRIP_NOPS (yyvsp[-2].ttype);
		  if ((TREE_CODE (yyvsp[-2].ttype) == ADDR_EXPR
		       && TREE_CODE (TREE_OPERAND (yyvsp[-2].ttype, 0)) == STRING_CST)
		      || TREE_CODE (yyvsp[-2].ttype) == STRING_CST)
		    assemble_asm (yyvsp[-2].ttype);
		  else
		    error ("argument of `asm' is not a constant string"); ;}
    break;

  case 12:
#line 344 "objc-parse.y"
    { RESTORE_WARN_FLAGS (yyvsp[-1].ttype); ;}
    break;

  case 13:
#line 349 "objc-parse.y"
    { if (pedantic)
		    error ("ISO C forbids data definition with no type or storage class");
		  else if (!flag_traditional)
		    warning ("data definition has no type or storage class"); 

		  POP_DECLSPEC_STACK; ;}
    break;

  case 14:
#line 356 "objc-parse.y"
    { POP_DECLSPEC_STACK; ;}
    break;

  case 15:
#line 358 "objc-parse.y"
    { POP_DECLSPEC_STACK; ;}
    break;

  case 16:
#line 360 "objc-parse.y"
    { shadow_tag (yyvsp[-1].ttype); ;}
    break;

  case 19:
#line 364 "objc-parse.y"
    { if (pedantic)
		    pedwarn ("ISO C does not allow extra `;' outside of a function"); ;}
    break;

  case 20:
#line 370 "objc-parse.y"
    { if (! start_function (current_declspecs, yyvsp[0].ttype,
					all_prefix_attributes))
		    YYERROR1;
		;}
    break;

  case 21:
#line 375 "objc-parse.y"
    { store_parm_decls (); ;}
    break;

  case 22:
#line 377 "objc-parse.y"
    { DECL_SOURCE_FILE (current_function_decl) = yyvsp[-2].filename;
		  DECL_SOURCE_LINE (current_function_decl) = yyvsp[-1].lineno;
		  finish_function (0, 1); 
		  POP_DECLSPEC_STACK; ;}
    break;

  case 23:
#line 382 "objc-parse.y"
    { POP_DECLSPEC_STACK; ;}
    break;

  case 24:
#line 384 "objc-parse.y"
    { if (! start_function (current_declspecs, yyvsp[0].ttype,
					all_prefix_attributes))
		    YYERROR1;
		;}
    break;

  case 25:
#line 389 "objc-parse.y"
    { store_parm_decls (); ;}
    break;

  case 26:
#line 391 "objc-parse.y"
    { DECL_SOURCE_FILE (current_function_decl) = yyvsp[-2].filename;
		  DECL_SOURCE_LINE (current_function_decl) = yyvsp[-1].lineno;
		  finish_function (0, 1); 
		  POP_DECLSPEC_STACK; ;}
    break;

  case 27:
#line 396 "objc-parse.y"
    { POP_DECLSPEC_STACK; ;}
    break;

  case 28:
#line 398 "objc-parse.y"
    { if (! start_function (NULL_TREE, yyvsp[0].ttype,
					all_prefix_attributes))
		    YYERROR1;
		;}
    break;

  case 29:
#line 403 "objc-parse.y"
    { store_parm_decls (); ;}
    break;

  case 30:
#line 405 "objc-parse.y"
    { DECL_SOURCE_FILE (current_function_decl) = yyvsp[-2].filename;
		  DECL_SOURCE_LINE (current_function_decl) = yyvsp[-1].lineno;
		  finish_function (0, 1); 
		  POP_DECLSPEC_STACK; ;}
    break;

  case 31:
#line 410 "objc-parse.y"
    { POP_DECLSPEC_STACK; ;}
    break;

  case 36:
#line 421 "objc-parse.y"
    { yyval.code = ADDR_EXPR; ;}
    break;

  case 37:
#line 423 "objc-parse.y"
    { yyval.code = NEGATE_EXPR; ;}
    break;

  case 38:
#line 425 "objc-parse.y"
    { yyval.code = CONVERT_EXPR;
		;}
    break;

  case 39:
#line 428 "objc-parse.y"
    { yyval.code = PREINCREMENT_EXPR; ;}
    break;

  case 40:
#line 430 "objc-parse.y"
    { yyval.code = PREDECREMENT_EXPR; ;}
    break;

  case 41:
#line 432 "objc-parse.y"
    { yyval.code = BIT_NOT_EXPR; ;}
    break;

  case 42:
#line 434 "objc-parse.y"
    { yyval.code = TRUTH_NOT_EXPR; ;}
    break;

  case 43:
#line 438 "objc-parse.y"
    { yyval.ttype = build_compound_expr (yyvsp[0].ttype); ;}
    break;

  case 44:
#line 443 "objc-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 46:
#line 449 "objc-parse.y"
    { yyval.ttype = build_tree_list (NULL_TREE, yyvsp[0].ttype); ;}
    break;

  case 47:
#line 451 "objc-parse.y"
    { chainon (yyvsp[-2].ttype, build_tree_list (NULL_TREE, yyvsp[0].ttype)); ;}
    break;

  case 49:
#line 457 "objc-parse.y"
    { yyval.ttype = build_indirect_ref (yyvsp[0].ttype, "unary *"); ;}
    break;

  case 50:
#line 460 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype;
		  RESTORE_WARN_FLAGS (yyvsp[-1].ttype); ;}
    break;

  case 51:
#line 463 "objc-parse.y"
    { yyval.ttype = build_unary_op (yyvsp[-1].code, yyvsp[0].ttype, 0);
		  overflow_warning (yyval.ttype); ;}
    break;

  case 52:
#line 467 "objc-parse.y"
    { yyval.ttype = finish_label_address_expr (yyvsp[0].ttype); ;}
    break;

  case 53:
#line 484 "objc-parse.y"
    { skip_evaluation--;
		  if (TREE_CODE (yyvsp[0].ttype) == COMPONENT_REF
		      && DECL_C_BIT_FIELD (TREE_OPERAND (yyvsp[0].ttype, 1)))
		    error ("`sizeof' applied to a bit-field");
		  yyval.ttype = c_sizeof (TREE_TYPE (yyvsp[0].ttype)); ;}
    break;

  case 54:
#line 490 "objc-parse.y"
    { skip_evaluation--;
		  yyval.ttype = c_sizeof (groktypename (yyvsp[-1].ttype)); ;}
    break;

  case 55:
#line 493 "objc-parse.y"
    { skip_evaluation--;
		  yyval.ttype = c_alignof_expr (yyvsp[0].ttype); ;}
    break;

  case 56:
#line 496 "objc-parse.y"
    { skip_evaluation--;
		  yyval.ttype = c_alignof (groktypename (yyvsp[-1].ttype)); ;}
    break;

  case 57:
#line 499 "objc-parse.y"
    { yyval.ttype = build_unary_op (REALPART_EXPR, yyvsp[0].ttype, 0); ;}
    break;

  case 58:
#line 501 "objc-parse.y"
    { yyval.ttype = build_unary_op (IMAGPART_EXPR, yyvsp[0].ttype, 0); ;}
    break;

  case 59:
#line 505 "objc-parse.y"
    { skip_evaluation++; ;}
    break;

  case 60:
#line 509 "objc-parse.y"
    { skip_evaluation++; ;}
    break;

  case 61:
#line 513 "objc-parse.y"
    { skip_evaluation++; ;}
    break;

  case 63:
#line 519 "objc-parse.y"
    { yyval.ttype = c_cast_expr (yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 65:
#line 525 "objc-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 66:
#line 527 "objc-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 67:
#line 529 "objc-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 68:
#line 531 "objc-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 69:
#line 533 "objc-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 70:
#line 535 "objc-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 71:
#line 537 "objc-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 72:
#line 539 "objc-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 73:
#line 541 "objc-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 74:
#line 543 "objc-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 75:
#line 545 "objc-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 76:
#line 547 "objc-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 77:
#line 549 "objc-parse.y"
    { yyvsp[-1].ttype = truthvalue_conversion (default_conversion (yyvsp[-1].ttype));
		  skip_evaluation += yyvsp[-1].ttype == boolean_false_node; ;}
    break;

  case 78:
#line 552 "objc-parse.y"
    { skip_evaluation -= yyvsp[-3].ttype == boolean_false_node;
		  yyval.ttype = parser_build_binary_op (TRUTH_ANDIF_EXPR, yyvsp[-3].ttype, yyvsp[0].ttype); ;}
    break;

  case 79:
#line 555 "objc-parse.y"
    { yyvsp[-1].ttype = truthvalue_conversion (default_conversion (yyvsp[-1].ttype));
		  skip_evaluation += yyvsp[-1].ttype == boolean_true_node; ;}
    break;

  case 80:
#line 558 "objc-parse.y"
    { skip_evaluation -= yyvsp[-3].ttype == boolean_true_node;
		  yyval.ttype = parser_build_binary_op (TRUTH_ORIF_EXPR, yyvsp[-3].ttype, yyvsp[0].ttype); ;}
    break;

  case 81:
#line 561 "objc-parse.y"
    { yyvsp[-1].ttype = truthvalue_conversion (default_conversion (yyvsp[-1].ttype));
		  skip_evaluation += yyvsp[-1].ttype == boolean_false_node; ;}
    break;

  case 82:
#line 564 "objc-parse.y"
    { skip_evaluation += ((yyvsp[-4].ttype == boolean_true_node)
				      - (yyvsp[-4].ttype == boolean_false_node)); ;}
    break;

  case 83:
#line 567 "objc-parse.y"
    { skip_evaluation -= yyvsp[-6].ttype == boolean_true_node;
		  yyval.ttype = build_conditional_expr (yyvsp[-6].ttype, yyvsp[-3].ttype, yyvsp[0].ttype); ;}
    break;

  case 84:
#line 570 "objc-parse.y"
    { if (pedantic)
		    pedwarn ("ISO C forbids omitting the middle term of a ?: expression");
		  /* Make sure first operand is calculated only once.  */
		  yyvsp[0].ttype = save_expr (yyvsp[-1].ttype);
		  yyvsp[-1].ttype = truthvalue_conversion (default_conversion (yyvsp[0].ttype));
		  skip_evaluation += yyvsp[-1].ttype == boolean_true_node; ;}
    break;

  case 85:
#line 577 "objc-parse.y"
    { skip_evaluation -= yyvsp[-4].ttype == boolean_true_node;
		  yyval.ttype = build_conditional_expr (yyvsp[-4].ttype, yyvsp[-3].ttype, yyvsp[0].ttype); ;}
    break;

  case 86:
#line 580 "objc-parse.y"
    { char class;
		  yyval.ttype = build_modify_expr (yyvsp[-2].ttype, NOP_EXPR, yyvsp[0].ttype);
		  class = TREE_CODE_CLASS (TREE_CODE (yyval.ttype));
		  if (IS_EXPR_CODE_CLASS (class))
		    C_SET_EXP_ORIGINAL_CODE (yyval.ttype, MODIFY_EXPR);
		;}
    break;

  case 87:
#line 587 "objc-parse.y"
    { char class;
		  yyval.ttype = build_modify_expr (yyvsp[-2].ttype, yyvsp[-1].code, yyvsp[0].ttype);
		  /* This inhibits warnings in truthvalue_conversion.  */
		  class = TREE_CODE_CLASS (TREE_CODE (yyval.ttype));
		  if (IS_EXPR_CODE_CLASS (class))
		    C_SET_EXP_ORIGINAL_CODE (yyval.ttype, ERROR_MARK);
		;}
    break;

  case 88:
#line 598 "objc-parse.y"
    {
		  if (yychar == YYEMPTY)
		    yychar = YYLEX;
		  yyval.ttype = build_external_ref (yyvsp[0].ttype, yychar == '(');
		;}
    break;

  case 90:
#line 605 "objc-parse.y"
    { yyval.ttype = combine_strings (yyvsp[0].ttype); ;}
    break;

  case 91:
#line 607 "objc-parse.y"
    { yyval.ttype = fname_decl (C_RID_CODE (yyval.ttype), yyval.ttype); ;}
    break;

  case 92:
#line 609 "objc-parse.y"
    { start_init (NULL_TREE, NULL, 0);
		  yyvsp[-2].ttype = groktypename (yyvsp[-2].ttype);
		  really_start_incremental_init (yyvsp[-2].ttype); ;}
    break;

  case 93:
#line 613 "objc-parse.y"
    { tree constructor = pop_init_level (0);
		  tree type = yyvsp[-5].ttype;
		  finish_init ();

		  if (pedantic && ! flag_isoc99)
		    pedwarn ("ISO C89 forbids compound literals");
		  yyval.ttype = build_compound_literal (type, constructor);
		;}
    break;

  case 94:
#line 622 "objc-parse.y"
    { char class = TREE_CODE_CLASS (TREE_CODE (yyvsp[-1].ttype));
		  if (IS_EXPR_CODE_CLASS (class))
		    C_SET_EXP_ORIGINAL_CODE (yyvsp[-1].ttype, ERROR_MARK);
		  yyval.ttype = yyvsp[-1].ttype; ;}
    break;

  case 95:
#line 627 "objc-parse.y"
    { yyval.ttype = error_mark_node; ;}
    break;

  case 96:
#line 629 "objc-parse.y"
    { tree saved_last_tree;

		   if (pedantic)
		     pedwarn ("ISO C forbids braced-groups within expressions");
		  pop_label_level ();

		  saved_last_tree = COMPOUND_BODY (yyvsp[-2].ttype);
		  RECHAIN_STMTS (yyvsp[-2].ttype, COMPOUND_BODY (yyvsp[-2].ttype));
		  last_tree = saved_last_tree;
		  TREE_CHAIN (last_tree) = NULL_TREE;
		  if (!last_expr_type)
		    last_expr_type = void_type_node;
		  yyval.ttype = build1 (STMT_EXPR, last_expr_type, yyvsp[-2].ttype);
		  TREE_SIDE_EFFECTS (yyval.ttype) = 1;
		;}
    break;

  case 97:
#line 645 "objc-parse.y"
    {
		  pop_label_level ();
		  last_tree = COMPOUND_BODY (yyvsp[-2].ttype);
		  TREE_CHAIN (last_tree) = NULL_TREE;
		  yyval.ttype = error_mark_node;
		;}
    break;

  case 98:
#line 652 "objc-parse.y"
    { yyval.ttype = build_function_call (yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 99:
#line 654 "objc-parse.y"
    { yyval.ttype = build_va_arg (yyvsp[-3].ttype, groktypename (yyvsp[-1].ttype)); ;}
    break;

  case 100:
#line 657 "objc-parse.y"
    {
                  tree c;

                  c = fold (yyvsp[-5].ttype);
                  STRIP_NOPS (c);
                  if (TREE_CODE (c) != INTEGER_CST)
                    error ("first argument to __builtin_choose_expr not a constant");
                  yyval.ttype = integer_zerop (c) ? yyvsp[-1].ttype : yyvsp[-3].ttype;
		;}
    break;

  case 101:
#line 667 "objc-parse.y"
    {
		  tree e1, e2;

		  e1 = TYPE_MAIN_VARIANT (groktypename (yyvsp[-3].ttype));
		  e2 = TYPE_MAIN_VARIANT (groktypename (yyvsp[-1].ttype));

		  yyval.ttype = comptypes (e1, e2)
		    ? build_int_2 (1, 0) : build_int_2 (0, 0);
		;}
    break;

  case 102:
#line 677 "objc-parse.y"
    { yyval.ttype = build_array_ref (yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 103:
#line 679 "objc-parse.y"
    {
		    if (!is_public (yyvsp[-2].ttype, yyvsp[0].ttype))
		      yyval.ttype = error_mark_node;
		    else
		      yyval.ttype = build_component_ref (yyvsp[-2].ttype, yyvsp[0].ttype);
		;}
    break;

  case 104:
#line 686 "objc-parse.y"
    {
                  tree expr = build_indirect_ref (yyvsp[-2].ttype, "->");

		      if (!is_public (expr, yyvsp[0].ttype))
			yyval.ttype = error_mark_node;
		      else
			yyval.ttype = build_component_ref (expr, yyvsp[0].ttype);
		;}
    break;

  case 105:
#line 695 "objc-parse.y"
    { yyval.ttype = build_unary_op (POSTINCREMENT_EXPR, yyvsp[-1].ttype, 0); ;}
    break;

  case 106:
#line 697 "objc-parse.y"
    { yyval.ttype = build_unary_op (POSTDECREMENT_EXPR, yyvsp[-1].ttype, 0); ;}
    break;

  case 107:
#line 699 "objc-parse.y"
    { yyval.ttype = build_message_expr (yyvsp[0].ttype); ;}
    break;

  case 108:
#line 701 "objc-parse.y"
    { yyval.ttype = build_selector_expr (yyvsp[0].ttype); ;}
    break;

  case 109:
#line 703 "objc-parse.y"
    { yyval.ttype = build_protocol_expr (yyvsp[0].ttype); ;}
    break;

  case 110:
#line 705 "objc-parse.y"
    { yyval.ttype = build_encode_expr (yyvsp[0].ttype); ;}
    break;

  case 111:
#line 707 "objc-parse.y"
    { yyval.ttype = build_objc_string_object (yyvsp[0].ttype); ;}
    break;

  case 113:
#line 714 "objc-parse.y"
    {
                  yyval.ttype = chainon (yyvsp[-1].ttype, yyvsp[0].ttype);
		;}
    break;

  case 114:
#line 723 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 115:
#line 725 "objc-parse.y"
    { yyval.ttype = chainon (yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 118:
#line 733 "objc-parse.y"
    { c_mark_varargs ();
		  if (pedantic)
		    pedwarn ("ISO C does not permit use of `varargs.h'"); ;}
    break;

  case 119:
#line 743 "objc-parse.y"
    { ;}
    break;

  case 124:
#line 759 "objc-parse.y"
    { POP_DECLSPEC_STACK; ;}
    break;

  case 125:
#line 761 "objc-parse.y"
    { POP_DECLSPEC_STACK; ;}
    break;

  case 126:
#line 763 "objc-parse.y"
    { shadow_tag_warned (yyvsp[-1].ttype, 1);
		  pedwarn ("empty declaration"); ;}
    break;

  case 127:
#line 766 "objc-parse.y"
    { pedwarn ("empty declaration"); ;}
    break;

  case 128:
#line 775 "objc-parse.y"
    { ;}
    break;

  case 129:
#line 783 "objc-parse.y"
    { pending_xref_error ();
		  PUSH_DECLSPEC_STACK;
		  split_specs_attrs (yyvsp[0].ttype,
				     &current_declspecs, &prefix_attributes);
		  all_prefix_attributes = prefix_attributes; ;}
    break;

  case 130:
#line 794 "objc-parse.y"
    { all_prefix_attributes = chainon (yyvsp[0].ttype, prefix_attributes); ;}
    break;

  case 131:
#line 799 "objc-parse.y"
    { POP_DECLSPEC_STACK; ;}
    break;

  case 132:
#line 801 "objc-parse.y"
    { POP_DECLSPEC_STACK; ;}
    break;

  case 133:
#line 803 "objc-parse.y"
    { POP_DECLSPEC_STACK; ;}
    break;

  case 134:
#line 805 "objc-parse.y"
    { POP_DECLSPEC_STACK; ;}
    break;

  case 135:
#line 807 "objc-parse.y"
    { shadow_tag (yyvsp[-1].ttype); ;}
    break;

  case 136:
#line 809 "objc-parse.y"
    { RESTORE_WARN_FLAGS (yyvsp[-1].ttype); ;}
    break;

  case 137:
#line 866 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, NULL_TREE);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 138:
#line 869 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 139:
#line 872 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 140:
#line 878 "objc-parse.y"
    { yyval.ttype = tree_cons (yyvsp[0].ttype, NULL_TREE, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 141:
#line 884 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 142:
#line 887 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 143:
#line 893 "objc-parse.y"
    { yyval.ttype = tree_cons (yyvsp[0].ttype, NULL_TREE, NULL_TREE);
		  TREE_STATIC (yyval.ttype) = 0; ;}
    break;

  case 144:
#line 896 "objc-parse.y"
    { yyval.ttype = tree_cons (yyvsp[0].ttype, NULL_TREE, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 145:
#line 902 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, NULL_TREE);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 146:
#line 905 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 147:
#line 908 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 148:
#line 911 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 149:
#line 914 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 150:
#line 917 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 151:
#line 920 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 152:
#line 926 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, NULL_TREE);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 153:
#line 929 "objc-parse.y"
    { yyval.ttype = tree_cons (yyvsp[0].ttype, NULL_TREE, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 154:
#line 932 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 155:
#line 935 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 156:
#line 938 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 157:
#line 941 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 158:
#line 947 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 159:
#line 950 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 160:
#line 953 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 161:
#line 956 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 162:
#line 959 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 163:
#line 962 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 164:
#line 968 "objc-parse.y"
    { yyval.ttype = tree_cons (yyvsp[0].ttype, NULL_TREE, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 165:
#line 971 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 166:
#line 974 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 167:
#line 977 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 168:
#line 980 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 169:
#line 986 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, NULL_TREE);
		  TREE_STATIC (yyval.ttype) = 0; ;}
    break;

  case 170:
#line 989 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 171:
#line 992 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 172:
#line 995 "objc-parse.y"
    { if (extra_warnings && TREE_STATIC (yyvsp[-1].ttype))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER (yyvsp[0].ttype));
		  yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 173:
#line 1001 "objc-parse.y"
    { if (extra_warnings && TREE_STATIC (yyvsp[-1].ttype))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER (yyvsp[0].ttype));
		  yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 174:
#line 1007 "objc-parse.y"
    { if (extra_warnings && TREE_STATIC (yyvsp[-1].ttype))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER (yyvsp[0].ttype));
		  yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 175:
#line 1013 "objc-parse.y"
    { if (extra_warnings && TREE_STATIC (yyvsp[-1].ttype))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER (yyvsp[0].ttype));
		  yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 176:
#line 1022 "objc-parse.y"
    { yyval.ttype = tree_cons (yyvsp[0].ttype, NULL_TREE, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 177:
#line 1028 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 178:
#line 1031 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 179:
#line 1034 "objc-parse.y"
    { if (extra_warnings && TREE_STATIC (yyvsp[-1].ttype))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER (yyvsp[0].ttype));
		  yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 180:
#line 1040 "objc-parse.y"
    { if (extra_warnings && TREE_STATIC (yyvsp[-1].ttype))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER (yyvsp[0].ttype));
		  yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 181:
#line 1046 "objc-parse.y"
    { if (extra_warnings && TREE_STATIC (yyvsp[-1].ttype))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER (yyvsp[0].ttype));
		  yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 182:
#line 1052 "objc-parse.y"
    { if (extra_warnings && TREE_STATIC (yyvsp[-1].ttype))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER (yyvsp[0].ttype));
		  yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 183:
#line 1061 "objc-parse.y"
    { yyval.ttype = tree_cons (yyvsp[0].ttype, NULL_TREE, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 184:
#line 1067 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 185:
#line 1070 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 186:
#line 1073 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 187:
#line 1076 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 188:
#line 1079 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 189:
#line 1082 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 190:
#line 1085 "objc-parse.y"
    { if (extra_warnings && TREE_STATIC (yyvsp[-1].ttype))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER (yyvsp[0].ttype));
		  yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 191:
#line 1091 "objc-parse.y"
    { if (extra_warnings && TREE_STATIC (yyvsp[-1].ttype))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER (yyvsp[0].ttype));
		  yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 192:
#line 1097 "objc-parse.y"
    { if (extra_warnings && TREE_STATIC (yyvsp[-1].ttype))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER (yyvsp[0].ttype));
		  yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 193:
#line 1103 "objc-parse.y"
    { if (extra_warnings && TREE_STATIC (yyvsp[-1].ttype))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER (yyvsp[0].ttype));
		  yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 194:
#line 1112 "objc-parse.y"
    { yyval.ttype = tree_cons (yyvsp[0].ttype, NULL_TREE, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 195:
#line 1115 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 196:
#line 1118 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 197:
#line 1121 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 198:
#line 1124 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 199:
#line 1130 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 200:
#line 1133 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 201:
#line 1136 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 202:
#line 1139 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 203:
#line 1142 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 204:
#line 1145 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 205:
#line 1148 "objc-parse.y"
    { if (extra_warnings && TREE_STATIC (yyvsp[-1].ttype))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER (yyvsp[0].ttype));
		  yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 206:
#line 1154 "objc-parse.y"
    { if (extra_warnings && TREE_STATIC (yyvsp[-1].ttype))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER (yyvsp[0].ttype));
		  yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 207:
#line 1160 "objc-parse.y"
    { if (extra_warnings && TREE_STATIC (yyvsp[-1].ttype))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER (yyvsp[0].ttype));
		  yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 208:
#line 1166 "objc-parse.y"
    { if (extra_warnings && TREE_STATIC (yyvsp[-1].ttype))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER (yyvsp[0].ttype));
		  yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 209:
#line 1175 "objc-parse.y"
    { yyval.ttype = tree_cons (yyvsp[0].ttype, NULL_TREE, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 210:
#line 1178 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 211:
#line 1181 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 212:
#line 1184 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 213:
#line 1187 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 270:
#line 1275 "objc-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 271:
#line 1277 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 275:
#line 1312 "objc-parse.y"
    { OBJC_NEED_RAW_IDENTIFIER (1);	;}
    break;

  case 278:
#line 1322 "objc-parse.y"
    { /* For a typedef name, record the meaning, not the name.
		     In case of `foo foo, bar;'.  */
		  yyval.ttype = lookup_name (yyvsp[0].ttype); ;}
    break;

  case 279:
#line 1326 "objc-parse.y"
    { yyval.ttype = get_static_reference (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 280:
#line 1328 "objc-parse.y"
    { yyval.ttype = get_object_reference (yyvsp[0].ttype); ;}
    break;

  case 281:
#line 1333 "objc-parse.y"
    { yyval.ttype = get_object_reference (yyvsp[0].ttype); ;}
    break;

  case 282:
#line 1335 "objc-parse.y"
    { skip_evaluation--; yyval.ttype = TREE_TYPE (yyvsp[-1].ttype); ;}
    break;

  case 283:
#line 1337 "objc-parse.y"
    { skip_evaluation--; yyval.ttype = groktypename (yyvsp[-1].ttype); ;}
    break;

  case 288:
#line 1354 "objc-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 289:
#line 1356 "objc-parse.y"
    { if (TREE_CHAIN (yyvsp[-1].ttype)) yyvsp[-1].ttype = combine_strings (yyvsp[-1].ttype);
		  yyval.ttype = yyvsp[-1].ttype;
		;}
    break;

  case 290:
#line 1363 "objc-parse.y"
    { yyval.ttype = start_decl (yyvsp[-3].ttype, current_declspecs, 1,
					  chainon (yyvsp[-1].ttype, all_prefix_attributes));
		  start_init (yyval.ttype, yyvsp[-2].ttype, global_bindings_p ()); ;}
    break;

  case 291:
#line 1368 "objc-parse.y"
    { finish_init ();
		  finish_decl (yyvsp[-1].ttype, yyvsp[0].ttype, yyvsp[-4].ttype); ;}
    break;

  case 292:
#line 1371 "objc-parse.y"
    { tree d = start_decl (yyvsp[-2].ttype, current_declspecs, 0,
				       chainon (yyvsp[0].ttype, all_prefix_attributes));
		  finish_decl (d, NULL_TREE, yyvsp[-1].ttype); 
                ;}
    break;

  case 293:
#line 1379 "objc-parse.y"
    { yyval.ttype = start_decl (yyvsp[-3].ttype, current_declspecs, 1,
					  chainon (yyvsp[-1].ttype, all_prefix_attributes));
		  start_init (yyval.ttype, yyvsp[-2].ttype, global_bindings_p ()); ;}
    break;

  case 294:
#line 1384 "objc-parse.y"
    { finish_init ();
		  finish_decl (yyvsp[-1].ttype, yyvsp[0].ttype, yyvsp[-4].ttype); ;}
    break;

  case 295:
#line 1387 "objc-parse.y"
    { tree d = start_decl (yyvsp[-2].ttype, current_declspecs, 0,
				       chainon (yyvsp[0].ttype, all_prefix_attributes));
		  finish_decl (d, NULL_TREE, yyvsp[-1].ttype); ;}
    break;

  case 296:
#line 1395 "objc-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 297:
#line 1397 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 298:
#line 1402 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 299:
#line 1404 "objc-parse.y"
    { yyval.ttype = chainon (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 300:
#line 1409 "objc-parse.y"
    { yyval.ttype = yyvsp[-2].ttype; ;}
    break;

  case 301:
#line 1414 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 302:
#line 1416 "objc-parse.y"
    { yyval.ttype = chainon (yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 303:
#line 1421 "objc-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 304:
#line 1423 "objc-parse.y"
    { yyval.ttype = build_tree_list (yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 305:
#line 1425 "objc-parse.y"
    { yyval.ttype = build_tree_list (yyvsp[-3].ttype, build_tree_list (NULL_TREE, yyvsp[-1].ttype)); ;}
    break;

  case 306:
#line 1427 "objc-parse.y"
    { yyval.ttype = build_tree_list (yyvsp[-5].ttype, tree_cons (NULL_TREE, yyvsp[-3].ttype, yyvsp[-1].ttype)); ;}
    break;

  case 307:
#line 1429 "objc-parse.y"
    { yyval.ttype = build_tree_list (yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 313:
#line 1447 "objc-parse.y"
    { really_start_incremental_init (NULL_TREE); ;}
    break;

  case 314:
#line 1449 "objc-parse.y"
    { yyval.ttype = pop_init_level (0); ;}
    break;

  case 315:
#line 1451 "objc-parse.y"
    { yyval.ttype = error_mark_node; ;}
    break;

  case 316:
#line 1457 "objc-parse.y"
    { if (pedantic)
		    pedwarn ("ISO C forbids empty initializer braces"); ;}
    break;

  case 320:
#line 1471 "objc-parse.y"
    { if (pedantic && ! flag_isoc99)
		    pedwarn ("ISO C89 forbids specifying subobject to initialize"); ;}
    break;

  case 321:
#line 1474 "objc-parse.y"
    { if (pedantic)
		    pedwarn ("obsolete use of designated initializer without `='"); ;}
    break;

  case 322:
#line 1477 "objc-parse.y"
    { set_init_label (yyvsp[-1].ttype);
		  if (pedantic)
		    pedwarn ("obsolete use of designated initializer with `:'"); ;}
    break;

  case 323:
#line 1481 "objc-parse.y"
    {;}
    break;

  case 325:
#line 1487 "objc-parse.y"
    { push_init_level (0); ;}
    break;

  case 326:
#line 1489 "objc-parse.y"
    { process_init_element (pop_init_level (0)); ;}
    break;

  case 327:
#line 1491 "objc-parse.y"
    { process_init_element (yyvsp[0].ttype); ;}
    break;

  case 331:
#line 1502 "objc-parse.y"
    { set_init_label (yyvsp[0].ttype); ;}
    break;

  case 332:
#line 1510 "objc-parse.y"
    { if (pedantic)
		    pedwarn ("ISO C forbids nested functions");

		  push_function_context ();
		  if (! start_function (current_declspecs, yyvsp[0].ttype,
					all_prefix_attributes))
		    {
		      pop_function_context ();
		      YYERROR1;
		    }
		;}
    break;

  case 333:
#line 1522 "objc-parse.y"
    { store_parm_decls (); ;}
    break;

  case 334:
#line 1530 "objc-parse.y"
    { tree decl = current_function_decl;
		  DECL_SOURCE_FILE (decl) = yyvsp[-2].filename;
		  DECL_SOURCE_LINE (decl) = yyvsp[-1].lineno;
		  finish_function (1, 1);
		  pop_function_context (); 
		  add_decl_stmt (decl); ;}
    break;

  case 335:
#line 1540 "objc-parse.y"
    { if (pedantic)
		    pedwarn ("ISO C forbids nested functions");

		  push_function_context ();
		  if (! start_function (current_declspecs, yyvsp[0].ttype,
					all_prefix_attributes))
		    {
		      pop_function_context ();
		      YYERROR1;
		    }
		;}
    break;

  case 336:
#line 1552 "objc-parse.y"
    { store_parm_decls (); ;}
    break;

  case 337:
#line 1560 "objc-parse.y"
    { tree decl = current_function_decl;
		  DECL_SOURCE_FILE (decl) = yyvsp[-2].filename;
		  DECL_SOURCE_LINE (decl) = yyvsp[-1].lineno;
		  finish_function (1, 1);
		  pop_function_context (); 
		  add_decl_stmt (decl); ;}
    break;

  case 340:
#line 1580 "objc-parse.y"
    { yyval.ttype = yyvsp[-2].ttype ? tree_cons (yyvsp[-2].ttype, yyvsp[-1].ttype, NULL_TREE) : yyvsp[-1].ttype; ;}
    break;

  case 341:
#line 1582 "objc-parse.y"
    { yyval.ttype = build_nt (CALL_EXPR, yyvsp[-2].ttype, yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 342:
#line 1587 "objc-parse.y"
    { yyval.ttype = set_array_declarator_type (yyvsp[0].ttype, yyvsp[-1].ttype, 0); ;}
    break;

  case 343:
#line 1589 "objc-parse.y"
    { yyval.ttype = make_pointer_declarator (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 348:
#line 1605 "objc-parse.y"
    { yyval.ttype = build_nt (CALL_EXPR, yyvsp[-2].ttype, yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 349:
#line 1610 "objc-parse.y"
    { yyval.ttype = set_array_declarator_type (yyvsp[0].ttype, yyvsp[-1].ttype, 0); ;}
    break;

  case 352:
#line 1617 "objc-parse.y"
    { yyval.ttype = build_nt (CALL_EXPR, yyvsp[-2].ttype, yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 353:
#line 1622 "objc-parse.y"
    { yyval.ttype = set_array_declarator_type (yyvsp[0].ttype, yyvsp[-1].ttype, 0); ;}
    break;

  case 354:
#line 1624 "objc-parse.y"
    { yyval.ttype = make_pointer_declarator (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 355:
#line 1626 "objc-parse.y"
    { yyval.ttype = make_pointer_declarator (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 356:
#line 1628 "objc-parse.y"
    { yyval.ttype = yyvsp[-2].ttype ? tree_cons (yyvsp[-2].ttype, yyvsp[-1].ttype, NULL_TREE) : yyvsp[-1].ttype; ;}
    break;

  case 357:
#line 1636 "objc-parse.y"
    { yyval.ttype = build_nt (CALL_EXPR, yyvsp[-2].ttype, yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 358:
#line 1641 "objc-parse.y"
    { yyval.ttype = yyvsp[-2].ttype ? tree_cons (yyvsp[-2].ttype, yyvsp[-1].ttype, NULL_TREE) : yyvsp[-1].ttype; ;}
    break;

  case 359:
#line 1643 "objc-parse.y"
    { yyval.ttype = make_pointer_declarator (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 360:
#line 1645 "objc-parse.y"
    { yyval.ttype = set_array_declarator_type (yyvsp[0].ttype, yyvsp[-1].ttype, 0); ;}
    break;

  case 362:
#line 1651 "objc-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 363:
#line 1653 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 364:
#line 1658 "objc-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 365:
#line 1660 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 366:
#line 1665 "objc-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 367:
#line 1667 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 368:
#line 1678 "objc-parse.y"
    { yyval.ttype = start_struct (RECORD_TYPE, yyvsp[-1].ttype);
		  /* Start scope of tag before parsing components.  */
		;}
    break;

  case 369:
#line 1682 "objc-parse.y"
    { yyval.ttype = finish_struct (yyvsp[-3].ttype, yyvsp[-2].ttype, chainon (yyvsp[-6].ttype, yyvsp[0].ttype)); ;}
    break;

  case 370:
#line 1684 "objc-parse.y"
    { yyval.ttype = finish_struct (start_struct (RECORD_TYPE, NULL_TREE),
				      yyvsp[-2].ttype, chainon (yyvsp[-4].ttype, yyvsp[0].ttype));
		;}
    break;

  case 371:
#line 1688 "objc-parse.y"
    { yyval.ttype = start_struct (UNION_TYPE, yyvsp[-1].ttype); ;}
    break;

  case 372:
#line 1690 "objc-parse.y"
    { yyval.ttype = finish_struct (yyvsp[-3].ttype, yyvsp[-2].ttype, chainon (yyvsp[-6].ttype, yyvsp[0].ttype)); ;}
    break;

  case 373:
#line 1692 "objc-parse.y"
    { yyval.ttype = finish_struct (start_struct (UNION_TYPE, NULL_TREE),
				      yyvsp[-2].ttype, chainon (yyvsp[-4].ttype, yyvsp[0].ttype));
		;}
    break;

  case 374:
#line 1696 "objc-parse.y"
    { yyval.ttype = start_enum (yyvsp[-1].ttype); ;}
    break;

  case 375:
#line 1698 "objc-parse.y"
    { yyval.ttype = finish_enum (yyvsp[-4].ttype, nreverse (yyvsp[-3].ttype),
				    chainon (yyvsp[-7].ttype, yyvsp[0].ttype)); ;}
    break;

  case 376:
#line 1701 "objc-parse.y"
    { yyval.ttype = start_enum (NULL_TREE); ;}
    break;

  case 377:
#line 1703 "objc-parse.y"
    { yyval.ttype = finish_enum (yyvsp[-4].ttype, nreverse (yyvsp[-3].ttype),
				    chainon (yyvsp[-6].ttype, yyvsp[0].ttype)); ;}
    break;

  case 378:
#line 1709 "objc-parse.y"
    { yyval.ttype = xref_tag (RECORD_TYPE, yyvsp[0].ttype); ;}
    break;

  case 379:
#line 1711 "objc-parse.y"
    { yyval.ttype = xref_tag (UNION_TYPE, yyvsp[0].ttype); ;}
    break;

  case 380:
#line 1713 "objc-parse.y"
    { yyval.ttype = xref_tag (ENUMERAL_TYPE, yyvsp[0].ttype);
		  /* In ISO C, enumerated types can be referred to
		     only if already defined.  */
		  if (pedantic && !COMPLETE_TYPE_P (yyval.ttype))
		    pedwarn ("ISO C forbids forward references to `enum' types"); ;}
    break;

  case 384:
#line 1728 "objc-parse.y"
    { if (pedantic && ! flag_isoc99)
		    pedwarn ("comma at end of enumerator list"); ;}
    break;

  case 385:
#line 1734 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 386:
#line 1736 "objc-parse.y"
    { yyval.ttype = chainon (yyvsp[-1].ttype, yyvsp[0].ttype);
		  pedwarn ("no semicolon at end of struct or union"); ;}
    break;

  case 387:
#line 1741 "objc-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 388:
#line 1743 "objc-parse.y"
    { yyval.ttype = chainon (yyvsp[-2].ttype, yyvsp[-1].ttype); ;}
    break;

  case 389:
#line 1745 "objc-parse.y"
    { if (pedantic)
		    pedwarn ("extra semicolon in struct or union specified"); ;}
    break;

  case 390:
#line 1749 "objc-parse.y"
    {
		  tree interface = lookup_interface (yyvsp[-1].ttype);

		  if (interface)
		    yyval.ttype = get_class_ivars (interface);
		  else
		    {
		      error ("cannot find interface declaration for `%s'",
			     IDENTIFIER_POINTER (yyvsp[-1].ttype));
		      yyval.ttype = NULL_TREE;
		    }
		;}
    break;

  case 391:
#line 1765 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype;
		  POP_DECLSPEC_STACK; ;}
    break;

  case 392:
#line 1768 "objc-parse.y"
    {
		  /* Support for unnamed structs or unions as members of 
		     structs or unions (which is [a] useful and [b] supports 
		     MS P-SDK).  */
		  if (pedantic)
		    pedwarn ("ISO C doesn't support unnamed structs/unions");

		  yyval.ttype = grokfield(yyvsp[-1].filename, yyvsp[0].lineno, NULL, current_declspecs, NULL_TREE);
		  POP_DECLSPEC_STACK; ;}
    break;

  case 393:
#line 1778 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype;
		  POP_DECLSPEC_STACK; ;}
    break;

  case 394:
#line 1781 "objc-parse.y"
    { if (pedantic)
		    pedwarn ("ISO C forbids member declarations with no members");
		  shadow_tag(yyvsp[0].ttype);
		  yyval.ttype = NULL_TREE; ;}
    break;

  case 395:
#line 1786 "objc-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 396:
#line 1788 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype;
		  RESTORE_WARN_FLAGS (yyvsp[-1].ttype); ;}
    break;

  case 398:
#line 1795 "objc-parse.y"
    { yyval.ttype = chainon (yyvsp[-3].ttype, yyvsp[0].ttype); ;}
    break;

  case 400:
#line 1801 "objc-parse.y"
    { yyval.ttype = chainon (yyvsp[-3].ttype, yyvsp[0].ttype); ;}
    break;

  case 401:
#line 1806 "objc-parse.y"
    { yyval.ttype = grokfield (yyvsp[-3].filename, yyvsp[-2].lineno, yyvsp[-1].ttype, current_declspecs, NULL_TREE);
		  decl_attributes (&yyval.ttype, chainon (yyvsp[0].ttype, all_prefix_attributes), 0); ;}
    break;

  case 402:
#line 1810 "objc-parse.y"
    { yyval.ttype = grokfield (yyvsp[-5].filename, yyvsp[-4].lineno, yyvsp[-3].ttype, current_declspecs, yyvsp[-1].ttype);
		  decl_attributes (&yyval.ttype, chainon (yyvsp[0].ttype, all_prefix_attributes), 0); ;}
    break;

  case 403:
#line 1813 "objc-parse.y"
    { yyval.ttype = grokfield (yyvsp[-4].filename, yyvsp[-3].lineno, NULL_TREE, current_declspecs, yyvsp[-1].ttype);
		  decl_attributes (&yyval.ttype, chainon (yyvsp[0].ttype, all_prefix_attributes), 0); ;}
    break;

  case 404:
#line 1819 "objc-parse.y"
    { yyval.ttype = grokfield (yyvsp[-3].filename, yyvsp[-2].lineno, yyvsp[-1].ttype, current_declspecs, NULL_TREE);
		  decl_attributes (&yyval.ttype, chainon (yyvsp[0].ttype, all_prefix_attributes), 0); ;}
    break;

  case 405:
#line 1823 "objc-parse.y"
    { yyval.ttype = grokfield (yyvsp[-5].filename, yyvsp[-4].lineno, yyvsp[-3].ttype, current_declspecs, yyvsp[-1].ttype);
		  decl_attributes (&yyval.ttype, chainon (yyvsp[0].ttype, all_prefix_attributes), 0); ;}
    break;

  case 406:
#line 1826 "objc-parse.y"
    { yyval.ttype = grokfield (yyvsp[-4].filename, yyvsp[-3].lineno, NULL_TREE, current_declspecs, yyvsp[-1].ttype);
		  decl_attributes (&yyval.ttype, chainon (yyvsp[0].ttype, all_prefix_attributes), 0); ;}
    break;

  case 408:
#line 1838 "objc-parse.y"
    { if (yyvsp[-2].ttype == error_mark_node)
		    yyval.ttype = yyvsp[-2].ttype;
		  else
		    yyval.ttype = chainon (yyvsp[0].ttype, yyvsp[-2].ttype); ;}
    break;

  case 409:
#line 1843 "objc-parse.y"
    { yyval.ttype = error_mark_node; ;}
    break;

  case 410:
#line 1849 "objc-parse.y"
    { yyval.ttype = build_enumerator (yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 411:
#line 1851 "objc-parse.y"
    { yyval.ttype = build_enumerator (yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 412:
#line 1856 "objc-parse.y"
    { pending_xref_error ();
		  yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 413:
#line 1859 "objc-parse.y"
    { yyval.ttype = build_tree_list (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 414:
#line 1864 "objc-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 416:
#line 1870 "objc-parse.y"
    { yyval.ttype = build_tree_list (build_tree_list (current_declspecs,
							 NULL_TREE),
					all_prefix_attributes); ;}
    break;

  case 417:
#line 1874 "objc-parse.y"
    { yyval.ttype = build_tree_list (build_tree_list (current_declspecs,
							 yyvsp[0].ttype),
					all_prefix_attributes); ;}
    break;

  case 418:
#line 1878 "objc-parse.y"
    { yyval.ttype = build_tree_list (build_tree_list (current_declspecs,
							 yyvsp[-1].ttype),
					chainon (yyvsp[0].ttype, all_prefix_attributes)); ;}
    break;

  case 422:
#line 1891 "objc-parse.y"
    { yyval.ttype = make_pointer_declarator (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 423:
#line 1896 "objc-parse.y"
    { yyval.ttype = make_pointer_declarator (yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 424:
#line 1898 "objc-parse.y"
    { yyval.ttype = make_pointer_declarator (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 425:
#line 1903 "objc-parse.y"
    { yyval.ttype = yyvsp[-2].ttype ? tree_cons (yyvsp[-2].ttype, yyvsp[-1].ttype, NULL_TREE) : yyvsp[-1].ttype; ;}
    break;

  case 426:
#line 1905 "objc-parse.y"
    { yyval.ttype = build_nt (CALL_EXPR, yyvsp[-2].ttype, yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 427:
#line 1907 "objc-parse.y"
    { yyval.ttype = set_array_declarator_type (yyvsp[0].ttype, yyvsp[-1].ttype, 1); ;}
    break;

  case 428:
#line 1909 "objc-parse.y"
    { yyval.ttype = build_nt (CALL_EXPR, NULL_TREE, yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 429:
#line 1911 "objc-parse.y"
    { yyval.ttype = set_array_declarator_type (yyvsp[0].ttype, NULL_TREE, 1); ;}
    break;

  case 430:
#line 1918 "objc-parse.y"
    { yyval.ttype = build_array_declarator (yyvsp[-1].ttype, NULL_TREE, 0, 0); ;}
    break;

  case 431:
#line 1920 "objc-parse.y"
    { yyval.ttype = build_array_declarator (yyvsp[-1].ttype, yyvsp[-2].ttype, 0, 0); ;}
    break;

  case 432:
#line 1922 "objc-parse.y"
    { yyval.ttype = build_array_declarator (NULL_TREE, NULL_TREE, 0, 0); ;}
    break;

  case 433:
#line 1924 "objc-parse.y"
    { yyval.ttype = build_array_declarator (NULL_TREE, yyvsp[-1].ttype, 0, 0); ;}
    break;

  case 434:
#line 1926 "objc-parse.y"
    { yyval.ttype = build_array_declarator (NULL_TREE, NULL_TREE, 0, 1); ;}
    break;

  case 435:
#line 1928 "objc-parse.y"
    { yyval.ttype = build_array_declarator (NULL_TREE, yyvsp[-2].ttype, 0, 1); ;}
    break;

  case 436:
#line 1930 "objc-parse.y"
    { if (C_RID_CODE (yyvsp[-2].ttype) != RID_STATIC)
		    error ("storage class specifier in array declarator");
		  yyval.ttype = build_array_declarator (yyvsp[-1].ttype, NULL_TREE, 1, 0); ;}
    break;

  case 437:
#line 1934 "objc-parse.y"
    { if (C_RID_CODE (yyvsp[-3].ttype) != RID_STATIC)
		    error ("storage class specifier in array declarator");
		  yyval.ttype = build_array_declarator (yyvsp[-1].ttype, yyvsp[-2].ttype, 1, 0); ;}
    break;

  case 438:
#line 1938 "objc-parse.y"
    { if (C_RID_CODE (yyvsp[-2].ttype) != RID_STATIC)
		    error ("storage class specifier in array declarator");
		  yyval.ttype = build_array_declarator (yyvsp[-1].ttype, yyvsp[-3].ttype, 1, 0); ;}
    break;

  case 441:
#line 1953 "objc-parse.y"
    {
		  pedwarn ("deprecated use of label at end of compound statement");
		;}
    break;

  case 449:
#line 1970 "objc-parse.y"
    { if (pedantic && !flag_isoc99)
		    pedwarn ("ISO C89 forbids mixed declarations and code"); ;}
    break;

  case 464:
#line 2000 "objc-parse.y"
    { pushlevel (0);
		  clear_last_expr ();
		  add_scope_stmt (/*begin_p=*/1, /*partial_p=*/0);
		  if (objc_method_context)
		    add_objc_decls ();
		;}
    break;

  case 465:
#line 2009 "objc-parse.y"
    { yyval.ttype = add_scope_stmt (/*begin_p=*/0, /*partial_p=*/0); ;}
    break;

  case 466:
#line 2014 "objc-parse.y"
    { if (flag_isoc99)
		    {
		      yyval.ttype = c_begin_compound_stmt ();
		      pushlevel (0);
		      clear_last_expr ();
		      add_scope_stmt (/*begin_p=*/1, /*partial_p=*/0);
		      if (objc_method_context)
			add_objc_decls ();
		    }
		  else
		    yyval.ttype = NULL_TREE;
		;}
    break;

  case 467:
#line 2032 "objc-parse.y"
    { if (flag_isoc99)
		    {
		      tree scope_stmt = add_scope_stmt (/*begin_p=*/0, /*partial_p=*/0);
		      yyval.ttype = poplevel (kept_level_p (), 0, 0); 
		      SCOPE_STMT_BLOCK (TREE_PURPOSE (scope_stmt)) 
			= SCOPE_STMT_BLOCK (TREE_VALUE (scope_stmt))
			= yyval.ttype;
		    }
		  else
		    yyval.ttype = NULL_TREE; ;}
    break;

  case 469:
#line 2049 "objc-parse.y"
    { if (pedantic)
		    pedwarn ("ISO C forbids label declarations"); ;}
    break;

  case 472:
#line 2060 "objc-parse.y"
    { tree link;
		  for (link = yyvsp[-1].ttype; link; link = TREE_CHAIN (link))
		    {
		      tree label = shadow_label (TREE_VALUE (link));
		      C_DECLARED_LABEL_FLAG (label) = 1;
		      add_decl_stmt (label);
		    }
		;}
    break;

  case 473:
#line 2074 "objc-parse.y"
    {;}
    break;

  case 475:
#line 2078 "objc-parse.y"
    { compstmt_count++;
                      yyval.ttype = c_begin_compound_stmt (); ;}
    break;

  case 476:
#line 2083 "objc-parse.y"
    { yyval.ttype = convert (void_type_node, integer_zero_node); ;}
    break;

  case 477:
#line 2085 "objc-parse.y"
    { yyval.ttype = poplevel (kept_level_p (), 1, 0); 
		  SCOPE_STMT_BLOCK (TREE_PURPOSE (yyvsp[0].ttype)) 
		    = SCOPE_STMT_BLOCK (TREE_VALUE (yyvsp[0].ttype))
		    = yyval.ttype; ;}
    break;

  case 480:
#line 2098 "objc-parse.y"
    { if (current_function_decl == 0)
		    {
		      error ("braced-group within expression allowed only inside a function");
		      YYERROR;
		    }
		  /* We must force a BLOCK for this level
		     so that, if it is not expanded later,
		     there is a way to turn off the entire subtree of blocks
		     that are contained in it.  */
		  keep_next_level ();
		  push_label_level ();
		  compstmt_count++;
		  yyval.ttype = add_stmt (build_stmt (COMPOUND_STMT, last_tree));
		;}
    break;

  case 481:
#line 2115 "objc-parse.y"
    { RECHAIN_STMTS (yyvsp[-1].ttype, COMPOUND_BODY (yyvsp[-1].ttype)); 
		  last_expr_type = NULL_TREE;
                  yyval.ttype = yyvsp[-1].ttype; ;}
    break;

  case 482:
#line 2123 "objc-parse.y"
    { c_finish_then (); ;}
    break;

  case 484:
#line 2140 "objc-parse.y"
    { yyval.ttype = c_begin_if_stmt (); ;}
    break;

  case 485:
#line 2142 "objc-parse.y"
    { c_expand_start_cond (truthvalue_conversion (yyvsp[-1].ttype), 
				       compstmt_count,yyvsp[-3].ttype);
		  yyval.itype = stmt_count;
		  if_stmt_file = yyvsp[-7].filename;
		  if_stmt_line = yyvsp[-6].lineno; ;}
    break;

  case 486:
#line 2154 "objc-parse.y"
    { stmt_count++;
		  compstmt_count++;
		  yyval.ttype 
		    = add_stmt (build_stmt (DO_STMT, NULL_TREE,
					    NULL_TREE));
		  /* In the event that a parse error prevents
		     parsing the complete do-statement, set the
		     condition now.  Otherwise, we can get crashes at
		     RTL-generation time.  */
		  DO_COND (yyval.ttype) = error_mark_node; ;}
    break;

  case 487:
#line 2165 "objc-parse.y"
    { yyval.ttype = yyvsp[-2].ttype;
		  RECHAIN_STMTS (yyval.ttype, DO_BODY (yyval.ttype)); ;}
    break;

  case 488:
#line 2173 "objc-parse.y"
    { if (yychar == YYEMPTY)
		    yychar = YYLEX;
		  yyval.filename = input_filename; ;}
    break;

  case 489:
#line 2179 "objc-parse.y"
    { if (yychar == YYEMPTY)
		    yychar = YYLEX;
		  yyval.lineno = lineno; ;}
    break;

  case 492:
#line 2192 "objc-parse.y"
    { if (flag_isoc99)
		    RECHAIN_STMTS (yyvsp[-2].ttype, COMPOUND_BODY (yyvsp[-2].ttype)); ;}
    break;

  case 493:
#line 2198 "objc-parse.y"
    { if (yyvsp[0].ttype)
		    {
		      STMT_LINENO (yyvsp[0].ttype) = yyvsp[-1].lineno;
		      /* ??? We currently have no way of recording
			 the filename for a statement.  This probably
			 matters little in practice at the moment,
			 but I suspect that problems will occur when
			 doing inlining at the tree level.  */
		    }
		;}
    break;

  case 494:
#line 2212 "objc-parse.y"
    { if (yyvsp[0].ttype)
		    {
		      STMT_LINENO (yyvsp[0].ttype) = yyvsp[-1].lineno;
		    }
		;}
    break;

  case 495:
#line 2221 "objc-parse.y"
    { c_expand_start_else ();
		  yyvsp[-1].itype = stmt_count; ;}
    break;

  case 496:
#line 2224 "objc-parse.y"
    { c_finish_else ();
		  c_expand_end_cond ();
		  if (extra_warnings && stmt_count == yyvsp[-3].itype)
		    warning ("empty body in an else-statement"); ;}
    break;

  case 497:
#line 2229 "objc-parse.y"
    { c_expand_end_cond ();
		  /* This warning is here instead of in simple_if, because we
		     do not want a warning if an empty if is followed by an
		     else statement.  Increment stmt_count so we don't
		     give a second error if this is a nested `if'.  */
		  if (extra_warnings && stmt_count++ == yyvsp[0].itype)
		    warning_with_file_and_line (if_stmt_file, if_stmt_line,
						"empty body in an if-statement"); ;}
    break;

  case 498:
#line 2241 "objc-parse.y"
    { c_expand_end_cond (); ;}
    break;

  case 499:
#line 2251 "objc-parse.y"
    { stmt_count++; 
		  yyval.ttype = c_begin_while_stmt (); ;}
    break;

  case 500:
#line 2254 "objc-parse.y"
    { yyvsp[-1].ttype = truthvalue_conversion (yyvsp[-1].ttype);
		  c_finish_while_stmt_cond (truthvalue_conversion (yyvsp[-1].ttype),
					    yyvsp[-3].ttype);
		  yyval.ttype = add_stmt (yyvsp[-3].ttype); ;}
    break;

  case 501:
#line 2259 "objc-parse.y"
    { RECHAIN_STMTS (yyvsp[-1].ttype, WHILE_BODY (yyvsp[-1].ttype)); ;}
    break;

  case 502:
#line 2262 "objc-parse.y"
    { DO_COND (yyvsp[-4].ttype) = truthvalue_conversion (yyvsp[-2].ttype); ;}
    break;

  case 503:
#line 2264 "objc-parse.y"
    { ;}
    break;

  case 504:
#line 2266 "objc-parse.y"
    { yyval.ttype = build_stmt (FOR_STMT, NULL_TREE, NULL_TREE,
					  NULL_TREE, NULL_TREE);
		  add_stmt (yyval.ttype); ;}
    break;

  case 505:
#line 2270 "objc-parse.y"
    { stmt_count++;
		  RECHAIN_STMTS (yyvsp[-2].ttype, FOR_INIT_STMT (yyvsp[-2].ttype)); ;}
    break;

  case 506:
#line 2273 "objc-parse.y"
    { if (yyvsp[-1].ttype) 
		    FOR_COND (yyvsp[-5].ttype) = truthvalue_conversion (yyvsp[-1].ttype); ;}
    break;

  case 507:
#line 2276 "objc-parse.y"
    { FOR_EXPR (yyvsp[-8].ttype) = yyvsp[-1].ttype; ;}
    break;

  case 508:
#line 2278 "objc-parse.y"
    { RECHAIN_STMTS (yyvsp[-10].ttype, FOR_BODY (yyvsp[-10].ttype)); ;}
    break;

  case 509:
#line 2280 "objc-parse.y"
    { stmt_count++;
		  yyval.ttype = c_start_case (yyvsp[-1].ttype); ;}
    break;

  case 510:
#line 2283 "objc-parse.y"
    { c_finish_case (); ;}
    break;

  case 511:
#line 2288 "objc-parse.y"
    { add_stmt (build_stmt (EXPR_STMT, yyvsp[-1].ttype)); ;}
    break;

  case 512:
#line 2290 "objc-parse.y"
    { check_for_loop_decls (); ;}
    break;

  case 513:
#line 2296 "objc-parse.y"
    { stmt_count++; yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 514:
#line 2298 "objc-parse.y"
    { stmt_count++;
		  yyval.ttype = c_expand_expr_stmt (yyvsp[-1].ttype); ;}
    break;

  case 515:
#line 2301 "objc-parse.y"
    { if (flag_isoc99)
		    RECHAIN_STMTS (yyvsp[-2].ttype, COMPOUND_BODY (yyvsp[-2].ttype));
		  yyval.ttype = NULL_TREE; ;}
    break;

  case 516:
#line 2305 "objc-parse.y"
    { stmt_count++;
		  yyval.ttype = add_stmt (build_break_stmt ()); ;}
    break;

  case 517:
#line 2308 "objc-parse.y"
    { stmt_count++;
		  yyval.ttype = add_stmt (build_continue_stmt ()); ;}
    break;

  case 518:
#line 2311 "objc-parse.y"
    { stmt_count++;
		  yyval.ttype = c_expand_return (NULL_TREE); ;}
    break;

  case 519:
#line 2314 "objc-parse.y"
    { stmt_count++;
		  yyval.ttype = c_expand_return (yyvsp[-1].ttype); ;}
    break;

  case 520:
#line 2317 "objc-parse.y"
    { stmt_count++;
		  yyval.ttype = simple_asm_stmt (yyvsp[-2].ttype); ;}
    break;

  case 521:
#line 2321 "objc-parse.y"
    { stmt_count++;
		  yyval.ttype = build_asm_stmt (yyvsp[-6].ttype, yyvsp[-4].ttype, yyvsp[-2].ttype, NULL_TREE, NULL_TREE); ;}
    break;

  case 522:
#line 2326 "objc-parse.y"
    { stmt_count++;
		  yyval.ttype = build_asm_stmt (yyvsp[-8].ttype, yyvsp[-6].ttype, yyvsp[-4].ttype, yyvsp[-2].ttype, NULL_TREE); ;}
    break;

  case 523:
#line 2331 "objc-parse.y"
    { stmt_count++;
		  yyval.ttype = build_asm_stmt (yyvsp[-10].ttype, yyvsp[-8].ttype, yyvsp[-6].ttype, yyvsp[-4].ttype, yyvsp[-2].ttype); ;}
    break;

  case 524:
#line 2334 "objc-parse.y"
    { tree decl;
		  stmt_count++;
		  decl = lookup_label (yyvsp[-1].ttype);
		  if (decl != 0)
		    {
		      TREE_USED (decl) = 1;
		      yyval.ttype = add_stmt (build_stmt (GOTO_STMT, decl));
		    }
		  else
		    yyval.ttype = NULL_TREE;
		;}
    break;

  case 525:
#line 2346 "objc-parse.y"
    { if (pedantic)
		    pedwarn ("ISO C forbids `goto *expr;'");
		  stmt_count++;
		  yyvsp[-1].ttype = convert (ptr_type_node, yyvsp[-1].ttype);
		  yyval.ttype = add_stmt (build_stmt (GOTO_STMT, yyvsp[-1].ttype)); ;}
    break;

  case 526:
#line 2352 "objc-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 527:
#line 2360 "objc-parse.y"
    { stmt_count++;
		  yyval.ttype = do_case (yyvsp[-1].ttype, NULL_TREE); ;}
    break;

  case 528:
#line 2363 "objc-parse.y"
    { stmt_count++;
		  yyval.ttype = do_case (yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 529:
#line 2366 "objc-parse.y"
    { stmt_count++;
		  yyval.ttype = do_case (NULL_TREE, NULL_TREE); ;}
    break;

  case 530:
#line 2369 "objc-parse.y"
    { tree label = define_label (yyvsp[-3].filename, yyvsp[-2].lineno, yyvsp[-4].ttype);
		  stmt_count++;
		  if (label)
		    {
		      decl_attributes (&label, yyvsp[0].ttype, 0);
		      yyval.ttype = add_stmt (build_stmt (LABEL_STMT, label));
		    }
		  else
		    yyval.ttype = NULL_TREE;
		;}
    break;

  case 531:
#line 2385 "objc-parse.y"
    { emit_line_note (input_filename, lineno);
		  yyval.ttype = NULL_TREE; ;}
    break;

  case 532:
#line 2388 "objc-parse.y"
    { emit_line_note (input_filename, lineno); ;}
    break;

  case 533:
#line 2393 "objc-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 535:
#line 2400 "objc-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 538:
#line 2407 "objc-parse.y"
    { yyval.ttype = chainon (yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 539:
#line 2412 "objc-parse.y"
    { yyval.ttype = build_tree_list (build_tree_list (NULL_TREE, yyvsp[-3].ttype), yyvsp[-1].ttype); ;}
    break;

  case 540:
#line 2414 "objc-parse.y"
    { yyval.ttype = build_tree_list (build_tree_list (yyvsp[-5].ttype, yyvsp[-3].ttype), yyvsp[-1].ttype); ;}
    break;

  case 541:
#line 2419 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, combine_strings (yyvsp[0].ttype), NULL_TREE); ;}
    break;

  case 542:
#line 2421 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, combine_strings (yyvsp[0].ttype), yyvsp[-2].ttype); ;}
    break;

  case 543:
#line 2431 "objc-parse.y"
    { pushlevel (0);
		  clear_parm_order ();
		  declare_parm_level (0); ;}
    break;

  case 544:
#line 2435 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype;
		  parmlist_tags_warning ();
		  poplevel (0, 0, 0); ;}
    break;

  case 546:
#line 2443 "objc-parse.y"
    { tree parm;
		  if (pedantic)
		    pedwarn ("ISO C forbids forward parameter declarations");
		  /* Mark the forward decls as such.  */
		  for (parm = getdecls (); parm; parm = TREE_CHAIN (parm))
		    TREE_ASM_WRITTEN (parm) = 1;
		  clear_parm_order (); ;}
    break;

  case 547:
#line 2451 "objc-parse.y"
    { /* Dummy action so attributes are in known place
		     on parser stack.  */ ;}
    break;

  case 548:
#line 2454 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 549:
#line 2456 "objc-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, NULL_TREE, NULL_TREE); ;}
    break;

  case 550:
#line 2462 "objc-parse.y"
    { yyval.ttype = get_parm_info (0); ;}
    break;

  case 551:
#line 2464 "objc-parse.y"
    { yyval.ttype = get_parm_info (0);
		  /* Gcc used to allow this as an extension.  However, it does
		     not work for all targets, and thus has been disabled.
		     Also, since func (...) and func () are indistinguishable,
		     it caused problems with the code in expand_builtin which
		     tries to verify that BUILT_IN_NEXT_ARG is being used
		     correctly.  */
		  error ("ISO C requires a named argument before `...'");
		;}
    break;

  case 552:
#line 2474 "objc-parse.y"
    { yyval.ttype = get_parm_info (1); ;}
    break;

  case 553:
#line 2476 "objc-parse.y"
    { yyval.ttype = get_parm_info (0); ;}
    break;

  case 554:
#line 2481 "objc-parse.y"
    { push_parm_decl (yyvsp[0].ttype); ;}
    break;

  case 555:
#line 2483 "objc-parse.y"
    { push_parm_decl (yyvsp[0].ttype); ;}
    break;

  case 556:
#line 2490 "objc-parse.y"
    { yyval.ttype = build_tree_list (build_tree_list (current_declspecs,
							 yyvsp[-1].ttype),
					chainon (yyvsp[0].ttype, all_prefix_attributes));
		  POP_DECLSPEC_STACK; ;}
    break;

  case 557:
#line 2495 "objc-parse.y"
    { yyval.ttype = build_tree_list (build_tree_list (current_declspecs,
							 yyvsp[-1].ttype),
					chainon (yyvsp[0].ttype, all_prefix_attributes)); 
		  POP_DECLSPEC_STACK; ;}
    break;

  case 558:
#line 2500 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype;
		  POP_DECLSPEC_STACK; ;}
    break;

  case 559:
#line 2503 "objc-parse.y"
    { yyval.ttype = build_tree_list (build_tree_list (current_declspecs,
							 yyvsp[-1].ttype),
					chainon (yyvsp[0].ttype, all_prefix_attributes));
		  POP_DECLSPEC_STACK; ;}
    break;

  case 560:
#line 2509 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype;
		  POP_DECLSPEC_STACK; ;}
    break;

  case 561:
#line 2517 "objc-parse.y"
    { yyval.ttype = build_tree_list (build_tree_list (current_declspecs,
							 yyvsp[-1].ttype),
					chainon (yyvsp[0].ttype, all_prefix_attributes));
		  POP_DECLSPEC_STACK; ;}
    break;

  case 562:
#line 2522 "objc-parse.y"
    { yyval.ttype = build_tree_list (build_tree_list (current_declspecs,
							 yyvsp[-1].ttype),
					chainon (yyvsp[0].ttype, all_prefix_attributes)); 
		  POP_DECLSPEC_STACK; ;}
    break;

  case 563:
#line 2527 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype;
		  POP_DECLSPEC_STACK; ;}
    break;

  case 564:
#line 2530 "objc-parse.y"
    { yyval.ttype = build_tree_list (build_tree_list (current_declspecs,
							 yyvsp[-1].ttype),
					chainon (yyvsp[0].ttype, all_prefix_attributes));
		  POP_DECLSPEC_STACK; ;}
    break;

  case 565:
#line 2536 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype;
		  POP_DECLSPEC_STACK; ;}
    break;

  case 566:
#line 2542 "objc-parse.y"
    { prefix_attributes = chainon (prefix_attributes, yyvsp[-3].ttype);
		  all_prefix_attributes = prefix_attributes; ;}
    break;

  case 567:
#line 2551 "objc-parse.y"
    { pushlevel (0);
		  clear_parm_order ();
		  declare_parm_level (1); ;}
    break;

  case 568:
#line 2555 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype;
		  parmlist_tags_warning ();
		  poplevel (0, 0, 0); ;}
    break;

  case 570:
#line 2563 "objc-parse.y"
    { tree t;
		  for (t = yyvsp[-1].ttype; t; t = TREE_CHAIN (t))
		    if (TREE_VALUE (t) == NULL_TREE)
		      error ("`...' in old-style identifier list");
		  yyval.ttype = tree_cons (NULL_TREE, NULL_TREE, yyvsp[-1].ttype);

		  /* Make sure we have a parmlist after attributes.  */
		  if (yyvsp[-3].ttype != 0
		      && (TREE_CODE (yyval.ttype) != TREE_LIST
			  || TREE_PURPOSE (yyval.ttype) == 0
			  || TREE_CODE (TREE_PURPOSE (yyval.ttype)) != PARM_DECL))
		    YYERROR1;
		;}
    break;

  case 571:
#line 2581 "objc-parse.y"
    { yyval.ttype = build_tree_list (NULL_TREE, yyvsp[0].ttype); ;}
    break;

  case 572:
#line 2583 "objc-parse.y"
    { yyval.ttype = chainon (yyvsp[-2].ttype, build_tree_list (NULL_TREE, yyvsp[0].ttype)); ;}
    break;

  case 573:
#line 2589 "objc-parse.y"
    { yyval.ttype = build_tree_list (NULL_TREE, yyvsp[0].ttype); ;}
    break;

  case 574:
#line 2591 "objc-parse.y"
    { yyval.ttype = chainon (yyvsp[-2].ttype, build_tree_list (NULL_TREE, yyvsp[0].ttype)); ;}
    break;

  case 575:
#line 2596 "objc-parse.y"
    { yyval.ttype = SAVE_WARN_FLAGS();
		  pedantic = 0;
		  warn_pointer_arith = 0;
		  warn_traditional = 0; ;}
    break;

  case 581:
#line 2611 "objc-parse.y"
    {
		  if (objc_implementation_context)
                    {
		      finish_class (objc_implementation_context);
		      objc_ivar_chain = NULL_TREE;
		      objc_implementation_context = NULL_TREE;
		    }
		  else
		    warning ("`@end' must appear in an implementation context");
		;}
    break;

  case 582:
#line 2626 "objc-parse.y"
    { yyval.ttype = build_tree_list (NULL_TREE, yyvsp[0].ttype); ;}
    break;

  case 583:
#line 2628 "objc-parse.y"
    { yyval.ttype = chainon (yyvsp[-2].ttype, build_tree_list (NULL_TREE, yyvsp[0].ttype)); ;}
    break;

  case 584:
#line 2633 "objc-parse.y"
    {
		  objc_declare_class (yyvsp[-1].ttype);
		;}
    break;

  case 585:
#line 2640 "objc-parse.y"
    {
		  objc_declare_alias (yyvsp[-2].ttype, yyvsp[-1].ttype);
		;}
    break;

  case 586:
#line 2647 "objc-parse.y"
    {
		  objc_interface_context = objc_ivar_context
		    = start_class (CLASS_INTERFACE_TYPE, yyvsp[-2].ttype, NULL_TREE, yyvsp[-1].ttype);
                  objc_public_flag = 0;
		;}
    break;

  case 587:
#line 2653 "objc-parse.y"
    {
                  continue_class (objc_interface_context);
		;}
    break;

  case 588:
#line 2658 "objc-parse.y"
    {
		  finish_class (objc_interface_context);
		  objc_interface_context = NULL_TREE;
		;}
    break;

  case 589:
#line 2664 "objc-parse.y"
    {
		  objc_interface_context
		    = start_class (CLASS_INTERFACE_TYPE, yyvsp[-1].ttype, NULL_TREE, yyvsp[0].ttype);
                  continue_class (objc_interface_context);
		;}
    break;

  case 590:
#line 2671 "objc-parse.y"
    {
		  finish_class (objc_interface_context);
		  objc_interface_context = NULL_TREE;
		;}
    break;

  case 591:
#line 2677 "objc-parse.y"
    {
		  objc_interface_context = objc_ivar_context
		    = start_class (CLASS_INTERFACE_TYPE, yyvsp[-4].ttype, yyvsp[-2].ttype, yyvsp[-1].ttype);
                  objc_public_flag = 0;
		;}
    break;

  case 592:
#line 2683 "objc-parse.y"
    {
                  continue_class (objc_interface_context);
		;}
    break;

  case 593:
#line 2688 "objc-parse.y"
    {
		  finish_class (objc_interface_context);
		  objc_interface_context = NULL_TREE;
		;}
    break;

  case 594:
#line 2694 "objc-parse.y"
    {
		  objc_interface_context
		    = start_class (CLASS_INTERFACE_TYPE, yyvsp[-3].ttype, yyvsp[-1].ttype, yyvsp[0].ttype);
                  continue_class (objc_interface_context);
		;}
    break;

  case 595:
#line 2701 "objc-parse.y"
    {
		  finish_class (objc_interface_context);
		  objc_interface_context = NULL_TREE;
		;}
    break;

  case 596:
#line 2707 "objc-parse.y"
    {
		  objc_implementation_context = objc_ivar_context
		    = start_class (CLASS_IMPLEMENTATION_TYPE, yyvsp[-1].ttype, NULL_TREE, NULL_TREE);
                  objc_public_flag = 0;
		;}
    break;

  case 597:
#line 2713 "objc-parse.y"
    {
                  objc_ivar_chain
		    = continue_class (objc_implementation_context);
		;}
    break;

  case 598:
#line 2719 "objc-parse.y"
    {
		  objc_implementation_context
		    = start_class (CLASS_IMPLEMENTATION_TYPE, yyvsp[0].ttype, NULL_TREE, NULL_TREE);
                  objc_ivar_chain
		    = continue_class (objc_implementation_context);
		;}
    break;

  case 599:
#line 2727 "objc-parse.y"
    {
		  objc_implementation_context = objc_ivar_context
		    = start_class (CLASS_IMPLEMENTATION_TYPE, yyvsp[-3].ttype, yyvsp[-1].ttype, NULL_TREE);
                  objc_public_flag = 0;
		;}
    break;

  case 600:
#line 2733 "objc-parse.y"
    {
                  objc_ivar_chain
		    = continue_class (objc_implementation_context);
		;}
    break;

  case 601:
#line 2739 "objc-parse.y"
    {
		  objc_implementation_context
		    = start_class (CLASS_IMPLEMENTATION_TYPE, yyvsp[-2].ttype, yyvsp[0].ttype, NULL_TREE);
                  objc_ivar_chain
		    = continue_class (objc_implementation_context);
		;}
    break;

  case 602:
#line 2747 "objc-parse.y"
    {
		  objc_interface_context
		    = start_class (CATEGORY_INTERFACE_TYPE, yyvsp[-4].ttype, yyvsp[-2].ttype, yyvsp[0].ttype);
                  continue_class (objc_interface_context);
		;}
    break;

  case 603:
#line 2754 "objc-parse.y"
    {
		  finish_class (objc_interface_context);
		  objc_interface_context = NULL_TREE;
		;}
    break;

  case 604:
#line 2760 "objc-parse.y"
    {
		  objc_implementation_context
		    = start_class (CATEGORY_IMPLEMENTATION_TYPE, yyvsp[-3].ttype, yyvsp[-1].ttype, NULL_TREE);
                  objc_ivar_chain
		    = continue_class (objc_implementation_context);
		;}
    break;

  case 605:
#line 2770 "objc-parse.y"
    {
		  objc_pq_context = 1;
		  objc_interface_context
		    = start_protocol(PROTOCOL_INTERFACE_TYPE, yyvsp[-1].ttype, yyvsp[0].ttype);
		;}
    break;

  case 606:
#line 2776 "objc-parse.y"
    {
		  objc_pq_context = 0;
		  finish_protocol(objc_interface_context);
		  objc_interface_context = NULL_TREE;
		;}
    break;

  case 607:
#line 2785 "objc-parse.y"
    {
		  objc_declare_protocols (yyvsp[-1].ttype);
		;}
    break;

  case 608:
#line 2792 "objc-parse.y"
    {
		  yyval.ttype = NULL_TREE;
		;}
    break;

  case 610:
#line 2800 "objc-parse.y"
    {
		  if (yyvsp[-2].code == LT_EXPR && yyvsp[0].code == GT_EXPR)
		    yyval.ttype = yyvsp[-1].ttype;
		  else
		    YYERROR1;
		;}
    break;

  case 613:
#line 2814 "objc-parse.y"
    { objc_public_flag = 2; ;}
    break;

  case 614:
#line 2815 "objc-parse.y"
    { objc_public_flag = 0; ;}
    break;

  case 615:
#line 2816 "objc-parse.y"
    { objc_public_flag = 1; ;}
    break;

  case 616:
#line 2821 "objc-parse.y"
    {
                  yyval.ttype = NULL_TREE;
                ;}
    break;

  case 618:
#line 2826 "objc-parse.y"
    {
                  if (pedantic)
		    pedwarn ("extra semicolon in struct or union specified");
                ;}
    break;

  case 619:
#line 2844 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype;
		  POP_DECLSPEC_STACK; ;}
    break;

  case 620:
#line 2847 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype;
		  POP_DECLSPEC_STACK; ;}
    break;

  case 621:
#line 2850 "objc-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 622:
#line 2855 "objc-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 625:
#line 2862 "objc-parse.y"
    {
		  yyval.ttype = add_instance_variable (objc_ivar_context,
					      objc_public_flag,
					      yyvsp[0].ttype, current_declspecs,
					      NULL_TREE);
                ;}
    break;

  case 626:
#line 2869 "objc-parse.y"
    {
		  yyval.ttype = add_instance_variable (objc_ivar_context,
					      objc_public_flag,
					      yyvsp[-2].ttype, current_declspecs, yyvsp[0].ttype);
                ;}
    break;

  case 627:
#line 2875 "objc-parse.y"
    {
		  yyval.ttype = add_instance_variable (objc_ivar_context,
					      objc_public_flag,
					      NULL_TREE,
					      current_declspecs, yyvsp[0].ttype);
                ;}
    break;

  case 628:
#line 2885 "objc-parse.y"
    { objc_inherit_code = CLASS_METHOD_DECL; ;}
    break;

  case 629:
#line 2887 "objc-parse.y"
    { objc_inherit_code = INSTANCE_METHOD_DECL; ;}
    break;

  case 630:
#line 2892 "objc-parse.y"
    {
		  objc_pq_context = 1;
		  if (!objc_implementation_context)
		    fatal_error ("method definition not in class context");
		;}
    break;

  case 631:
#line 2898 "objc-parse.y"
    {
		  objc_pq_context = 0;
		  if (objc_inherit_code == CLASS_METHOD_DECL)
		    add_class_method (objc_implementation_context, yyvsp[0].ttype);
		  else
		    add_instance_method (objc_implementation_context, yyvsp[0].ttype);
		  start_method_def (yyvsp[0].ttype);
		;}
    break;

  case 632:
#line 2907 "objc-parse.y"
    {
		  continue_method_def ();
		;}
    break;

  case 633:
#line 2911 "objc-parse.y"
    {
		  finish_method_def ();
		;}
    break;

  case 635:
#line 2922 "objc-parse.y"
    {yyval.ttype = NULL_TREE; ;}
    break;

  case 640:
#line 2929 "objc-parse.y"
    {yyval.ttype = NULL_TREE; ;}
    break;

  case 644:
#line 2939 "objc-parse.y"
    {
		  /* Remember protocol qualifiers in prototypes.  */
		  objc_pq_context = 1;
		;}
    break;

  case 645:
#line 2944 "objc-parse.y"
    {
		  /* Forget protocol qualifiers here.  */
		  objc_pq_context = 0;
		  if (objc_inherit_code == CLASS_METHOD_DECL)
		    add_class_method (objc_interface_context, yyvsp[0].ttype);
		  else
		    add_instance_method (objc_interface_context, yyvsp[0].ttype);
		;}
    break;

  case 647:
#line 2957 "objc-parse.y"
    {
		  yyval.ttype = build_method_decl (objc_inherit_code, yyvsp[-2].ttype, yyvsp[0].ttype, NULL_TREE);
		;}
    break;

  case 648:
#line 2962 "objc-parse.y"
    {
		  yyval.ttype = build_method_decl (objc_inherit_code, NULL_TREE, yyvsp[0].ttype, NULL_TREE);
		;}
    break;

  case 649:
#line 2967 "objc-parse.y"
    {
		  yyval.ttype = build_method_decl (objc_inherit_code, yyvsp[-3].ttype, yyvsp[-1].ttype, yyvsp[0].ttype);
		;}
    break;

  case 650:
#line 2972 "objc-parse.y"
    {
		  yyval.ttype = build_method_decl (objc_inherit_code, NULL_TREE, yyvsp[-1].ttype, yyvsp[0].ttype);
		;}
    break;

  case 659:
#line 3002 "objc-parse.y"
    { POP_DECLSPEC_STACK; ;}
    break;

  case 660:
#line 3004 "objc-parse.y"
    { shadow_tag (yyvsp[-1].ttype); ;}
    break;

  case 661:
#line 3006 "objc-parse.y"
    { pedwarn ("empty declaration"); ;}
    break;

  case 662:
#line 3011 "objc-parse.y"
    { push_parm_decl (yyvsp[0].ttype); ;}
    break;

  case 663:
#line 3013 "objc-parse.y"
    { push_parm_decl (yyvsp[0].ttype); ;}
    break;

  case 664:
#line 3021 "objc-parse.y"
    { yyval.ttype = build_tree_list (build_tree_list (current_declspecs,
							 yyvsp[-1].ttype),
					chainon (yyvsp[0].ttype, all_prefix_attributes)); ;}
    break;

  case 665:
#line 3025 "objc-parse.y"
    { yyval.ttype = build_tree_list (build_tree_list (current_declspecs,
							 yyvsp[-1].ttype),
					chainon (yyvsp[0].ttype, all_prefix_attributes)); ;}
    break;

  case 666:
#line 3029 "objc-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 667:
#line 3034 "objc-parse.y"
    {
	    	  yyval.ttype = NULL_TREE;
		;}
    break;

  case 668:
#line 3038 "objc-parse.y"
    {
		  /* oh what a kludge! */
		  yyval.ttype = objc_ellipsis_node;
		;}
    break;

  case 669:
#line 3043 "objc-parse.y"
    {
		  pushlevel (0);
		;}
    break;

  case 670:
#line 3047 "objc-parse.y"
    {
	  	  /* returns a tree list node generated by get_parm_info */
		  yyval.ttype = yyvsp[0].ttype;
		  poplevel (0, 0, 0);
		;}
    break;

  case 673:
#line 3062 "objc-parse.y"
    {
		  yyval.ttype = chainon (yyvsp[-1].ttype, yyvsp[0].ttype);
		;}
    break;

  case 700:
#line 3084 "objc-parse.y"
    {
		  yyval.ttype = build_keyword_decl (yyvsp[-5].ttype, yyvsp[-2].ttype, yyvsp[0].ttype);
		;}
    break;

  case 701:
#line 3089 "objc-parse.y"
    {
		  yyval.ttype = build_keyword_decl (yyvsp[-2].ttype, NULL_TREE, yyvsp[0].ttype);
		;}
    break;

  case 702:
#line 3094 "objc-parse.y"
    {
		  yyval.ttype = build_keyword_decl (NULL_TREE, yyvsp[-2].ttype, yyvsp[0].ttype);
		;}
    break;

  case 703:
#line 3099 "objc-parse.y"
    {
		  yyval.ttype = build_keyword_decl (NULL_TREE, NULL_TREE, yyvsp[0].ttype);
		;}
    break;

  case 707:
#line 3112 "objc-parse.y"
    {
		  yyval.ttype = chainon (yyvsp[-1].ttype, yyvsp[0].ttype);
		;}
    break;

  case 708:
#line 3120 "objc-parse.y"
    {
		  if (TREE_CHAIN (yyvsp[0].ttype) == NULL_TREE)
		    /* just return the expr., remove a level of indirection */
		    yyval.ttype = TREE_VALUE (yyvsp[0].ttype);
                  else
		    /* we have a comma expr., we will collapse later */
		    yyval.ttype = yyvsp[0].ttype;
		;}
    break;

  case 709:
#line 3132 "objc-parse.y"
    {
		  yyval.ttype = build_tree_list (yyvsp[-2].ttype, yyvsp[0].ttype);
		;}
    break;

  case 710:
#line 3136 "objc-parse.y"
    {
		  yyval.ttype = build_tree_list (NULL_TREE, yyvsp[0].ttype);
		;}
    break;

  case 712:
#line 3144 "objc-parse.y"
    {
		  yyval.ttype = get_class_reference (yyvsp[0].ttype);
		;}
    break;

  case 713:
#line 3151 "objc-parse.y"
    { objc_receiver_context = 1; ;}
    break;

  case 714:
#line 3153 "objc-parse.y"
    { objc_receiver_context = 0; ;}
    break;

  case 715:
#line 3155 "objc-parse.y"
    {
		  yyval.ttype = build_tree_list (yyvsp[-3].ttype, yyvsp[-1].ttype);
		;}
    break;

  case 719:
#line 3168 "objc-parse.y"
    {
		  yyval.ttype = chainon (yyvsp[-1].ttype, yyvsp[0].ttype);
		;}
    break;

  case 720:
#line 3175 "objc-parse.y"
    {
		  yyval.ttype = build_tree_list (yyvsp[-1].ttype, NULL_TREE);
		;}
    break;

  case 721:
#line 3179 "objc-parse.y"
    {
		  yyval.ttype = build_tree_list (NULL_TREE, NULL_TREE);
		;}
    break;

  case 722:
#line 3186 "objc-parse.y"
    {
		  yyval.ttype = yyvsp[-1].ttype;
		;}
    break;

  case 723:
#line 3193 "objc-parse.y"
    {
		  yyval.ttype = yyvsp[-1].ttype;
		;}
    break;

  case 724:
#line 3202 "objc-parse.y"
    {
		  yyval.ttype = groktypename (yyvsp[-1].ttype);
		;}
    break;


    }

/* Line 991 of yacc.c.  */
#line 6522 "op2534.c"

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


#line 3207 "objc-parse.y"


/* yylex() is a thin wrapper around c_lex(), all it does is translate
   cpplib.h's token codes into yacc's token codes.  */

static enum cpp_ttype last_token;

/* The reserved keyword table.  */
struct resword
{
  const char *word;
  ENUM_BITFIELD(rid) rid : 16;
  unsigned int disable   : 16;
};

/* Disable mask.  Keywords are disabled if (reswords[i].disable & mask) is
   _true_.  */
#define D_TRAD	0x01	/* not in traditional C */
#define D_C89	0x02	/* not in C89 */
#define D_EXT	0x04	/* GCC extension */
#define D_EXT89	0x08	/* GCC extension incorporated in C99 */
#define D_OBJC	0x10	/* Objective C only */

static const struct resword reswords[] =
{
  { "_Bool",		RID_BOOL,	0 },
  { "_Complex",		RID_COMPLEX,	0 },
  { "__FUNCTION__",	RID_FUNCTION_NAME, 0 },
  { "__PRETTY_FUNCTION__", RID_PRETTY_FUNCTION_NAME, 0 },
  { "__alignof",	RID_ALIGNOF,	0 },
  { "__alignof__",	RID_ALIGNOF,	0 },
  { "__asm",		RID_ASM,	0 },
  { "__asm__",		RID_ASM,	0 },
  { "__attribute",	RID_ATTRIBUTE,	0 },
  { "__attribute__",	RID_ATTRIBUTE,	0 },
  { "__bounded",	RID_BOUNDED,	0 },
  { "__bounded__",	RID_BOUNDED,	0 },
  { "__builtin_choose_expr", RID_CHOOSE_EXPR, 0 },
  { "__builtin_types_compatible_p", RID_TYPES_COMPATIBLE_P, 0 },
  { "__builtin_va_arg",	RID_VA_ARG,	0 },
  { "__complex",	RID_COMPLEX,	0 },
  { "__complex__",	RID_COMPLEX,	0 },
  { "__const",		RID_CONST,	0 },
  { "__const__",	RID_CONST,	0 },
  { "__extension__",	RID_EXTENSION,	0 },
  { "__func__",		RID_C99_FUNCTION_NAME, 0 },
  { "__imag",		RID_IMAGPART,	0 },
  { "__imag__",		RID_IMAGPART,	0 },
  { "__inline",		RID_INLINE,	0 },
  { "__inline__",	RID_INLINE,	0 },
  { "__label__",	RID_LABEL,	0 },
  { "__ptrbase",	RID_PTRBASE,	0 },
  { "__ptrbase__",	RID_PTRBASE,	0 },
  { "__ptrextent",	RID_PTREXTENT,	0 },
  { "__ptrextent__",	RID_PTREXTENT,	0 },
  { "__ptrvalue",	RID_PTRVALUE,	0 },
  { "__ptrvalue__",	RID_PTRVALUE,	0 },
  { "__real",		RID_REALPART,	0 },
  { "__real__",		RID_REALPART,	0 },
  { "__restrict",	RID_RESTRICT,	0 },
  { "__restrict__",	RID_RESTRICT,	0 },
  { "__signed",		RID_SIGNED,	0 },
  { "__signed__",	RID_SIGNED,	0 },
  { "__typeof",		RID_TYPEOF,	0 },
  { "__typeof__",	RID_TYPEOF,	0 },
  { "__unbounded",	RID_UNBOUNDED,	0 },
  { "__unbounded__",	RID_UNBOUNDED,	0 },
  { "__volatile",	RID_VOLATILE,	0 },
  { "__volatile__",	RID_VOLATILE,	0 },
  { "asm",		RID_ASM,	D_EXT },
  { "auto",		RID_AUTO,	0 },
  { "break",		RID_BREAK,	0 },
  { "case",		RID_CASE,	0 },
  { "char",		RID_CHAR,	0 },
  { "const",		RID_CONST,	D_TRAD },
  { "continue",		RID_CONTINUE,	0 },
  { "default",		RID_DEFAULT,	0 },
  { "do",		RID_DO,		0 },
  { "double",		RID_DOUBLE,	0 },
  { "else",		RID_ELSE,	0 },
  { "enum",		RID_ENUM,	0 },
  { "extern",		RID_EXTERN,	0 },
  { "float",		RID_FLOAT,	0 },
  { "for",		RID_FOR,	0 },
  { "goto",		RID_GOTO,	0 },
  { "if",		RID_IF,		0 },
  { "inline",		RID_INLINE,	D_TRAD|D_EXT89 },
  { "int",		RID_INT,	0 },
  { "long",		RID_LONG,	0 },
  { "register",		RID_REGISTER,	0 },
  { "restrict",		RID_RESTRICT,	D_TRAD|D_C89 },
  { "return",		RID_RETURN,	0 },
  { "short",		RID_SHORT,	0 },
  { "signed",		RID_SIGNED,	D_TRAD },
  { "sizeof",		RID_SIZEOF,	0 },
  { "static",		RID_STATIC,	0 },
  { "struct",		RID_STRUCT,	0 },
  { "switch",		RID_SWITCH,	0 },
  { "typedef",		RID_TYPEDEF,	0 },
  { "typeof",		RID_TYPEOF,	D_TRAD|D_EXT },
  { "union",		RID_UNION,	0 },
  { "unsigned",		RID_UNSIGNED,	0 },
  { "void",		RID_VOID,	0 },
  { "volatile",		RID_VOLATILE,	D_TRAD },
  { "while",		RID_WHILE,	0 },
  { "id",		RID_ID,			D_OBJC },

  /* These objc keywords are recognized only immediately after
     an '@'.  */
  { "class",		RID_AT_CLASS,		D_OBJC },
  { "compatibility_alias", RID_AT_ALIAS,	D_OBJC },
  { "defs",		RID_AT_DEFS,		D_OBJC },
  { "encode",		RID_AT_ENCODE,		D_OBJC },
  { "end",		RID_AT_END,		D_OBJC },
  { "implementation",	RID_AT_IMPLEMENTATION,	D_OBJC },
  { "interface",	RID_AT_INTERFACE,	D_OBJC },
  { "private",		RID_AT_PRIVATE,		D_OBJC },
  { "protected",	RID_AT_PROTECTED,	D_OBJC },
  { "protocol",		RID_AT_PROTOCOL,	D_OBJC },
  { "public",		RID_AT_PUBLIC,		D_OBJC },
  { "selector",		RID_AT_SELECTOR,	D_OBJC },

  /* These are recognized only in protocol-qualifier context
     (see above) */
  { "bycopy",		RID_BYCOPY,		D_OBJC },
  { "byref",		RID_BYREF,		D_OBJC },
  { "in",		RID_IN,			D_OBJC },
  { "inout",		RID_INOUT,		D_OBJC },
  { "oneway",		RID_ONEWAY,		D_OBJC },
  { "out",		RID_OUT,		D_OBJC },
};
#define N_reswords (sizeof reswords / sizeof (struct resword))

/* Table mapping from RID_* constants to yacc token numbers.
   Unfortunately we have to have entries for all the keywords in all
   three languages.  */
static const short rid_to_yy[RID_MAX] =
{
  /* RID_STATIC */	SCSPEC,
  /* RID_UNSIGNED */	TYPESPEC,
  /* RID_LONG */	TYPESPEC,
  /* RID_CONST */	TYPE_QUAL,
  /* RID_EXTERN */	SCSPEC,
  /* RID_REGISTER */	SCSPEC,
  /* RID_TYPEDEF */	SCSPEC,
  /* RID_SHORT */	TYPESPEC,
  /* RID_INLINE */	SCSPEC,
  /* RID_VOLATILE */	TYPE_QUAL,
  /* RID_SIGNED */	TYPESPEC,
  /* RID_AUTO */	SCSPEC,
  /* RID_RESTRICT */	TYPE_QUAL,

  /* C extensions */
  /* RID_BOUNDED */	TYPE_QUAL,
  /* RID_UNBOUNDED */	TYPE_QUAL,
  /* RID_COMPLEX */	TYPESPEC,

  /* C++ */
  /* RID_FRIEND */	0,
  /* RID_VIRTUAL */	0,
  /* RID_EXPLICIT */	0,
  /* RID_EXPORT */	0,
  /* RID_MUTABLE */	0,

  /* ObjC */
  /* RID_IN */		TYPE_QUAL,
  /* RID_OUT */		TYPE_QUAL,
  /* RID_INOUT */	TYPE_QUAL,
  /* RID_BYCOPY */	TYPE_QUAL,
  /* RID_BYREF */	TYPE_QUAL,
  /* RID_ONEWAY */	TYPE_QUAL,
  
  /* C */
  /* RID_INT */		TYPESPEC,
  /* RID_CHAR */	TYPESPEC,
  /* RID_FLOAT */	TYPESPEC,
  /* RID_DOUBLE */	TYPESPEC,
  /* RID_VOID */	TYPESPEC,
  /* RID_ENUM */	ENUM,
  /* RID_STRUCT */	STRUCT,
  /* RID_UNION */	UNION,
  /* RID_IF */		IF,
  /* RID_ELSE */	ELSE,
  /* RID_WHILE */	WHILE,
  /* RID_DO */		DO,
  /* RID_FOR */		FOR,
  /* RID_SWITCH */	SWITCH,
  /* RID_CASE */	CASE,
  /* RID_DEFAULT */	DEFAULT,
  /* RID_BREAK */	BREAK,
  /* RID_CONTINUE */	CONTINUE,
  /* RID_RETURN */	RETURN,
  /* RID_GOTO */	GOTO,
  /* RID_SIZEOF */	SIZEOF,

  /* C extensions */
  /* RID_ASM */		ASM_KEYWORD,
  /* RID_TYPEOF */	TYPEOF,
  /* RID_ALIGNOF */	ALIGNOF,
  /* RID_ATTRIBUTE */	ATTRIBUTE,
  /* RID_VA_ARG */	VA_ARG,
  /* RID_EXTENSION */	EXTENSION,
  /* RID_IMAGPART */	IMAGPART,
  /* RID_REALPART */	REALPART,
  /* RID_LABEL */	LABEL,
  /* RID_PTRBASE */	PTR_BASE,
  /* RID_PTREXTENT */	PTR_EXTENT,
  /* RID_PTRVALUE */	PTR_VALUE,

  /* RID_CHOOSE_EXPR */			CHOOSE_EXPR,
  /* RID_TYPES_COMPATIBLE_P */		TYPES_COMPATIBLE_P,

  /* RID_FUNCTION_NAME */		STRING_FUNC_NAME,
  /* RID_PRETTY_FUNCTION_NAME */	STRING_FUNC_NAME,
  /* RID_C99_FUNCTION_NAME */		VAR_FUNC_NAME,

  /* C++ */
  /* RID_BOOL */	TYPESPEC,
  /* RID_WCHAR */	0,
  /* RID_CLASS */	0,
  /* RID_PUBLIC */	0,
  /* RID_PRIVATE */	0,
  /* RID_PROTECTED */	0,
  /* RID_TEMPLATE */	0,
  /* RID_NULL */	0,
  /* RID_CATCH */	0,
  /* RID_DELETE */	0,
  /* RID_FALSE */	0,
  /* RID_NAMESPACE */	0,
  /* RID_NEW */		0,
  /* RID_OPERATOR */	0,
  /* RID_THIS */	0,
  /* RID_THROW */	0,
  /* RID_TRUE */	0,
  /* RID_TRY */		0,
  /* RID_TYPENAME */	0,
  /* RID_TYPEID */	0,
  /* RID_USING */	0,

  /* casts */
  /* RID_CONSTCAST */	0,
  /* RID_DYNCAST */	0,
  /* RID_REINTCAST */	0,
  /* RID_STATCAST */	0,

  /* alternate spellings */
  /* RID_AND */		0,
  /* RID_AND_EQ */	0,
  /* RID_NOT */		0,
  /* RID_NOT_EQ */	0,
  /* RID_OR */		0,
  /* RID_OR_EQ */	0,
  /* RID_XOR */		0,
  /* RID_XOR_EQ */	0,
  /* RID_BITAND */	0,
  /* RID_BITOR */	0,
  /* RID_COMPL */	0,
  
  /* Objective C */
  /* RID_ID */			OBJECTNAME,
  /* RID_AT_ENCODE */		ENCODE,
  /* RID_AT_END */		END,
  /* RID_AT_CLASS */		CLASS,
  /* RID_AT_ALIAS */		ALIAS,
  /* RID_AT_DEFS */		DEFS,
  /* RID_AT_PRIVATE */		PRIVATE,
  /* RID_AT_PROTECTED */	PROTECTED,
  /* RID_AT_PUBLIC */		PUBLIC,
  /* RID_AT_PROTOCOL */		PROTOCOL,
  /* RID_AT_SELECTOR */		SELECTOR,
  /* RID_AT_INTERFACE */	INTERFACE,
  /* RID_AT_IMPLEMENTATION */	IMPLEMENTATION
};

static void
init_reswords ()
{
  unsigned int i;
  tree id;
  int mask = (flag_isoc99 ? 0 : D_C89)
	      | (flag_traditional ? D_TRAD : 0)
	      | (flag_no_asm ? (flag_isoc99 ? D_EXT : D_EXT|D_EXT89) : 0);

  if (c_language != clk_objective_c)
     mask |= D_OBJC;

  /* It is not necessary to register ridpointers as a GC root, because
     all the trees it points to are permanently interned in the
     get_identifier hash anyway.  */
  ridpointers = (tree *) xcalloc ((int) RID_MAX, sizeof (tree));
  for (i = 0; i < N_reswords; i++)
    {
      /* If a keyword is disabled, do not enter it into the table
	 and so create a canonical spelling that isn't a keyword.  */
      if (reswords[i].disable & mask)
	continue;

      id = get_identifier (reswords[i].word);
      C_RID_CODE (id) = reswords[i].rid;
      C_IS_RESERVED_WORD (id) = 1;
      ridpointers [(int) reswords[i].rid] = id;
    }
}

#define NAME(type) cpp_type2name (type)

static void
yyerror (msgid)
     const char *msgid;
{
  const char *string = _(msgid);

  if (last_token == CPP_EOF)
    error ("%s at end of input", string);
  else if (last_token == CPP_CHAR || last_token == CPP_WCHAR)
    {
      unsigned int val = TREE_INT_CST_LOW (yylval.ttype);
      const char *const ell = (last_token == CPP_CHAR) ? "" : "L";
      if (val <= UCHAR_MAX && ISGRAPH (val))
	error ("%s before %s'%c'", string, ell, val);
      else
	error ("%s before %s'\\x%x'", string, ell, val);
    }
  else if (last_token == CPP_STRING
	   || last_token == CPP_WSTRING)
    error ("%s before string constant", string);
  else if (last_token == CPP_NUMBER)
    error ("%s before numeric constant", string);
  else if (last_token == CPP_NAME)
    error ("%s before \"%s\"", string, IDENTIFIER_POINTER (yylval.ttype));
  else
    error ("%s before '%s' token", string, NAME(last_token));
}

static int
yylexname ()
{
  tree decl;
  
  int objc_force_identifier = objc_need_raw_identifier;
  OBJC_NEED_RAW_IDENTIFIER (0);
  
  if (C_IS_RESERVED_WORD (yylval.ttype))
    {
      enum rid rid_code = C_RID_CODE (yylval.ttype);

      /* Turn non-typedefed refs to "id" into plain identifiers; this
	 allows constructs like "void foo(id id);" to work.  */
      if (rid_code == RID_ID)
      {
	decl = lookup_name (yylval.ttype);
	if (decl == NULL_TREE || TREE_CODE (decl) != TYPE_DECL)
	  return IDENTIFIER;
      }

      if (!OBJC_IS_AT_KEYWORD (rid_code)
	  && (!OBJC_IS_PQ_KEYWORD (rid_code) || objc_pq_context))
      {
	int yycode = rid_to_yy[(int) rid_code];
	if (yycode == STRING_FUNC_NAME)
	  {
	    /* __FUNCTION__ and __PRETTY_FUNCTION__ get converted
	       to string constants.  */
	    const char *name = fname_string (rid_code);
	  
	    yylval.ttype = build_string (strlen (name) + 1, name);
	    C_ARTIFICIAL_STRING_P (yylval.ttype) = 1;
	    last_token = CPP_STRING;  /* so yyerror won't choke */
	    return STRING;
	  }
      
	/* Return the canonical spelling for this keyword.  */
	yylval.ttype = ridpointers[(int) rid_code];
	return yycode;
      }
    }

  decl = lookup_name (yylval.ttype);
  if (decl)
    {
      if (TREE_CODE (decl) == TYPE_DECL)
	return TYPENAME;
    }
  else
    {
      tree objc_interface_decl = is_class_name (yylval.ttype);
      /* ObjC class names are in the same namespace as variables and
	 typedefs, and hence are shadowed by local declarations.  */
      if (objc_interface_decl 
	  && (global_bindings_p () 
	      || (!objc_force_identifier && !decl)))
	{
	  yylval.ttype = objc_interface_decl;
	  return CLASSNAME;
	}
    }

  return IDENTIFIER;
}


static inline int
_yylex ()
{
 get_next:
  last_token = c_lex (&yylval.ttype);
  switch (last_token)
    {
    case CPP_EQ:					return '=';
    case CPP_NOT:					return '!';
    case CPP_GREATER:	yylval.code = GT_EXPR;		return ARITHCOMPARE;
    case CPP_LESS:	yylval.code = LT_EXPR;		return ARITHCOMPARE;
    case CPP_PLUS:	yylval.code = PLUS_EXPR;	return '+';
    case CPP_MINUS:	yylval.code = MINUS_EXPR;	return '-';
    case CPP_MULT:	yylval.code = MULT_EXPR;	return '*';
    case CPP_DIV:	yylval.code = TRUNC_DIV_EXPR;	return '/';
    case CPP_MOD:	yylval.code = TRUNC_MOD_EXPR;	return '%';
    case CPP_AND:	yylval.code = BIT_AND_EXPR;	return '&';
    case CPP_OR:	yylval.code = BIT_IOR_EXPR;	return '|';
    case CPP_XOR:	yylval.code = BIT_XOR_EXPR;	return '^';
    case CPP_RSHIFT:	yylval.code = RSHIFT_EXPR;	return RSHIFT;
    case CPP_LSHIFT:	yylval.code = LSHIFT_EXPR;	return LSHIFT;

    case CPP_COMPL:					return '~';
    case CPP_AND_AND:					return ANDAND;
    case CPP_OR_OR:					return OROR;
    case CPP_QUERY:					return '?';
    case CPP_OPEN_PAREN:				return '(';
    case CPP_EQ_EQ:	yylval.code = EQ_EXPR;		return EQCOMPARE;
    case CPP_NOT_EQ:	yylval.code = NE_EXPR;		return EQCOMPARE;
    case CPP_GREATER_EQ:yylval.code = GE_EXPR;		return ARITHCOMPARE;
    case CPP_LESS_EQ:	yylval.code = LE_EXPR;		return ARITHCOMPARE;

    case CPP_PLUS_EQ:	yylval.code = PLUS_EXPR;	return ASSIGN;
    case CPP_MINUS_EQ:	yylval.code = MINUS_EXPR;	return ASSIGN;
    case CPP_MULT_EQ:	yylval.code = MULT_EXPR;	return ASSIGN;
    case CPP_DIV_EQ:	yylval.code = TRUNC_DIV_EXPR;	return ASSIGN;
    case CPP_MOD_EQ:	yylval.code = TRUNC_MOD_EXPR;	return ASSIGN;
    case CPP_AND_EQ:	yylval.code = BIT_AND_EXPR;	return ASSIGN;
    case CPP_OR_EQ:	yylval.code = BIT_IOR_EXPR;	return ASSIGN;
    case CPP_XOR_EQ:	yylval.code = BIT_XOR_EXPR;	return ASSIGN;
    case CPP_RSHIFT_EQ:	yylval.code = RSHIFT_EXPR;	return ASSIGN;
    case CPP_LSHIFT_EQ:	yylval.code = LSHIFT_EXPR;	return ASSIGN;

    case CPP_OPEN_SQUARE:				return '[';
    case CPP_CLOSE_SQUARE:				return ']';
    case CPP_OPEN_BRACE:				return '{';
    case CPP_CLOSE_BRACE:				return '}';
    case CPP_ELLIPSIS:					return ELLIPSIS;

    case CPP_PLUS_PLUS:					return PLUSPLUS;
    case CPP_MINUS_MINUS:				return MINUSMINUS;
    case CPP_DEREF:					return POINTSAT;
    case CPP_DOT:					return '.';

      /* The following tokens may affect the interpretation of any
	 identifiers following, if doing Objective-C.  */
    case CPP_COLON:		OBJC_NEED_RAW_IDENTIFIER (0);	return ':';
    case CPP_COMMA:		OBJC_NEED_RAW_IDENTIFIER (0);	return ',';
    case CPP_CLOSE_PAREN:	OBJC_NEED_RAW_IDENTIFIER (0);	return ')';
    case CPP_SEMICOLON:		OBJC_NEED_RAW_IDENTIFIER (0);	return ';';

    case CPP_EOF:
      return 0;

    case CPP_NAME:
      return yylexname ();

    case CPP_NUMBER:
    case CPP_CHAR:
    case CPP_WCHAR:
      return CONSTANT;

    case CPP_STRING:
    case CPP_WSTRING:
      return STRING;
      
      /* This token is Objective-C specific.  It gives the next token
	 special significance.  */
    case CPP_ATSIGN:
      {
	tree after_at;
	enum cpp_ttype after_at_type;

	after_at_type = c_lex (&after_at);

	if (after_at_type == CPP_NAME
	    && C_IS_RESERVED_WORD (after_at)
	    && OBJC_IS_AT_KEYWORD (C_RID_CODE (after_at)))
	  {
	    yylval.ttype = after_at;
	    last_token = after_at_type;
	    return rid_to_yy [(int) C_RID_CODE (after_at)];
	  }
	_cpp_backup_tokens (parse_in, 1);
	return '@';
      }

      /* These tokens are C++ specific (and will not be generated
         in C mode, but let's be cautious).  */
    case CPP_SCOPE:
    case CPP_DEREF_STAR:
    case CPP_DOT_STAR:
    case CPP_MIN_EQ:
    case CPP_MAX_EQ:
    case CPP_MIN:
    case CPP_MAX:
      /* These tokens should not survive translation phase 4.  */
    case CPP_HASH:
    case CPP_PASTE:
      error ("syntax error at '%s' token", NAME(last_token));
      goto get_next;

    default:
      abort ();
    }
  /* NOTREACHED */
}

static int
yylex()
{
  int r;
  timevar_push (TV_LEX);
  r = _yylex();
  timevar_pop (TV_LEX);
  return r;
}

/* Sets the value of the 'yydebug' variable to VALUE.
   This is a function so we don't have to have YYDEBUG defined
   in order to build the compiler.  */

void
c_set_yydebug (value)
     int value;
{
#if YYDEBUG != 0
  yydebug = value;
#else
  warning ("YYDEBUG not defined");
#endif
}

/* Function used when yydebug is set, to print a token in more detail.  */

static void
yyprint (file, yychar, yyl)
     FILE *file;
     int yychar;
     YYSTYPE yyl;
{
  tree t = yyl.ttype;

  fprintf (file, " [%s]", NAME(last_token));
  
  switch (yychar)
    {
    case IDENTIFIER:
    case TYPENAME:
    case OBJECTNAME:
    case TYPESPEC:
    case TYPE_QUAL:
    case SCSPEC:
      if (IDENTIFIER_POINTER (t))
	fprintf (file, " `%s'", IDENTIFIER_POINTER (t));
      break;

    case CONSTANT:
      fprintf (file, " %s", GET_MODE_NAME (TYPE_MODE (TREE_TYPE (t))));
      if (TREE_CODE (t) == INTEGER_CST)
	fprintf (file,
#if HOST_BITS_PER_WIDE_INT == 64
#if HOST_BITS_PER_WIDE_INT == HOST_BITS_PER_INT
		 " 0x%x%016x",
#else
#if HOST_BITS_PER_WIDE_INT == HOST_BITS_PER_LONG
		 " 0x%lx%016lx",
#else
		 " 0x%llx%016llx",
#endif
#endif
#else
#if HOST_BITS_PER_WIDE_INT != HOST_BITS_PER_INT
		 " 0x%lx%08lx",
#else
		 " 0x%x%08x",
#endif
#endif
		 TREE_INT_CST_HIGH (t), TREE_INT_CST_LOW (t));
      break;
    }
}

/* This is not the ideal place to put these, but we have to get them out
   of c-lex.c because cp/lex.c has its own versions.  */

/* Return something to represent absolute declarators containing a *.
   TARGET is the absolute declarator that the * contains.
   TYPE_QUALS_ATTRS is a list of modifiers such as const or volatile
   to apply to the pointer type, represented as identifiers, possible mixed
   with attributes.

   We return an INDIRECT_REF whose "contents" are TARGET (inside a TREE_LIST,
   if attributes are present) and whose type is the modifier list.  */

tree
make_pointer_declarator (type_quals_attrs, target)
     tree type_quals_attrs, target;
{
  tree quals, attrs;
  tree itarget = target;
  split_specs_attrs (type_quals_attrs, &quals, &attrs);
  if (attrs != NULL_TREE)
    itarget = tree_cons (attrs, target, NULL_TREE);
  return build1 (INDIRECT_REF, quals, itarget);
}


