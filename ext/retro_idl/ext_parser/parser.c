/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Skeleton implementation for Bison GLR parsers in C

   Copyright (C) 2002-2015 Free Software Foundation, Inc.

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

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 1






/* First part of user declarations.  */
#line 13 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:240  */


typedef void * yyscan_t;
#define YY_TYPEDEF_YY_SCANNER_T

#include <ruby.h>

#include "parser.h"
#include "lexer.h"

YY_DECL;

void yyerror(YYLTYPE *locp, yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree, char const *msg);

static VALUE parseFileBuffer(VALUE self, VALUE buffer, VALUE filename);
static VALUE newLocation(VALUE filename, VALUE cref, const YYLTYPE *location);

static VALUE cASNError;
static VALUE cRetroIDL;


#line 76 "ext/retro_idl/ext_parser/parser.c" /* glr.c:240  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "parser.h"

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;

/* Copy the second part of user declarations.  */

#line 109 "ext/retro_idl/ext_parser/parser.c" /* glr.c:263  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX ((size_t) -1)

#ifdef __cplusplus
   typedef bool yybool;
#else
   typedef unsigned char yybool;
#endif
#define yytrue 1
#define yyfalse 0

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify clang.  */
# define YYLONGJMP(Env, Val) (longjmp (Env, Val), YYASSERT (0))
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


#ifndef YYASSERT
# define YYASSERT(Condition) ((void) ((Condition) || (abort (), 0)))
#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   602

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  114
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  116
/* YYNRULES -- Number of rules.  */
#define YYNRULES  236
/* YYNRULES -- Number of states.  */
#define YYNSTATES  373
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 10
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   355

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   113,     2,     2,     2,     2,     2,     2,
     103,   104,     2,     2,   106,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   107,   105,
     112,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   108,     2,   109,   110,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   101,   111,   102,     2,     2,     2,     2,
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
      95,    96,    97,    98,    99,   100
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   151,   151,   156,   163,   170,   174,   178,   182,   186,
     190,   194,   198,   202,   208,   213,   221,   234,   236,   240,
     247,   254,   261,   263,   265,   288,   293,   297,   302,   307,
     312,   319,   324,   331,   336,   340,   351,   353,   357,   362,
     369,   371,   378,   380,   384,   391,   393,   401,   408,   415,
     426,   430,   437,   444,   454,   456,   462,   467,   476,   478,
     482,   493,   508,   510,   512,   514,   516,   518,   520,   527,
     529,   531,   537,   542,   549,   556,   563,   570,   578,   591,
     593,   595,   597,   599,   601,   603,   605,   607,   609,   611,
     613,   615,   617,   621,   633,   635,   639,   648,   655,   662,
     669,   676,   683,   690,   697,   704,   711,   718,   725,   732,
     743,   755,   767,   778,   785,   795,   802,   809,   818,   829,
     835,   843,   850,   859,   871,   875,   879,   886,   893,   901,
     907,   916,   918,   922,   926,   928,   930,   936,   943,   955,
     966,   977,   984,   993,  1001,  1003,  1007,  1014,  1024,  1035,
    1045,  1056,  1060,  1064,  1069,  1073,  1080,  1087,  1089,  1093,
    1104,  1106,  1110,  1117,  1124,  1126,  1131,  1136,  1143,  1155,
    1163,  1169,  1176,  1185,  1187,  1195,  1203,  1210,  1222,  1226,
    1231,  1235,  1242,  1249,  1251,  1255,  1266,  1273,  1282,  1284,
    1288,  1290,  1296,  1304,  1309,  1316,  1324,  1332,  1340,  1349,
    1351,  1358,  1365,  1369,  1373,  1380,  1390,  1405,  1428,  1437,
    1452,  1466,  1476,  1478,  1482,  1484,  1488,  1493,  1497,  1499,
    1501,  1505,  1516,  1528,  1530,  1534,  1536,  1543,  1545,  1552,
    1554,  1561,  1575,  1577,  1581,  1583,  1585
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "EOF", "error", "$undefined", "EXCEPT", "CARET", "INTERSECTION", "PIPE",
  "UNION", "UNKNOWN", "ENDL", "\"[[\"", "\"::=\"", "\"..\"", "\"...\"",
  "EXCLAIM", "OCTET", "CHARACTER", "BIT", "STRING", "SIZE", "CHOICE",
  "SEQUENCE", "SET", "OF", "ALL", "MIN", "MAX", "COMPONENTS", "COMPONENT",
  "ABSENT", "CONTAINING", "FROM", "INCLUDES", "SETTINGS", "PRESENT",
  "PATTERN", "WITH", "OPTIONAL", "DEFAULT", "IMPLICIT", "EXPLICIT",
  "APPLICATION", "PRIVATE", "UNIVERSAL", "CHAR", "BOOLEAN", "INTEGER",
  "ENUMERATED", "BMPString", "GeneralString", "GraphicString", "IA5String",
  "ISO646String", "NumericString", "PrintableString", "TeletexString",
  "T61String", "UniversalString", "UTF8String", "VideotexString",
  "VisibleString", "DATE", "DATE_TIME", "DURATION", "EMBEDDED", "PDV",
  "EXTERNAL", "RELATIVE_OID_IRI", "OBJECT", "IDENTIFIER", "RELATIVE_IRI",
  "RELATIVE_OID", "TIME", "TIME_OF_DAY", "\"number\"", "\"hexadecimal\"",
  "\"identifier\"", "\"]]\"", "PLUS_INFINITY", "MINUS_INFINITY",
  "NOT_A_NUMBER", "TRUE", "FALSE", "NULL", "CONTAINS", "\"realnumber\"",
  "\"hstring\"", "\"bstring\"", "\"cstring\"", "DEFINITIONS", "BEGIN",
  "END", "TAGS", "INSTRUCTIONS", "EXPORTS", "IMPORTS", "EXTENSIBILITY",
  "IMPLIED", "AUTOMATIC", "\"typereference\"", "REAL", "'{'", "'}'", "'('",
  "')'", "';'", "','", "':'", "'['", "']'", "'^'", "'|'", "'<'", "'!'",
  "$accept", "Top", "empty", "hstring", "bstring", "identifier",
  "typereference", "valuereference", "number", "realnumber",
  "encodingreference", "modulereference", "ModuleList", "Module",
  "optDefinitiveIdentification", "DefinitiveOID",
  "DefinitiveOIDComponentList", "DefinitiveOIDComponent",
  "EncodingReferenceDefault", "TagDefault", "ExtensionDefault",
  "OptModuleBody", "ModuleBody", "OptExports", "Exports",
  "SymbolsExported", "OptImports", "Imports", "SymbolsImported",
  "SymbolsFromModuleList", "SymbolsFromModule", "GlobalModuleReference",
  "SymbolList", "Symbol", "Reference", "AssignmentList", "Assignment",
  "TypeAssignment", "ValueAssignment", "Value", "NamedValueList",
  "ValueList", "NamedValue", "Type", "ConstrainedType",
  "CharacterStringType", "UnrestrictedCharacterStringType",
  "RestrictedCharacterStringType", "DefinedType", "ObjectIdentifierType",
  "BooleanType", "IntegerType", "NamedNumberList", "NamedNumber",
  "SignedNumber", "EnumeratedType", "Enumerations", "RootEnumeration",
  "AdditionalEnumeration", "Enumeration", "EnumerationItem", "RealType",
  "RealValue", "NumericRealValue", "SpecialRealValue", "BitStringType",
  "OctetStringType", "NullType", "SequenceType", "OptionalExtensionMarker",
  "ComponentTypeLists", "RootComponentTypeList", "ExtensionEndMarker",
  "ExtensionAdditions", "ExtensionAdditionList", "ExtensionAddition",
  "ExtensionAdditionGroup", "VersionNumber", "ComponentTypeList",
  "ComponentType", "NamedType", "SequenceOfType", "SequenceOfTypeVariant",
  "SequenceOfTypeTarget", "ChoiceType", "AlternativeTypeLists",
  "RootAlternativeTypeList", "ExtensionAdditionAlternatives",
  "ExtensionAdditionAlternativesList", "ExtensionAdditionAlternative",
  "ExtensionAdditionAlternativesGroup", "AlternativeTypeList",
  "optTypePrefix", "TypePrefix", "Tag", "Class", "ClassNumber",
  "Constraint", "ConstraintSpec", "SubtypeConstraint", "ElementSetSpecs",
  "ElementSetSpec", "NextElements", "IntersectionMark", "UnionMark",
  "Elements", "SubTypeElements", "SingleValue", "ValueRange",
  "LowerEndpoint", "UpperEndpoint", "LowerEndValue", "UpperEndValue",
  "SizeConstraint", "ExceptionSpec", "ExceptionIdentification", YY_NULLPTR
};
#endif

#define YYPACT_NINF -305
#define YYTABLE_NINF -228

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
     -49,  -305,    76,  -305,  -305,   -38,   -49,  -305,  -305,    63,
    -305,    15,  -305,  -305,  -305,  -305,   -22,  -305,   -27,  -305,
      36,    43,  -305,  -305,  -305,  -305,    22,    -8,  -305,  -305,
      29,    37,    58,  -305,    56,  -305,  -305,  -305,    79,  -305,
     144,  -305,    70,    84,    -7,    91,   100,  -305,   104,  -305,
      94,  -305,  -305,  -305,  -305,    96,    97,  -305,  -305,  -305,
     -40,  -305,   -40,  -305,  -305,  -305,   -40,  -305,   102,   -40,
    -305,   -11,   191,   387,   -40,  -305,  -305,  -305,  -305,  -305,
    -305,   -49,   103,   194,   195,   196,   114,    25,  -305,   115,
     116,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,   152,  -305,  -305,  -305,     2,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,    13,  -305,
     387,  -305,    34,  -305,  -305,   122,    36,   124,  -305,     1,
     393,   330,   205,   206,    36,    36,  -305,   501,  -305,    63,
      63,    63,   141,  -305,   126,   142,  -305,   124,  -305,  -305,
      36,   103,  -305,   150,   147,   148,  -305,   146,   237,  -305,
     162,   160,   161,  -305,    59,   265,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,   472,   393,  -305,  -305,
     163,  -305,  -305,    -2,  -305,  -305,  -305,  -305,   146,  -305,
    -305,   167,    14,  -305,  -305,  -305,   257,   164,  -305,   171,
    -305,  -305,  -305,  -305,   172,     0,  -305,   172,  -305,   175,
     173,   177,  -305,  -305,  -305,  -305,  -305,  -305,    13,  -305,
      11,   387,  -305,   268,    36,   189,  -305,   179,   387,  -305,
     273,     7,  -305,   501,   429,  -305,   455,  -305,    32,    47,
    -305,   186,   501,   187,   280,  -305,  -305,  -305,  -305,  -305,
    -305,   429,   429,    83,  -305,    63,  -305,    36,  -305,   281,
      36,   188,  -305,   192,   146,  -305,  -305,    51,  -305,  -305,
      12,    69,   198,   190,   124,   146,  -305,  -305,  -305,  -305,
    -305,    36,  -305,   501,  -305,  -305,  -305,   197,    14,    14,
    -305,   107,  -305,  -305,  -305,   200,   201,  -305,   146,  -305,
    -305,   202,   501,   224,  -305,   203,  -305,  -305,  -305,  -305,
     289,  -305,  -305,   204,   207,   501,  -305,  -305,   393,  -305,
    -305,  -305,  -305,  -305,   208,    17,  -305,   209,  -305,  -305,
     199,     7,     6,   212,     7,     6,  -305,   190,  -305,    36,
     224,  -305,   213,  -305,  -305,   298,  -305,  -305,   -35,  -305,
    -305,  -305,   214,  -305,   215,    36,    17,  -305,     7,   -34,
    -305,  -305,  -305
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const unsigned char yydefact[] =
{
       4,     8,     0,     3,    13,     4,     2,    15,     1,     0,
      18,     0,    17,    14,    10,     7,    23,    22,     0,    20,
       4,     0,    19,    21,    26,    12,     0,     4,    24,    25,
       0,     0,     0,    30,     4,    28,    27,    29,     0,    32,
       0,    31,     0,     4,     4,    36,     0,    34,     4,    37,
       0,    41,     9,    54,    55,     0,    40,    51,    53,    16,
       4,    42,     0,    43,    39,    38,     0,    46,     0,    45,
      47,     0,     0,     0,    35,    57,    58,    59,    52,    44,
      48,     0,     4,     0,     0,     0,     0,     0,   112,   113,
       0,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,     0,   140,   130,   110,     0,    92,
      82,    95,    94,    91,    80,    81,    85,    84,    88,    79,
      87,    86,    90,    89,    83,    56,    50,    49,     0,   188,
       0,   189,   190,   139,    96,   137,     0,     0,   170,     0,
       0,     0,     0,     0,     0,     0,   111,     0,    93,     0,
       0,     0,    12,   199,     0,     0,   198,    60,   191,   192,
       0,     4,   186,     0,   176,   178,   231,     4,     0,   141,
       0,   146,   151,   162,   164,     0,   228,   134,   135,   136,
      62,    63,    64,    11,     5,     6,     0,     0,    70,    69,
      67,   119,   133,   221,    65,    66,   131,   132,     4,   202,
     203,   204,     4,   217,   218,   219,     0,   223,   220,   173,
     174,   169,   171,   172,     0,     0,   115,   128,   129,     0,
     121,   124,   126,    61,   200,   196,   197,   195,     0,   194,
       0,     0,   175,     0,     0,     0,   233,     4,     0,   143,
       0,     0,   165,     0,     0,    71,    67,    76,     0,     0,
      74,     0,     0,     0,     0,   212,   214,   213,   215,   211,
     208,     0,     0,     0,   224,     0,   114,     0,   120,     0,
       0,     0,   138,   168,     4,   187,   235,     0,   236,   232,
       0,   145,     0,     4,   167,     4,   163,   166,   207,    78,
      72,     0,    73,     0,   216,    68,   201,   205,     4,     4,
     230,     0,   229,   222,   225,     0,     0,   116,     4,   127,
     193,     4,     0,     4,   144,   153,   155,   158,   157,   142,
       0,   145,   150,     0,     4,     0,    75,    77,     0,   210,
     209,   226,   118,   117,   122,     0,   180,     4,   234,   160,
       0,     0,     0,   144,     0,     0,   154,     4,   206,     0,
       4,   184,   179,   181,   183,     0,   177,   161,     0,   156,
     149,   147,     0,   123,   125,     0,     0,   159,     0,     0,
     182,   148,   185
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -305,  -305,    18,  -305,  -305,    -9,   218,    -4,    -6,  -305,
     184,   241,  -305,   317,  -305,  -305,  -305,   306,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
     256,  -305,   283,   262,  -305,  -305,   260,  -305,  -305,  -145,
    -305,  -305,    39,  -115,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,   178,  -136,  -198,  -305,  -305,  -305,  -305,   -12,
      71,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -253,
    -305,  -304,     5,    19,  -305,    -3,  -305,    -1,    20,  -234,
    -135,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,   -18,
    -305,    -5,   193,  -305,  -305,   125,    23,   -58,  -305,  -305,
    -305,  -182,  -102,  -305,  -305,  -176,  -305,  -305,  -305,  -305,
    -305,  -305,    57,   275,  -194,  -305
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     2,   236,   188,   189,   190,   107,    54,   191,   192,
      26,     5,     6,     7,    11,    12,    18,    19,    27,    34,
      40,    46,    47,    48,    49,    55,    62,    63,    68,    69,
      70,   127,    71,    57,    58,    74,    75,    76,    77,   193,
     248,   249,   250,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   215,   218,   194,   117,   219,   220,   363,   221,
     222,   118,   195,   196,   197,   119,   120,   121,   122,   282,
     170,   171,   323,   283,   315,   316,   317,   341,   172,   173,
     174,   123,   141,   211,   124,   163,   164,   337,   352,   353,
     354,   165,   130,   131,   132,   155,   156,   148,   198,   199,
     200,   201,   260,   261,   262,   202,   203,   204,   205,   206,
     303,   207,   304,   208,   237,   279
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
      16,   162,   223,    17,   253,   251,   210,   286,   216,    16,
    -227,    25,    17,   147,   167,   157,   313,    50,     3,   255,
      81,   256,   313,    10,   216,   314,   209,   350,   168,   142,
     322,    30,    31,   168,   168,    52,    15,   278,    24,   168,
     360,   247,   367,   372,   137,    33,   318,    14,   138,    15,
       1,    52,    39,    52,   149,   150,   151,    52,    73,     1,
      52,    45,    51,     9,   371,    52,    61,   306,   288,    15,
      73,   241,   234,   158,   159,    22,     8,    15,    67,   166,
     311,    21,    15,    15,   356,   298,   299,    14,    15,    15,
      32,   324,     1,    15,   361,    66,   242,   243,   287,   275,
     129,   289,   266,   169,    20,   140,   267,   295,   318,   300,
    -227,   318,    15,   272,   334,    29,   273,   267,   302,   152,
     277,    35,   153,   284,   257,   258,   139,   161,   140,    36,
     161,   307,   161,   300,   290,   214,   217,    14,   291,    15,
     224,   224,   224,   153,   153,   153,   348,    28,   327,   292,
      37,   214,    38,   293,   140,    42,   302,    14,   312,    15,
      43,   177,   178,   179,   180,   181,   182,   338,   183,   184,
     185,  -145,   225,   226,   227,  -154,    41,   246,    44,   129,
     289,    14,   -33,    15,   186,   177,   178,   179,   180,   181,
     182,    59,   183,   184,   185,   301,   329,   330,    60,    64,
     351,    65,    82,    66,    83,    84,    85,    79,   186,    86,
      87,   128,   133,   134,   135,   136,   144,   145,     4,   224,
     259,   146,   153,   160,     4,   161,   276,   140,   212,   213,
     162,   351,   161,   228,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
    -200,   229,   232,   233,   234,   281,   305,   104,   214,   235,
     238,   217,    53,    14,   239,    15,   240,   241,   244,   263,
     252,   161,   105,   254,   140,   265,   264,   268,    53,   269,
      72,   274,   325,   270,    53,   280,   285,    53,     1,   106,
     294,   296,    72,   297,   308,   140,   320,   310,    14,     4,
     319,   321,   343,   328,   332,   333,   357,   340,   335,   342,
     344,   314,   154,   345,   349,   355,   259,   259,  -152,   366,
     368,   270,   126,    13,    23,    80,   161,    56,    78,   336,
     326,   339,   161,   161,   125,   161,   161,   364,   230,   359,
     217,   309,   346,   347,   340,    83,    84,    85,   370,   365,
      86,    87,   362,   271,   231,   321,   161,   161,   331,   161,
     369,   358,   143,     0,     0,   321,     0,     0,   339,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,     0,     0,     0,     0,     0,     0,     0,   104,     0,
       0,     0,    83,    84,    85,     0,    15,    86,    87,     0,
       0,     0,   137,   105,     0,     0,     0,   175,   176,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
     106,     0,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   137,     0,
       0,     0,     0,     0,   176,   104,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    14,     0,    15,
     105,   177,   178,   179,   180,   181,   182,     0,   183,   184,
     185,     0,     0,     0,     0,     0,     1,   106,     0,     0,
       0,     0,     0,     0,   186,     0,   187,     0,     0,     0,
       0,     0,     0,    14,     0,    15,     0,   177,   178,   179,
     180,   181,   182,     0,   183,   184,   185,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    14,
     186,    15,   187,   177,   178,   179,   180,   181,   182,     0,
     183,   184,   185,     0,     0,     0,    14,     0,    15,     0,
     177,   178,   179,   180,   181,   182,   186,   183,   184,   185,
       0,     0,   252,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   186,   245,    14,     0,    15,     0,   177,
     178,   179,   180,   181,   182,     0,   183,   184,   185,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   186
};

static const short int yycheck[] =
{
       9,   136,   147,     9,   198,   187,   141,   241,   144,    18,
      12,    20,    18,    11,    13,   130,    10,    24,     0,     5,
      31,     7,    10,     5,   160,    13,   141,    10,    27,    87,
     283,    39,    40,    27,    27,    44,    76,   235,    20,    27,
     344,   186,    77,    77,    19,    27,   280,    74,    23,    76,
      99,    60,    34,    62,    41,    42,    43,    66,    62,    99,
      69,    43,    44,   101,   368,    74,    48,   265,   244,    76,
      74,   106,   106,    39,    40,   102,     0,    76,    60,   137,
     274,   103,    76,    76,   337,   261,   262,    74,    76,    76,
      98,   285,    99,    76,   347,   106,    37,    38,   243,   234,
      82,   246,   102,   102,    89,   103,   106,   252,   342,    26,
     112,   345,    76,   102,   308,    93,   231,   106,   263,   128,
     235,    92,   128,   238,   110,   111,   101,   136,   103,    92,
     139,   267,   141,    26,   102,   144,   145,    74,   106,    76,
     149,   150,   151,   149,   150,   151,   328,   104,   293,   102,
      92,   160,    96,   106,   103,    11,   301,    74,   107,    76,
      90,    78,    79,    80,    81,    82,    83,   312,    85,    86,
      87,   102,   149,   150,   151,   106,    97,   186,    94,   161,
     325,    74,    91,    76,   101,    78,    79,    80,    81,    82,
      83,    91,    85,    86,    87,   112,   298,   299,    94,   105,
     335,   105,    11,   106,    15,    16,    17,   105,   101,    20,
      21,   108,    18,    18,    18,   101,   101,   101,     0,   228,
     202,    69,   228,   101,     6,   234,   235,   103,    23,    23,
     365,   366,   241,   107,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
     109,   109,   102,   106,   106,   237,   265,    68,   267,   113,
      23,   270,    44,    74,   102,    76,   106,   106,     3,    12,
     107,   280,    83,   106,   103,   103,   112,   102,    60,   106,
      62,    13,   291,   106,    66,   106,    13,    69,    99,   100,
     104,   104,    74,    13,    13,   103,   106,   109,    74,    81,
     102,   283,    13,   106,   104,   104,   107,   313,   106,   106,
     106,    13,   128,   106,   106,   106,   298,   299,   106,   106,
     106,   106,    81,     6,    18,    69,   335,    44,    66,   311,
     291,   313,   341,   342,    74,   344,   345,   349,   160,   342,
     349,   270,   324,   324,   350,    15,    16,    17,   366,   350,
      20,    21,   347,   228,   161,   337,   365,   366,   301,   368,
     365,   341,    87,    -1,    -1,   347,    -1,    -1,   350,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    15,    16,    17,    -1,    76,    20,    21,    -1,
      -1,    -1,    19,    83,    -1,    -1,    -1,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
     100,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    19,    -1,
      -1,    -1,    -1,    -1,    25,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,
      83,    78,    79,    80,    81,    82,    83,    -1,    85,    86,
      87,    -1,    -1,    -1,    -1,    -1,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    76,    -1,    78,    79,    80,
      81,    82,    83,    -1,    85,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
     101,    76,   103,    78,    79,    80,    81,    82,    83,    -1,
      85,    86,    87,    -1,    -1,    -1,    74,    -1,    76,    -1,
      78,    79,    80,    81,    82,    83,   101,    85,    86,    87,
      -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   102,    74,    -1,    76,    -1,    78,
      79,    80,    81,    82,    83,    -1,    85,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    99,   115,   116,   120,   125,   126,   127,     0,   101,
     116,   128,   129,   127,    74,    76,   119,   122,   130,   131,
      89,   103,   102,   131,   116,   119,   124,   132,   104,    93,
      39,    40,    98,   116,   133,    92,    92,    92,    96,   116,
     134,    97,    11,    90,    94,   116,   135,   136,   137,   138,
      24,   116,   119,   120,   121,   139,   146,   147,   148,    91,
      94,   116,   140,   141,   105,   105,   106,   116,   142,   143,
     144,   146,   120,   121,   149,   150,   151,   152,   147,   105,
     144,    31,    11,    15,    16,    17,    20,    21,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    68,    83,   100,   120,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   169,   175,   179,
     180,   181,   182,   195,   198,   150,   125,   145,   108,   116,
     206,   207,   208,    18,    18,    18,   101,    19,    23,   101,
     103,   196,   211,   227,   101,   101,    69,    11,   211,    41,
      42,    43,   119,   122,   124,   209,   210,   157,    39,    40,
     101,   119,   194,   199,   200,   205,   211,    13,    27,   102,
     184,   185,   192,   193,   194,    24,    25,    78,    79,    80,
      81,    82,    83,    85,    86,    87,   101,   103,   117,   118,
     119,   122,   123,   153,   168,   176,   177,   178,   212,   213,
     214,   215,   219,   220,   221,   222,   223,   225,   227,   157,
     194,   197,    23,    23,   119,   166,   167,   119,   167,   170,
     171,   173,   174,   153,   119,   210,   210,   210,   107,   109,
     166,   206,   102,   106,   106,   113,   116,   228,    23,   102,
     106,   106,    37,    38,     3,   102,   119,   153,   154,   155,
     156,   215,   107,   228,   106,     5,     7,   110,   111,   116,
     216,   217,   218,    12,   112,   103,   102,   106,   102,   106,
     106,   209,   102,   157,    13,   194,   119,   157,   168,   229,
     106,   116,   183,   187,   157,    13,   193,   153,   219,   153,
     102,   106,   102,   106,   104,   153,   104,    13,   219,   219,
      26,   112,   153,   224,   226,   119,   168,   167,    13,   174,
     109,   228,   107,    10,    13,   188,   189,   190,   193,   102,
     106,   116,   183,   186,   228,   119,   156,   153,   106,   216,
     216,   226,   104,   104,   228,   106,   116,   201,   153,   116,
     122,   191,   106,    13,   106,   106,   116,   187,   215,   106,
      10,   194,   202,   203,   204,   106,   183,   107,   192,   189,
     185,   183,   186,   172,   173,   191,   106,    77,   106,   205,
     203,   185,    77
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   114,   115,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   126,   127,   128,   128,   129,
     130,   130,   131,   131,   131,   132,   132,   133,   133,   133,
     133,   134,   134,   135,   135,   136,   137,   137,   138,   138,
     139,   139,   140,   140,   141,   142,   142,   143,   143,   144,
     145,   146,   146,   147,   148,   148,   149,   149,   150,   150,
     151,   152,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   154,   154,   155,   155,   156,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   158,   159,   159,   160,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     162,   163,   164,   165,   165,   166,   166,   167,   167,   168,
     169,   170,   170,   170,   171,   172,   173,   173,   174,   174,
     175,   176,   176,   177,   178,   178,   178,   179,   179,   180,
     181,   182,   182,   182,   183,   183,   184,   184,   184,   184,
     184,   185,   186,   187,   187,   188,   188,   189,   189,   190,
     191,   191,   192,   192,   193,   193,   193,   193,   194,   195,
     196,   196,   196,   197,   197,   198,   199,   199,   200,   201,
     201,   202,   202,   203,   203,   204,   205,   205,   206,   206,
     207,   207,   207,   208,   208,   209,   209,   209,   209,   210,
     210,   211,   212,   213,   214,   214,   214,   215,   215,   216,
     216,   216,   217,   217,   218,   218,   219,   219,   220,   220,
     220,   221,   222,   223,   223,   224,   224,   225,   225,   226,
     226,   227,   228,   228,   229,   229,   229
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,    10,     1,     1,     3,
       1,     2,     1,     1,     3,     2,     1,     2,     2,     2,
       1,     2,     1,     1,     1,     3,     1,     1,     3,     3,
       1,     1,     1,     1,     3,     1,     1,     1,     2,     3,
       1,     1,     3,     1,     1,     1,     2,     1,     1,     1,
       4,     4,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     2,     3,     3,     1,     3,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     4,     1,     3,     4,     4,     1,
       4,     1,     4,     6,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     5,     2,
       1,     3,     6,     4,     2,     1,     1,     6,     8,     6,
       4,     1,     2,     2,     1,     1,     3,     1,     1,     4,
       1,     2,     1,     3,     1,     2,     3,     3,     3,     3,
       1,     2,     2,     1,     1,     4,     1,     6,     1,     2,
       1,     1,     3,     1,     1,     4,     1,     3,     1,     1,
       1,     2,     2,     5,     3,     2,     2,     2,     1,     1,
       1,     4,     1,     1,     1,     3,     5,     3,     2,     3,
       3,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     3,     1,     2,     1,     2,     1,     1,     1,
       1,     2,     2,     1,     3,     1,     1
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const unsigned char yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const unsigned char yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned char yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     9,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,    19,
       0,     0,     0,    21,     0,     0,     0,     0,     0,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,     4,     0,   178,     0,   151,     0,   173,     0,   124,
       0,     4,     0,   168,     0,   154,     0,     4,     0,   153,
       0,     4,     0,   179,     0
};

/* Error token number */
#define YYTERROR 1


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

# define YYRHSLOC(Rhs, K) ((Rhs)[K].yystate.yyloc)



#undef yynerrs
#define yynerrs (yystackp->yyerrcnt)
#undef yychar
#define yychar (yystackp->yyrawchar)
#undef yylval
#define yylval (yystackp->yyval)
#undef yylloc
#define yylloc (yystackp->yyloc)


static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif


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


# define YYDPRINTF(Args)                        \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
  } while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (filename);
  YYUSE (crefs);
  YYUSE (tree);
  if (!yyvaluep)
    return;
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, scanner, filename, crefs, tree);
  YYFPRINTF (yyoutput, ")");
}

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YYFPRINTF (stderr, "%s ", Title);                               \
        yy_symbol_print (stderr, Type, Value, Location, scanner, filename, crefs, tree);        \
        YYFPRINTF (stderr, "\n");                                       \
      }                                                                 \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

struct yyGLRStack;
static void yypstack (struct yyGLRStack* yystackp, size_t yyk)
  YY_ATTRIBUTE_UNUSED;
static void yypdumpstack (struct yyGLRStack* yystackp)
  YY_ATTRIBUTE_UNUSED;

#else /* !YYDEBUG */

# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif


#if YYERROR_VERBOSE

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
static size_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
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
    return strlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers, as in LALR(1) machine */
typedef int yyStateNum;

/** Rule numbers, as in LALR(1) machine */
typedef int yyRuleNum;

/** Grammar symbol */
typedef int yySymbol;

/** Item references, as in LALR(1) machine */
typedef short int yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  non-terminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
  /** Source location for this state.  */
  YYLTYPE yyloc;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;
  /* To compute the location of the error token.  */
  yyGLRStackItem yyerror_range[3];

  int yyerrcnt;
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;

  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  size_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

static _Noreturn void
yyFail (yyGLRStack* yystackp, YYLTYPE *yylocp, yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree, const char* yymsg)
{
  if (yymsg != YY_NULLPTR)
    yyerror (yylocp, scanner, filename, crefs, tree, yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

static _Noreturn void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static inline const char*
yytokenName (yySymbol yytoken)
{
  if (yytoken == YYEMPTY)
    return "";

  return yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) YY_ATTRIBUTE_UNUSED;
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      else
        /* The effect of using yysval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULLPTR;
      yyvsp[i].yystate.yyloc = s->yyloc;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     YY_ATTRIBUTE_UNUSED;
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyn, size_t yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp,
              YYSTYPE* yyvalp, YYLTYPE *yylocp, yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree)
{
  yybool yynormal YY_ATTRIBUTE_UNUSED = (yystackp->yysplitPoint == YY_NULLPTR);
  int yylow;
  YYUSE (yyvalp);
  YYUSE (yylocp);
  YYUSE (scanner);
  YYUSE (filename);
  YYUSE (crefs);
  YYUSE (tree);
  YYUSE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, N, yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (yylocp, scanner, filename, crefs, tree, YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  YYLLOC_DEFAULT ((*yylocp), (yyvsp - yyrhslen), yyrhslen);
  yystackp->yyerror_range[1].yystate.yyloc = *yylocp;

  switch (yyn)
    {
        case 2:
#line 152 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        *tree = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    }
#line 1407 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 3:
#line 157 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        *tree = rb_ary_new();
    }
#line 1415 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 4:
#line 164 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = Qnil;
    }
#line 1423 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 14:
#line 209 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1431 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 15:
#line 214 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1440 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 16:
#line 222 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("id")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-9)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("oid")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-8)].yystate.yysemantics.yysval));        
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("encoding")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("default")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensionDefault")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));                   
    }
#line 1454 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 19:
#line 241 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 1462 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 20:
#line 248 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1472 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 21:
#line 255 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1480 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 25:
#line 289 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 1488 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 27:
#line 298 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("EXPLICIT"));
    }
#line 1496 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 28:
#line 303 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("IMPLICIT"));
    }
#line 1504 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 29:
#line 308 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("AUTOMATIC"));
    }
#line 1512 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 30:
#line 313 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("EXPLICIT"));
    }
#line 1520 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 31:
#line 320 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = Qtrue;
    }
#line 1528 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 32:
#line 325 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = Qfalse;
    }
#line 1536 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 33:
#line 332 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
    }
#line 1544 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 35:
#line 341 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exports")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("imports")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("assignments")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1556 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 38:
#line 358 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 1564 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 39:
#line 363 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("ALL"));
    }
#line 1572 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 41:
#line 372 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
    }
#line 1580 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 44:
#line 385 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 1588 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 46:
#line 394 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
    }
#line 1597 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 47:
#line 402 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1607 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 48:
#line 409 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1615 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 49:
#line 416 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("id")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); 
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("symbol")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp))); 
    }
#line 1627 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 51:
#line 431 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1637 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 52:
#line 438 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1645 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 53:
#line 445 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("ref")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1656 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 56:
#line 463 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1664 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 57:
#line 468 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));    
    }
#line 1674 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 60:
#line 483 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("id")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("tag")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
        
    }
#line 1686 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 61:
#line 494 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ValueAssignment")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("id")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("governor")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("value")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1700 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 68:
#line 521 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1710 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 71:
#line 532 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
    }
#line 1719 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 72:
#line 538 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 1727 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 73:
#line 543 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 1735 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 74:
#line 550 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1745 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 75:
#line 557 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1753 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 76:
#line 564 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1763 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 77:
#line 571 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_ary_push(crefs, ((*yyvalp)));
    }
#line 1772 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 78:
#line 579 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("id")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("value")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 1784 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 93:
#line 622 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        if(rb_hash_aref(((*yyvalp)), ID2SYM(rb_intern("constraints"))) == Qnil){
            rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("constraints")), rb_ary_new());
        }
        rb_ary_push(rb_hash_aref(((*yyvalp)), ID2SYM(rb_intern("constraints"))), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1795 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 96:
#line 640 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("CharacterString")));
    }
#line 1805 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 97:
#line 649 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BMPString")));
    }
#line 1815 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 98:
#line 656 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("GeneralString")));
    }
#line 1825 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 99:
#line 663 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("GraphicString")));
    }
#line 1835 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 100:
#line 670 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("IA5String")));
    }
#line 1845 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 101:
#line 677 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ISO646String")));
    }
#line 1855 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 102:
#line 684 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("NumericString")));
    }
#line 1865 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 103:
#line 691 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("PrintableString")));
    }
#line 1875 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 104:
#line 698 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("TeletexString")));
    }
#line 1885 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 105:
#line 705 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("T61String")));
    }
#line 1895 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 106:
#line 712 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UniversalString")));
    }
#line 1905 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 107:
#line 719 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UTF8String")));
    }
#line 1915 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 108:
#line 726 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("VideotexString")));
    }
#line 1925 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 109:
#line 733 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("VisibleString")));
    }
#line 1935 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 110:
#line 744 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("DefinedType")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("ref")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1946 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 111:
#line 756 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("OBJECTIDENTIFIER")));
    }
#line 1956 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 112:
#line 768 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {    
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BOOLEAN")));
    }
#line 1966 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 113:
#line 779 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("INTEGER")));        
    }
#line 1976 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 114:
#line 786 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("INTEGER")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("numberList")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 1987 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 115:
#line 796 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1997 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 116:
#line 803 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2005 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 117:
#line 810 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("id")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("number")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 2017 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 118:
#line 819 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("id")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("number")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 2029 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 120:
#line 836 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ENUMERATED")));        
    }
#line 2038 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 121:
#line 844 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2048 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 122:
#line 851 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); 
    }
#line 2060 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 123:
#line 860 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("additional")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2073 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 126:
#line 880 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2083 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 127:
#line 887 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2091 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 128:
#line 894 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("id")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 2102 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 130:
#line 908 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("REAL")));
    }
#line 2112 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 137:
#line 937 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BITSTRING")));        
    }
#line 2122 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 138:
#line 944 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BITSTRING")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("bitList")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 2133 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 139:
#line 956 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("OCTETSTRING")));
    }
#line 2143 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 140:
#line 967 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("NULL")));
    }
#line 2153 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 141:
#line 978 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SEQUENCE")));  
    }
#line 2163 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 142:
#line 985 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SEQUENCE")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval)); 
    }
#line 2175 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 143:
#line 994 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SEQUENCE")));
    }
#line 2184 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 146:
#line 1008 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {    
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("head")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));                
    }
#line 2194 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 147:
#line 1015 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("head")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("head")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 2207 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 148:
#line 1025 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("head")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("head")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("tail")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2221 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 149:
#line 1036 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("head")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("tail")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2234 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 150:
#line 1046 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("head")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 2246 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 153:
#line 1065 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    }
#line 2254 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 155:
#line 1074 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2264 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 156:
#line 1081 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2272 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 159:
#line 1094 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("version")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("additional")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 2284 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 162:
#line 1111 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2294 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 163:
#line 1118 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2302 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 165:
#line 1127 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("OPTIONAL")), Qtrue);
    }
#line 2310 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 166:
#line 1132 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("DEFAULT")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2318 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 167:
#line 1137 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = Qnil;
    }
#line 2326 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 168:
#line 1144 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("id")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval)); 
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("tag")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));        
    }
#line 2337 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 169:
#line 1156 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SEQUENCEOF")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("type")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2347 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 170:
#line 1164 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
    }
#line 2356 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 171:
#line 1170 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("constraint")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 2366 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 172:
#line 1177 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("constraint")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 2376 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 175:
#line 1196 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("CHOICE")));
    }
#line 2385 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 176:
#line 1204 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2395 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 177:
#line 1211 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue); 
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("additional")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));        
    }
#line 2408 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 179:
#line 1227 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    }
#line 2416 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 181:
#line 1236 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2426 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 182:
#line 1243 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2434 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 185:
#line 1256 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("version")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("additional")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 2446 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 186:
#line 1267 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2456 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 187:
#line 1274 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2464 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 191:
#line 1291 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {   
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
        rb_hash_aset((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval), ID2SYM(rb_intern("type")), ID2SYM(rb_intern("EXPLICIT")));        
    }
#line 2473 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 192:
#line 1297 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {   
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
        rb_hash_aset((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval), ID2SYM(rb_intern("type")), ID2SYM(rb_intern("EXPLICIT")));        
    }
#line 2482 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 193:
#line 1305 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);            
    }
#line 2490 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 194:
#line 1310 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 2498 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 195:
#line 1317 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("classNumber")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UNIVERSAL")));        
    }
#line 2509 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 196:
#line 1325 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("classNumber")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("APPLICATION")));        
    }
#line 2520 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 197:
#line 1333 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("classNumber")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("PRIVATE")));
    }
#line 2531 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 198:
#line 1341 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("classNumber")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2541 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 201:
#line 1359 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
    }
#line 2549 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 204:
#line 1374 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2559 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 205:
#line 1381 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));        
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);

        rb_hash_aset((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), ID2SYM(rb_intern("top")), Qtrue);
    }
#line 2572 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 206:
#line 1391 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval));
        
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("additional")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));

        rb_hash_aset((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval), ID2SYM(rb_intern("top")), Qtrue);
        rb_hash_aset((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval), ID2SYM(rb_intern("additional")), Qtrue);
    }
#line 2588 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 207:
#line 1406 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ElementSetSpec")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("set")), rb_ary_new());
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
        
        VALUE all = rb_hash_new();
        rb_ary_push(crefs, all);
        rb_hash_aset(all, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ALL")));
        rb_hash_aset(all, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
        rb_ary_push(rb_hash_aref(((*yyvalp)), ID2SYM(rb_intern("set"))), all);

        VALUE except = rb_hash_new();
        rb_ary_push(crefs, except);
        rb_hash_aset(except, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("EXCEPT")));
        rb_hash_aset(except, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
        rb_ary_push(rb_hash_aref(((*yyvalp)), ID2SYM(rb_intern("set"))), except);

        rb_ary_push(rb_hash_aref(((*yyvalp)), ID2SYM(rb_intern("set"))), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2614 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 208:
#line 1429 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
        rb_ary_unshift(rb_hash_aref(((*yyvalp)), ID2SYM(rb_intern("set"))), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 2624 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 209:
#line 1438 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);

        rb_ary_unshift(rb_hash_aref(((*yyvalp)), ID2SYM(rb_intern("set"))), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));

        VALUE mark = rb_hash_new();
        rb_ary_push(crefs, mark);
        rb_hash_aset(mark, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UNION")));
        rb_hash_aset(mark, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));

        rb_ary_unshift(rb_hash_aref(((*yyvalp)), ID2SYM(rb_intern("set"))), mark);

    }
#line 2642 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 210:
#line 1453 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    
        rb_ary_unshift(rb_hash_aref(((*yyvalp)), ID2SYM(rb_intern("set"))), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
        
        VALUE mark = rb_hash_new();
        rb_ary_push(crefs, mark);
        rb_hash_aset(mark, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("INTERSECTION")));
        rb_hash_aset(mark, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));

        rb_ary_unshift(rb_hash_aref(((*yyvalp)), ID2SYM(rb_intern("set"))), mark);
    }
#line 2659 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 211:
#line 1467 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ElementSetSpec")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("set")), rb_ary_new());
    }
#line 2670 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 216:
#line 1489 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 2678 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 221:
#line 1506 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SingleValue")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("value")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));        
    }
#line 2690 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 222:
#line 1517 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ValueRange")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("lower")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("upper")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2703 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 226:
#line 1537 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    }
#line 2711 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 228:
#line 1546 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("MIN"));
    }
#line 2719 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 230:
#line 1555 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("MAX"));
    }
#line 2727 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 231:
#line 1562 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SizeConstraint")));        
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("constraint")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2739 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;


#line 2743 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (filename);
  YYUSE (crefs);
  YYUSE (tree);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys, yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
                &yys->yysemantics.yysval, &yys->yyloc, scanner, filename, crefs, tree);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YYFPRINTF (stderr, "%s unresolved", yymsg);
          else
            YYFPRINTF (stderr, "%s incomplete", yymsg);
          YY_SYMBOL_PRINT ("", yystos[yys->yylrState], YY_NULLPTR, &yys->yyloc);
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh, scanner, filename, crefs, tree);
        }
    }
}

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-305)))

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yytable_value) \
  0

/** Set *YYACTION to the action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline void
yygetLRActions (yyStateNum yystate, int yytoken,
                int* yyaction, const short int** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yypact_value_is_default (yypact[yystate])
      || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyaction = -yydefact[yystate];
      *yyconflicts = yyconfl;
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyaction = yytable[yyindex];
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
  else
    {
      *yyaction = 0;
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
}

/** Compute post-reduction state.
 * \param yystate   the current state
 * \param yysym     the nonterminal to push on the stack
 */
static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, size_t yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  YYASSERT (!yynewOption->yyisState);
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
      yynewOption->yyloc = yylloc;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState**) YYMALLOC (16 * sizeof yyset->yystates[0]);
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULLPTR;
  yyset->yylookaheadNeeds =
    (yybool*) YYMALLOC (16 * sizeof yyset->yylookaheadNeeds[0]);
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, size_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems =
    (yyGLRStackItem*) YYMALLOC (yysize * sizeof yystackp->yynextFree[0]);
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  size_t yynewSize;
  size_t yyn;
  size_t yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem*) YYMALLOC (yynewSize * sizeof yynewItems[0]);
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*(yybool *) yyp0)
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULLPTR)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULLPTR)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULLPTR)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULLPTR)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULLPTR)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                      yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULLPTR)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULLPTR;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULLPTR || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YYDPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULLPTR;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULLPTR)
        {
          if (yyi == yyj)
            {
              YYDPRINTF ((stderr, "Removing dead stacks.\n"));
            }
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            {
              YYDPRINTF ((stderr, "Rename stack %lu -> %lu.\n",
                          (unsigned long int) yyi, (unsigned long int) yyj));
            }
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
            size_t yyposn,
            YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yynewState->yyloc = *yylocp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
                 size_t yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;
  YYASSERT (yynewState->yyisState);

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULLPTR;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print Args;               \
} while (0)

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (int yynormal, yyGLRStackItem* yyvsp, size_t yyk,
                 yyRuleNum yyrule, yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree)
{
  int yynrhs = yyrhsLength (yyrule);
  int yylow = 1;
  int yyi;
  YYFPRINTF (stderr, "Reducing stack %lu by rule %d (line %lu):\n",
             (unsigned long int) yyk, yyrule - 1,
             (unsigned long int) yyrline[yyrule]);
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyvsp[yyi - yynrhs + 1].yystate.yylrState],
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yysval
                       , &(((yyGLRStackItem const *)yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yyloc)                       , scanner, filename, crefs, tree);
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YYFPRINTF (stderr, " (unresolved)");
      YYFPRINTF (stderr, "\n");
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp, YYLTYPE *yylocp, yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
      YYASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      YY_REDUCE_PRINT ((1, yyrhs, yyk, yyrule, scanner, filename, crefs, tree));
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp,
                           yyvalp, yylocp, scanner, filename, crefs, tree);
    }
  else
    {
      int yyi;
      yyGLRState* yys;
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      if (yynrhs == 0)
        /* Set default location.  */
        yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yys->yyloc;
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      YY_REDUCE_PRINT ((0, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1, yyk, yyrule, scanner, filename, crefs, tree));
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp, yylocp, scanner, filename, crefs, tree);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
             yybool yyforceEval, yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree)
{
  size_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYSTYPE yysval;
      YYLTYPE yyloc;

      YYRESULTTAG yyflag = yydoAction (yystackp, yyk, yyrule, &yysval, &yyloc, scanner, filename, crefs, tree);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULLPTR)
        {
          YYDPRINTF ((stderr, "Parse on stack %lu rejected by rule #%d.\n",
                     (unsigned long int) yyk, yyrule - 1));
        }
      if (yyflag != yyok)
        return yyflag;
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yysval, &yyloc);
    }
  else
    {
      size_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YYDPRINTF ((stderr,
                  "Reduced stack %lu by rule #%d; action deferred.  "
                  "Now in state %d.\n",
                  (unsigned long int) yyk, yyrule - 1, yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULLPTR)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YYDPRINTF ((stderr, "Merging stack %lu into stack %lu.\n",
                                (unsigned long int) yyk,
                                (unsigned long int) yyi));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static size_t
yysplitStack (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yysize >= yystackp->yytops.yycapacity)
    {
      yyGLRState** yynewStates;
      yybool* yynewLookaheadNeeds;

      yynewStates = YY_NULLPTR;

      if (yystackp->yytops.yycapacity
          > (YYSIZEMAX / (2 * sizeof yynewStates[0])))
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      yynewStates =
        (yyGLRState**) YYREALLOC (yystackp->yytops.yystates,
                                  (yystackp->yytops.yycapacity
                                   * sizeof yynewStates[0]));
      if (yynewStates == YY_NULLPTR)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yystates = yynewStates;

      yynewLookaheadNeeds =
        (yybool*) YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                             (yystackp->yytops.yycapacity
                              * sizeof yynewLookaheadNeeds[0]));
      if (yynewLookaheadNeeds == YY_NULLPTR)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize-1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       yyn > 0;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yysval = yys0->yysemantics.yysval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yysval = yys1->yysemantics.yysval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULLPTR)
                break;
              else if (*yyz0p == YY_NULLPTR)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
                                   yyGLRStack* yystackp, yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp, yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree)
{
  if (0 < yyn)
    {
      YYASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp, scanner, filename, crefs, tree));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp, scanner, filename, crefs, tree));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp, YYLTYPE *yylocp, yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp, scanner, filename, crefs, tree);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys, scanner, filename, crefs, tree);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  if (yynrhs == 0)
    /* Set default location.  */
    yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yyopt->yystate->yyloc;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    YYLTYPE yylloc_current = yylloc;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yylloc = yyopt->yyloc;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp, yylocp, scanner, filename, crefs, tree);
    yychar = yychar_current;
    yylval = yylval_current;
    yylloc = yylloc_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULLPTR)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, empty>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1);
  else
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1, (unsigned long int) (yys->yyposn + 1),
               (unsigned long int) yyx->yystate->yyposn);
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YYFPRINTF (stderr, "%*s%s <empty>\n", yyindent+2, "",
                       yytokenName (yystos[yystates[yyi]->yylrState]));
          else
            YYFPRINTF (stderr, "%*s%s <tokens %lu .. %lu>\n", yyindent+2, "",
                       yytokenName (yystos[yystates[yyi]->yylrState]),
                       (unsigned long int) (yystates[yyi-1]->yyposn + 1),
                       (unsigned long int) yystates[yyi]->yyposn);
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1, YYLTYPE *yylocp, yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YYFPRINTF (stderr, "Ambiguity detected.\n");
  YYFPRINTF (stderr, "Option 1,\n");
  yyreportTree (yyx0, 2);
  YYFPRINTF (stderr, "\nOption 2,\n");
  yyreportTree (yyx1, 2);
  YYFPRINTF (stderr, "\n");
#endif

  yyerror (yylocp, scanner, filename, crefs, tree, YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the locations for each of the YYN1 states in *YYSTACKP,
 *  ending at YYS1.  Has no effect on previously resolved states.
 *  The first semantic option of a state is always chosen.  */
static void
yyresolveLocations (yyGLRState* yys1, int yyn1,
                    yyGLRStack *yystackp, yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree)
{
  if (0 < yyn1)
    {
      yyresolveLocations (yys1->yypred, yyn1 - 1, yystackp, scanner, filename, crefs, tree);
      if (!yys1->yyresolved)
        {
          yyGLRStackItem yyrhsloc[1 + YYMAXRHS];
          int yynrhs;
          yySemanticOption *yyoption = yys1->yysemantics.yyfirstVal;
          YYASSERT (yyoption != YY_NULLPTR);
          yynrhs = yyrhsLength (yyoption->yyrule);
          if (yynrhs > 0)
            {
              yyGLRState *yys;
              int yyn;
              yyresolveLocations (yyoption->yystate, yynrhs,
                                  yystackp, scanner, filename, crefs, tree);
              for (yys = yyoption->yystate, yyn = yynrhs;
                   yyn > 0;
                   yys = yys->yypred, yyn -= 1)
                yyrhsloc[yyn].yystate.yyloc = yys->yyloc;
            }
          else
            {
              /* Both yyresolveAction and yyresolveLocations traverse the GSS
                 in reverse rightmost order.  It is only necessary to invoke
                 yyresolveLocations on a subforest for which yyresolveAction
                 would have been invoked next had an ambiguity not been
                 detected.  Thus the location of the previous state (but not
                 necessarily the previous state itself) is guaranteed to be
                 resolved already.  */
              yyGLRState *yyprevious = yyoption->yystate;
              yyrhsloc[0].yystate.yyloc = yyprevious->yyloc;
            }
          {
            int yychar_current = yychar;
            YYSTYPE yylval_current = yylval;
            YYLTYPE yylloc_current = yylloc;
            yychar = yyoption->yyrawchar;
            yylval = yyoption->yyval;
            yylloc = yyoption->yyloc;
            YYLLOC_DEFAULT ((yys1->yyloc), yyrhsloc, yynrhs);
            yychar = yychar_current;
            yylval = yylval_current;
            yylloc = yylloc_current;
          }
        }
    }
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp, yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;
  YYLTYPE *yylocp = &yys->yyloc;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULLPTR; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              yyresolveLocations (yys, 1, yystackp, scanner, filename, crefs, tree);
              return yyreportAmbiguity (yybest, yyp, yylocp, scanner, filename, crefs, tree);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YYASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval, yylocp, scanner, filename, crefs, tree);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULLPTR; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yysval_other;
                YYLTYPE yydummy;
                yyflag = yyresolveAction (yyp, yystackp, &yysval_other, &yydummy, scanner, filename, crefs, tree);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yystos[yys->yylrState],
                                &yysval, yylocp, scanner, filename, crefs, tree);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval, yylocp, scanner, filename, crefs, tree);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULLPTR;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp, yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree)
{
  if (yystackp->yysplitPoint != YY_NULLPTR)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             , scanner, filename, crefs, tree));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULLPTR)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULLPTR;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = ((yyGLRStackItem*) yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;

  while (yyr != YY_NULLPTR)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, size_t yyk,
                   size_t yyposn, YYLTYPE *yylocp, yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YYDPRINTF ((stderr, "Stack %lu Entering state %d\n",
                  (unsigned long int) yyk, yystate));

      YYASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule], scanner, filename, crefs, tree);
          if (yyflag == yyerr)
            {
              YYDPRINTF ((stderr,
                          "Stack %lu dies "
                          "(predicate failure or explicit user error).\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yySymbol yytoken;
          int yyaction;
          const short int* yyconflicts;

          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;
          if (yychar == YYEMPTY)
            {
              YYDPRINTF ((stderr, "Reading a token: "));
              yychar = yylex (&yylval, &yylloc, scanner, crefs);
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

          yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);

          while (*yyconflicts != 0)
            {
              YYRESULTTAG yyflag;
              size_t yynewStack = yysplitStack (yystackp, yyk);
              YYDPRINTF ((stderr, "Splitting off stack %lu from %lu.\n",
                          (unsigned long int) yynewStack,
                          (unsigned long int) yyk));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts], scanner, filename, crefs, tree);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn, yylocp, scanner, filename, crefs, tree));
              else if (yyflag == yyerr)
                {
                  YYDPRINTF ((stderr, "Stack %lu dies.\n",
                              (unsigned long int) yynewStack));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
              yyconflicts += 1;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction], scanner, filename, crefs, tree);
              if (yyflag == yyerr)
                {
                  YYDPRINTF ((stderr,
                              "Stack %lu dies "
                              "(predicate failure or explicit user error).\n",
                              (unsigned long int) yyk));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}

static void
yyreportSyntaxError (yyGLRStack* yystackp, yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree)
{
  if (yystackp->yyerrState != 0)
    return;
#if ! YYERROR_VERBOSE
  yyerror (&yylloc, scanner, filename, crefs, tree, YY_("syntax error"));
#else
  {
  yySymbol yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);
  size_t yysize0 = yytnamerr (YY_NULLPTR, yytokenName (yytoken));
  size_t yysize = yysize0;
  yybool yysize_overflow = yyfalse;
  char* yymsg = YY_NULLPTR;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected").  */
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
      int yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      yyarg[yycount++] = yytokenName (yytoken);
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for this
             state because they are default actions.  */
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
                yyarg[yycount++] = yytokenName (yyx);
                {
                  size_t yysz = yysize + yytnamerr (YY_NULLPTR, yytokenName (yyx));
                  yysize_overflow |= yysz < yysize;
                  yysize = yysz;
                }
              }
        }
    }

  switch (yycount)
    {
#define YYCASE_(N, S)                   \
      case N:                           \
        yyformat = S;                   \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  {
    size_t yysz = yysize + strlen (yyformat);
    yysize_overflow |= yysz < yysize;
    yysize = yysz;
  }

  if (!yysize_overflow)
    yymsg = (char *) YYMALLOC (yysize);

  if (yymsg)
    {
      char *yyp = yymsg;
      int yyi = 0;
      while ((*yyp = *yyformat))
        {
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
      yyerror (&yylloc, scanner, filename, crefs, tree, yymsg);
      YYFREE (yymsg);
    }
  else
    {
      yyerror (&yylloc, scanner, filename, crefs, tree, YY_("syntax error"));
      yyMemoryExhausted (yystackp);
    }
  }
#endif /* YYERROR_VERBOSE */
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp, yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree)
{
  size_t yyk;
  int yyj;

  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yySymbol yytoken;
        if (yychar == YYEOF)
          yyFail (yystackp, &yylloc, scanner, filename, crefs, tree, YY_NULLPTR);
        if (yychar != YYEMPTY)
          {
            /* We throw away the lookahead, but the error range
               of the shifted error token must take it into account.  */
            yyGLRState *yys = yystackp->yytops.yystates[0];
            yyGLRStackItem yyerror_range[3];
            yyerror_range[1].yystate.yyloc = yys->yyloc;
            yyerror_range[2].yystate.yyloc = yylloc;
            YYLLOC_DEFAULT ((yys->yyloc), yyerror_range, 2);
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval, &yylloc, scanner, filename, crefs, tree);
          }
        YYDPRINTF ((stderr, "Reading a token: "));
        yychar = yylex (&yylval, &yylloc, scanner, crefs);
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
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
    if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
      break;
  if (yyk >= yystackp->yytops.yysize)
    yyFail (yystackp, &yylloc, scanner, filename, crefs, tree, YY_NULLPTR);
  for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
    yymarkStackDeleted (yystackp, yyk);
  yyremoveDeletes (yystackp);
  yycompressStack (yystackp);

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULLPTR)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYTERROR;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              /* First adjust its location.*/
              YYLTYPE yyerrloc;
              yystackp->yyerror_range[2].yystate.yyloc = yylloc;
              YYLLOC_DEFAULT (yyerrloc, (yystackp->yyerror_range), 2);
              YY_SYMBOL_PRINT ("Shifting", yystos[yytable[yyj]],
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yytable[yyj],
                          yys->yyposn, &yylval, &yyerrloc);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      yystackp->yyerror_range[1].yystate.yyloc = yys->yyloc;
      if (yys->yypred != YY_NULLPTR)
        yydestroyGLRState ("Error: popping", yys, scanner, filename, crefs, tree);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULLPTR)
    yyFail (yystackp, &yylloc, scanner, filename, crefs, tree, YY_NULLPTR);
}

#define YYCHK1(YYE)                                                          \
  do {                                                                       \
    switch (YYE) {                                                           \
    case yyok:                                                               \
      break;                                                                 \
    case yyabort:                                                            \
      goto yyabortlab;                                                       \
    case yyaccept:                                                           \
      goto yyacceptlab;                                                      \
    case yyerr:                                                              \
      goto yyuser_error;                                                     \
    default:                                                                 \
      goto yybuglab;                                                         \
    }                                                                        \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  size_t yyposn;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;
  yylloc = yyloc_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval, &yylloc);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode */
      while (yytrue)
        {
          yyRuleNum yyrule;
          int yyaction;
          const short int* yyconflicts;

          yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
          YYDPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {
               yystack.yyerror_range[1].yystate.yyloc = yylloc;
                  yyreportSyntaxError (&yystack, scanner, filename, crefs, tree);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue, scanner, filename, crefs, tree));
            }
          else
            {
              yySymbol yytoken;
              if (yychar == YYEMPTY)
                {
                  YYDPRINTF ((stderr, "Reading a token: "));
                  yychar = yylex (&yylval, &yylloc, scanner, crefs);
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

              yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);
              if (*yyconflicts != 0)
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval, &yylloc);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {
               yystack.yyerror_range[1].yystate.yyloc = yylloc;
                  yyreportSyntaxError (&yystack, scanner, filename, crefs, tree);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue, scanner, filename, crefs, tree));
            }
        }

      while (yytrue)
        {
          yySymbol yytoken_to_shift;
          size_t yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn, &yylloc, scanner, filename, crefs, tree));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, &yylloc, scanner, filename, crefs, tree, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack, scanner, filename, crefs, tree));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
           yystack.yyerror_range[1].yystate.yyloc = yylloc;
              yyreportSyntaxError (&yystack, scanner, filename, crefs, tree);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              int yyaction;
              const short int* yyconflicts;
              yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
              yygetLRActions (yystate, yytoken_to_shift, &yyaction,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YYDPRINTF ((stderr, "On stack %lu, ", (unsigned long int) yys));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval, &yylloc);
              YYDPRINTF ((stderr, "Stack %lu now in state #%d\n",
                          (unsigned long int) yys,
                          yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack, scanner, filename, crefs, tree));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack, scanner, filename, crefs, tree);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YYASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (&yylloc, scanner, filename, crefs, tree, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval, &yylloc, scanner, filename, crefs, tree);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          size_t yysize = yystack.yytops.yysize;
          size_t yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                 yystack.yyerror_range[1].yystate.yyloc = yys->yyloc;
                  if (yys->yypred != YY_NULLPTR)
                      yydestroyGLRState ("Cleanup: popping", yys, scanner, filename, crefs, tree);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YYFPRINTF (stderr, " -> ");
    }
  YYFPRINTF (stderr, "%d@%lu", yys->yylrState,
             (unsigned long int) yys->yyposn);
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == YY_NULLPTR)
    YYFPRINTF (stderr, "<null>");
  else
    yy_yypstack (yyst);
  YYFPRINTF (stderr, "\n");
}

static void
yypstack (yyGLRStack* yystackp, size_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

#define YYINDEX(YYX)                                                         \
    ((YYX) == YY_NULLPTR ? -1 : (yyGLRStackItem*) (YYX) - yystackp->yyitems)


static void
yypdumpstack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yyp;
  size_t yyi;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YYFPRINTF (stderr, "%3lu. ",
                 (unsigned long int) (yyp - yystackp->yyitems));
      if (*(yybool *) yyp)
        {
          YYASSERT (yyp->yystate.yyisState);
          YYASSERT (yyp->yyoption.yyisState);
          YYFPRINTF (stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
                     yyp->yystate.yyresolved, yyp->yystate.yylrState,
                     (unsigned long int) yyp->yystate.yyposn,
                     (long int) YYINDEX (yyp->yystate.yypred));
          if (! yyp->yystate.yyresolved)
            YYFPRINTF (stderr, ", firstVal: %ld",
                       (long int) YYINDEX (yyp->yystate
                                             .yysemantics.yyfirstVal));
        }
      else
        {
          YYASSERT (!yyp->yystate.yyisState);
          YYASSERT (!yyp->yyoption.yyisState);
          YYFPRINTF (stderr, "Option. rule: %d, state: %ld, next: %ld",
                     yyp->yyoption.yyrule - 1,
                     (long int) YYINDEX (yyp->yyoption.yystate),
                     (long int) YYINDEX (yyp->yyoption.yynext));
        }
      YYFPRINTF (stderr, "\n");
    }
  YYFPRINTF (stderr, "Tops:");
  for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
    YYFPRINTF (stderr, "%lu: %ld; ", (unsigned long int) yyi,
               (long int) YYINDEX (yystackp->yytops.yystates[yyi]));
  YYFPRINTF (stderr, "\n");
}
#endif

#undef yylval
#undef yychar
#undef yynerrs
#undef yylloc



#line 1588 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:2584  */


void Init_ext_parser(void)
{
    cRetroIDL = rb_define_module("RetroIDL");
    rb_require("bigdecimal");
    cASNError = rb_const_get(cRetroIDL, rb_intern("ASNError"));
    rb_define_private_method(rb_const_get(cRetroIDL, rb_intern("ASN")), "parse_file_buffer", parseFileBuffer, 2);
}

void yyerror(YYLTYPE *locp, yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree, char const *msg)
{
    VALUE message = newLocation(filename, crefs, locp);
    rb_str_append(message, rb_str_new2(" error: "));
    rb_str_append(message, rb_funcall(rb_str_new2(msg), rb_intern("sub"), 2, rb_str_new2("UNKNOWN"), rb_str_new2(yyget_text(scanner))));    
    rb_funcall(rb_stderr, rb_intern("puts"), 1, message);
}

static VALUE parseFileBuffer(VALUE self, VALUE buffer, VALUE filename)
{
    yyscan_t scanner;    
    VALUE tree = Qnil;
    VALUE crefs = rb_iv_get(self, "@crefs");
    int retval = 0;

    if(yylex_init(&scanner) == 0){

        if(yy_scan_bytes((const char *)RSTRING_PTR(buffer), RSTRING_LEN(buffer), scanner)){

            retval = yyparse(scanner, filename, crefs, &tree);
        }

        yylex_destroy(scanner);

        switch(retval){
        case 0:
            break;
        case 1:
        case 2:
            rb_raise(cASNError, "parse error");
            break;
        default:
            rb_bug("yyparse: unknown return code");
            break;
        }        
    }

    return tree;
}

static VALUE newLocation(VALUE filename, VALUE crefs, const YYLTYPE *locp)
{
    VALUE retval = rb_str_new2("");
    rb_ary_push(crefs, retval);

    if(filename != Qnil){

        retval = filename;
        rb_str_append(retval, rb_str_new2(":"));
    }
    
    rb_str_append(retval, rb_funcall(INT2NUM(locp->first_line), rb_intern("to_s"), 0));
    rb_str_append(retval, rb_str_new2(":"));
    rb_str_append(retval, rb_funcall(INT2NUM(locp->first_column), rb_intern("to_s"), 0));
    rb_str_append(retval, rb_str_new2(":"));

    return retval;
}
