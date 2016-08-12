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
#define YYLAST   419

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  114
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  173
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  270

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
     341,   343,   345,   347,   351,   363,   365,   369,   377,   383,
     389,   395,   401,   407,   413,   419,   425,   431,   437,   443,
     449,   459,   470,   480,   486,   495,   501,   508,   518,   520,
     524,   526,   532,   541,   547,   553,   562,   569,   577,   584,
     590,   600,   606,   617,   627,   637,   645,   650,   657,   665,
     671,   678,   686,   692,   700,   707,   715,   723,   725,   735,
     737,   741,   743,   750,   752,   756,   758,   763,   768,   775,
     789,   797,   802,   808,   816,   818,   825,   834,   840,   848,
     856,   862,   868,   876,   878,   887,   892,   901,   903,   907,
     909,   915,   923,   928,   935,   942,   949,   956,   964,   966,
     973,   980,   986,   995,  1009,  1029,  1038,  1052,  1065,  1074,
    1076,  1080,  1082,  1086,  1091,  1095,  1097,  1099,  1103,  1113,
    1124,  1126,  1130,  1132,  1139,  1141,  1148,  1150,  1157,  1170,
    1172,  1176,  1178,  1180
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
  "ConstrainedType", "CharacterStringType",
  "UnrestrictedCharacterStringType", "RestrictedCharacterStringType",
  "DefinedType", "BooleanType", "IntegerType", "NamedNumberList",
  "NamedNumber", "NamedNumberNumber", "SignedNumber", "EnumeratedType",
  "NextEnumerationItem", "NextAddEnumerationItem", "EnumerationItem",
  "RealType", "BitStringType", "OctetStringType", "NullType",
  "SequenceType", "HeadComponentTypeList", "NextHeadComponentType",
  "AdditionalComponentTypeList", "NextAdditionalComponentType",
  "AdditionalComponentType", "ComponentTypeList", "TailComponentTypeList",
  "VersionNumber", "ComponentType", "NamedType", "SequenceOfType",
  "SequenceOfTypeVariant", "SequenceOfTypeTarget", "ChoiceType",
  "NextAltType", "NextAddAltType", "AddAltType", "VersionedAltType",
  "optTypePrefix", "TypePrefix", "Tag", "Class", "ClassNumber",
  "Constraint", "ConstraintSpec", "ElementSetSpec", "NextElements",
  "IntersectionMark", "UnionMark", "Elements", "SubTypeElements",
  "SingleValue", "ValueRange", "LowerEndpoint", "UpperEndpoint",
  "LowerEndValue", "UpperEndValue", "SizeConstraint", "ExceptionSpec",
  "ExceptionIdentification", YY_NULLPTR
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

#define YYPACT_NINF -154

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-154)))

#define YYTABLE_NINF -165

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -154,    25,   -36,  -154,  -154,  -154,  -154,    67,   318,   -36,
    -154,  -154,  -154,   -70,    49,    72,    77,     6,     2,  -154,
      19,  -154,    27,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,    -2,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,    22,  -154,   318,  -154,    14,
    -154,  -154,    39,    47,    11,  -154,    10,    68,   259,   131,
     134,    47,    47,   265,  -154,    -4,    -4,    -4,  -154,  -154,
      64,  -154,  -154,    65,  -154,    69,  -154,    11,  -154,  -154,
      47,   -70,   -24,  -154,    52,   152,  -154,  -154,   -21,    95,
     173,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,    68,     0,  -154,  -154,    71,    75,     7,
    -154,  -154,  -154,   170,    76,  -154,    11,  -154,  -154,  -154,
    -154,    78,    31,  -154,    78,  -154,    34,  -154,  -154,  -154,
    -154,    22,  -154,    36,   318,  -154,     4,  -154,   193,  -154,
      54,   318,  -154,    21,  -154,  -154,   265,   305,    83,  -154,
     172,  -154,  -154,  -154,  -154,  -154,  -154,   305,   305,   144,
    -154,    53,  -154,    47,  -154,    28,  -154,    82,  -154,    11,
      52,   -24,  -154,  -154,  -154,   -47,  -154,  -154,  -154,     8,
    -154,    11,    52,   -21,  -154,  -154,  -154,    88,     7,     7,
    -154,   209,  -154,  -154,  -154,  -154,    89,  -154,  -154,    52,
      34,  -154,    56,  -154,   265,   122,    58,  -154,    54,  -154,
      68,  -154,  -154,  -154,  -154,    60,  -154,  -154,    37,  -154,
    -154,    90,  -154,    -5,  -154,    33,  -154,  -154,  -154,  -154,
      47,  -154,   122,    97,  -154,    56,  -154,   -50,  -154,    94,
      58,    60,    47,  -154,  -154,  -154,    -5,    -5,  -154,    98,
    -154,  -154,  -154,   -43,  -154,   101,  -154,  -154,    47,  -154
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     5,     6,     7,     0,     0,     3,
      12,    13,    14,     4,     0,     0,     0,     0,     0,    62,
      63,    80,     0,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    84,    61,     0,    43,
      33,    46,    45,    42,    32,    36,    35,    39,    31,    38,
      37,    41,    40,    34,    11,     0,   127,     0,   128,   129,
      83,    47,    81,     0,     0,   111,     0,     0,     0,     0,
       0,     0,     0,     0,    44,     0,     0,     0,     8,     9,
       7,    30,   138,     0,   139,     0,   137,    15,   130,   131,
       0,     4,     0,   168,     4,     0,    86,    85,     0,   105,
       0,   165,    22,    23,    24,    27,    28,    29,    19,    20,
      21,    25,    26,     0,   158,    17,    18,     0,   141,     4,
     154,   155,   156,     0,   160,   157,   114,   115,   110,   112,
     113,     0,     0,    65,    78,    79,     0,    16,   135,   136,
     134,     0,   133,     0,     0,   117,     0,   116,     0,   170,
       0,     0,    89,     0,    88,   106,     0,     0,     0,   140,
       0,   149,   151,   150,   152,   148,   145,     0,     0,     0,
     161,     0,    64,     0,    73,     0,    72,     0,    82,   109,
       4,     0,    70,    71,   172,     0,   173,   169,    92,     0,
      87,   108,     4,     0,   107,   144,   153,   142,     4,     4,
     167,     0,   166,   159,   162,    68,     0,    69,    66,     4,
       0,   132,     0,   119,     0,     4,     0,    97,     0,    91,
       0,   147,   146,   163,    67,     0,    74,   120,     0,   118,
     171,     0,   103,     0,    94,     0,    93,    90,   143,    76,
       0,    75,     4,     0,   123,     0,   104,     0,    99,     4,
       0,     0,     0,   121,   122,    98,     0,     0,   101,     0,
      96,    77,   126,     0,   100,   102,    95,   124,     0,   125
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -154,  -154,  -154,   -13,   -53,    42,    46,  -154,  -154,  -154,
     201,  -154,  -154,   -68,  -154,   -46,   -25,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,   121,   -64,  -154,    43,  -154,    12,
     -35,  -125,  -154,  -154,  -154,  -154,  -154,  -154,    24,    15,
     -18,    20,   -22,  -154,    16,   -63,   -62,  -154,  -154,  -154,
    -154,    73,    17,  -154,  -154,   166,  -154,  -154,   118,    -1,
       5,  -154,  -109,   -31,  -154,  -154,  -100,  -154,  -154,  -154,
    -154,  -154,  -154,    59,   243,  -153,  -154
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   149,     6,    37,    81,    82,    83,     9,
      10,    11,    12,   114,   115,   116,    38,    39,    40,    41,
      42,    43,    44,    45,   132,   135,   206,   186,    46,   176,
     241,   136,    47,    48,    49,    50,    51,    97,   154,   190,
     236,   216,   247,   259,   233,   217,    99,    52,    68,   128,
      53,   147,   229,   245,   263,    57,    58,    59,    85,    86,
      74,   117,   118,   166,   167,   168,   119,   120,   121,   122,
     123,   203,   124,   204,   125,   150,   187
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      56,    92,    80,    98,   158,   137,   127,   133,    73,    84,
      91,  -164,   161,    91,   162,    91,   180,   215,   131,   134,
      64,    95,    94,    69,    65,     3,   133,   212,   255,    84,
      84,    84,    87,   192,    95,   267,    95,   131,    55,   218,
     209,     4,   215,   126,     7,   249,   242,    95,     8,   243,
     210,     7,    88,    89,   256,     8,   225,   195,    67,    95,
     214,   268,    75,    76,    77,     5,    60,   198,   199,    93,
      78,    79,     4,     4,   138,   139,   140,    13,    56,   145,
     146,     4,   152,   153,   181,     4,    64,     4,   194,    61,
     193,   100,   101,    91,    62,    84,    78,    79,     4,     4,
      91,   202,   184,    67,    66,     4,   165,    67,    63,   208,
       4,   238,  -164,    96,     4,   251,    67,   163,   164,   179,
     131,    71,   134,   185,     4,   205,   191,   182,   183,    72,
       4,   155,   156,   202,   172,   173,    91,   174,   175,   178,
     173,    90,   102,   103,   104,     4,   230,   105,   106,   107,
     108,   109,   110,   129,   111,   112,   130,   188,   189,   227,
     228,   234,   235,   239,   240,   148,   244,   221,   222,   200,
     248,   -10,   141,   113,   151,    91,   157,   159,   142,   160,
      91,   169,    91,   171,   197,   165,   165,   134,   170,   196,
     262,   211,   220,   264,   248,   224,   231,   246,   257,    91,
     253,   266,   232,    91,    91,   256,   269,    14,    15,    16,
      54,   143,    17,    18,   207,    91,   261,   219,   102,   103,
     104,     4,   226,   105,   106,   107,   108,   109,   110,   232,
     111,   112,   260,   237,   200,   265,   258,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,   213,   250,   201,   144,   252,   177,
     223,    70,   254,     0,     0,     0,     0,   182,   183,     0,
       4,     0,     0,    14,    15,    16,     0,    36,    17,    18,
       0,     0,     0,   102,   103,   104,     4,     0,   105,   106,
     107,   108,   109,   110,     5,   111,   112,     0,     0,     0,
       0,     0,     0,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
       0,     0,     0,    64,     0,     0,     0,     0,     0,   101,
       0,     0,    14,    15,    16,     0,     4,    17,    18,   102,
     103,   104,     4,    36,   105,   106,   107,   108,   109,   110,
       0,   111,   112,     0,     0,     0,     0,     0,     0,     0,
       5,     0,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,   102,
     103,   104,     4,     0,   105,   106,   107,   108,   109,   110,
       0,   111,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     5
};

static const yytype_int16 yycheck[] =
{
      13,    63,    55,    66,   113,    73,    68,    71,    10,    55,
      63,    11,     5,    66,     7,    68,    12,     9,    71,    72,
      18,    26,    12,    18,    22,     0,    90,   180,    78,    75,
      76,    77,    57,    12,    26,    78,    26,    90,   108,   192,
      12,    77,     9,    68,     2,    12,     9,    26,     2,    12,
     175,     9,    38,    39,   104,     9,   209,   157,   105,    26,
     107,   104,    40,    41,    42,   101,    17,   167,   168,    64,
      74,    75,    77,    77,    75,    76,    77,    10,    91,   103,
     104,    77,   103,   104,   146,    77,    18,    77,   156,    17,
     153,    23,    24,   146,    17,   141,    74,    75,    77,    77,
     153,   169,   148,   105,   102,    77,   119,   105,   102,   173,
      77,   220,   112,   103,    77,   240,   105,   110,   111,   144,
     173,   102,   175,   148,    77,   171,   151,    74,    75,   102,
      77,    36,    37,   201,   103,   104,   189,   103,   104,   103,
     104,   102,    74,    75,    76,    77,   214,    79,    80,    81,
      82,    83,    84,    22,    86,    87,    22,   103,   104,   103,
     104,   103,   104,   103,   104,   113,   228,   198,   199,    25,
     233,   107,   107,   105,    22,   228,     3,   106,   109,   104,
     233,    11,   235,   105,    12,   198,   199,   240,   112,   106,
     252,   109,   104,   256,   257,   106,    74,   107,   104,   252,
     103,   103,   215,   256,   257,   104,   268,    14,    15,    16,
       9,    90,    19,    20,   171,   268,   251,   193,    74,    75,
      76,    77,   210,    79,    80,    81,    82,    83,    84,   242,
      86,    87,   250,   218,    25,   257,   249,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,   181,   235,   112,    91,   242,   141,
     201,    18,   245,    -1,    -1,    -1,    -1,    74,    75,    -1,
      77,    -1,    -1,    14,    15,    16,    -1,    84,    19,    20,
      -1,    -1,    -1,    74,    75,    76,    77,    -1,    79,    80,
      81,    82,    83,    84,   101,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    14,    15,    16,    -1,    77,    19,    20,    74,
      75,    76,    77,    84,    79,    80,    81,    82,    83,    84,
      -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    74,
      75,    76,    77,    -1,    79,    80,    81,    82,    83,    84,
      -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   115,   116,     0,    77,   101,   118,   119,   120,   123,
     124,   125,   126,    10,    14,    15,    16,    19,    20,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    84,   119,   130,   131,
     132,   133,   134,   135,   136,   137,   142,   146,   147,   148,
     149,   150,   161,   164,   124,   108,   117,   169,   170,   171,
      17,    17,    17,   102,    18,    22,   102,   105,   162,   174,
     188,   102,   102,    10,   174,    40,    41,    42,    74,    75,
     118,   120,   121,   122,   129,   172,   173,   130,    38,    39,
     102,   118,   160,   174,    12,    26,   103,   151,   159,   160,
      23,    24,    74,    75,    76,    79,    80,    81,    82,    83,
      84,    86,    87,   105,   127,   128,   129,   175,   176,   180,
     181,   182,   183,   184,   186,   188,   130,   160,   163,    22,
      22,   118,   138,   139,   118,   139,   145,   127,   173,   173,
     173,   107,   109,   138,   169,   103,   104,   165,   113,   117,
     189,    22,   103,   104,   152,    36,    37,     3,   176,   106,
     104,     5,     7,   110,   111,   117,   177,   178,   179,    11,
     112,   105,   103,   104,   103,   104,   143,   172,   103,   130,
      12,   160,    74,    75,   129,   130,   141,   190,   103,   104,
     153,   130,    12,   159,   127,   180,   106,    12,   180,   180,
      25,   112,   127,   185,   187,   129,   140,   141,   139,    12,
     145,   109,   189,   165,   107,     9,   155,   159,   189,   152,
     104,   177,   177,   187,   106,   189,   143,   103,   104,   166,
     127,    74,   117,   158,   103,   104,   154,   153,   176,   103,
     104,   144,     9,    12,   160,   167,   107,   156,   159,    12,
     155,   145,   158,   103,   166,    78,   104,   104,   117,   157,
     154,   144,   160,   168,   159,   156,   103,    78,   104,   160
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   114,   116,   115,   117,   118,   119,   120,   121,   121,
     122,   123,   123,   124,   124,   125,   126,   127,   127,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     129,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   131,   132,   132,   133,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   135,   136,   137,   137,   138,   138,   139,   140,   140,
     141,   141,   142,   143,   143,   143,   144,   144,   145,   145,
     146,   147,   147,   148,   149,   150,   151,   151,   151,   152,
     152,   152,   153,   153,   154,   154,   154,   155,   155,   156,
     156,   157,   157,   158,   158,   159,   159,   159,   159,   160,
     161,   162,   162,   162,   163,   163,   164,   165,   165,   165,
     166,   166,   166,   167,   167,   168,   168,   169,   169,   170,
     170,   170,   171,   171,   172,   172,   172,   172,   173,   173,
     174,   175,   175,   175,   176,   176,   177,   177,   177,   178,
     178,   179,   179,   180,   180,   181,   181,   181,   182,   183,
     184,   184,   185,   185,   186,   186,   187,   187,   188,   189,
     189,   190,   190,   190
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     4,     1,     1,
       1,     1,     4,     1,     3,     4,     1,     3,     1,     1,
       1,     2,     5,     2,     1,     3,     1,     3,     2,     1,
       4,     3,     1,     3,     1,     4,     3,     1,     4,     1,
       3,     1,     2,     1,     2,     1,     2,     3,     3,     3,
       3,     1,     2,     2,     1,     1,     4,     1,     4,     3,
       1,     3,     3,     1,     4,     3,     1,     1,     1,     1,
       2,     2,     5,     3,     2,     2,     2,     1,     1,     1,
       3,     1,     3,     5,     3,     2,     3,     3,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     3,
       1,     2,     1,     2,     1,     1,     1,     1,     2,     2,
       1,     3,     1,     1
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
#line 1757 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 192 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        *tree = (yyvsp[0]);
    }
#line 1765 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 4:
#line 199 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = Qnil;
    }
#line 1773 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 226 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);
        rb_ary_push((yyval), (yyvsp[0]));    
    }
#line 1782 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 232 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_ary_new3(1, (yyvsp[0]));
    }
#line 1790 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 245 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("id")), (yyvsp[-3]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("tag")), (yyvsp[-1]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
        
    }
#line 1802 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 256 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("id")), (yyvsp[-3]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("governor")), (yyvsp[-2]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
    }
#line 1813 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 268 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();        
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BuiltinValue")));      
        rb_hash_aset((yyval), ID2SYM(rb_intern("value")), (yyvsp[0]));      
    }
#line 1823 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 275 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();        
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("DefinedValue")));
        rb_hash_aset((yyval), ID2SYM(rb_intern("value")), (yyvsp[0]));      
    }
#line 1833 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 352 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        if(rb_hash_aref((yyval), ID2SYM(rb_intern("constraints"))) == Qnil){
            rb_hash_aset((yyval), ID2SYM(rb_intern("constraints")), rb_ary_new());
        }
        rb_ary_push(rb_hash_aref((yyval), ID2SYM(rb_intern("constraints"))), (yyvsp[0]));
    }
#line 1844 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 370 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("CharacterString")));
    }
#line 1853 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 378 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BMPString")));
    }
#line 1862 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 384 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("GeneralString")));
    }
#line 1871 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 390 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("GraphicString")));
    }
#line 1880 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 396 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("IA5String")));
    }
#line 1889 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 402 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ISO646String")));
    }
#line 1898 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 408 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("NumericString")));
    }
#line 1907 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 414 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("PrintableString")));
    }
#line 1916 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 420 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("TeletexString")));
    }
#line 1925 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 426 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("T61String")));
    }
#line 1934 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 432 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UniversalString")));
    }
#line 1943 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 438 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UTF8String")));
    }
#line 1952 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 444 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("VideotexString")));
    }
#line 1961 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 450 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("VisibleString")));
    }
#line 1970 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 460 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("DefinedType")));
        rb_hash_aset((yyval), ID2SYM(rb_intern("ref")), (yyvsp[0]));
    }
#line 1980 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 471 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BOOLEAN")));
    }
#line 1989 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 481 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("INTEGER")));        
    }
#line 1998 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 487 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("INTEGER")));
        rb_hash_aset((yyval), ID2SYM(rb_intern("numberList")), (yyvsp[-1]));
    }
#line 2008 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 496 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_ary_new();
        rb_ary_push((yyval), (yyvsp[0]));
    }
#line 2017 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 502 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        rb_ary_push((yyval), (yyvsp[0]));
    }
#line 2025 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 509 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("id")), (yyvsp[-3]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("number")), (yyvsp[-1]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
    }
#line 2036 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 533 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ENUMERATED")));        
        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("root"))), (yyvsp[-1]));        
    }
#line 2046 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 542 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("root")), rb_ary_new());
    }
#line 2055 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 548 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("root"))), (yyvsp[-1]));
    }
#line 2064 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 554 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset((yyval), ID2SYM(rb_intern("exceptionSpec")), (yyvsp[-1]));        
    }
#line 2074 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 563 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("additional")), rb_ary_new());
        rb_hash_aset((yyval), ID2SYM(rb_intern("root")), rb_ary_new());
    }
#line 2084 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 570 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("additional"))), (yyvsp[-1]));
    }
#line 2093 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 578 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("id")), (yyvsp[0]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
    }
#line 2103 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 591 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("REAL")));
    }
#line 2112 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 601 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BITSTRING")));        
    }
#line 2121 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 607 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BITSTRING")));
        rb_hash_aset((yyval), ID2SYM(rb_intern("bitList")), (yyvsp[-1]));
    }
#line 2131 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 618 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("OCTETSTRING")));
    }
#line 2140 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 628 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("NULL")));
    }
#line 2149 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 638 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SEQUENCE")));
    }
#line 2158 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 646 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
    }
#line 2166 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 651 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("extensible")), Qtrue);        
        rb_hash_aset((yyval), ID2SYM(rb_intern("exceptionSpec")), (yyvsp[-1]));
    }
#line 2176 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 658 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("head"))), (yyvsp[-1]));
    }
#line 2185 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 666 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("head")), rb_ary_new());
    }
#line 2194 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 672 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("extensible")), Qtrue);        
        rb_hash_aset((yyval), ID2SYM(rb_intern("exceptionSpec")), (yyvsp[-1]));
    }
#line 2204 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 679 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("head"))), (yyvsp[-1]));
    }
#line 2213 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 687 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("head")), rb_ary_new());
    }
#line 2222 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 693 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("additional"))), (yyvsp[-1])); 
    }
#line 2231 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 701 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("additional")), rb_ary_new());
        rb_hash_aset((yyval), ID2SYM(rb_intern("head")), rb_ary_new());
    }
#line 2241 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 708 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("additional")), rb_ary_new());
        rb_hash_aset((yyval), ID2SYM(rb_intern("tail")), (yyvsp[-1]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("extensible")), Qtrue);
    }
#line 2252 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 716 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("additional"))), (yyvsp[-1]));         
    }
#line 2261 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 726 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("version")), (yyvsp[-2]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("additional")), (yyvsp[-1]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
    }
#line 2272 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 102:
#line 744 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2280 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 106:
#line 759 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        rb_hash_aset((yyval), ID2SYM(rb_intern("OPTIONAL")), Qtrue);
    }
#line 2288 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 764 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        rb_hash_aset((yyval), ID2SYM(rb_intern("DEFAULT")), (yyvsp[0]));
    }
#line 2296 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 769 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = Qnil;
    }
#line 2304 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 776 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("id")), (yyvsp[-2])); 
        rb_hash_aset((yyval), ID2SYM(rb_intern("tag")), (yyvsp[-1]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
        
    }
#line 2316 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 790 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SEQUENCEOF")));
        rb_hash_aset((yyval), ID2SYM(rb_intern("type")), (yyvsp[0]));
    }
#line 2326 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 111:
#line 798 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
    }
#line 2334 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 112:
#line 803 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("constraint")), (yyvsp[-1]));
    }
#line 2343 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 113:
#line 809 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("constraint")), (yyvsp[-1]));
    }
#line 2352 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 826 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("CHOICE")));
        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("root"))), (yyvsp[-1]));        
    }
#line 2362 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 835 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("root")), rb_ary_new());
    }
#line 2371 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 841 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset((yyval), ID2SYM(rb_intern("exceptionSpec")), (yyvsp[-1]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("root")), rb_ary_new());
    }
#line 2382 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 849 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("root"))), (yyvsp[-1]));
    }
#line 2391 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 857 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("additional")), rb_ary_new());
    }
#line 2400 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 863 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("additional")), rb_ary_new());
    }
#line 2409 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 869 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("additional"))), (yyvsp[-1]));
    }
#line 2418 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 879 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("version")), (yyvsp[-2]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("additional")), (yyvsp[-1]));
    }
#line 2428 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 888 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        rb_ary_push((yyval), (yyvsp[0]));
    }
#line 2436 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 893 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_ary_new3(1, (yyvsp[0]));        
    }
#line 2444 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 910 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {   
        (yyval) = (yyvsp[-1]);
        rb_hash_aset((yyvsp[-1]), ID2SYM(rb_intern("type")), ID2SYM(rb_intern("EXPLICIT")));        
    }
#line 2453 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 916 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {   
        (yyval) = (yyvsp[-1]);
        rb_hash_aset((yyvsp[-1]), ID2SYM(rb_intern("type")), ID2SYM(rb_intern("EXPLICIT")));        
    }
#line 2462 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 924 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);            
    }
#line 2470 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 929 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);
    }
#line 2478 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 936 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("classNumber")), (yyvsp[0]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UNIVERSAL")));        
    }
#line 2488 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 943 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("classNumber")), (yyvsp[0]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("APPLICATION")));        
    }
#line 2498 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 950 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("classNumber")), (yyvsp[0]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("PRIVATE")));
    }
#line 2508 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 957 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("classNumber")), (yyvsp[0]));
    }
#line 2517 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 974 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {        
        (yyval) = (yyvsp[-1]);        
    }
#line 2525 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 981 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("root")), (yyvsp[0]));
    }
#line 2534 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 987 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("root")), (yyvsp[-2]));        
        rb_hash_aset((yyval), ID2SYM(rb_intern("extensible")), Qtrue);

        rb_hash_aset((yyvsp[-2]), ID2SYM(rb_intern("top")), Qtrue);
    }
#line 2546 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 996 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("root")), (yyvsp[-4]));
        
        rb_hash_aset((yyval), ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset((yyval), ID2SYM(rb_intern("additional")), (yyvsp[0]));

        rb_hash_aset((yyvsp[-4]), ID2SYM(rb_intern("top")), Qtrue);
        rb_hash_aset((yyvsp[0]), ID2SYM(rb_intern("additional")), Qtrue);
    }
#line 2561 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1010 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ElementSetSpec")));
        rb_hash_aset((yyval), ID2SYM(rb_intern("set")), rb_ary_new());
        rb_hash_aset((yyval), ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
        
        VALUE all = rb_hash_new();
        rb_hash_aset(all, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ALL")));
        rb_hash_aset(all, ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
        rb_ary_push(rb_hash_aref((yyval), ID2SYM(rb_intern("set"))), all);

        VALUE except = rb_hash_new();
        rb_hash_aset(except, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("EXCEPT")));
        rb_hash_aset(except, ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
        rb_ary_push(rb_hash_aref((yyval), ID2SYM(rb_intern("set"))), except);

        rb_ary_push(rb_hash_aref((yyval), ID2SYM(rb_intern("set"))), (yyvsp[0]));
    }
#line 2584 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1030 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
        rb_hash_aset((yyval), ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("set"))), (yyvsp[-1]));
    }
#line 2594 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1039 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);

        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("set"))), (yyvsp[-1]));

        VALUE mark = rb_hash_new();
        rb_hash_aset(mark, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UNION")));
        rb_hash_aset(mark, ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));

        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("set"))), mark);

    }
#line 2611 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1053 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    
        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("set"))), (yyvsp[-1]));
        
        VALUE mark = rb_hash_new();
        rb_hash_aset(mark, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("INTERSECTION")));
        rb_hash_aset(mark, ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));

        rb_ary_unshift(rb_hash_aref((yyval), ID2SYM(rb_intern("set"))), mark);
    }
#line 2627 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1066 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ElementSetSpec")));
        rb_hash_aset((yyval), ID2SYM(rb_intern("set")), rb_ary_new());
    }
#line 2637 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1087 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);
    }
#line 2645 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1104 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SingleValue")));
        rb_hash_aset((yyval), ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
        rb_hash_aset((yyval), ID2SYM(rb_intern("value")), (yyvsp[0]));        
    }
#line 2656 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1114 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ValueRange")));
        rb_hash_aset((yyval), ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
        rb_hash_aset((yyval), ID2SYM(rb_intern("lower")), (yyvsp[-2]));
        rb_hash_aset((yyval), ID2SYM(rb_intern("upper")), (yyvsp[0]));
    }
#line 2668 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1133 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2676 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1142 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = ID2SYM(rb_intern("MIN"));
    }
#line 2684 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1151 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = ID2SYM(rb_intern("MAX"));
    }
#line 2692 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1158 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1646  */
    {
        (yyval) = rb_hash_new();
        rb_hash_aset((yyval), ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SizeConstraint")));        
        rb_hash_aset((yyval), ID2SYM(rb_intern("location")), newLocation(filename, &(yyloc)));
        rb_hash_aset((yyval), ID2SYM(rb_intern("constraint")), (yyvsp[0]));
    }
#line 2703 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
    break;


#line 2707 "ext/retro_idl/asn/ext_parser/parser.c" /* yacc.c:1646  */
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
#line 1183 "ext/retro_idl/asn/ext_parser/ext_parser.y" /* yacc.c:1906  */




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
