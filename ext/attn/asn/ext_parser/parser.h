/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_EXT_ATTN_ASN_EXT_PARSER_PARSER_H_INCLUDED
# define YY_YY_EXT_ATTN_ASN_EXT_PARSER_PARSER_H_INCLUDED
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

#endif /* !YY_YY_EXT_ATTN_ASN_EXT_PARSER_PARSER_H_INCLUDED  */
