/* Flex Configuration */
%{

/* includes ***********************************************************/

#include <float.h>
#include <ruby.h>
#include "parser.h"

/* static prototypes **************************************************/

/**
 * - Inserted into lexer as part of the YY_USER_ACTION macro
 * - 
 * 
 * @param[in] loc pointer to Bison location record
 * @param[in] text
 * @param[in] textLen length of text in bytes
 *
 * */
static void updateLocation(YYLTYPE *loc, const char *text, int textLen);

/* macros *************************************************************/

#define YY_USER_ACTION updateLocation(yylloc, yytext, yyleng);

/* generated **********************************************************/

%}

%top{

    #include "ext_common.h"

}

%option nounput
%option noinput
%option bison-bridge bison-locations
%option reentrant
%option noyywrap

%x BLOCK_COMMENT

%%

"/*"                { BEGIN(BLOCK_COMMENT); }
<BLOCK_COMMENT>"*/" { BEGIN(INITIAL); }
<BLOCK_COMMENT>.    { }

"--"[^\r\n]*        { /* skip comments */ }

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
"/"                 { return *yytext; }

"[["                { return TOK_LVERSION; }
"]]"                { *yylval = Qnil; return TOK_RVERSION; }
"::="               { return TOK_ASSIGN; }
".."                { return TOK_RANGE; }
"..."               { return TOK_ELLIPSES; }


"DEFINITIONS"       { return TOK_DEFINITIONS; }
"BEGIN"             { return TOK_BEGIN; }
"END"               { return TOK_END; }
"SET"               { return TOK_SET; }
"NULL"              { *yylval = Qnil; return TOK_NULL; }
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
"TRUE"              { *yylval = Qtrue; return TOK_TRUE; }
"FALSE"             { *yylval = Qfalse; return TOK_FALSE; }
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

"PLUS-INFINITY"     { *yylval = rb_float_new(INFINITY); return TOK_PLUS_INFINITY; }
"MINUS-INFINITY"    { *yylval = rb_float_new(-INFINITY); return TOK_MINUS_INFINITY; }
"NOT-A-NUMBER"      { *yylval = rb_float_new(NAN); return TOK_NOT_A_NUMBER; }

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

[ \t\n\r]           ;

[0-9]+              { unsigned int tmp = 0; sscanf(yytext, "%u", &tmp); *yylval = UINT2NUM(tmp); return TOK_POSINT; }
[-][1-9][0-9]*      { int tmp = 0; sscanf(yytext, "%i", &tmp); *yylval = INT2NUM(tmp); return TOK_NEGINT; }
[0][x][0-9a-fA-F]+  { unsigned int tmp = 0; sscanf(yytext, "%x", &tmp); *yylval = UINT2NUM(tmp); return TOK_HEXINT; }
[0-9]+\.[0-9]+          { float tmp = 0; sscanf(yytext, "%f", &tmp); *yylval = rb_float_new(tmp); return TOK_POSREAL; }
[-][1-9][0-9]*\.[0-9]+  { float tmp = 0; sscanf(yytext, "%f", &tmp); *yylval = rb_float_new(tmp); return TOK_NEGREAL; }

[a-z][a-zA-Z0-9_\-]*    { *yylval = rb_str_new(yytext, yyleng); return TOK_ID; }

[A-Z][a-zA-Z0-9_\-]*    { *yylval = rb_str_new(yytext, yyleng); return TOK_TYPEREF; }

['][a-fA-F0-9]*['][H]   { *yylval = rb_str_new(yytext, yyleng); return TOK_HSTRING; }
['][0-1]*['][B]         { *yylval = rb_str_new(yytext, yyleng); return TOK_BSTRING; }

L?H\"(\\.|[^\\"])*\"    { *yylval = rb_str_new(yytext, yyleng); return TOK_CSTRING; }

.                   ;

%%

/* static functions ***************************************************/

static void updateLocation(YYLTYPE *loc, const char *text, int textLen)
{
    int i;

    loc->first_line = loc->last_line;
    loc->first_column = loc->last_column;

    for(i=0; i < textLen; i++){

        if(text[i] == '\n'){
        
            loc->last_line++;
            loc->last_column = 0;
        }
        else{
        
            loc->last_column++;
        }
    }
}
