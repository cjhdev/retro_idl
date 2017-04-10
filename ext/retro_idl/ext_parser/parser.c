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
#define YYLAST   592

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  114
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  134
/* YYNRULES -- Number of rules.  */
#define YYNRULES  258
/* YYNRULES -- Number of states.  */
#define YYNSTATES  403
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
     484,   493,   508,   510,   512,   514,   516,   518,   520,   526,
     531,   538,   545,   552,   559,   567,   580,   586,   595,   597,
     601,   603,   607,   609,   611,   613,   615,   617,   619,   621,
     623,   625,   627,   629,   633,   639,   641,   645,   654,   661,
     668,   675,   682,   689,   696,   703,   710,   717,   724,   731,
     738,   749,   761,   773,   782,   793,   795,   801,   811,   813,
     820,   827,   834,   845,   847,   851,   855,   868,   876,   883,
     892,   904,   908,   912,   919,   926,   934,   938,   952,   962,
     973,   975,   979,   983,   985,   987,   993,  1005,  1014,  1025,
    1027,  1033,  1045,  1052,  1061,  1069,  1071,  1075,  1082,  1092,
    1103,  1113,  1124,  1128,  1132,  1137,  1141,  1148,  1155,  1157,
    1161,  1172,  1174,  1178,  1185,  1192,  1194,  1199,  1204,  1211,
    1222,  1229,  1234,  1244,  1254,  1260,  1267,  1276,  1278,  1284,
    1296,  1304,  1311,  1323,  1327,  1332,  1336,  1343,  1350,  1352,
    1356,  1367,  1374,  1381,  1394,  1396,  1404,  1409,  1418,  1424,
    1432,  1438,  1444,  1448,  1456,  1464,  1472,  1481,  1483,  1490,
    1492,  1500,  1507,  1514,  1522,  1526,  1530,  1538,  1547,  1559,
    1582,  1591,  1605,  1619,  1629,  1631,  1635,  1637,  1641,  1646,
    1650,  1652,  1654,  1658,  1669,  1681,  1683,  1687,  1689,  1696,
    1698,  1705,  1707,  1714,  1728,  1730,  1734,  1736,  1738
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
  "ValueList", "NamedValue", "Type", "OfType", "_Type", "BuiltinType",
  "ReferencedType", "CharacterStringType",
  "UnrestrictedCharacterStringType", "RestrictedCharacterStringType",
  "DefinedType", "ObjectIdentifierType", "BooleanType", "BooleanValue",
  "BooleanValueValue", "IntegerType", "optNamedNumberList",
  "NamedNumberList", "NamedNumber", "NumberOrIdentifier", "SignedNumber",
  "IntegerValue", "EnumeratedType", "Enumerations", "RootEnumeration",
  "AdditionalEnumeration", "Enumeration", "EnumerationItem",
  "EnumeratedValue", "RealType", "RealValue", "RealValueValue",
  "NumericRealValue", "SpecialRealValue", "BitStringType",
  "OctetStringType", "OctetStringValue", "OctetStringValueValue",
  "NullType", "SequenceType", "OptionalExtensionMarker",
  "ComponentTypeLists", "RootComponentTypeList", "ExtensionEndMarker",
  "ExtensionAdditions", "ExtensionAdditionList", "ExtensionAddition",
  "ExtensionAdditionGroup", "VersionNumber", "ComponentTypeList",
  "ComponentType", "NamedType", "SetType", "SequenceOfType",
  "OfTypeVariant", "TypeOrNamedType", "SetOfType", "ChoiceType",
  "AlternativeTypeLists", "RootAlternativeTypeList",
  "ExtensionAdditionAlternatives", "ExtensionAdditionAlternativesList",
  "ExtensionAdditionAlternative", "ExtensionAdditionAlternativesGroup",
  "AlternativeTypeList", "ChoiceValue", "optTags", "Tags", "Tag",
  "TagType", "Class", "ClassNumber", "optConstraints", "Constraints",
  "Constraint", "ConstraintSpec", "SubtypeConstraint", "ElementSetSpecs",
  "ElementSetSpec", "NextElements", "IntersectionMark", "UnionMark",
  "Elements", "SubTypeElements", "SingleValue", "ValueRange",
  "LowerEndpoint", "UpperEndpoint", "LowerEndValue", "UpperEndValue",
  "SizeConstraint", "ExceptionSpec", "ExceptionIdentification", YY_NULLPTR
};
#endif

#define YYPACT_NINF -323
#define YYTABLE_NINF -250

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
     -46,  -323,    56,  -323,  -323,   -39,   -46,  -323,  -323,     7,
    -323,   -18,  -323,  -323,  -323,  -323,   -30,  -323,   -10,  -323,
       2,    12,  -323,  -323,  -323,  -323,     8,    -3,  -323,  -323,
      11,    18,    59,  -323,     3,  -323,  -323,  -323,    55,  -323,
     145,  -323,    75,    72,     6,    76,    77,  -323,    80,  -323,
      64,  -323,  -323,  -323,  -323,    70,    71,  -323,  -323,  -323,
     -22,  -323,   -22,  -323,  -323,  -323,   -22,  -323,    73,   -22,
    -323,   -12,   165,    83,   -22,  -323,  -323,  -323,  -323,  -323,
    -323,   -46,    83,    96,  -323,   168,   403,    83,  -323,  -323,
    -323,  -323,  -323,     7,     7,     7,    79,  -323,    78,    84,
    -323,   491,   162,   176,   178,    97,    -1,    27,  -323,    98,
     100,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,
    -323,  -323,  -323,  -323,   133,  -323,  -323,  -323,  -323,   101,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,
    -323,  -323,  -323,  -323,    96,    85,  -323,  -323,  -323,  -323,
    -323,  -323,  -323,  -323,   473,  -323,  -323,   185,  -323,  -323,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,
    -323,  -323,  -323,  -323,  -323,  -323,    98,     2,   101,  -323,
      13,   326,   -51,   180,   182,    15,   -51,     2,  -323,  -323,
       2,  -323,  -323,  -323,   101,  -323,    99,  -323,  -323,  -323,
    -323,  -323,   455,  -323,    25,    34,  -323,   491,  -323,    83,
    -323,   104,   103,   107,  -323,    94,   187,  -323,   110,   112,
     113,  -323,   106,   213,  -323,   326,    -5,    94,  -323,  -323,
     115,     9,  -323,  -323,  -323,   210,   111,  -323,  -323,  -323,
    -323,  -323,  -323,    94,  -323,   122,  -323,   123,    39,  -323,
     123,  -323,   125,   124,   126,  -323,  -323,    85,  -323,  -323,
       2,  -323,   491,  -323,  -323,  -323,   215,     2,   -29,  -323,
     127,    83,  -323,   216,     4,  -323,   491,   396,   130,   132,
     218,  -323,  -323,  -323,  -323,  -323,  -323,   396,   396,   169,
    -323,   134,  -323,     7,  -323,     2,  -323,   225,     2,  -323,
     491,  -323,  -323,    94,  -323,  -323,   137,  -323,  -323,    22,
      47,   155,   152,  -323,    94,  -323,  -323,  -323,  -323,  -323,
     153,     9,     9,  -323,   438,  -323,  -323,  -323,   158,  -323,
     135,  -323,    94,  -323,   157,   491,   190,  -323,   159,  -323,
    -323,  -323,  -323,   253,  -323,  -323,   163,   166,   326,  -323,
    -323,  -323,  -323,  -323,   167,    45,  -323,   171,  -323,  -323,
     161,     4,    14,   172,     4,    14,  -323,   152,  -323,     2,
     190,  -323,   177,  -323,  -323,   258,  -323,  -323,   -68,  -323,
    -323,  -323,   184,  -323,   188,     2,    45,  -323,     4,   -38,
    -323,  -323,  -323
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const unsigned short int yydefact[] =
{
       4,     8,     0,     3,    13,     4,     2,    15,     1,     0,
      18,     0,    17,    14,    10,     7,    23,    22,     0,    20,
       4,     0,    19,    21,    26,    12,     0,     4,    24,    25,
       0,     0,     0,    30,     4,    28,    27,    29,     0,    32,
       0,    31,     0,     4,     4,    36,     0,    34,     4,    37,
       0,    41,     9,    54,    55,     0,    40,    51,    53,    16,
       4,    42,     0,    43,    39,    38,     0,    46,     0,    45,
      47,     0,     0,     4,    35,    57,    58,    59,    52,    44,
      48,     0,     4,     0,   205,     0,     0,   204,   207,    56,
      50,    49,    60,     0,     0,     0,    12,   217,     0,     0,
     216,     0,     0,     0,     0,     0,     0,     0,   113,     4,
       0,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,     0,   151,   138,   111,    76,     4,
      80,    81,    84,    96,    95,    94,    89,    83,    87,    86,
      91,    82,    90,    88,    92,    93,    79,    78,    85,   206,
     218,   214,   215,   213,     0,     4,   143,   144,   145,   115,
     116,    11,     5,     6,     0,   150,   149,   124,   125,   142,
      61,    63,   114,   126,   123,    62,    65,    64,   139,   140,
     141,    66,   148,    67,   147,    97,     4,     0,     0,   184,
       0,     0,     4,     0,     0,     0,     4,     0,   118,   117,
       0,   112,   220,    77,   219,   221,     0,   210,   211,   212,
     209,    68,   124,    73,     0,     0,    71,     0,   146,     4,
     201,     0,   191,   193,   253,     4,     0,   152,     0,   157,
     162,   173,   175,     0,   250,     0,   243,     4,   224,   225,
     226,     4,   239,   240,   241,     0,   245,   242,   187,   188,
     183,   185,   186,     4,   180,     0,   189,     0,     0,   120,
     135,   136,     0,   128,   131,   133,   222,     4,    75,    69,
       0,    70,     0,   203,   179,   190,     0,     0,     4,   255,
       4,     4,   154,     0,     0,   176,     0,     0,     0,     0,
       0,   234,   236,   235,   237,   233,   230,     0,     0,     0,
     246,     4,   182,     0,   119,     0,   127,     0,     0,   208,
       0,    72,    74,     4,   202,   257,     0,   258,   254,     0,
     156,     0,     4,   178,     4,   174,   177,   229,   238,   223,
     227,     4,     4,   252,     0,   251,   244,   247,     0,   124,
       0,   121,     4,   134,     4,     0,     4,   155,   164,   166,
     169,   168,   153,     0,   156,   161,     0,     4,     0,   232,
     231,   248,   181,   122,   129,     0,   195,     4,   256,   171,
       0,     0,     0,   155,     0,     0,   165,     4,   228,     0,
       4,   199,   194,   196,   198,     0,   192,   172,     0,   167,
     160,   158,     0,   130,   132,     0,     0,   170,     0,     0,
     197,   159,   200
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -323,  -323,     0,  -323,  -323,    88,    61,   -11,    -8,  -323,
     191,   194,  -323,   276,  -323,  -323,  -323,   268,  -323,  -323,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,
     224,  -323,   255,   236,  -323,  -323,   229,  -323,  -323,   -99,
    -323,  -323,    36,   -61,  -323,  -323,  -323,  -323,  -323,  -323,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,   118,  -323,  -193,
       5,    29,  -323,  -323,  -323,  -323,  -323,   -70,    10,  -323,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,
    -323,  -293,   116,  -322,   -67,   -45,  -323,   -58,  -323,   -65,
     -55,  -261,  -181,  -323,  -323,   212,   121,  -323,  -323,  -323,
    -323,  -323,  -323,   -76,  -323,   -74,  -323,  -323,  -323,   238,
      60,   174,    66,  -323,  -323,  -116,  -323,  -323,  -323,  -232,
    -198,  -323,  -323,  -228,  -323,  -323,  -323,  -323,  -323,  -323,
      -4,    57,  -220,  -323
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     2,    84,   165,   166,   219,    53,    54,   168,   169,
      26,     5,     6,     7,    11,    12,    18,    19,    27,    34,
      40,    46,    47,    48,    49,    55,    62,    63,    68,    69,
      70,    91,    71,    57,    58,    74,    75,    76,    77,   236,
     214,   215,   216,   248,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   171,   172,   138,   199,   258,   261,
     173,   174,   175,   139,   262,   263,   393,   264,   265,   176,
     140,   177,   178,   179,   180,   141,   142,   181,   182,   143,
     144,   321,   228,   229,   356,   322,   348,   349,   350,   371,
     230,   231,   232,   145,   146,   192,   250,   147,   148,   221,
     222,   367,   382,   383,   384,   223,   183,    86,    87,    88,
     210,    99,   100,   203,   204,   193,   237,   238,   239,   240,
     296,   297,   298,   241,   242,   243,   244,   245,   336,   246,
     337,   247,   280,   318
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
       3,    17,   170,   288,   259,    10,   220,  -249,   338,   397,
      17,   249,    85,   205,   291,   249,   292,   289,   188,    81,
      24,    92,   189,   325,   346,    15,   225,    33,   253,   355,
      50,   226,   346,   301,    39,   347,    30,    31,   284,   402,
     226,   226,   226,    45,    51,    14,   188,    15,    61,   226,
     189,    73,   390,     1,    15,   380,     8,    83,   351,   327,
      67,     4,     9,    73,    14,   213,    15,     4,   277,   331,
     332,    20,   224,    21,   386,    97,   401,     1,    15,    83,
      15,    14,    15,    15,   391,    97,    97,    97,   266,    15,
      15,    15,    22,   344,    66,    32,   314,    16,    15,    38,
     190,    29,   191,    35,   357,     1,    16,  -249,    25,   198,
      36,   351,   341,   268,   351,   227,    28,   254,   273,   293,
     294,    15,   364,    72,   207,   208,   378,   269,   195,   202,
     191,   270,    52,   359,   360,    72,   271,    93,    94,    95,
     272,   304,     4,   285,   286,   305,    97,   127,    52,  -156,
      52,    37,    41,  -165,    52,   209,    42,    52,   274,   151,
     152,   153,    52,   194,   194,    43,    44,   -33,    59,    64,
      14,    96,    15,   312,    60,    65,    82,    66,    79,   101,
     184,   150,   150,   150,   381,   154,   198,   326,  -218,   167,
    -124,    83,  -124,   155,   185,   333,   186,  -124,   187,   197,
     335,   200,   201,   251,   191,   252,   275,   278,   267,   276,
     281,   268,   282,   277,   220,   381,   287,   316,   283,   284,
     323,   290,   299,   300,   302,   279,   303,   306,   313,   324,
     307,   330,   308,   319,   328,   335,   329,   279,   342,   363,
     319,   295,   150,    14,   345,    15,   368,   156,   157,   158,
     159,   160,   212,   279,   161,   162,   163,   352,   353,   358,
     362,  -124,  -124,   365,    14,   372,   373,   209,   387,   374,
     164,   347,   375,   379,    98,    90,  -124,   385,  -163,   167,
     320,   334,    13,   396,  -124,   257,    23,  -124,   260,  -124,
     398,  -124,   217,    80,   308,  -124,  -124,  -124,  -124,    56,
     167,   320,    78,    89,   218,   167,   311,   317,   340,   394,
     392,   255,   377,   279,   389,   395,   388,   256,   343,   196,
     400,   399,   354,   167,   279,   149,     0,   309,   206,     0,
     361,   295,   295,     0,     0,     0,     0,     0,   370,     0,
       0,     0,   279,     0,   366,   188,   369,     0,     0,     0,
     233,   234,     0,     0,     0,     0,     0,   376,   310,     0,
     167,     0,     0,     0,     0,     0,   315,   354,     0,     0,
       0,     0,   370,     0,   167,   167,     0,   354,     0,     0,
     369,     0,     0,     0,     0,   167,   167,   167,     0,     0,
       0,   339,     0,   257,     0,     0,   260,     0,   167,     0,
      14,     0,    15,     0,   156,   157,   158,   159,   160,     0,
       0,   161,   162,   163,     0,   188,     0,     0,   102,   103,
     104,   234,   167,   105,   106,   107,     0,   164,     0,   235,
       0,     0,     0,   167,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   167,     0,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   333,     0,     0,   260,     0,     0,
      14,   124,    15,     0,   156,   157,   158,   159,   160,     0,
       0,   161,   162,   163,     0,     0,   125,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   164,     0,   235,
       0,     0,     1,   126,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,    15,     0,   156,   157,   158,   159,
     160,     0,     0,   161,   162,   163,     0,     0,     0,    14,
       0,    15,     0,   156,   157,   158,   159,   160,     0,   164,
     161,   162,   163,     0,     0,     0,     0,    14,     0,    15,
       0,   156,   157,   158,   159,   160,   164,  -124,   161,   162,
     163,  -124,   217,     0,     0,    14,     0,    15,     0,   156,
     157,   158,   159,   160,   164,   211,   161,   162,   163,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   164
};

static const short int yycheck[] =
{
       0,     9,   101,   235,   197,     5,   187,    12,   301,    77,
      18,   192,    73,   129,     5,   196,     7,   237,    19,    31,
      20,    82,    23,   284,    10,    76,    13,    27,    13,   322,
      24,    27,    10,   253,    34,    13,    39,    40,   106,    77,
      27,    27,    27,    43,    44,    74,    19,    76,    48,    27,
      23,    62,   374,    99,    76,    10,     0,   108,   319,   287,
      60,     0,   101,    74,    74,   164,    76,     6,   106,   297,
     298,    89,   188,   103,   367,    83,   398,    99,    76,   108,
      76,    74,    76,    76,   377,    93,    94,    95,   204,    76,
      76,    76,   102,   313,   106,    98,   277,     9,    76,    96,
     101,    93,   103,    92,   324,    99,    18,   112,    20,   109,
      92,   372,   305,   212,   375,   102,   104,   102,   217,   110,
     111,    76,   342,    62,    39,    40,   358,   102,   101,   129,
     103,   106,    44,   331,   332,    74,   102,    41,    42,    43,
     106,   102,    81,    37,    38,   106,   154,    86,    60,   102,
      62,    92,    97,   106,    66,   155,    11,    69,   219,    93,
      94,    95,    74,   106,   107,    90,    94,    91,    91,   105,
      74,    83,    76,   272,    94,   105,    11,   106,   105,    11,
      18,    93,    94,    95,   365,   107,   186,   286,   109,   101,
       5,   108,     7,   109,    18,    26,    18,    12,   101,   101,
     299,   101,    69,    23,   103,    23,   102,   113,   109,   106,
      23,   310,   102,   106,   395,   396,     3,   278,   106,   106,
     281,   106,    12,   112,   102,   225,   103,   102,    13,    13,
     106,    13,   106,   106,   104,   334,   104,   237,    13,   104,
     106,   241,   154,    74,   107,    76,   345,    78,    79,    80,
      81,    82,   164,   253,    85,    86,    87,   102,   106,   106,
     102,    76,    77,   106,    74,   106,    13,   267,   107,   106,
     101,    13,   106,   106,    83,    81,    91,   106,   106,   191,
     280,   112,     6,   106,    99,   197,    18,   102,   200,   104,
     106,   106,   107,    69,   106,   110,   111,   112,   113,    44,
     212,   301,    66,    74,   186,   217,   270,   278,   303,   379,
     377,   195,   357,   313,   372,   380,   371,   196,   308,   107,
     396,   395,   322,   235,   324,    87,    -1,   267,   154,    -1,
     334,   331,   332,    -1,    -1,    -1,    -1,    -1,   346,    -1,
      -1,    -1,   342,    -1,   344,    19,   346,    -1,    -1,    -1,
      24,    25,    -1,    -1,    -1,    -1,    -1,   357,   270,    -1,
     272,    -1,    -1,    -1,    -1,    -1,   278,   367,    -1,    -1,
      -1,    -1,   380,    -1,   286,   287,    -1,   377,    -1,    -1,
     380,    -1,    -1,    -1,    -1,   297,   298,   299,    -1,    -1,
      -1,   303,    -1,   305,    -1,    -1,   308,    -1,   310,    -1,
      74,    -1,    76,    -1,    78,    79,    80,    81,    82,    -1,
      -1,    85,    86,    87,    -1,    19,    -1,    -1,    15,    16,
      17,    25,   334,    20,    21,    22,    -1,   101,    -1,   103,
      -1,    -1,    -1,   345,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   358,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    26,    -1,    -1,   379,    -1,    -1,
      74,    68,    76,    -1,    78,    79,    80,    81,    82,    -1,
      -1,    85,    86,    87,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,   103,
      -1,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    76,    -1,    78,    79,    80,    81,
      82,    -1,    -1,    85,    86,    87,    -1,    -1,    -1,    74,
      -1,    76,    -1,    78,    79,    80,    81,    82,    -1,   101,
      85,    86,    87,    -1,    -1,    -1,    -1,    74,    -1,    76,
      -1,    78,    79,    80,    81,    82,   101,   102,    85,    86,
      87,   106,   107,    -1,    -1,    74,    -1,    76,    -1,    78,
      79,    80,    81,    82,   101,   102,    85,    86,    87,    -1,
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
     144,    31,    11,   108,   116,   157,   221,   222,   223,   150,
     125,   145,   157,    41,    42,    43,   119,   122,   124,   225,
     226,    11,    15,    16,    17,    20,    21,    22,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    68,    83,   100,   120,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   170,   177,
     184,   189,   190,   193,   194,   207,   208,   211,   212,   223,
     119,   226,   226,   226,   107,   109,    78,    79,    80,    81,
      82,    85,    86,    87,   101,   117,   118,   119,   122,   123,
     153,   168,   169,   174,   175,   176,   183,   185,   186,   187,
     188,   191,   192,   220,    18,    18,    18,   101,    19,    23,
     101,   103,   209,   229,   245,   101,   209,   101,   116,   171,
     101,    69,   116,   227,   228,   229,   225,    39,    40,   116,
     224,   102,   119,   153,   154,   155,   156,   107,   171,   119,
     206,   213,   214,   219,   229,    13,    27,   102,   196,   197,
     204,   205,   206,    24,    25,   103,   153,   230,   231,   232,
     233,   237,   238,   239,   240,   241,   243,   245,   157,   206,
     210,    23,    23,    13,   102,   196,   210,   119,   172,   173,
     119,   173,   178,   179,   181,   182,   229,   109,   153,   102,
     106,   102,   106,   153,   157,   102,   106,   106,   113,   116,
     246,    23,   102,   106,   106,    37,    38,     3,   233,   246,
     106,     5,     7,   110,   111,   116,   234,   235,   236,    12,
     112,   246,   102,   103,   102,   106,   102,   106,   106,   224,
     119,   156,   153,    13,   206,   119,   157,   175,   247,   106,
     116,   195,   199,   157,    13,   205,   153,   237,   104,   104,
      13,   237,   237,    26,   112,   153,   242,   244,   195,   119,
     174,   173,    13,   182,   246,   107,    10,    13,   200,   201,
     202,   205,   102,   106,   116,   195,   198,   246,   106,   234,
     234,   244,   102,   104,   246,   106,   116,   215,   153,   116,
     122,   203,   106,    13,   106,   106,   116,   199,   233,   106,
      10,   206,   216,   217,   218,   106,   195,   107,   204,   201,
     197,   195,   198,   180,   181,   203,   106,    77,   106,   219,
     217,   197,    77
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
     153,   154,   154,   155,   155,   156,   157,   157,   158,   158,
     159,   159,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   161,   162,   162,   163,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   165,   166,   167,   168,   169,   169,   170,   171,   171,
     172,   172,   173,   174,   174,   175,   176,   177,   178,   178,
     178,   179,   180,   181,   181,   182,   182,   183,   184,   185,
     186,   186,   187,   188,   188,   188,   189,   190,   191,   192,
     192,   193,   194,   194,   194,   195,   195,   196,   196,   196,
     196,   196,   197,   198,   199,   199,   200,   200,   201,   201,
     202,   203,   203,   204,   204,   205,   205,   205,   205,   206,
     207,   207,   207,   208,   209,   209,   209,   210,   210,   211,
     212,   213,   213,   214,   215,   215,   216,   216,   217,   217,
     218,   219,   219,   220,   221,   221,   222,   222,   223,   223,
     224,   224,   224,   225,   225,   225,   225,   226,   226,   227,
     227,   228,   228,   229,   230,   231,   232,   232,   232,   233,
     233,   234,   234,   234,   235,   235,   236,   236,   237,   237,
     238,   238,   238,   239,   240,   241,   241,   242,   242,   243,
     243,   244,   244,   245,   246,   246,   247,   247,   247
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
       3,     4,     1,     1,     1,     1,     1,     1,     2,     3,
       3,     1,     3,     1,     3,     2,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     2,     1,     3,
       1,     3,     4,     1,     1,     1,     1,     4,     1,     4,
       6,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     1,     1,
       1,     1,     3,     6,     4,     2,     1,     1,     6,     8,
       6,     4,     1,     2,     2,     1,     1,     3,     1,     1,
       4,     1,     2,     1,     3,     1,     2,     3,     3,     2,
       3,     6,     4,     3,     1,     2,     2,     1,     1,     3,
       4,     1,     6,     1,     2,     1,     1,     3,     1,     1,
       4,     1,     3,     3,     1,     1,     2,     1,     6,     4,
       1,     1,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     2,     4,     1,     1,     1,     3,     5,     3,
       2,     3,     3,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     3,     1,     2,     1,     2,     1,
       1,     1,     1,     2,     2,     1,     3,     1,     1
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     0,     5,     0,     0,     0,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,    41,     0,     0,     0,     0,     0,     0,
      43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    11,    47,     0,    49,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,    13,     0,     0,     0,
       0,     0,     0,    53,    15,     0,     0,    17,     0,    19,
       0,    21,     0,     0,     0,    23,    25,    27,    29,     0,
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
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
       0,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,     4,     0,   137,     0,   137,     0,   137,     0,   137,
       0,   137,     0,   137,     0,   137,     0,   137,     0,   137,
       0,   137,     0,   137,     0,   137,     0,   137,     0,   137,
       0,   137,     0,   137,     0,   193,     0,   162,     0,   131,
       0,     4,     0,     4,     0,   165,     0,     4,     0,   164,
       0,     4,     0,   194,     0
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
#line 1438 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 3:
#line 159 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        *tree = rb_ary_new();
    }
#line 1446 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 4:
#line 166 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = Qnil;
    }
#line 1454 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 14:
#line 211 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1462 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 15:
#line 216 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1471 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
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
#line 1485 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 19:
#line 243 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 1493 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 20:
#line 250 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1503 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 21:
#line 257 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1511 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 25:
#line 291 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 1519 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 27:
#line 300 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("EXPLICIT"));
    }
#line 1527 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 28:
#line 305 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("IMPLICIT"));
    }
#line 1535 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 29:
#line 310 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("AUTOMATIC"));
    }
#line 1543 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 30:
#line 315 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("EXPLICIT"));
    }
#line 1551 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 31:
#line 322 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = Qtrue;
    }
#line 1559 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 32:
#line 327 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = Qfalse;
    }
#line 1567 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 33:
#line 334 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
    }
#line 1575 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
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
#line 1587 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 38:
#line 360 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 1595 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 39:
#line 365 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("ALL"));
    }
#line 1603 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 41:
#line 374 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
    }
#line 1611 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 44:
#line 387 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 1619 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 46:
#line 396 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
    }
#line 1628 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 47:
#line 404 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1638 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 48:
#line 411 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1646 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
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
#line 1658 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 51:
#line 433 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1668 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 52:
#line 440 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1676 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 53:
#line 447 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("ref")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1687 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 56:
#line 465 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1695 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 57:
#line 470 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));    
    }
#line 1705 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 60:
#line 485 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("id")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));        
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 1715 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
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
#line 1729 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 68:
#line 521 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
    }
#line 1738 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 69:
#line 527 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 1746 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 70:
#line 532 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 1754 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 71:
#line 539 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1764 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 72:
#line 546 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1772 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 73:
#line 553 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1782 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 74:
#line 560 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_ary_push(crefs, ((*yyvalp)));
    }
#line 1791 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 75:
#line 568 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("id")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("value")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 1803 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 76:
#line 581 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("tags")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 1812 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 77:
#line 587 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("tags")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("constraints")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1822 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 97:
#line 646 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("CharacterStringType")));
    }
#line 1832 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 98:
#line 655 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BMPStringType")));
    }
#line 1842 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 99:
#line 662 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("GeneralStringType")));
    }
#line 1852 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 100:
#line 669 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("GraphicStringType")));
    }
#line 1862 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 101:
#line 676 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("IA5StringType")));
    }
#line 1872 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 102:
#line 683 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ISO646StringType")));
    }
#line 1882 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 103:
#line 690 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("NumericStringType")));
    }
#line 1892 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 104:
#line 697 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("PrintableStringType")));
    }
#line 1902 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 105:
#line 704 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("TeletexStringType")));
    }
#line 1912 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 106:
#line 711 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("T61StringType")));
    }
#line 1922 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 107:
#line 718 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UniversalStringType")));
    }
#line 1932 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 108:
#line 725 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UTF8StringType")));
    }
#line 1942 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 109:
#line 732 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("VideotexStringType")));
    }
#line 1952 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 110:
#line 739 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("VisibleStringType")));
    }
#line 1962 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 111:
#line 750 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("DefinedType")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("ref")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 1973 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 112:
#line 762 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ObjectIdentifierType")));
    }
#line 1983 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 113:
#line 774 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {    
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BooleanType")));
    }
#line 1993 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 114:
#line 783 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BooleanValue")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("value")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 2005 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 117:
#line 802 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("IntegerType")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("numberList")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2016 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 119:
#line 814 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 2024 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 120:
#line 821 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2034 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 121:
#line 828 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2042 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 122:
#line 835 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("id")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("number")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 2054 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 126:
#line 856 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("IntegerValue")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("value")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 2066 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 127:
#line 869 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("EnumeratedType")));        
    }
#line 2075 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 128:
#line 877 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2085 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 129:
#line 884 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); 
    }
#line 2097 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 130:
#line 893 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("additional")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2110 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 133:
#line 913 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2120 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 134:
#line 920 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2128 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 135:
#line 927 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("id")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 2139 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 137:
#line 939 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("EnumeratedValue")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("value")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 2151 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 138:
#line 953 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("RealType")));
    }
#line 2161 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 139:
#line 963 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("RealValue")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("value")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 2173 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 146:
#line 994 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BitStringType")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("bitList")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2184 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 147:
#line 1006 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("OctetStringType")));
    }
#line 2194 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 148:
#line 1015 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("OctetStringValue")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("value")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 2206 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 151:
#line 1034 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("NullType")));
    }
#line 2216 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 152:
#line 1046 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SequenceType")));  
    }
#line 2226 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 153:
#line 1053 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SequenceType")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval)); 
    }
#line 2238 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 154:
#line 1062 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SequenceType")));
    }
#line 2247 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 157:
#line 1076 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {    
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("head")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));                
    }
#line 2257 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 158:
#line 1083 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("head")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("head")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 2270 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 159:
#line 1093 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("head")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("head")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("tail")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2284 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 160:
#line 1104 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("head")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("tail")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2297 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 161:
#line 1114 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("head")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 2309 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 164:
#line 1133 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    }
#line 2317 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 166:
#line 1142 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2327 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 167:
#line 1149 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2335 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 170:
#line 1162 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("version")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("additional")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 2347 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 173:
#line 1179 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2357 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 174:
#line 1186 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2365 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 176:
#line 1195 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("OPTIONAL")), Qtrue);
    }
#line 2373 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 177:
#line 1200 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("DEFAULT")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2381 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 178:
#line 1205 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = Qnil;
    }
#line 2389 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 179:
#line 1212 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("id")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval)); 
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));        
    }
#line 2399 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 180:
#line 1223 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SetType"))); 
    }
#line 2409 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 181:
#line 1230 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        
    }
#line 2417 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 182:
#line 1235 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SetType")));        
    }
#line 2426 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 183:
#line 1245 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SequenceOfType")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("type")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("constraints")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
}
#line 2438 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 184:
#line 1255 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
    }
#line 2447 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 185:
#line 1261 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_push_ary(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 2457 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 186:
#line 1268 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_push_ary(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 2467 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 189:
#line 1285 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SetOfType")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("type")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("constraints")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 2479 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 190:
#line 1297 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ChoiceType")));
    }
#line 2488 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 191:
#line 1305 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2498 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 192:
#line 1312 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue); 
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("exception")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("additional")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));        
    }
#line 2511 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 194:
#line 1328 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    }
#line 2519 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 196:
#line 1337 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2529 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 197:
#line 1344 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2537 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 200:
#line 1357 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("version")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("additional")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 2549 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 201:
#line 1368 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2559 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 202:
#line 1375 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2567 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 203:
#line 1382 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("value")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("key")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
    }
#line 2579 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 205:
#line 1397 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
    }
#line 2588 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 206:
#line 1405 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2596 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 207:
#line 1410 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2606 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 208:
#line 1419 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("type")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2615 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 209:
#line 1425 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("type")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2624 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 210:
#line 1433 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("IMPLICIT"));
        rb_ary_push(crefs, ((*yyvalp)));
    }
#line 2633 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 211:
#line 1439 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("EXPLICIT"));
        rb_ary_push(crefs, ((*yyvalp)));
    }
#line 2642 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 213:
#line 1449 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("classNumber")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UNIVERSAL")));        
    }
#line 2653 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 214:
#line 1457 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("classNumber")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("APPLICATION")));        
    }
#line 2664 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 215:
#line 1465 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("classNumber")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("PRIVATE")));
    }
#line 2675 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 216:
#line 1473 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("classNumber")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2685 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 220:
#line 1493 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
    }
#line 2694 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 221:
#line 1501 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_ary_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));        
    }
#line 2704 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 222:
#line 1508 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        rb_ary_push(((*yyvalp)), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2712 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 223:
#line 1515 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("Constraint")));
    }
#line 2721 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 226:
#line 1531 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qfalse);
    }
#line 2732 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 227:
#line 1539 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), ID2SYM(rb_intern("top")), Qtrue);
    }
#line 2744 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 228:
#line 1548 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("root")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("additional")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));        
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval), ID2SYM(rb_intern("top")), Qtrue);
    }
#line 2757 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 229:
#line 1560 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
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
#line 2783 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 230:
#line 1583 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
        rb_ary_unshift(rb_hash_aref(((*yyvalp)), ID2SYM(rb_intern("set"))), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
    }
#line 2793 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 231:
#line 1592 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);

        rb_ary_unshift(rb_hash_aref(((*yyvalp)), ID2SYM(rb_intern("set"))), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));

        VALUE mark = rb_hash_new();
        rb_ary_push(crefs, mark);
        rb_hash_aset(mark, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UNION")));
        rb_hash_aset(mark, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));

        rb_ary_unshift(rb_hash_aref(((*yyvalp)), ID2SYM(rb_intern("set"))), mark);
    }
#line 2810 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 232:
#line 1606 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    
        rb_ary_unshift(rb_hash_aref(((*yyvalp)), ID2SYM(rb_intern("set"))), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
        
        VALUE mark = rb_hash_new();
        rb_ary_push(crefs, mark);
        rb_hash_aset(mark, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("INTERSECTION")));
        rb_hash_aset(mark, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));

        rb_ary_unshift(rb_hash_aref(((*yyvalp)), ID2SYM(rb_intern("set"))), mark);
    }
#line 2827 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 233:
#line 1620 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ElementSetSpec")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("set")), rb_ary_new());
    }
#line 2838 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 238:
#line 1642 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    }
#line 2846 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 243:
#line 1659 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SingleValue")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("value")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));        
    }
#line 2858 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 244:
#line 1670 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ValueRange")));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("lower")), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("upper")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2871 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 248:
#line 1690 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    }
#line 2879 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 250:
#line 1699 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("MIN"));
    }
#line 2887 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 252:
#line 1708 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = ID2SYM(rb_intern("MAX"));
    }
#line 2895 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;

  case 253:
#line 1715 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:816  */
    {
        ((*yyvalp)) = rb_hash_new();
        rb_ary_push(crefs, ((*yyvalp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SizeConstraint")));        
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("location")), newLocation(filename, crefs, &(*yylocp)));
        rb_hash_aset(((*yyvalp)), ID2SYM(rb_intern("constraint")), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
    }
#line 2907 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
    break;


#line 2911 "ext/retro_idl/ext_parser/parser.c" /* glr.c:816  */
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
  (!!((Yystate) == (-323)))

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



#line 1741 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:2584  */


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
