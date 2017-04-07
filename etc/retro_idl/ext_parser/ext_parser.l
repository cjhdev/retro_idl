/* Flex Configuration */
%{

#include <ruby.h>
#include "parser.h"

#define YY_USER_ACTION do{\
    yylloc->first_line = yylloc->last_line;\
    yylloc->first_column = yylloc->last_column;\
    yylloc->last_column += yyleng;\
}while(0);    

%}

%option nounput noinput noyywrap
%option reentrant
%option bison-locations
%option fast

%x BLOCK_COMMENT

UNICODE         \\u[0-9a-fA-F]{4}
UNESCAPED       [ !#-\[\]-~]
ESCAPED         \\["\\bfnrt/]
CHAR            {UNESCAPED}|{ESCAPED}|{UNICODE}

EXP             [e|E][+|-]?[0-9]+
FRACTION        [.][0-9]+
INTEGER         [-]?[0-9]+

%%

"/*"                { BEGIN(BLOCK_COMMENT); }
<BLOCK_COMMENT>"*/" { BEGIN(INITIAL); }
<BLOCK_COMMENT>.    { }

"--"[^\n]*          { }

[ \t\r]+            { }

[\n]+               { yylloc->last_column = 0; yylloc->last_line += yyleng; }

"["                 |
"]"                 |
"("                 |
")"                 |
"{"                 |
"}"                 |
","                 |
"|"                 |
"^"                 |
"!"                 |
"<"                 |
">"                 |
":"                 |
";"                 |
"\""                |
"-"                 |
"/"                 { return *yytext; }

"[["                { return TOK_LVERSION; }
"]]"                { return TOK_RVERSION; }
"::="               { return TOK_ASSIGN; }
".."                { return TOK_RANGE; }
"..."               { return TOK_ELLIPSES; }

"DEFINITIONS"       { return TOK_DEFINITIONS; }
"BEGIN"             { return TOK_BEGIN; }
"END"               { return TOK_END; }
"SET"               { return TOK_SET; }
"NULL"              { return TOK_NULL; }
"BOOLEAN"           { return TOK_BOOLEAN; }
"INTEGER"           { return TOK_INTEGER; }
"ENUMERATED"        { return TOK_ENUMERATED; }
"REAL"              { return TOK_REAL; }
"OCTET"             { return TOK_OCTET; }
"CHARACTER"         { return TOK_CHARACTER; }
"BIT"               { return TOK_BIT; }
"STRING"            { return TOK_STRING; }
"SIZE"              { return TOK_SIZE; }
"CHOICE"            { return TOK_CHOICE; }
"SEQUENCE"          { return TOK_SEQUENCE; }
"OF"                { return TOK_OF; }
"EXCEPT"            { return TOK_EXCEPT; }
"INTERSECTION"      { return TOK_INTERSECTION; }
"UNION"             { return TOK_UNION; }
"ALL"               { return TOK_ALL; }
"MIN"               { return TOK_MIN; }
"MAX"               { return TOK_MAX; }
"TRUE"              { return TOK_TRUE; }
"FALSE"             { return TOK_FALSE; }
"OPTIONAL"          { return TOK_OPTIONAL; }
"DEFAULT"           { return TOK_DEFAULT; }
"IMPLICIT"          { return TOK_IMPLICIT; }
"EXPLICIT"          { return TOK_EXPLICIT; }
"APPLICATION"       { return TOK_APPLICATION; }
"PRIVATE"           { return TOK_PRIVATE; }
"UNIVERSAL"         { return TOK_UNIVERSAL; }

"DATE"              { return TOK_DATE; }
"DATE-TIME"         { return TOK_DATE_TIME; }
"DURATION"          { return TOK_DURATION; }
"EMBEDDED"          { return TOK_EMBEDDED; }
"PDV"               { return TOK_PDV; }
"EXTERNAL"          { return TOK_EXTERNAL; }
"RELATIVE-OID-IRI"  { return TOK_RELATIVE_OID_IRI; }
"OBJECT"            { return TOK_OBJECT; }
"IDENTIFIER"        { return TOK_IDENTIFIER; }
"RELATIVE-IRI"      { return TOK_RELATIVE_IRI; }
"RELATIVE-OID"      { return TOK_RELATIVE_OID; }
"TIME"              { return TOK_TIME; }
"TIME-OF-DAY"       { return TOK_TIME_OF_DAY; }

"PLUS-INFINITY"     { *yylval = rb_float_new(INFINITY); rb_ary_push(crefs, *yylval); return TOK_PLUS_INFINITY; }
"MINUS-INFINITY"    { *yylval = rb_float_new(-INFINITY); rb_ary_push(crefs, *yylval); return TOK_MINUS_INFINITY; }
"NOT-A-NUMBER"      { *yylval = rb_float_new(NAN); rb_ary_push(crefs, *yylval); return TOK_NOT_A_NUMBER; }

"BMPString"         { return TOK_BMPString; }
"GeneralString"     { return TOK_GeneralString; }
"GraphicString"     { return TOK_GraphicString; }
"IA5String"         { return TOK_IA5String; }
"ISO646String"      { return TOK_ISO646String; }
"NumericString"     { return TOK_NumericString; }
"PrintableString"   { return TOK_PrintableString; }
"TeletexString"     { return TOK_TeletexString; }
"T61String"         { return TOK_T61String; }
"UniversalString"   { return TOK_UniversalString; }
"UTF8String"        { return TOK_UTF8String; }
"VideotexString"    { return TOK_VideotexString; }
"VisibleString"     { return TOK_VisibleString; }
    
"CONTAINS"          { return TOK_CONTAINS; }
"INCLUDES"          { return TOK_INCLUDES; }
"FROM"              { return TOK_FROM; }
"COMPONENT"         { return TOK_COMPONENT; }
"COMPONENTS"        { return TOK_COMPONENTS; }
"PRESENT"           { return TOK_PRESENT; }
"ABSENT"            { return TOK_ABSENT; }
"PATTERN"           { return TOK_PATTERN; }
"SETTINGS"          { return TOK_SETTINGS; }
"TAGS"              { return TOK_TAGS; }
"INSTRUCTIONS"      { return TOK_INSTRUCTIONS; }
"EXPORTS"           { return TOK_EXPORTS; }
"IMPORTS"           { return TOK_IMPORTS; }
"EXTENSIBILITY"     { return TOK_EXTENSIBILITY; }
"IMPLIED"           { return TOK_IMPLIED; }
"AUTOMATIC"         { return TOK_AUTOMATIC; }

[0][x][0-9a-fA-F]+          { *yylval = rb_funcall(rb_str_new(yytext, yyleng), rb_intern("to_i"), 1, UINT2NUM(16U)); rb_ary_push(crefs, *yylval); return TOK_HEXNUMBER; }

{INTEGER}{FRACTION}{EXP}    |
{INTEGER}{FRACTION}         |
{INTEGER}{EXP}              { *yylval = rb_funcall(rb_const_get(rb_cObject, rb_intern("BigDecimal")), rb_intern("new"), 1, rb_str_new(yytext, yyleng)); rb_ary_push(crefs, *yylval); return TOK_REALNUMBER; }

{INTEGER}                   { *yylval = rb_funcall(rb_str_new(yytext, yyleng), rb_intern("to_i"), 0); rb_ary_push(crefs, *yylval); return TOK_NUMBER; }

[a-z][a-zA-Z0-9_\-]*    { *yylval = rb_str_new(yytext, yyleng); rb_ary_push(crefs, *yylval); return TOK_ID; }
[A-Z][a-zA-Z0-9_\-]*    { *yylval = rb_str_new(yytext, yyleng); rb_ary_push(crefs, *yylval); return TOK_TYPEREF; }
['][a-fA-F0-9]*['][H]   { *yylval = rb_str_new(yytext, yyleng); rb_ary_push(crefs, *yylval); return TOK_HSTRING; }
['][0-1]*['][B]         { *yylval = rb_str_new(yytext, yyleng); rb_ary_push(crefs, *yylval); return TOK_BSTRING; }
L?H\"(\\.|[^\\"])*\"    { *yylval = rb_str_new(yytext, yyleng); rb_ary_push(crefs, *yylval); return TOK_CSTRING; }

.                       { return TOK_UNKNOWN; }

%%
