/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 6 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:339  */


/* includes ***********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ruby.h>
#include <assert.h>

#include "lexer.h"

/* local prototypes ***************************************************/

/**
 * - Ruby method to take a hash of attributes and return a tree of parsed data
 *
 * <code>
 *  attr = {
 *      :buffer => [a ruby string containing the file],
 *      :filename => [a ruby string containing the filename]
 *  }
 * </code>
 * 
 * @param[in] self reciever
 * @param[in] attr hash of attributes
 *
 * @return tree of parsed data
 *
 * */
static VALUE parseFileBuffer(VALUE self, VALUE attr);

/**
 * - Create a Ruby location record from YYLTYPE structure
 * - Returned structure is a Hash with keys for location values
 *
 * @param[in] filename filename corresponding to location record
 * @param[in] location pointer to Bison location record
 *
 * @return Ruby location instance
 *
 * */
static VALUE newLocation(VALUE filename, YYLTYPE *location);

/**
 * - Mandatory yyerror function called by Flex/Bison
 * - variadic like printf
 *
 * @param[in] locp pointer to Bison location record
 * @param[in] scanner pointer to scanner instance (this is a pure parser)
 * @param[in] filename filename corresponding to location record
 * @param[out] tree the return structure
 * @param[in] msg printf format string
 *
 * */
void yyerror(YYLTYPE *locp, yyscan_t scanner, VALUE filename, VALUE *tree, char const *msg, ... );

/* static variables ***************************************************/

static VALUE ASN;

/* generated **********************************************************/


#line 131 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:339  */

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

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_YY_EXT_RETRO_IDL_ASN_EXT_PARSER_PARSER_H_INCLUDED
# define YY_YY_EXT_RETRO_IDL_ASN_EXT_PARSER_PARSER_H_INCLUDED
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
    TOK_EXCEPT = 258,
    TOK_CARET = 259,
    TOK_INTERSECTION = 260,
    TOK_PIPE = 261,
    TOK_UNION = 262,
    TOK_ENDL = 263,
    TOK_LVERSION = 264,
    TOK_ASSIGN = 265,
    TOK_RANGE = 266,
    TOK_ELLIPSES = 267,
    TOK_EXCLAIM = 268,
    TOK_OCTET = 269,
    TOK_CHARACTER = 270,
    TOK_BIT = 271,
    TOK_STRING = 272,
    TOK_SIZE = 273,
    TOK_CHOICE = 274,
    TOK_SEQUENCE = 275,
    TOK_SET = 276,
    TOK_OF = 277,
    TOK_ALL = 278,
    TOK_MIN = 279,
    TOK_MAX = 280,
    TOK_COMPONENTS = 281,
    TOK_COMPONENT = 282,
    TOK_ABSENT = 283,
    TOK_CONTAINING = 284,
    TOK_FROM = 285,
    TOK_INCLUDES = 286,
    TOK_SETTINGS = 287,
    TOK_PRESENT = 288,
    TOK_PATTERN = 289,
    TOK_WITH = 290,
    TOK_OPTIONAL = 291,
    TOK_DEFAULT = 292,
    TOK_IMPLICIT = 293,
    TOK_EXPLICIT = 294,
    TOK_APPLICATION = 295,
    TOK_PRIVATE = 296,
    TOK_UNIVERSAL = 297,
    TOK_CHAR = 298,
    TOK_BOOLEAN = 299,
    TOK_INTEGER = 300,
    TOK_REAL = 301,
    TOK_ENUMERATED = 302,
    TOK_BMPString = 303,
    TOK_GeneralString = 304,
    TOK_GraphicString = 305,
    TOK_IA5String = 306,
    TOK_ISO646String = 307,
    TOK_NumericString = 308,
    TOK_PrintableString = 309,
    TOK_TeletexString = 310,
    TOK_T61String = 311,
    TOK_UniversalString = 312,
    TOK_UTF8String = 313,
    TOK_VideotexString = 314,
    TOK_VisibleString = 315,
    TOK_DATE = 316,
    TOK_DATE_TIME = 317,
    TOK_DURATION = 318,
    TOK_EMBEDDED = 319,
    TOK_PDV = 320,
    TOK_EXTERNAL = 321,
    TOK_RELATIVE_OID_IRI = 322,
    TOK_OBJECT = 323,
    TOK_IDENTIFIER = 324,
    TOK_RELATIVE_IRI = 325,
    TOK_RELATIVE_OID = 326,
    TOK_TIME = 327,
    TOK_TIME_OF_DAY = 328,
    TOK_POSINT = 329,
    TOK_NEGINT = 330,
    TOK_HEXINT = 331,
    TOK_ID = 332,
    TOK_RVERSION = 333,
    TOK_PLUS_INFINITY = 334,
    TOK_MINUS_INFINITY = 335,
    TOK_NOT_A_NUMBER = 336,
    TOK_TRUE = 337,
    TOK_FALSE = 338,
    TOK_NULL = 339,
    TOK_CONTAINS = 340,
    TOK_POSREAL = 341,
    TOK_NEGREAL = 342,
    TOK_HSTRING = 343,
    TOK_BSTRING = 344,
    TOK_CSTRING = 345,
    TOK_DEFINITIONS = 346,
    TOK_BEGIN = 347,
    TOK_END = 348,
    TOK_TAGS = 349,
    TOK_INSTRUCTIONS = 350,
    TOK_EXPORTS = 351,
    TOK_IMPORTS = 352,
    TOK_EXTENSIBILITY = 353,
    TOK_IMPLIED = 354,
    TOK_AUTOMATIC = 355,
    TOK_TYPEREF = 356
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef VALUE YYSTYPE;
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



int yyparse (yyscan_t scanner, VALUE filename, VALUE *tree);

#endif /* !YY_YY_EXT_RETRO_IDL_ASN_EXT_PARSER_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 297 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   475

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  114
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  170
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  267

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   356

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   113,     2,     2,     2,     2,     2,     2,
     105,   106,     2,     2,   104,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   107,     2,
     112,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   108,     2,   109,   110,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   102,   111,   103,     2,     2,     2,     2,
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
      95,    96,    97,    98,    99,   100,   101
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   188,   188,   188,   198,   210,   212,   216,   218,   218,
     220,   225,   231,   238,   240,   244,   255,   267,   274,   283,
     285,   287,   289,   291,   293,   295,   297,   299,   301,   303,
     307,   323,   325,   327,   329,   331,   333,   335,   337,   339,
     341,   343,   345,   351,   353,   357,   365,   371,   377,   383,
     389,   395,   401,   407,   413,   419,   425,   431,   437,   447,
     458,   468,   474,   483,   489,   496,   506,   508,   512,   514,
     520,   529,   535,   541,   550,   557,   565,   572,   578,   588,
     595,   606,   616,   626,   634,   639,   646,   654,   660,   667,
     675,   681,   689,   696,   704,   712,   714,   724,   726,   730,
     732,   739,   741,   745,   747,   752,   757,   764,   778,   786,
     791,   797,   805,   807,   814,   823,   829,   837,   845,   851,
     857,   865,   867,   876,   881,   890,   892,   896,   898,   904,
     912,   917,   924,   931,   938,   945,   953,   955,   964,   969,
     973,   981,   989,   997,  1006,  1016,  1023,  1025,  1029,  1031,
    1035,  1037,  1041,  1043,  1045,  1049,  1059,  1070,  1072,  1076,
    1078,  1085,  1087,  1094,  1096,  1103,  1116,  1118,  1122,  1124,
    1126
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EXCEPT", "CARET", "INTERSECTION",
  "PIPE", "UNION", "ENDL", "\"[[\"", "\"::=\"", "\"..\"", "\"...\"",
  "EXCLAIM", "OCTET", "CHARACTER", "BIT", "STRING", "SIZE", "CHOICE",
  "SEQUENCE", "SET", "OF", "ALL", "MIN", "MAX", "COMPONENTS", "COMPONENT",
  "ABSENT", "CONTAINING", "FROM", "INCLUDES", "SETTINGS", "PRESENT",
  "PATTERN", "WITH", "OPTIONAL", "DEFAULT", "IMPLICIT", "EXPLICIT",
  "APPLICATION", "PRIVATE", "UNIVERSAL", "CHAR", "BOOLEAN", "INTEGER",
  "REAL", "ENUMERATED", "BMPString", "GeneralString", "GraphicString",
  "IA5String", "ISO646String", "NumericString", "PrintableString",
  "TeletexString", "T61String", "UniversalString", "UTF8String",
  "VideotexString", "VisibleString", "DATE", "DATE_TIME", "DURATION",
  "EMBEDDED", "PDV", "EXTERNAL", "RELATIVE_OID_IRI", "OBJECT",
  "IDENTIFIER", "RELATIVE_IRI", "RELATIVE_OID", "TIME", "TIME_OF_DAY",
  "\"positive integer\"", "\"negative integer\"", "HEXINT",
  "\"identifier\"", "\"]]\"", "PLUS_INFINITY", "MINUS_INFINITY",
  "NOT_A_NUMBER", "TRUE", "FALSE", "NULL", "CONTAINS",
  "\"positive real number\"", "\"negative real number\"", "\"hstring\"",
  "\"bstring\"", "\"cstring\"", "DEFINITIONS", "BEGIN", "END", "TAGS",
  "INSTRUCTIONS", "EXPORTS", "IMPORTS", "EXTENSIBILITY", "IMPLIED",
  "AUTOMATIC", "\"typereference\"", "'{'", "'}'", "','", "'('", "')'",
  "':'", "'['", "']'", "'^'", "'|'", "'<'", "'!'", "$accept", "Top", "$@1",
  "empty", "identifier", "typereference", "valuereference", "number",
  "encodingreference", "AssignmentList", "Assignment", "TypeAssignment",
  "ValueAssignment", "Value", "BuiltinValue", "DefinedValue", "Type",
  "CharacterStringType", "UnrestrictedCharacterStringType",
  "RestrictedCharacterStringType", "DefinedType", "BooleanType",
  "IntegerType", "NamedNumberList", "NamedNumber", "NamedNumberNumber",
  "SignedNumber", "EnumeratedType", "NextEnumerationItem",
  "NextAddEnumerationItem", "EnumerationItem", "RealType", "BitStringType",
  "OctetStringType", "NullType", "SequenceType", "HeadComponentTypeList",
  "NextHeadComponentType", "AdditionalComponentTypeList",
  "NextAdditionalComponentType", "AdditionalComponentType",
  "ComponentTypeList", "TailComponentTypeList", "VersionNumber",
  "ComponentType", "NamedType", "SequenceOfType", "SequenceOfTypeVariant",
  "SequenceOfTypeTarget", "ChoiceType", "NextAltType", "NextAddAltType",
  "AddAltType", "VersionedAltType", "optTypePrefix", "TypePrefix", "Tag",
  "Class", "ClassNumber", "Constraint", "ConstraintSpec", "ElementSetSpec",
  "NextElements", "IntersectionMark", "UnionMark", "Elements",
  "SubTypeElements", "SingleValue", "ValueRange", "LowerEndpoint",
  "UpperEndpoint", "LowerEndValue", "UpperEndValue", "SizeConstraint",
  "ExceptionSpec", "ExceptionIdentification", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   123,   125,    44,    40,    41,    58,    91,    93,
      94,   124,    60,    33
};
# endif

#define YYPACT_NINF -163

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-163)))

#define YYTABLE_NINF -162

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -163,    41,   -53,  -163,  -163,  -163,  -163,    37,   316,   -53,
    -163,  -163,  -163,   -42,    62,    69,    77,     5,    13,  -163,
      15,  -163,    26,  -163,  -163,  -163,  -163,  -163,  -163,  -163,
    -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,    91,  -163,
    -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,
    -163,  -163,  -163,  -163,    14,  -163,   316,  -163,    -9,  -163,
    -163,    29,    74,    -2,  -163,     7,   303,  -163,   257,   136,
     145,    74,    74,    59,   -12,   -12,   -12,  -163,  -163,    72,
    -163,  -163,    80,  -163,    67,  -163,    -2,  -163,  -163,    74,
     -42,   -22,  -163,    64,   159,  -163,  -163,    -7,    75,   186,
    -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,
    -163,  -163,   303,     4,  -163,  -163,    90,  -163,     3,  -163,
    -163,  -163,   184,    85,  -163,  -163,  -163,  -163,  -163,  -163,
      94,    23,  -163,    94,  -163,    58,  -163,  -163,  -163,  -163,
      14,  -163,  -163,    60,   316,  -163,     1,  -163,   191,  -163,
      66,   316,  -163,    32,  -163,  -163,    59,   370,   102,  -163,
    -163,  -163,  -163,  -163,  -163,  -163,   370,   370,    73,  -163,
      -1,  -163,    74,  -163,     6,  -163,   100,  -163,    -2,    64,
     -22,  -163,  -163,  -163,    93,  -163,  -163,  -163,    16,  -163,
    -163,    64,    -7,  -163,  -163,  -163,     3,     3,  -163,   204,
    -163,  -163,  -163,  -163,   106,  -163,  -163,    64,    58,  -163,
    -163,    68,  -163,    59,   139,    70,  -163,    66,  -163,  -163,
    -163,  -163,  -163,    89,  -163,  -163,    31,  -163,  -163,   108,
    -163,   -10,  -163,    27,  -163,  -163,  -163,    74,  -163,   139,
     113,  -163,    68,  -163,   -33,  -163,   114,    70,    89,    74,
    -163,  -163,  -163,   -10,   -10,  -163,   116,  -163,  -163,  -163,
     -32,  -163,   117,  -163,  -163,    74,  -163
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     5,     6,     7,     0,     0,     3,
      12,    13,    14,     4,     0,     0,     0,     0,     0,    60,
      61,    78,     0,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    82,    59,     0,    33,
      44,    43,    42,    32,    36,    35,    39,    31,    38,    37,
      41,    40,    34,    11,     0,   125,     0,   126,   127,    81,
      45,    79,     0,     4,   109,     0,     0,   139,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     8,     9,     7,
      30,   136,     0,   137,     0,   135,     4,   128,   129,     0,
       4,     0,   165,     4,     0,    84,    83,     0,   103,     0,
     162,    22,    23,    24,    27,    28,    29,    19,    20,    21,
      25,    26,     0,   155,    17,    18,     0,   140,     4,   151,
     152,   153,     0,   157,   154,   112,   113,   108,   110,   111,
       0,     0,    63,    76,    77,     0,    16,   133,   134,   132,
       0,   131,    15,     0,     0,   115,     0,   114,     0,   167,
       0,     0,    87,     0,    86,   104,     0,     0,     0,   138,
     146,   148,   147,   149,   145,   142,     0,     0,     0,   158,
       0,    62,     0,    71,     0,    70,     0,    80,     4,     4,
       0,    68,    69,   169,     0,   170,   166,    90,     0,    85,
     106,     4,     0,   105,   141,   150,     4,     4,   164,     0,
     163,   156,   159,    66,     0,    67,    64,     4,     0,   130,
     107,     0,   117,     0,     4,     0,    95,     0,    89,   144,
     143,   160,    65,     0,    72,   118,     0,   116,   168,     0,
     101,     0,    92,     0,    91,    88,    74,     0,    73,     4,
       0,   121,     0,   102,     0,    97,     4,     0,     0,     0,
     119,   120,    96,     0,     0,    99,     0,    94,    75,   124,
       0,    98,   100,    93,   122,     0,   123
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -163,  -163,  -163,   -13,   -51,    50,    55,  -163,  -163,  -163,
     208,  -163,  -163,   -69,  -163,   -48,   -19,  -163,  -163,  -163,
    -163,  -163,  -163,   131,   -66,  -163,    52,  -163,    17,   -25,
    -162,  -163,  -163,  -163,  -163,  -163,  -163,    35,    11,   -23,
      -3,   -20,  -163,    -8,   -63,   -61,  -163,  -163,  -163,  -163,
      76,    10,  -163,  -163,   142,  -163,  -163,   115,    -6,   -54,
    -163,   141,   -77,  -163,  -163,  -106,  -163,  -163,  -163,  -163,
    -163,  -163,    61,   236,  -157,  -163
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    67,     6,    37,    80,    81,    82,     9,
      10,    11,    12,   113,   114,   115,    38,    39,    40,    41,
      42,    43,    44,   131,   134,   204,   185,    45,   175,   238,
     135,    46,    47,    48,    49,    50,    96,   154,   189,   234,
     215,   244,   256,   231,   216,    98,    51,    68,   127,    52,
     147,   227,   242,   260,    56,    57,    58,    84,    85,    69,
     116,   117,   165,   166,   167,   118,   119,   120,   121,   122,
     201,   123,   202,   124,   150,   186
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,    91,    97,    79,   136,   132,    83,   126,   160,    92,
     161,    90,   208,   179,    90,  -161,    94,    90,   207,    93,
     130,   133,   211,   132,     4,   214,    83,    83,    83,    87,
      88,    63,   142,    94,   217,    64,   214,    86,   130,   246,
     239,     3,    94,   240,   191,   252,   264,    13,     5,   125,
     223,   194,     7,    94,    74,    75,    76,     8,    94,     7,
     196,   197,    77,    78,     8,     4,    54,     4,   137,   138,
     139,   253,   265,   181,   182,   248,     4,    55,     4,    59,
     149,   145,   146,     4,     4,   180,    60,   193,    77,    78,
     192,     4,    83,     4,    61,    90,   152,   153,   198,   200,
     183,    73,    90,    66,     4,   164,   206,    62,     4,     4,
      95,   155,   156,   162,   163,    65,  -161,    71,    66,   219,
     220,   130,   203,   133,   210,   178,   171,   172,    72,   184,
     200,    89,   190,   101,   102,   103,     4,    90,   104,   105,
     106,   107,   108,   109,   228,   110,   111,   101,   102,   103,
       4,     4,   104,   105,   106,   107,   108,   109,   128,   110,
     111,   173,   174,   177,   172,   241,   149,   129,   245,   187,
     188,   225,   226,   232,   233,    90,   141,   148,   149,   -10,
      90,   151,    90,   164,   164,   199,   133,   140,   259,   157,
     261,   245,   236,   237,   149,   168,   159,   169,    90,   170,
     213,   230,    90,    90,   266,    14,    15,    16,   195,   209,
      17,    18,   222,   229,    90,   243,   250,    53,   254,   263,
     143,   253,   205,   258,   257,   224,   230,   218,   235,   198,
     247,   249,   144,   255,   262,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,   251,   158,    70,   176,   212,     0,     0,     0,
     221,     0,     0,     0,     0,   181,   182,     0,     4,     0,
       0,    14,    15,    16,     0,    36,    17,    18,   101,   102,
     103,     4,     0,   104,   105,   106,   107,   108,   109,     0,
     110,   111,     5,     0,     0,     0,     0,     0,     0,     0,
       0,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,     0,     0,
       0,    63,     0,     0,     0,     0,    99,   100,     0,     0,
      14,    15,    16,     0,     4,    17,    18,     0,     0,     0,
       0,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,   101,   102,   103,
       4,     0,   104,   105,   106,   107,   108,   109,    63,   110,
     111,     0,     0,     0,   100,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   101,   102,   103,     4,     0,   104,
     105,   106,   107,   108,   109,     0,   110,   111,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   112
};

static const yytype_int16 yycheck[] =
{
      13,    62,    65,    54,    73,    71,    54,    68,     5,    63,
       7,    62,   174,    12,    65,    11,    26,    68,    12,    12,
      71,    72,   179,    89,    77,     9,    74,    75,    76,    38,
      39,    18,    86,    26,   191,    22,     9,    56,    89,    12,
       9,     0,    26,    12,    12,    78,    78,    10,   101,    68,
     207,   157,     2,    26,    40,    41,    42,     2,    26,     9,
     166,   167,    74,    75,     9,    77,   108,    77,    74,    75,
      76,   104,   104,    74,    75,   237,    77,    90,    77,    17,
      93,   103,   104,    77,    77,   146,    17,   156,    74,    75,
     153,    77,   140,    77,    17,   146,   103,   104,    25,   168,
     148,    10,   153,   105,    77,   118,   172,   102,    77,    77,
     103,    36,    37,   110,   111,   102,   112,   102,   105,   196,
     197,   172,   170,   174,   178,   144,   103,   104,   102,   148,
     199,   102,   151,    74,    75,    76,    77,   188,    79,    80,
      81,    82,    83,    84,   213,    86,    87,    74,    75,    76,
      77,    77,    79,    80,    81,    82,    83,    84,    22,    86,
      87,   103,   104,   103,   104,   226,   179,    22,   231,   103,
     104,   103,   104,   103,   104,   226,   109,   113,   191,   107,
     231,    22,   233,   196,   197,   112,   237,   107,   249,     3,
     253,   254,   103,   104,   207,    11,   106,   112,   249,   105,
     107,   214,   253,   254,   265,    14,    15,    16,   106,   109,
      19,    20,   106,    74,   265,   107,   103,     9,   104,   103,
      89,   104,   170,   248,   247,   208,   239,   192,   217,    25,
     233,   239,    90,   246,   254,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,   242,   112,    18,   140,   180,    -1,    -1,    -1,
     199,    -1,    -1,    -1,    -1,    74,    75,    -1,    77,    -1,
      -1,    14,    15,    16,    -1,    84,    19,    20,    74,    75,
      76,    77,    -1,    79,    80,    81,    82,    83,    84,    -1,
      86,    87,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,
      14,    15,    16,    -1,    77,    19,    20,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    74,    75,    76,
      77,    -1,    79,    80,    81,    82,    83,    84,    18,    86,
      87,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,    79,
      80,    81,    82,    83,    84,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   115,   116,     0,    77,   101,   118,   119,   120,   123,
     124,   125,   126,    10,    14,    15,    16,    19,    20,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    84,   119,   130,   131,
     132,   133,   134,   135,   136,   141,   145,   146,   147,   148,
     149,   160,   163,   124,   108,   117,   168,   169,   170,    17,
      17,    17,   102,    18,    22,   102,   105,   117,   161,   173,
     187,   102,   102,    10,    40,    41,    42,    74,    75,   118,
     120,   121,   122,   129,   171,   172,   130,    38,    39,   102,
     118,   159,   173,    12,    26,   103,   150,   158,   159,    23,
      24,    74,    75,    76,    79,    80,    81,    82,    83,    84,
      86,    87,   105,   127,   128,   129,   174,   175,   179,   180,
     181,   182,   183,   185,   187,   130,   159,   162,    22,    22,
     118,   137,   138,   118,   138,   144,   127,   172,   172,   172,
     107,   109,   173,   137,   168,   103,   104,   164,   113,   117,
     188,    22,   103,   104,   151,    36,    37,     3,   175,   106,
       5,     7,   110,   111,   117,   176,   177,   178,    11,   112,
     105,   103,   104,   103,   104,   142,   171,   103,   130,    12,
     159,    74,    75,   129,   130,   140,   189,   103,   104,   152,
     130,    12,   158,   127,   179,   106,   179,   179,    25,   112,
     127,   184,   186,   129,   139,   140,   138,    12,   144,   109,
     173,   188,   164,   107,     9,   154,   158,   188,   151,   176,
     176,   186,   106,   188,   142,   103,   104,   165,   127,    74,
     117,   157,   103,   104,   153,   152,   103,   104,   143,     9,
      12,   159,   166,   107,   155,   158,    12,   154,   144,   157,
     103,   165,    78,   104,   104,   117,   156,   153,   143,   159,
     167,   158,   155,   103,    78,   104,   159
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   114,   116,   115,   117,   118,   119,   120,   121,   121,
     122,   123,   123,   124,   124,   125,   126,   127,   127,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     129,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   131,   131,   132,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   134,
     135,   136,   136,   137,   137,   138,   139,   139,   140,   140,
     141,   142,   142,   142,   143,   143,   144,   144,   145,   146,
     146,   147,   148,   149,   150,   150,   150,   151,   151,   151,
     152,   152,   153,   153,   153,   154,   154,   155,   155,   156,
     156,   157,   157,   158,   158,   158,   158,   159,   160,   161,
     161,   161,   162,   162,   163,   164,   164,   164,   165,   165,
     165,   166,   166,   167,   167,   168,   168,   169,   169,   169,
     170,   170,   171,   171,   171,   171,   172,   172,   173,   173,
     174,   175,   175,   176,   176,   176,   177,   177,   178,   178,
     179,   179,   180,   180,   180,   181,   182,   183,   183,   184,
     184,   185,   185,   186,   186,   187,   188,   188,   189,   189,
     189
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     5,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     4,     1,     1,     1,     1,
       4,     1,     3,     4,     1,     3,     1,     1,     1,     2,
       5,     2,     1,     3,     1,     3,     2,     1,     4,     3,
       1,     3,     1,     4,     3,     1,     4,     1,     3,     1,
       2,     1,     2,     1,     2,     3,     3,     4,     3,     1,
       2,     2,     1,     1,     4,     1,     4,     3,     1,     3,
       3,     1,     4,     3,     1,     1,     1,     1,     2,     2,
       5,     3,     2,     2,     2,     1,     1,     1,     3,     1,
       1,     3,     2,     3,     3,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     3,     1,     2,     1,
       2,     1,     1,     1,     1,     2,     2,     1,     3,     1,
       1
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
      yyerror (&yylloc, scanner, filename, tree, YY_("syntax error: cannot back up")); \
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
                  Type, Value, Location, scanner, filename, tree); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, VALUE filename, VALUE *tree)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (filename);
  YYUSE (tree);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, VALUE filename, VALUE *tree)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, scanner, filename, tree);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, yyscan_t scanner, VALUE filename, VALUE *tree)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , scanner, filename, tree);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, filename, tree); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, VALUE filename, VALUE *tree)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (filename);
  YYUSE (tree);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, VALUE filename, VALUE *tree)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

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
      yychar = yylex (&yylval, &yylloc, scanner);
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
#line 188 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        *tree = rb_ary_new();
    }
#line 1768 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 192 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        *tree = (yyvsp[0]);
    }
#line 1776 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 4:
#line 199 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = Qnil;
    }
#line 1784 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 226 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);
        rb_ary_push((yyval), (yyvsp[0]));    
    }
#line 1793 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 232 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_ary_new3(1, (yyvsp[0]));
    }
#line 1801 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 245 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("id")), (yyvsp[-4]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("tag")), (yyvsp[-2]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
        rb_hash_aset((yyval), ID2SYM(rb_intern("constraint")), (yyvsp[0]));
    }
#line 1813 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 256 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("id")), (yyvsp[-3]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("governor")), (yyvsp[-2]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
    }
#line 1824 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 268 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();        
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BuiltinValue")));      
        rb_hash_aset((yyval), ID2SYM(rb_intern("value")), (yyvsp[0]));      
    }
#line 1834 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 275 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();        
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("DefinedValue")));
        rb_hash_aset((yyval), ID2SYM(rb_intern("ref")), (yyvsp[0]));      
    }
#line 1844 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 358 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("CharacterString")));
    }
#line 1853 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 366 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BMPString")));
    }
#line 1862 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 372 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("GeneralString")));
    }
#line 1871 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 378 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("GraphicString")));
    }
#line 1880 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 384 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("IA5String")));
    }
#line 1889 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 390 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ISO646String")));
    }
#line 1898 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 396 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("NumericString")));
    }
#line 1907 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 402 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("PrintableString")));
    }
#line 1916 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 408 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("TeletexString")));
    }
#line 1925 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 414 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("T61String")));
    }
#line 1934 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 420 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UniversalString")));
    }
#line 1943 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 426 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UTF8String")));
    }
#line 1952 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 432 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("VideotexString")));
    }
#line 1961 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 438 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("VisibleString")));
    }
#line 1970 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 448 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("DefinedType")));
        rb_hash_aset((yyval), ID2SYM(rb_intern("ref")), (yyvsp[0]));
    }
#line 1980 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 459 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BOOLEAN")));
    }
#line 1989 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 469 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("INTEGER")));        
    }
#line 1998 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 475 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("INTEGER")));
        rb_hash_aset((yyval), ID2SYM(rb_intern("numberList")), (yyvsp[-1]));
    }
#line 2008 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 484 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_ary_new();
        rb_ary_push((yyval), (yyvsp[0]));
    }
#line 2017 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 490 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        rb_ary_push((yyval), (yyvsp[0]));
    }
#line 2025 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 497 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("id")), (yyvsp[-3]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("number")), (yyvsp[-1]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
    }
#line 2036 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 521 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ENUMERATED")));        
        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("root"))), (yyvsp[-1]));        
    }
#line 2046 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 530 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("root")), rb_ary_new());
    }
#line 2055 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 536 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("root"))), (yyvsp[-1]));
    }
#line 2064 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 542 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset((yyval), ID2SYM(rb_intern("exceptionSpec")), (yyvsp[-1]));        
    }
#line 2074 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 551 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("additional")), rb_ary_new());
        rb_hash_aset((yyval), ID2SYM(rb_intern("root")), rb_ary_new());
    }
#line 2084 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 558 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("additional"))), (yyvsp[-1]));
    }
#line 2093 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 566 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("id")), (yyvsp[0]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
    }
#line 2103 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 579 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("REAL")));
    }
#line 2112 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 589 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BITSTRING")));
        rb_hash_aset((yyval), ID2SYM(rb_intern("bitList")), rb_ary_new());
    }
#line 2122 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 596 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BITSTRING")));
        rb_hash_aset((yyval), ID2SYM(rb_intern("bitList")), (yyvsp[-1]));
    }
#line 2132 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 607 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("OCTETSTRING")));
    }
#line 2141 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 617 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("NULL")));
    }
#line 2150 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 627 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SEQUENCE")));
    }
#line 2159 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 635 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
    }
#line 2167 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 640 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("extensible")), Qtrue);        
        rb_hash_aset((yyval), ID2SYM(rb_intern("exceptionSpec")), (yyvsp[-1]));
    }
#line 2177 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 647 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("head"))), (yyvsp[-1]));
    }
#line 2186 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 655 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("head")), rb_ary_new());
    }
#line 2195 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 661 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("extensible")), Qtrue);        
        rb_hash_aset((yyval), ID2SYM(rb_intern("exceptionSpec")), (yyvsp[-1]));
    }
#line 2205 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 668 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("head"))), (yyvsp[-1]));
    }
#line 2214 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 676 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("head")), rb_ary_new());
    }
#line 2223 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 682 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("additional"))), (yyvsp[-1])); 
    }
#line 2232 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 690 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("additional")), rb_ary_new());
        rb_hash_aset((yyval), ID2SYM(rb_intern("head")), rb_ary_new());
    }
#line 2242 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 697 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("additional")), rb_ary_new());
        rb_hash_aset((yyval), ID2SYM(rb_intern("tail")), (yyvsp[-1]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("extensible")), Qtrue);
    }
#line 2253 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 705 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("additional"))), (yyvsp[-1]));         
    }
#line 2262 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 715 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("version")), (yyvsp[-2]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("additional")), (yyvsp[-1]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
    }
#line 2273 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 733 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2281 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 104:
#line 748 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        rb_hash_aset((yyval), ID2SYM(rb_intern("OPTIONAL")), Qtrue);
    }
#line 2289 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 753 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        rb_hash_aset((yyval), ID2SYM(rb_intern("DEFAULT")), (yyvsp[0]));
    }
#line 2297 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 106:
#line 758 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = Qnil;
    }
#line 2305 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 765 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("id")), (yyvsp[-3])); 
        rb_hash_aset((yyval), ID2SYM(rb_intern("tag")), (yyvsp[-2]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
        rb_hash_aset((yyval), ID2SYM(rb_intern("constraint")), (yyvsp[0]));
    }
#line 2317 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 779 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SEQUENCEOF")));
        rb_hash_aset((yyval), ID2SYM(rb_intern("type")), (yyvsp[0]));
    }
#line 2327 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 787 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
    }
#line 2335 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 792 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("constraint")), (yyvsp[-1]));
    }
#line 2344 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 111:
#line 798 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("constraint")), (yyvsp[-1]));
    }
#line 2353 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 815 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("CHOICE")));
        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("root"))), (yyvsp[-1]));        
    }
#line 2363 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 824 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("root")), rb_ary_new());
    }
#line 2372 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 830 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset((yyval), ID2SYM(rb_intern("exceptionSpec")), (yyvsp[-1]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("root")), rb_ary_new());
    }
#line 2383 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 838 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("root"))), (yyvsp[-1]));
    }
#line 2392 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 846 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("additional")), rb_ary_new());
    }
#line 2401 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 852 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("additional")), rb_ary_new());
    }
#line 2410 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 858 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("additional"))), (yyvsp[-1]));
    }
#line 2419 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 868 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("version")), (yyvsp[-2]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("additional")), (yyvsp[-1]));
    }
#line 2429 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 123:
#line 877 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        rb_ary_push((yyval), (yyvsp[0]));
    }
#line 2437 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 882 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_ary_new3(1, (yyvsp[0]));        
    }
#line 2445 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 899 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {   
        (yyval) = (yyvsp[-1]);
        rb_hash_aset((yyvsp[-1]), ID2SYM(rb_intern("type")), ID2SYM(rb_intern("Implicit")));        
    }
#line 2454 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 905 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {   
        (yyval) = (yyvsp[-1]);
        rb_hash_aset((yyvsp[-1]), ID2SYM(rb_intern("type")), ID2SYM(rb_intern("Explicit")));        
    }
#line 2463 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 913 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);            
    }
#line 2471 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 918 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);
    }
#line 2479 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 925 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("classNumber")), (yyvsp[0]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("Universal")));        
    }
#line 2489 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 932 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("classNumber")), (yyvsp[0]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("Application")));        
    }
#line 2499 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 939 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("classNumber")), (yyvsp[0]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("Private")));
    }
#line 2509 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 946 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("classNumber")), (yyvsp[0]));
    }
#line 2518 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 965 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {        
        (yyval) = (yyvsp[-1]);        
    }
#line 2526 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 974 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("rootElementSetSpec")), (yyvsp[0]));
    }
#line 2535 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 982 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_ary_new();
        rb_ary_push((yyval), ID2SYM(rb_intern("ALL")));
        rb_ary_push((yyval), ID2SYM(rb_intern("EXCEPT")));
        rb_ary_push((yyval), (yyvsp[0]));    
    }
#line 2546 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 990 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_ary_unshift((yyval), (yyvsp[-1]));
    }
#line 2555 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 998 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        rb_ary_unshift((yyvsp[0]), (yyvsp[-1]));
        VALUE mark = rb_hash_new();
        rb_hash_aset(mark, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UNION")));
        rb_hash_aset(mark, ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
        rb_ary_unshift((yyval), mark);
    }
#line 2567 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1007 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        rb_ary_unshift((yyvsp[0]), (yyvsp[-1]));
        VALUE mark = rb_hash_new();
        rb_hash_aset(mark, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("INTERSECTION")));
        rb_hash_aset(mark, ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
        rb_hash_aset((yyval), ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
        rb_ary_unshift((yyval), mark);
    }
#line 2580 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1017 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_ary_new();
    }
#line 2588 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1050 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SingleValue")));
        rb_hash_aset((yyval), ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
        rb_hash_aset((yyval), ID2SYM(rb_intern("value")), (yyvsp[0]));        
    }
#line 2599 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1060 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ValueRange")));
        rb_hash_aset((yyval), ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
        rb_hash_aset((yyval), ID2SYM(rb_intern("lower")), (yyvsp[-2]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("upper")), (yyvsp[0]));
    }
#line 2611 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1079 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2619 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1088 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = ID2SYM(rb_intern("MIN"));
    }
#line 2627 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1097 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = ID2SYM(rb_intern("MAX"));
    }
#line 2635 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1104 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SizeConstraint")));        
        rb_hash_aset((yyval), ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
        rb_hash_aset((yyval), ID2SYM(rb_intern("constraint")), (yyvsp[0]));
    }
#line 2646 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;


#line 2650 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
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
      yyerror (&yylloc, scanner, filename, tree, YY_("syntax error"));
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
        yyerror (&yylloc, scanner, filename, tree, yymsgp);
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
                      yytoken, &yylval, &yylloc, scanner, filename, tree);
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
                  yystos[yystate], yyvsp, yylsp, scanner, filename, tree);
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
  yyerror (&yylloc, scanner, filename, tree, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, scanner, filename, tree);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, scanner, filename, tree);
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
#line 1129 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1906  */




/* public functions ***************************************************/

void Init_ext_parser(void)
{
    ASN = rb_define_module_under(rb_define_module("RetroIDL"), "ASN");    
    rb_define_module_function(ASN, "parseFileBuffer", parseFileBuffer, 1);
}

void yyerror(YYLTYPE *locp, yyscan_t scanner, VALUE filename, VALUE *tree, char const *msg, ... )
{
    int retval;
    VALUE rbString;
    char error[500];

    int hdrLen;
    
    hdrLen = snprintf(error, sizeof(error), "%s:%i:%i: error: ", (const char *)RSTRING_PTR(filename), locp->first_line, locp->first_column);

    if((hdrLen > 0) && (hdrLen <= sizeof(error))){

        va_list argptr;
        va_start(argptr, msg);
        retval = vsnprintf(&error[hdrLen], sizeof(error) - hdrLen, msg, argptr);
        va_end(argptr);

        if((retval > 0) && ((hdrLen + retval) <= sizeof(error))){

            rbString = rb_str_new((const char *)error, (hdrLen + retval));
            rb_io_puts(1, &rbString, rb_stderr);            
        }
        else{

            rb_bug("yyerror buffer is too short to contain error message");
        }
    }
    else{

        rb_bug("yyerror buffer is too short to contain error message");
    }
}

/* static functions ***************************************************/

static VALUE parseFileBuffer(VALUE self, VALUE attr)
{
    yyscan_t scanner;    

    VALUE tree = Qnil;

    VALUE buffer = rb_hash_aref(attr, ID2SYM(rb_intern("buffer")));
    VALUE filename = rb_hash_aref(attr, ID2SYM(rb_intern("fileName")));

    if(yylex_init(&scanner) == 0){

        if(yy_scan_bytes((const char *)RSTRING_PTR(buffer), RSTRING_LEN(buffer), scanner)){

            yyparse(scanner, filename, &tree);
        }

        yylex_destroy(scanner);
    }

    return tree;
}

static VALUE newLocation(VALUE filename, YYLTYPE *location)
{
    return rb_funcall(rb_const_get(ASN, rb_intern("Location")), rb_intern("new"), 5,
        filename,
        INT2NUM(location->first_line),
        INT2NUM(location->last_line),
        INT2NUM(location->first_column),
        INT2NUM(location->last_column)
    );    
}
