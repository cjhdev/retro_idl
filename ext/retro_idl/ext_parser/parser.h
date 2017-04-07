/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Skeleton interface for Bison GLR parsers in C

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

#ifndef YY_YY_EXT_RETRO_IDL_EXT_PARSER_PARSER_H_INCLUDED
# define YY_YY_EXT_RETRO_IDL_EXT_PARSER_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 7 "etc/retro_idl/ext_parser/ext_parser.y" /* glr.c:197  */


#define YY_DECL int yylex(YYSTYPE * yylval_param, YYLTYPE * yylloc_param, yyscan_t yyscanner, VALUE crefs)


#line 50 "ext/retro_idl/ext_parser/parser.h" /* glr.c:197  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_EOF = 0,
    TOK_EXCEPT = 258,
    TOK_CARET = 259,
    TOK_INTERSECTION = 260,
    TOK_PIPE = 261,
    TOK_UNION = 262,
    TOK_UNKNOWN = 263,
    TOK_ENDL = 264,
    TOK_LVERSION = 265,
    TOK_ASSIGN = 266,
    TOK_RANGE = 267,
    TOK_ELLIPSES = 268,
    TOK_EXCLAIM = 269,
    TOK_OCTET = 270,
    TOK_CHARACTER = 271,
    TOK_BIT = 272,
    TOK_STRING = 273,
    TOK_SIZE = 274,
    TOK_CHOICE = 275,
    TOK_SEQUENCE = 276,
    TOK_SET = 277,
    TOK_OF = 278,
    TOK_ALL = 279,
    TOK_MIN = 280,
    TOK_MAX = 281,
    TOK_COMPONENTS = 282,
    TOK_COMPONENT = 283,
    TOK_ABSENT = 284,
    TOK_CONTAINING = 285,
    TOK_FROM = 286,
    TOK_INCLUDES = 287,
    TOK_SETTINGS = 288,
    TOK_PRESENT = 289,
    TOK_PATTERN = 290,
    TOK_WITH = 291,
    TOK_OPTIONAL = 292,
    TOK_DEFAULT = 293,
    TOK_IMPLICIT = 294,
    TOK_EXPLICIT = 295,
    TOK_APPLICATION = 296,
    TOK_PRIVATE = 297,
    TOK_UNIVERSAL = 298,
    TOK_CHAR = 299,
    TOK_BOOLEAN = 300,
    TOK_INTEGER = 301,
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
    TOK_NUMBER = 329,
    TOK_HEXNUMBER = 330,
    TOK_ID = 331,
    TOK_RVERSION = 332,
    TOK_PLUS_INFINITY = 333,
    TOK_MINUS_INFINITY = 334,
    TOK_NOT_A_NUMBER = 335,
    TOK_TRUE = 336,
    TOK_FALSE = 337,
    TOK_NULL = 338,
    TOK_CONTAINS = 339,
    TOK_REALNUMBER = 340,
    TOK_HSTRING = 341,
    TOK_BSTRING = 342,
    TOK_CSTRING = 343,
    TOK_DEFINITIONS = 344,
    TOK_BEGIN = 345,
    TOK_END = 346,
    TOK_TAGS = 347,
    TOK_INSTRUCTIONS = 348,
    TOK_EXPORTS = 349,
    TOK_IMPORTS = 350,
    TOK_EXTENSIBILITY = 351,
    TOK_IMPLIED = 352,
    TOK_AUTOMATIC = 353,
    TOK_TYPEREF = 354,
    TOK_REAL = 355
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



int yyparse (yyscan_t scanner, VALUE filename, VALUE crefs, VALUE *tree);

#endif /* !YY_YY_EXT_RETRO_IDL_EXT_PARSER_PARSER_H_INCLUDED  */
