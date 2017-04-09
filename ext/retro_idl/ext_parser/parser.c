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
#line 14 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:240  */


typedef void * yyscan_t;
#define YY_TYPEDEF_YY_SCANNER_T

#include <ruby.h>
#include <stdio.h>

#include "parser.h"
#include "lexer.h"

YY_DECL;

void yyerror(YYLTYPE *locp, yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree, char const *msg);

static VALUE parseFileBuffer(VALUE self, VALUE buffer, VALUE filename);
static VALUE newLocation(VALUE filename, VALUE cref, const YYLTYPE *location);

static VALUE cASNError;
static VALUE cRetroIDL;


#line 77 "ext/retro_idl/ext_parser/parser.c" /* glr.c:240  */

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

#line 110 "ext/retro_idl/ext_parser/parser.c" /* glr.c:263  */

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
#define YYLAST   558

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  114
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  126
/* YYNRULES -- Number of rules.  */
#define YYNRULES  252
/* YYNRULES -- Number of states.  */
#define YYNSTATES  397
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
       0,   153,   153,   158,   165,   172,   176,   180,   184,   188,
     192,   196,   200,   204,   210,   215,   223,   236,   238,   242,
     249,   256,   263,   265,   267,   290,   295,   299,   304,   309,
     314,   321,   326,   333,   338,   342,   353,   355,   359,   364,
     371,   373,   380,   382,   386,   393,   395,   403,   410,   417,
     428,   432,   439,   446,   456,   458,   464,   469,   478,   480,
     484,   493,   508,   510,   512,   514,   516,   518,   525,   527,
     529,   535,   540,   547,   549,   553,   560,   567,   574,   582,
     595,   601,   610,   612,   616,   618,   622,   624,   626,   628,
     630,   632,   634,   636,   638,   640,   642,   644,   648,   654,
     656,   660,   669,   676,   683,   690,   697,   704,   711,   718,
     725,   732,   739,   746,   753,   764,   776,   788,   799,   806,
     816,   823,   830,   841,   843,   847,   853,   861,   868,   877,
     889,   893,   897,   904,   911,   919,   925,   934,   936,   940,
     944,   946,   948,   954,   961,   973,   984,   995,  1002,  1011,
    1019,  1021,  1025,  1032,  1042,  1053,  1063,  1074,  1078,  1082,
    1087,  1091,  1098,  1105,  1107,  1111,  1122,  1124,  1128,  1135,
    1142,  1144,  1149,  1154,  1161,  1172,  1179,  1184,  1194,  1204,
    1210,  1217,  1226,  1228,  1234,  1246,  1254,  1261,  1273,  1277,
    1282,  1286,  1293,  1300,  1302,  1306,  1317,  1324,  1333,  1335,
    1343,  1348,  1357,  1363,  1371,  1377,  1383,  1387,  1395,  1403,
    1411,  1420,  1422,  1429,  1431,  1439,  1446,  1453,  1461,  1465,
    1469,  1477,  1486,  1498,  1521,  1530,  1544,  1558,  1568,  1570,
    1574,  1576,  1580,  1585,  1589,  1591,  1593,  1597,  1608,  1620,
    1622,  1626,  1628,  1635,  1637,  1644,  1646,  1653,  1667,  1669,
    1673,  1675,  1677
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
  "TypeAssignment", "ValueAssignment", "Value", "BooleanValue",
  "NamedValueList", "ValueList", "NamedValue", "Type", "OfType", "_Type",
  "BuiltinType", "ReferencedType", "CharacterStringType",
  "UnrestrictedCharacterStringType", "RestrictedCharacterStringType",
  "DefinedType", "ObjectIdentifierType", "BooleanType", "IntegerType",
  "NamedNumberList", "NamedNumber", "NumberOrIdentifier", "SignedNumber",
  "EnumeratedType", "Enumerations", "RootEnumeration",
  "AdditionalEnumeration", "Enumeration", "EnumerationItem", "RealType",
  "RealValue", "NumericRealValue", "SpecialRealValue", "BitStringType",
  "OctetStringType", "NullType", "SequenceType", "OptionalExtensionMarker",
  "ComponentTypeLists", "RootComponentTypeList", "ExtensionEndMarker",
  "ExtensionAdditions", "ExtensionAdditionList", "ExtensionAddition",
  "ExtensionAdditionGroup", "VersionNumber", "ComponentTypeList",
  "ComponentType", "NamedType", "SetType", "SequenceOfType",
  "OfTypeVariant", "TypeOrNamedType", "SetOfType", "ChoiceType",
  "AlternativeTypeLists", "RootAlternativeTypeList",
  "ExtensionAdditionAlternatives", "ExtensionAdditionAlternativesList",
  "ExtensionAdditionAlternative", "ExtensionAdditionAlternativesGroup",
  "AlternativeTypeList", "optTags", "Tags", "Tag", "TagType", "Class",
  "ClassNumber", "optConstraints", "Constraints", "Constraint",
  "ConstraintSpec", "SubtypeConstraint", "ElementSetSpecs",
  "ElementSetSpec", "NextElements", "IntersectionMark", "UnionMark",
  "Elements", "SubTypeElements", "SingleValue", "ValueRange",
  "LowerEndpoint", "UpperEndpoint", "LowerEndValue", "UpperEndValue",
  "SizeConstraint", "ExceptionSpec", "ExceptionIdentification", YY_NULLPTR
};
#endif

#define YYPACT_NINF -254
#define YYTABLE_NINF -244

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
     -42,  -254,    38,  -254,  -254,   -34,   -42,  -254,  -254,     6,
    -254,   -25,  -254,  -254,  -254,  -254,    -7,  -254,   -37,  -254,
      52,    -5,  -254,  -254,  -254,  -254,    44,    -4,  -254,  -254,
      67,   100,   101,  -254,    66,  -254,  -254,  -254,    88,  -254,
     184,  -254,   106,   104,     1,   112,   113,  -254,   111,  -254,
     105,  -254,  -254,  -254,  -254,   107,   103,  -254,  -254,  -254,
     -26,  -254,   -26,  -254,  -254,  -254,   -26,  -254,   109,   -26,
    -254,   -23,   195,   115,   -26,  -254,  -254,  -254,  -254,  -254,
    -254,   -42,   115,    91,  -254,   200,   343,   115,  -254,  -254,
    -254,  -254,  -254,     6,     6,     6,   108,  -254,   117,   116,
    -254,   457,   197,   202,   208,   126,    22,    23,  -254,   128,
     129,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,
    -254,  -254,  -254,  -254,   162,  -254,  -254,  -254,  -254,   132,
    -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,
    -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,
    -254,  -254,  -254,  -254,    91,   131,  -254,  -254,  -254,  -254,
    -254,  -254,  -254,  -254,  -254,   428,  -254,  -254,   127,  -254,
    -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,   136,
      52,   132,  -254,     5,   351,   -61,   215,   216,    13,   -61,
      52,    52,  -254,  -254,  -254,   132,  -254,   133,  -254,  -254,
    -254,  -254,  -254,   411,  -254,    29,    50,  -254,   457,    52,
     115,  -254,   138,   135,   137,  -254,   134,   223,  -254,   146,
     143,   144,  -254,   142,   248,  -254,   351,    -6,   134,  -254,
    -254,   147,     9,  -254,  -254,  -254,   240,   153,  -254,  -254,
    -254,  -254,  -254,  -254,   134,  -254,   152,  -254,   166,    51,
    -254,   166,  -254,   154,   164,   168,  -254,  -254,   131,  -254,
    -254,    52,  -254,   457,  -254,    70,  -254,  -254,   262,    52,
     -13,  -254,   170,   115,  -254,   264,   -18,  -254,   457,   385,
     174,   175,   268,  -254,  -254,  -254,  -254,  -254,  -254,   385,
     385,    62,  -254,   177,  -254,     6,  -254,    52,  -254,   271,
      52,  -254,   457,  -254,  -254,  -254,   134,  -254,  -254,   178,
    -254,  -254,    42,    75,   185,   180,  -254,   134,  -254,  -254,
    -254,  -254,  -254,   186,     9,     9,  -254,   181,  -254,  -254,
    -254,   188,  -254,   187,  -254,  -254,   134,  -254,   189,   457,
     220,  -254,   190,  -254,  -254,  -254,  -254,   284,  -254,  -254,
     192,   196,   351,  -254,  -254,  -254,  -254,  -254,   198,    21,
    -254,   203,  -254,  -254,   201,   -18,    41,   205,   -18,    41,
    -254,   180,  -254,    52,   220,  -254,   207,  -254,  -254,   290,
    -254,  -254,   -53,  -254,  -254,  -254,   210,  -254,   212,    52,
      21,  -254,   -18,   -44,  -254,  -254,  -254
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
      47,     0,     0,     4,    35,    57,    58,    59,    52,    44,
      48,     0,     4,     0,   199,     0,     0,   198,   201,    56,
      50,    49,    60,     0,     0,     0,    12,   211,     0,     0,
     210,     0,     0,     0,     0,     0,     0,     0,   117,   118,
       0,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,     0,   146,   136,   115,    80,     4,
      84,    85,    88,   100,    99,    98,    93,    87,    91,    90,
      95,    86,    94,    92,    96,    97,    83,    82,    89,   200,
     212,   208,   209,   207,     0,     4,   140,   141,   142,    73,
      74,    63,    11,     5,     6,     0,    69,    68,    66,   125,
     139,    61,    62,    64,    65,   137,   138,   145,   101,   143,
       0,     0,   179,     0,     0,     4,     0,     0,     0,     4,
       0,     0,   116,   214,    81,   213,   215,     0,   204,   205,
     206,   203,    70,    66,    77,     0,     0,    75,     0,     0,
       4,   196,     0,   186,   188,   247,     4,     0,   147,     0,
     152,   157,   168,   170,     0,   244,     0,   237,     4,   218,
     219,   220,     4,   233,   234,   235,     0,   239,   236,   182,
     183,   178,   180,   181,     4,   175,     0,   184,     0,     0,
     120,   134,   135,     0,   127,   130,   132,   216,     4,    79,
      71,     0,    72,     0,    67,     0,   174,   185,     0,     0,
       4,   249,     4,     4,   149,     0,     0,   171,     0,     0,
       0,     0,     0,   228,   230,   229,   231,   227,   224,     0,
       0,     0,   240,     4,   177,     0,   119,     0,   126,     0,
       0,   202,     0,    76,    78,   144,     4,   197,   251,     0,
     252,   248,     0,   151,     0,     4,   173,     4,   169,   172,
     223,   232,   217,   221,     4,     4,   246,     0,   245,   238,
     241,     0,   124,     0,   123,   121,     4,   133,     4,     0,
       4,   150,   159,   161,   164,   163,   148,     0,   151,   156,
       0,     4,     0,   226,   225,   242,   176,   122,   128,     0,
     190,     4,   250,   166,     0,     0,     0,   150,     0,     0,
     160,     4,   222,     0,     4,   194,   189,   191,   193,     0,
     187,   167,     0,   162,   155,   153,     0,   129,   131,     0,
       0,   165,     0,     0,   192,   154,   195
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -254,  -254,     0,  -254,  -254,    10,    92,     4,    -8,  -254,
     231,   238,  -254,   314,  -254,  -254,  -254,   303,  -254,  -254,
    -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,
     253,  -254,   279,   260,  -254,  -254,   254,  -254,  -254,   -94,
    -254,  -254,  -254,    68,   -71,  -254,  -254,  -254,  -254,  -254,
    -254,  -254,  -254,  -254,  -254,  -254,   118,  -187,  -254,  -221,
    -254,  -254,  -254,  -254,   -43,    31,  -254,  -254,  -254,  -254,
    -254,  -254,  -254,  -254,  -203,   145,  -241,   -36,   -17,  -254,
     -27,  -254,   -33,   -22,  -253,  -168,  -254,  -254,   235,   155,
    -254,  -254,  -254,  -254,  -254,  -254,   -45,  -254,   -41,  -254,
    -254,   259,    89,   199,    93,  -254,  -254,   -73,  -254,  -254,
    -254,  -222,  -142,  -254,  -254,  -129,  -254,  -254,  -254,  -254,
    -254,  -254,    25,    83,  -215,  -254
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     2,    84,   166,   167,   210,    53,    54,   169,   170,
      26,     5,     6,     7,    11,    12,    18,    19,    27,    34,
      40,    46,    47,    48,    49,    55,    62,    63,    68,    69,
      70,    91,    71,    57,    58,    74,    75,    76,    77,   227,
     172,   205,   206,   207,   239,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   249,   252,   333,   173,
     139,   253,   254,   387,   255,   256,   140,   174,   175,   176,
     141,   142,   143,   144,   314,   219,   220,   350,   315,   342,
     343,   344,   365,   221,   222,   223,   145,   146,   185,   241,
     147,   148,   212,   213,   361,   376,   377,   378,   214,    86,
      87,    88,   201,    99,   100,   194,   195,   186,   228,   229,
     230,   231,   288,   289,   290,   232,   233,   234,   235,   236,
     329,   237,   330,   238,   272,   311
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
       3,    17,    85,   250,   280,    10,  -243,   171,    81,   217,
      17,    92,   211,   281,   283,    15,   284,   240,   216,    16,
      24,   240,   250,   318,   391,    50,   244,    33,    16,   293,
      25,   374,   217,   396,    39,    30,    31,    14,     8,    15,
     217,   181,   181,    45,    51,   182,   182,    83,    61,   310,
      15,   340,   340,   276,    52,   341,   196,     1,    15,   345,
      67,    14,   269,    15,    20,    22,    73,     9,   217,   217,
      52,   204,    52,     1,   334,    97,    52,    15,    73,    52,
      14,    15,    15,    66,    52,    97,    97,    97,   326,    15,
     331,   338,     4,    96,    32,    83,    21,    15,     4,    28,
       1,   307,   351,   150,   150,   150,  -243,   218,   215,   259,
     335,   168,   349,   345,   264,   245,   345,    15,    15,   285,
     286,   358,   257,   183,   188,   184,   184,   384,    15,   193,
     372,   260,    93,    94,    95,   261,    14,    29,    15,   266,
     156,   157,   158,   159,   160,   161,    97,   162,   163,   164,
     320,   395,   262,   296,    72,   200,   263,   297,   380,    35,
     324,   325,    38,   165,   150,    14,    72,    15,   385,   304,
     198,   199,   305,     4,   327,   203,   297,  -151,   127,   277,
     278,  -160,   353,   354,   319,    41,   151,   152,   153,   187,
     187,   375,    36,    37,   168,    42,    43,   328,    44,   309,
     248,   251,   316,   -33,    59,    60,    82,   326,   259,    66,
      64,   101,    65,   168,    79,   177,   271,  -212,   168,   248,
     178,   211,   375,    83,   154,   155,   179,   180,   271,   190,
     191,   192,   287,   328,   208,   184,   168,   209,   242,   243,
     267,   268,   258,   269,   271,   362,   273,   270,   274,   275,
     276,   279,   291,   282,   294,    14,   298,    15,   200,   156,
     157,   158,   159,   160,   161,   292,   162,   163,   164,   295,
     299,   302,   313,   168,   300,   306,   312,   317,   321,   322,
     308,   323,   165,   312,   336,   339,   347,   346,   168,   168,
     356,   357,   352,   313,    14,   359,   366,   367,   368,   168,
     168,   168,   369,   341,   373,   332,   271,   248,   381,   379,
     251,  -158,   168,   390,    98,   348,   392,   271,   300,    90,
      13,    23,    80,    56,   287,   287,    78,   265,    89,   303,
     388,   337,   364,   246,   371,   386,   271,   168,   360,   383,
     363,   389,   189,   382,   247,   394,   149,   301,   393,   168,
       0,   370,   355,   197,     0,     0,     0,     0,   102,   103,
     104,   348,   168,   105,   106,   107,   364,     0,     0,     0,
     181,   348,     0,     0,   363,   224,   225,     0,     0,     0,
       0,     0,     0,   251,     0,     0,     0,     0,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   181,     0,     0,     0,     0,     0,
     225,   124,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,   125,    15,     0,   156,
     157,   158,   159,   160,   161,     0,   162,   163,   164,     0,
       0,     0,     1,   126,     0,     0,     0,     0,     0,     0,
       0,     0,   165,     0,   226,     0,     0,     0,     0,    14,
       0,    15,     0,   156,   157,   158,   159,   160,   161,     0,
     162,   163,   164,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,   165,    15,   226,   156,
     157,   158,   159,   160,   161,     0,   162,   163,   164,     0,
       0,     0,    14,     0,    15,     0,   156,   157,   158,   159,
     160,   161,   165,   162,   163,   164,     0,     0,   208,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   165,
     202,    14,     0,    15,     0,   156,   157,   158,   159,   160,
     161,     0,   162,   163,   164,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   165
};

static const short int yycheck[] =
{
       0,     9,    73,   190,   226,     5,    12,   101,    31,    27,
      18,    82,   180,   228,     5,    76,     7,   185,    13,     9,
      20,   189,   209,   276,    77,    24,    13,    27,    18,   244,
      20,    10,    27,    77,    34,    39,    40,    74,     0,    76,
      27,    19,    19,    43,    44,    23,    23,   108,    48,   270,
      76,    10,    10,   106,    44,    13,   129,    99,    76,   312,
      60,    74,   106,    76,    89,   102,    62,   101,    27,    27,
      60,   165,    62,    99,   295,    83,    66,    76,    74,    69,
      74,    76,    76,   106,    74,    93,    94,    95,    26,    76,
     293,   306,     0,    83,    98,   108,   103,    76,     6,   104,
      99,   269,   317,    93,    94,    95,   112,   102,   181,   203,
     297,   101,   315,   366,   208,   102,   369,    76,    76,   110,
     111,   336,   195,   101,   101,   103,   103,   368,    76,   129,
     352,   102,    41,    42,    43,   106,    74,    93,    76,   210,
      78,    79,    80,    81,    82,    83,   154,    85,    86,    87,
     279,   392,   102,   102,    62,   155,   106,   106,   361,    92,
     289,   290,    96,   101,   154,    74,    74,    76,   371,   263,
      39,    40,   102,    81,   112,   165,   106,   102,    86,    37,
      38,   106,   324,   325,   278,    97,    93,    94,    95,   106,
     107,   359,    92,    92,   184,    11,    90,   291,    94,   270,
     190,   191,   273,    91,    91,    94,    11,    26,   302,   106,
     105,    11,   105,   203,   105,    18,   216,   109,   208,   209,
      18,   389,   390,   108,   107,   109,    18,   101,   228,   101,
     101,    69,   232,   327,   107,   103,   226,   101,    23,    23,
     102,   106,   109,   106,   244,   339,    23,   113,   102,   106,
     106,     3,    12,   106,   102,    74,   102,    76,   258,    78,
      79,    80,    81,    82,    83,   112,    85,    86,    87,   103,
     106,   261,   272,   263,   106,    13,   106,    13,   104,   104,
     270,    13,   101,   106,    13,   107,   106,   102,   278,   279,
     102,   104,   106,   293,    74,   106,   106,    13,   106,   289,
     290,   291,   106,    13,   106,   295,   306,   297,   107,   106,
     300,   106,   302,   106,    83,   315,   106,   317,   106,    81,
       6,    18,    69,    44,   324,   325,    66,   209,    74,   261,
     373,   300,   340,   188,   351,   371,   336,   327,   338,   366,
     340,   374,   107,   365,   189,   390,    87,   258,   389,   339,
      -1,   351,   327,   154,    -1,    -1,    -1,    -1,    15,    16,
      17,   361,   352,    20,    21,    22,   374,    -1,    -1,    -1,
      19,   371,    -1,    -1,   374,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,   373,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    19,    -1,    -1,    -1,    -1,    -1,
      25,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    83,    76,    -1,    78,
      79,    80,    81,    82,    83,    -1,    85,    86,    87,    -1,
      -1,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,    -1,   103,    -1,    -1,    -1,    -1,    74,
      -1,    76,    -1,    78,    79,    80,    81,    82,    83,    -1,
      85,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,   101,    76,   103,    78,
      79,    80,    81,    82,    83,    -1,    85,    86,    87,    -1,
      -1,    -1,    74,    -1,    76,    -1,    78,    79,    80,    81,
      82,    83,   101,    85,    86,    87,    -1,    -1,   107,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
     102,    74,    -1,    76,    -1,    78,    79,    80,    81,    82,
      83,    -1,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101
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
     144,    31,    11,   108,   116,   158,   213,   214,   215,   150,
     125,   145,   158,    41,    42,    43,   119,   122,   124,   217,
     218,    11,    15,    16,    17,    20,    21,    22,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    68,    83,   100,   120,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   174,
     180,   184,   185,   186,   187,   200,   201,   204,   205,   215,
     119,   218,   218,   218,   107,   109,    78,    79,    80,    81,
      82,    83,    85,    86,    87,   101,   117,   118,   119,   122,
     123,   153,   154,   173,   181,   182,   183,    18,    18,    18,
     101,    19,    23,   101,   103,   202,   221,   237,   101,   202,
     101,   101,    69,   116,   219,   220,   221,   217,    39,    40,
     116,   216,   102,   119,   153,   155,   156,   157,   107,   101,
     119,   199,   206,   207,   212,   221,    13,    27,   102,   189,
     190,   197,   198,   199,    24,    25,   103,   153,   222,   223,
     224,   225,   229,   230,   231,   232,   233,   235,   237,   158,
     199,   203,    23,    23,    13,   102,   189,   203,   119,   170,
     171,   119,   171,   175,   176,   178,   179,   221,   109,   153,
     102,   106,   102,   106,   153,   170,   158,   102,   106,   106,
     113,   116,   238,    23,   102,   106,   106,    37,    38,     3,
     225,   238,   106,     5,     7,   110,   111,   116,   226,   227,
     228,    12,   112,   238,   102,   103,   102,   106,   102,   106,
     106,   216,   119,   157,   153,   102,    13,   199,   119,   158,
     173,   239,   106,   116,   188,   192,   158,    13,   198,   153,
     229,   104,   104,    13,   229,   229,    26,   112,   153,   234,
     236,   188,   119,   172,   173,   171,    13,   179,   238,   107,
      10,    13,   193,   194,   195,   198,   102,   106,   116,   188,
     191,   238,   106,   226,   226,   236,   102,   104,   238,   106,
     116,   208,   153,   116,   122,   196,   106,    13,   106,   106,
     116,   192,   225,   106,    10,   199,   209,   210,   211,   106,
     188,   107,   197,   194,   190,   188,   191,   177,   178,   196,
     106,    77,   106,   212,   210,   190,    77
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
     153,   153,   153,   154,   154,   155,   155,   156,   156,   157,
     158,   158,   159,   159,   160,   160,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   162,   163,
     163,   164,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   166,   167,   168,   169,   169,
     170,   170,   171,   172,   172,   173,   174,   175,   175,   175,
     176,   177,   178,   178,   179,   179,   180,   181,   181,   182,
     183,   183,   183,   184,   184,   185,   186,   187,   187,   187,
     188,   188,   189,   189,   189,   189,   189,   190,   191,   192,
     192,   193,   193,   194,   194,   195,   196,   196,   197,   197,
     198,   198,   198,   198,   199,   200,   200,   200,   201,   202,
     202,   202,   203,   203,   204,   205,   206,   206,   207,   208,
     208,   209,   209,   210,   210,   211,   212,   212,   213,   213,
     214,   214,   215,   215,   216,   216,   216,   217,   217,   217,
     217,   218,   218,   219,   219,   220,   220,   221,   222,   223,
     224,   224,   224,   225,   225,   226,   226,   226,   227,   227,
     228,   228,   229,   229,   230,   230,   230,   231,   232,   233,
     233,   234,   234,   235,   235,   236,   236,   237,   238,   238,
     239,   239,   239
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
       3,     4,     1,     1,     1,     1,     1,     3,     1,     1,
       2,     3,     3,     1,     1,     1,     3,     1,     3,     2,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     4,
       1,     3,     4,     1,     1,     1,     4,     1,     4,     6,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     5,     2,     1,     3,     6,     4,
       2,     1,     1,     6,     8,     6,     4,     1,     2,     2,
       1,     1,     3,     1,     1,     4,     1,     2,     1,     3,
       1,     2,     3,     3,     2,     3,     6,     4,     3,     1,
       2,     2,     1,     1,     3,     4,     1,     6,     1,     2,
       1,     1,     3,     1,     1,     4,     1,     3,     1,     1,
       2,     1,     6,     4,     1,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     4,     1,     1,
       1,     3,     5,     3,     2,     3,     3,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     3,     1,
       2,     1,     2,     1,     1,     1,     1,     2,     2,     1,
       3,     1,     1
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     0,     0,     0,     0,     0,     0,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     9,     0,     0,     0,
       0,     0,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    15,    17,     0,     0,     0,
       0,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,     4,     0,   188,     0,   157,     0,   130,     0,     4,
       0,     4,     0,   160,     0,     4,     0,   159,     0,     4,
       0,   189,     0
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
#line 154 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        *tree = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    }
#line 1415 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 3:
#line 159 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        *tree = rb_ary_new();
    }
#line 1423 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 4:
#line 166 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = Qnil;
    }
#line 1431 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 14:
#line 211 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1439 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 15:
#line 216 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1448 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 16:
#line 224 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("id")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-9)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("oid")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-8)].yystate.yysemantics.yysval));        
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("encoding")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("default")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensionDefault")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));                   
    }
#line 1462 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 19:
#line 243 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 1470 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 20:
#line 250 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1480 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 21:
#line 257 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1488 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 25:
#line 291 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 1496 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 27:
#line 300 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("EXPLICIT"));
    }
#line 1504 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 28:
#line 305 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("IMPLICIT"));
    }
#line 1512 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 29:
#line 310 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("AUTOMATIC"));
    }
#line 1520 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 30:
#line 315 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("EXPLICIT"));
    }
#line 1528 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 31:
#line 322 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = Qtrue;
    }
#line 1536 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 32:
#line 327 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = Qfalse;
    }
#line 1544 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 33:
#line 334 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
    }
#line 1552 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 35:
#line 343 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exports")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("imports")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("assignments")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1564 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 38:
#line 360 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 1572 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 39:
#line 365 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("ALL"));
    }
#line 1580 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 41:
#line 374 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
    }
#line 1588 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 44:
#line 387 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 1596 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 46:
#line 396 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
    }
#line 1605 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 47:
#line 404 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1615 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 48:
#line 411 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1623 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 49:
#line 418 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("id")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); 
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("symbol")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp))); 
    }
#line 1635 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 51:
#line 433 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1645 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 52:
#line 440 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1653 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 53:
#line 447 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("ref")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1664 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 56:
#line 465 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1672 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 57:
#line 470 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));    
    }
#line 1682 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 60:
#line 485 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("id")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));        
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 1692 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
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
#line 1706 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 67:
#line 519 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1716 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 70:
#line 530 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
    }
#line 1725 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 71:
#line 536 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 1733 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 72:
#line 541 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 1741 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 75:
#line 554 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1751 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 76:
#line 561 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1759 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 77:
#line 568 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1769 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 78:
#line 575 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_ary_push(crefs, ((*yyvalp)));
    }
#line 1778 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 79:
#line 583 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("id")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("value")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 1790 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 80:
#line 596 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("tags")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 1799 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 81:
#line 602 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("tags")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("constraints")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1809 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 101:
#line 661 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("CharacterString")));
    }
#line 1819 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 102:
#line 670 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BMPString")));
    }
#line 1829 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 103:
#line 677 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("GeneralString")));
    }
#line 1839 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 104:
#line 684 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("GraphicString")));
    }
#line 1849 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 105:
#line 691 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("IA5String")));
    }
#line 1859 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 106:
#line 698 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ISO646String")));
    }
#line 1869 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 107:
#line 705 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("NumericString")));
    }
#line 1879 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 108:
#line 712 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("PrintableString")));
    }
#line 1889 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 109:
#line 719 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("TeletexString")));
    }
#line 1899 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 110:
#line 726 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("T61String")));
    }
#line 1909 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 111:
#line 733 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UniversalString")));
    }
#line 1919 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 112:
#line 740 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UTF8String")));
    }
#line 1929 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 113:
#line 747 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("VideotexString")));
    }
#line 1939 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 114:
#line 754 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("VisibleString")));
    }
#line 1949 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 115:
#line 765 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("DefinedType")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("ref")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1960 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 116:
#line 777 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("OBJECTIDENTIFIER")));
    }
#line 1970 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 117:
#line 789 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {    
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BOOLEAN")));
    }
#line 1980 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 118:
#line 800 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("INTEGER")));        
    }
#line 1990 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 119:
#line 807 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("INTEGER")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("numberList")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 2001 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 120:
#line 817 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2011 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 121:
#line 824 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2019 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 122:
#line 831 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("id")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("number")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 2031 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 126:
#line 854 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ENUMERATED")));        
    }
#line 2040 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 127:
#line 862 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2050 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 128:
#line 869 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); 
    }
#line 2062 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 129:
#line 878 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("additional")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2075 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 132:
#line 898 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2085 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 133:
#line 905 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2093 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 134:
#line 912 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("id")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 2104 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 136:
#line 926 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("REAL")));
    }
#line 2114 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 143:
#line 955 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BITSTRING")));        
    }
#line 2124 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 144:
#line 962 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BITSTRING")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("bitList")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 2135 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 145:
#line 974 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("OCTETSTRING")));
    }
#line 2145 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 146:
#line 985 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("NULL")));
    }
#line 2155 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 147:
#line 996 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SEQUENCE")));  
    }
#line 2165 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 148:
#line 1003 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SEQUENCE")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval)); 
    }
#line 2177 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 149:
#line 1012 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SEQUENCE")));
    }
#line 2186 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 152:
#line 1026 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {    
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("head")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));                
    }
#line 2196 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 153:
#line 1033 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("head")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("head")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 2209 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 154:
#line 1043 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("head")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("head")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("tail")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2223 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 155:
#line 1054 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("head")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("tail")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2236 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 156:
#line 1064 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("head")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 2248 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 159:
#line 1083 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    }
#line 2256 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 161:
#line 1092 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2266 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 162:
#line 1099 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2274 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 165:
#line 1112 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("version")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("additional")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 2286 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 168:
#line 1129 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2296 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 169:
#line 1136 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2304 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 171:
#line 1145 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("OPTIONAL")), Qtrue);
    }
#line 2312 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 172:
#line 1150 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("DEFAULT")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2320 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 173:
#line 1155 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = Qnil;
    }
#line 2328 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 174:
#line 1162 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("id")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval)); 
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));        
    }
#line 2338 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 175:
#line 1173 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SET"))); 
    }
#line 2348 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 176:
#line 1180 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        
    }
#line 2356 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 177:
#line 1185 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SET")));        
    }
#line 2365 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 178:
#line 1195 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SEQUENCEOF")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("type")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("constraints")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
}
#line 2377 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 179:
#line 1205 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
    }
#line 2386 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 180:
#line 1211 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_push_ary(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 2396 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 181:
#line 1218 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_push_ary(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 2406 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 184:
#line 1235 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SETOF")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("type")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("constraints")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 2418 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 185:
#line 1247 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("CHOICE")));
    }
#line 2427 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 186:
#line 1255 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2437 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 187:
#line 1262 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue); 
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("additional")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));        
    }
#line 2450 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 189:
#line 1278 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    }
#line 2458 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 191:
#line 1287 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2468 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 192:
#line 1294 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2476 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 195:
#line 1307 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("version")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("additional")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 2488 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 196:
#line 1318 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2498 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 197:
#line 1325 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2506 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 199:
#line 1336 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
    }
#line 2515 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 200:
#line 1344 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2523 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 201:
#line 1349 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2533 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 202:
#line 1358 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("type")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2542 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 203:
#line 1364 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("type")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2551 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 204:
#line 1372 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("IMPLICIT"));
        rb_ary_push(crefs, ((*yyvalp)));
    }
#line 2560 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 205:
#line 1378 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("EXPLICIT"));
        rb_ary_push(crefs, ((*yyvalp)));
    }
#line 2569 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 207:
#line 1388 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("classNumber")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UNIVERSAL")));        
    }
#line 2580 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 208:
#line 1396 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("classNumber")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("APPLICATION")));        
    }
#line 2591 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 209:
#line 1404 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("classNumber")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("PRIVATE")));
    }
#line 2602 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 210:
#line 1412 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("classNumber")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2612 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 214:
#line 1432 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
    }
#line 2621 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 215:
#line 1440 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));        
    }
#line 2631 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 216:
#line 1447 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2639 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 217:
#line 1454 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("Constraint")));
    }
#line 2648 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 220:
#line 1470 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qfalse);
    }
#line 2659 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 221:
#line 1478 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), ID2SYM(rb_intern("top")), Qtrue);
    }
#line 2671 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 222:
#line 1487 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("additional")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));        
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval), ID2SYM(rb_intern("top")), Qtrue);
    }
#line 2684 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 223:
#line 1499 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
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
#line 2710 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 224:
#line 1522 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
        rb_ary_unshift(rb_hash_aref(((*yyvalp)), ID2SYM(rb_intern("set"))), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 2720 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 225:
#line 1531 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);

        rb_ary_unshift(rb_hash_aref(((*yyvalp)), ID2SYM(rb_intern("set"))), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));

        VALUE mark = rb_hash_new();
        rb_ary_push(crefs, mark);
        rb_hash_aset(mark, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UNION")));
        rb_hash_aset(mark, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));

        rb_ary_unshift(rb_hash_aref(((*yyvalp)), ID2SYM(rb_intern("set"))), mark);
    }
#line 2737 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 226:
#line 1545 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    
        rb_ary_unshift(rb_hash_aref(((*yyvalp)), ID2SYM(rb_intern("set"))), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
        
        VALUE mark = rb_hash_new();
        rb_ary_push(crefs, mark);
        rb_hash_aset(mark, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("INTERSECTION")));
        rb_hash_aset(mark, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));

        rb_ary_unshift(rb_hash_aref(((*yyvalp)), ID2SYM(rb_intern("set"))), mark);
    }
#line 2754 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 227:
#line 1559 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ElementSetSpec")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("set")), rb_ary_new());
    }
#line 2765 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 232:
#line 1581 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 2773 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 237:
#line 1598 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SingleValue")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("value")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));        
    }
#line 2785 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 238:
#line 1609 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ValueRange")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("lower")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("upper")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2798 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 242:
#line 1629 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    }
#line 2806 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 244:
#line 1638 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("MIN"));
    }
#line 2814 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 246:
#line 1647 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("MAX"));
    }
#line 2822 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 247:
#line 1654 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SizeConstraint")));        
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("constraint")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2834 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;


#line 2838 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
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
  (!!((Yystate) == (-254)))

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



#line 1680 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:2584  */


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
