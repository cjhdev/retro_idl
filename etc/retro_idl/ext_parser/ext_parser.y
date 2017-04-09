/* Bison Configuration
 *
 * Cameron Harper 2016
 * 
 * */

%code requires {

#define YYDEBUG 1
#define YY_DECL int yylex(YYSTYPE * yylval_param, YYLTYPE * yylloc_param, yyscan_t yyscanner, VALUE crefs)

}

%{

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

%}

%define api.value.type {VALUE}
%define api.pure
%locations
%lex-param {yyscan_t scanner}{VALUE crefs}
%parse-param {yyscan_t scanner}{VALUE filename}{VALUE crefs}{VALUE *tree}
%define parse.error verbose
%glr-parser

%nonassoc   EXCEPT
%left       CARET INTERSECTION
%left       PIPE UNION

%define api.token.prefix {TOK_}

%token
    EOF 0
    UNKNOWN
    ENDL
    LVERSION "[["       
    ASSIGN "::="
    RANGE ".."
    ELLIPSES "..."
    EXCEPT
    UNION
    INTERSECTION
    EXCLAIM
    OCTET
    CHARACTER
    BIT
    STRING
    SIZE
    CHOICE
    SEQUENCE
    SET
    OF
    ALL
    MIN
    MAX
    COMPONENTS
    COMPONENT
    ABSENT
    CONTAINING
    FROM
    INCLUDES
    SETTINGS
    PRESENT
    PATTERN
    WITH
    OPTIONAL
    DEFAULT
    IMPLICIT
    EXPLICIT
    APPLICATION
    PRIVATE
    UNIVERSAL
    CHAR    
    BOOLEAN
    INTEGER
    ENUMERATED
    BMPString
    GeneralString
    GraphicString
    IA5String
    ISO646String
    NumericString
    PrintableString
    TeletexString
    T61String
    UniversalString
    UTF8String
    VideotexString
    VisibleString
    DATE
    DATE_TIME
    DURATION
    EMBEDDED
    PDV
    EXTERNAL
    RELATIVE_OID_IRI
    OBJECT
    IDENTIFIER
    RELATIVE_IRI
    RELATIVE_OID
    TIME
    TIME_OF_DAY
    NUMBER "number"
    HEXNUMBER "hexadecimal"
    ID "identifier"
    RVERSION "]]"
    PLUS_INFINITY
    MINUS_INFINITY
    NOT_A_NUMBER
    TRUE
    FALSE
    NULL
    CONTAINS
    REALNUMBER "realnumber"
    HSTRING "hstring"
    BSTRING "bstring"
    CSTRING "cstring"
    DEFINITIONS
    BEGIN
    END
    TAGS
    INSTRUCTIONS
    EXPORTS
    IMPORTS
    EXTENSIBILITY
    IMPLIED
    AUTOMATIC
    TYPEREF "typereference"
    REAL

%%

Top:
    ModuleList
    {
        *tree = $ModuleList;
    }
    |
    empty
    {
        *tree = rb_ary_new();
    }    
    ;

empty:
    %empty
    {
        $$ = Qnil;
    }   
    ;

hstring:
    HSTRING
    ;

bstring:
    BSTRING
    ;

identifier:
    ID
    ;

typereference:
    TYPEREF
    ;

valuereference:
    identifier
    ;
    
number:
    NUMBER
    ;

realnumber:
    REALNUMBER
    ;
    
encodingreference:
    identifier
    ;

modulereference:
    typereference
    ;

/**********************************************************************/

ModuleList:
    ModuleList Module
    {
        rb_ary_push($$, $Module);
    }
    |
    Module
    {
        $$ = rb_ary_new();
        rb_ary_push($$, $Module);
    }
    ;

Module:
    modulereference[id] optDefinitiveIdentification[oid] DEFINITIONS EncodingReferenceDefault TagDefault ExtensionDefault ASSIGN BEGIN OptModuleBody END
    {
        $$ = $OptModuleBody;
        rb_hash_aset($$, ID2SYM(rb_intern("id")), $id);
        rb_hash_aset($$, ID2SYM(rb_intern("oid")), $oid);        
        rb_hash_aset($$, ID2SYM(rb_intern("encoding")), $EncodingReferenceDefault);
        rb_hash_aset($$, ID2SYM(rb_intern("default")), $TagDefault);
        rb_hash_aset($$, ID2SYM(rb_intern("extensionDefault")), $ExtensionDefault);
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &@$));                   
    }
    ;

optDefinitiveIdentification:
    DefinitiveOID
    |
    empty
    ;

DefinitiveOID:
    '{' DefinitiveOIDComponentList[list] '}'
    {
        $$ = $list;
    }
    ;

DefinitiveOIDComponentList:
    DefinitiveOIDComponent[item]
    {
        $$ = rb_ary_new();
        rb_ary_push(crefs, $$);
        rb_ary_push($$, $item);
    }
    |
    DefinitiveOIDComponentList DefinitiveOIDComponent[item]
    {
        rb_ary_push($$, $item);
    }
    ;

DefinitiveOIDComponent:
    number    
    |
    identifier
    |
    identifier '(' ')'
    ;

DefinitiveNumberForm:
    number
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &@$));
        rb_hash_aset($$, ID2SYM(rb_intern("number")), $number);
    }
    ;    

NameAndNumberForm:
    identifier '(' DefinitiveNumberForm ')'
    {
        $$ = $DefinitiveNumberForm;
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &@$));
        rb_hash_aset($$, ID2SYM(rb_intern("id")), $identifier);        
    }
    ;

EncodingReferenceDefault:
    encodingreference INSTRUCTIONS
    {
        $$ = $encodingreference;
    }    
    |
    empty
    ;

TagDefault:
    EXPLICIT TAGS
    {
        $$ = ID2SYM(rb_intern("EXPLICIT"));
    }
    |
    IMPLICIT TAGS
    {
        $$ = ID2SYM(rb_intern("IMPLICIT"));
    }
    |
    AUTOMATIC TAGS
    {
        $$ = ID2SYM(rb_intern("AUTOMATIC"));
    }
    |
    empty
    {
        $$ = ID2SYM(rb_intern("EXPLICIT"));
    }
    ;

ExtensionDefault:
    EXTENSIBILITY IMPLIED
    {
        $$ = Qtrue;
    }    
    |
    empty
    {
        $$ = Qfalse;
    }
    ;

OptModuleBody:
    empty
    {
        $$ = rb_hash_new();
    }
    |
    ModuleBody
    ;

ModuleBody:
    OptExports OptImports AssignmentList
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("exports")), $OptExports);
        rb_hash_aset($$, ID2SYM(rb_intern("imports")), $OptImports);
        rb_hash_aset($$, ID2SYM(rb_intern("assignments")), $AssignmentList);
    }
    ;

OptExports:
    empty
    |
    Exports
    ;
    
Exports:
    EXPORTS SymbolsExported ';'
    {
        $$ = $SymbolsExported;
    }
    |
    EXPORTS ALL ';'
    {
        $$ = ID2SYM(rb_intern("ALL"));
    }
    ;

SymbolsExported:
    SymbolList    
    |
    empty
    {
        $$ = rb_ary_new();
    }
    ;

OptImports:
    empty
    |
    Imports
    ;

Imports:
    EXPORTS SymbolsImported ';'
    {
        $$ = $SymbolsImported;
    }
    ;

SymbolsImported:
    SymbolsFromModuleList
    |
    empty
    {
        $$ = rb_ary_new();
        rb_ary_push(crefs, $$);
    }
    ;

SymbolsFromModuleList:
    SymbolsFromModule[item]
    {
        $$ = rb_ary_new();
        rb_ary_push(crefs, $$);
        rb_ary_push($$, $item);
    }
    |
    SymbolsFromModuleList SymbolsFromModule[item]
    {
        rb_ary_push($$, $item);
    }
    ;

SymbolsFromModule:
    SymbolList[list] FROM GlobalModuleReference[module]
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("id")), $module); 
        rb_hash_aset($$, ID2SYM(rb_intern("symbol")), $list);
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &@$)); 
    }
    ;

GlobalModuleReference:
    modulereference
    ;
    
SymbolList:
    Symbol[item]
    {
        $$ = rb_ary_new();
        rb_ary_push(crefs, $$);
        rb_ary_push($$, $item);
    }
    |
    SymbolList[list] ',' Symbol[item]
    {
        rb_ary_push($$, $item);
    }
    ;

Symbol:
    Reference
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &@$));
        rb_hash_aset($$, ID2SYM(rb_intern("ref")), $Reference);
    }
    ;

Reference:
    typereference
    |
    valuereference
    ;

/**********************************************************************/

AssignmentList:
    AssignmentList Assignment
    {
        rb_ary_push($$, $Assignment);
    }
    |
    Assignment
    {
        $$ = rb_ary_new();
        rb_ary_push(crefs, $$);
        rb_ary_push($$, $Assignment);    
    }
    ;
    
Assignment:
    TypeAssignment
    |
    ValueAssignment
    ;

TypeAssignment:
     typereference[ref] ASSIGN Type
    {
        $$ = $Type;
        rb_hash_aset($$, ID2SYM(rb_intern("id")), $ref);        
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &@$));
    }
    ;

ValueAssignment:
    valuereference[ref] Type[gov] ASSIGN Value
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ValueAssignment")));
        rb_hash_aset($$, ID2SYM(rb_intern("id")), $ref);
        rb_hash_aset($$, ID2SYM(rb_intern("governor")), $gov);
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &@$));
        rb_hash_aset($$, ID2SYM(rb_intern("value")), $Value);
    }
    ;

/**********************************************************************/

Value:
    BooleanValue
    |
    NULL
    |
    SignedNumber
    |
    RealValue
    |
    identifier
    |
    identifier ':' Value[subvalue]
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, $identifier, $subvalue);
    }
    |
    bstring
    |
    hstring
    |
    '{' '}'
    {
        $$ = rb_ary_new();
        rb_ary_push(crefs, $$);
    }
    |
    '{' NamedValueList '}'
    {
        $$ = $NamedValueList;
    }
    |
    '{' ValueList '}'
    {
        $$ = $ValueList;
    }
    ;

BooleanValue:
    TRUE
    |
    FALSE
    ;

NamedValueList:
    NamedValue
    {
        $$ = rb_ary_new();
        rb_ary_push(crefs, $$);
        rb_ary_push($$, $NamedValue);
    }
    |
    NamedValueList ',' NamedValue
    {
        rb_ary_push($$, $NamedValue);
    }
    ;

ValueList:
    Value
    {
        $$ = rb_ary_new();
        rb_ary_push(crefs, $$);
        rb_ary_push($$, $Value);
    }
    |
    ValueList ',' Value
    {
        rb_ary_push($$, $Value);
        rb_ary_push(crefs, $$);
    }
    ;
        
NamedValue:
    identifier Value
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("id")), $identifier);
        rb_hash_aset($$, ID2SYM(rb_intern("value")), $Value);
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &@$));
    }
    ;

/**********************************************************************/

Type:
    optTags OfType
    {
        $$ = $OfType;
        rb_hash_aset($$, ID2SYM(rb_intern("tags")), $optTags);
    }
    |
    optTags _Type optConstraints
    {
        $$ = $_Type;
        rb_hash_aset($$, ID2SYM(rb_intern("tags")), $optTags);
        rb_hash_aset($$, ID2SYM(rb_intern("constraints")), $optConstraints);
    }
    ;

OfType:
    SetOfType
    |
    SequenceOfType
    ;

_Type:
    BuiltinType
    |
    ReferencedType
    ;

BuiltinType:
    BitStringType
    |
    BooleanType
    |
    CharacterStringType
    |
    ChoiceType
    |
    EnumeratedType
    |
    IntegerType
    |
    NullType
    |
    ObjectIdentifierType
    |
    OctetStringType
    |
    RealType
    |
    SequenceType    
    |
    SetType
    ;

ReferencedType:
    DefinedType
    ;
    
/**********************************************************************/

CharacterStringType:
    RestrictedCharacterStringType
    |
    UnrestrictedCharacterStringType
    ;

UnrestrictedCharacterStringType:
    CHARACTER STRING
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("CharacterString")));
    }
    ;
    
RestrictedCharacterStringType:
    BMPString
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BMPString")));
    }
    |
    GeneralString
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("GeneralString")));
    }    
    |    
    GraphicString
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("GraphicString")));
    }    
    |    
    IA5String
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("IA5String")));
    }    
    |    
    ISO646String
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ISO646String")));
    }    
    |    
    NumericString
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("NumericString")));
    }    
    |    
    PrintableString
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("PrintableString")));
    }    
    |    
    TeletexString
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("TeletexString")));
    }    
    |    
    T61String
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("T61String")));
    }    
    |    
    UniversalString
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UniversalString")));
    }    
    |    
    UTF8String
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UTF8String")));
    }    
    |    
    VideotexString
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("VideotexString")));
    }    
    |    
    VisibleString
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("VisibleString")));
    }    
    ;

/**********************************************************************/

DefinedType:
    typereference[ref]
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("DefinedType")));
        rb_hash_aset($$, ID2SYM(rb_intern("ref")), $ref);
    }
    ;

/**********************************************************************/

ObjectIdentifierType:
    OBJECT IDENTIFIER
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("OBJECTIDENTIFIER")));
    }
    ;

        
/**********************************************************************/

BooleanType:
    BOOLEAN
    {    
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BOOLEAN")));
    }
    ;

/**********************************************************************/

IntegerType:
    INTEGER
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("INTEGER")));        
    }
    |
    INTEGER '{' NamedNumberList '}'
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("INTEGER")));
        rb_hash_aset($$, ID2SYM(rb_intern("numberList")), $NamedNumberList);
    }
    ;

NamedNumberList:
    NamedNumber
    {
        $$ = rb_ary_new();
        rb_ary_push(crefs, $$);
        rb_ary_push($$, $NamedNumber);
    }    
    |
    NamedNumberList ',' NamedNumber
    {
        rb_ary_push($$, $NamedNumber);
    }
    ;
    
NamedNumber:
    identifier[id] '(' NumberOrIdentifier[value] ')'
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("id")), $id);
        rb_hash_aset($$, ID2SYM(rb_intern("number")), $value);
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &@$));
    }
    ;

NumberOrIdentifier:
    SignedNumber
    |
    identifier
    ;
    
SignedNumber:
    number
    ;

/**********************************************************************/

EnumeratedType:
    ENUMERATED '{' Enumerations '}'
    {
        $$ = $Enumerations;
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ENUMERATED")));        
    }
    ;

Enumerations:
    RootEnumeration
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("root")), $RootEnumeration);
    }    
    |
    RootEnumeration ',' ELLIPSES ExceptionSpec
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("root")), $RootEnumeration);
        rb_hash_aset($$, ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset($$, ID2SYM(rb_intern("exception")), $ExceptionSpec); 
    }
    |
    RootEnumeration ',' ELLIPSES ExceptionSpec ',' AdditionalEnumeration
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("root")), $RootEnumeration);
        rb_hash_aset($$, ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset($$, ID2SYM(rb_intern("exception")), $ExceptionSpec);
        rb_hash_aset($$, ID2SYM(rb_intern("additional")), $AdditionalEnumeration);
    }
    ;

RootEnumeration:
    Enumeration
    ;

AdditionalEnumeration:
    Enumeration
    ;

Enumeration:
    EnumerationItem
    {
        $$ = rb_ary_new();
        rb_ary_push(crefs, $$);
        rb_ary_push($$, $EnumerationItem);
    }
    |
    Enumeration ',' EnumerationItem
    {
        rb_ary_push($$, $EnumerationItem);
    }
    ;

EnumerationItem:
    identifier
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("id")), $identifier);
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &@$));
    }
    |
    NamedNumber
    ;

/**********************************************************************/

RealType:
    REAL
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("REAL")));
    }
    ;

RealValue:
    NumericRealValue
    |
    SpecialRealValue
    ;
    
NumericRealValue:
    realnumber
    ;
    
SpecialRealValue:
    PLUS_INFINITY
    |
    MINUS_INFINITY
    |
    NOT_A_NUMBER
    ;

/**********************************************************************/

BitStringType:    
    BIT STRING
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BITSTRING")));        
    }
    |
    BIT STRING '{' NamedNumberList '}'
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BITSTRING")));
        rb_hash_aset($$, ID2SYM(rb_intern("bitList")), $NamedNumberList);
    }
    ;
    
/**********************************************************************/

OctetStringType:
    OCTET STRING
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("OCTETSTRING")));
    }
    ;

/**********************************************************************/

NullType:
    NULL
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("NULL")));
    }
    ;
    
/**********************************************************************/    

SequenceType:
    SEQUENCE '{' '}'
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SEQUENCE")));  
    }
    |
    SEQUENCE '{' ELLIPSES ExceptionSpec OptionalExtensionMarker '}'
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SEQUENCE")));
        rb_hash_aset($$, ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset($$, ID2SYM(rb_intern("exception")), $ExceptionSpec); 
    }
    |
    SEQUENCE '{' ComponentTypeLists '}'
    {
        $$ = $ComponentTypeLists;
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SEQUENCE")));
    }
    ;
    
OptionalExtensionMarker:
    ',' ELLIPSES
    |
    empty
    ;
    
ComponentTypeLists:
    RootComponentTypeList[head]
    {    
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("head")), $head);                
    }
    |
    RootComponentTypeList[head] ',' ELLIPSES ExceptionSpec ExtensionAdditions OptionalExtensionMarker
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("head")), $head);
        rb_hash_aset($$, ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset($$, ID2SYM(rb_intern("exception")), $ExceptionSpec);
        rb_hash_aset($$, ID2SYM(rb_intern("head")), $ExtensionAdditions);
    }
    |
    RootComponentTypeList[head] ',' ELLIPSES ExceptionSpec ExtensionAdditions ExtensionEndMarker ',' RootComponentTypeList[tail]
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("head")), $head);
        rb_hash_aset($$, ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset($$, ID2SYM(rb_intern("exception")), $ExceptionSpec);
        rb_hash_aset($$, ID2SYM(rb_intern("head")), $ExtensionAdditions);
        rb_hash_aset($$, ID2SYM(rb_intern("tail")), $tail);
    }
    |
    ELLIPSES ExceptionSpec ExtensionAdditions ExtensionEndMarker ',' RootComponentTypeList[tail]
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset($$, ID2SYM(rb_intern("exception")), $ExceptionSpec);
        rb_hash_aset($$, ID2SYM(rb_intern("head")), $ExtensionAdditions);
        rb_hash_aset($$, ID2SYM(rb_intern("tail")), $tail);
    }
    |
    ELLIPSES ExceptionSpec ExtensionAdditions OptionalExtensionMarker
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset($$, ID2SYM(rb_intern("exception")), $ExceptionSpec);
        rb_hash_aset($$, ID2SYM(rb_intern("head")), $ExtensionAdditions);
    }
    ;

RootComponentTypeList:
    ComponentTypeList
    ;

ExtensionEndMarker:
    ',' ELLIPSES
    ;

ExtensionAdditions:
    ',' ExtensionAdditionList
    {
        $$ = $ExtensionAdditionList;
    }
    |
    empty
    ;

ExtensionAdditionList:
    ExtensionAddition
    {
        $$ = rb_ary_new();
        rb_ary_push(crefs, $$);
        rb_ary_push($$, $ExtensionAddition);
    }
    |
    ExtensionAdditionList ',' ExtensionAddition
    {
        rb_ary_push($$, $ExtensionAddition);
    }
    ;
    
ExtensionAddition:
    ComponentType
    |
    ExtensionAdditionGroup
    ;
    
ExtensionAdditionGroup:
    LVERSION VersionNumber ComponentTypeList RVERSION
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("version")), $VersionNumber);
        rb_hash_aset($$, ID2SYM(rb_intern("additional")), $ComponentTypeList);
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &@$));
    }
    ;
    
VersionNumber:
    empty
    |
    number ':'    
    ;
    
ComponentTypeList:
    ComponentType
    {
        $$ = rb_ary_new();
        rb_ary_push(crefs, $$);
        rb_ary_push($$, $ComponentType);
    }    
    |
    ComponentTypeList ',' ComponentType
    {
        rb_ary_push($$, $ComponentType);
    }
    ;

ComponentType:    
    NamedType
    |
    NamedType OPTIONAL
    {
        rb_hash_aset($$, ID2SYM(rb_intern("OPTIONAL")), Qtrue);
    }
    |
    NamedType DEFAULT Value
    {
        rb_hash_aset($$, ID2SYM(rb_intern("DEFAULT")), $Value);
    }
    |
    COMPONENTS OF Type
    {
        $$ = Qnil;
    }
    ;
    
NamedType:
    identifier Type
    {
        $$ = $Type;
        rb_hash_aset($$, ID2SYM(rb_intern("id")), $identifier); 
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &@$));        
    }
    ;
    
/**********************************************************************/
    
SetType:
    SET '{' '}'
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SET"))); 
    }
    |
    SET '{' ELLIPSES ExceptionSpec OptionalExtensionMarker '}'
    {
        
    }
    |
    SET '{' ComponentTypeLists '}'
    {
        $$ = $ComponentTypeLists;
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SET")));        
    }
    ;

/**********************************************************************/
    
SequenceOfType:
    SEQUENCE OfTypeVariant TypeOrNamedType
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SEQUENCEOF")));
        rb_hash_aset($$, ID2SYM(rb_intern("type")), $TypeOrNamedType);
        rb_hash_aset($$, ID2SYM(rb_intern("constraints")), $OfTypeVariant);
}

OfTypeVariant:
    OF
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
    }
    |
    Constraint OF
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_push_ary($$, $Constraint);
    }    
    |
    SizeConstraint OF
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_push_ary($$, $SizeConstraint);
    }
    ;

TypeOrNamedType:
    Type
    |
    NamedType
    ;

/**********************************************************************/

SetOfType:
    SET OfTypeVariant TypeOrNamedType
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SETOF")));
        rb_hash_aset($$, ID2SYM(rb_intern("type")), $TypeOrNamedType);
        rb_hash_aset($$, ID2SYM(rb_intern("constraints")), $OfTypeVariant);
    }    

/**********************************************************************/

ChoiceType:
    CHOICE '{' AlternativeTypeLists '}'
    {
        $$ = $AlternativeTypeLists;
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("CHOICE")));
    }
    ;

AlternativeTypeLists:
    RootAlternativeTypeList[root]
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("root")), $root);
    }
    |
    RootAlternativeTypeList[root] ',' ELLIPSES ExceptionSpec ExtensionAdditionAlternatives[additional] OptionalExtensionMarker
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("root")), $root);
        rb_hash_aset($$, ID2SYM(rb_intern("extensible")), Qtrue); 
        rb_hash_aset($$, ID2SYM(rb_intern("exception")), $ExceptionSpec);
        rb_hash_aset($$, ID2SYM(rb_intern("additional")), $additional);        
    }
    ;

RootAlternativeTypeList:
    AlternativeTypeList
    ;

ExtensionAdditionAlternatives:
    ',' ExtensionAdditionAlternativesList
    {
        $$ = $ExtensionAdditionAlternativesList;
    }
    |
    empty
    ;
    
ExtensionAdditionAlternativesList:
    ExtensionAdditionAlternative
    {
        $$ = rb_ary_new();
        rb_ary_push(crefs, $$);
        rb_ary_push($$, $ExtensionAdditionAlternative);
    }
    |
    ExtensionAdditionAlternativesList ',' ExtensionAdditionAlternative
    {
        rb_ary_push($$, $ExtensionAdditionAlternative);
    }
    ;

ExtensionAdditionAlternative:
    ExtensionAdditionAlternativesGroup
    |
    NamedType
    ;
    
ExtensionAdditionAlternativesGroup:
    LVERSION VersionNumber AlternativeTypeList RVERSION
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("version")), $VersionNumber);
        rb_hash_aset($$, ID2SYM(rb_intern("additional")), $AlternativeTypeList);
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &@$));
    }
    ;

AlternativeTypeList:
    NamedType
    {
        $$ = rb_ary_new();
        rb_ary_push(crefs, $$);
        rb_ary_push($$, $NamedType);
    }
    |
    AlternativeTypeList ',' NamedType
    {
        rb_ary_push($$, $NamedType);
    }
    ;

/**********************************************************************/

optTags:
    Tags
    |
    empty
    {
        $$ = rb_ary_new();
        rb_ary_push(crefs, $$);
    }
    ;

Tags:
    Tags Tag
    {
        rb_ary_push($$, $Tag);
    }
    |
    Tag
    {
        $$ = rb_ary_new();
        rb_ary_push(crefs, $$);
        rb_ary_push($$, $Tag);
    }   
    ;

Tag:
    '[' encodingreference ':' Class ']' TagType
    {
        $$ = $Class;
        rb_hash_aset($$, ID2SYM(rb_intern("type")), $TagType);
    }
    |
    '[' Class ']' TagType
    {
        $$ = $Class;
        rb_hash_aset($$, ID2SYM(rb_intern("type")), $TagType);
    }
    ;

TagType:
    IMPLICIT
    {
        $$ = ID2SYM(rb_intern("IMPLICIT"));
        rb_ary_push(crefs, $$);
    }
    |
    EXPLICIT
    {
        $$ = ID2SYM(rb_intern("EXPLICIT"));
        rb_ary_push(crefs, $$);
    }
    |
    empty
    ;

Class:
    UNIVERSAL ClassNumber
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("classNumber")), $ClassNumber);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UNIVERSAL")));        
    }
    |
    APPLICATION ClassNumber
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("classNumber")), $ClassNumber);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("APPLICATION")));        
    }
    |
    PRIVATE ClassNumber
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("classNumber")), $ClassNumber);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("PRIVATE")));
    }
    |
    ClassNumber
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("classNumber")), $ClassNumber);
    }
    ;

ClassNumber:
    number
    |
    identifier
    ;


/**********************************************************************/

optConstraints:
    Constraints
    |
    empty
    {
        $$ = rb_ary_new();
        rb_ary_push(crefs, $$);
    }
    ;

Constraints:
    Constraint
    {
        $$ = rb_ary_new();
        rb_ary_push(crefs, $$);
        rb_ary_push($$, $Constraint);        
    }
    |
    Constraints Constraint
    {
        rb_ary_push($$, $Constraint);
    }
    ;

Constraint:
    '(' ConstraintSpec ExceptionSpec ')'
    {
        $$ = $ConstraintSpec;
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("Constraint")));
    }
    ;

ConstraintSpec:
    SubtypeConstraint
    ;

SubtypeConstraint:
    ElementSetSpecs
    ;

ElementSetSpecs:
    ElementSetSpec[root]
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("root")), $root);
        rb_hash_aset($$, ID2SYM(rb_intern("extensible")), Qfalse);
    }
    |
    ElementSetSpec[root] ',' ELLIPSES
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("root")), $root);
        rb_hash_aset($$, ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset($root, ID2SYM(rb_intern("top")), Qtrue);
    }
    |
    ElementSetSpec[root] ',' ELLIPSES ',' ElementSetSpec[additional]
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("root")), $root);
        rb_hash_aset($$, ID2SYM(rb_intern("additional")), $additional);        
        rb_hash_aset($$, ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset($root, ID2SYM(rb_intern("top")), Qtrue);
    }
    ;

ElementSetSpec:
    ALL EXCEPT Elements 
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ElementSetSpec")));
        rb_hash_aset($$, ID2SYM(rb_intern("set")), rb_ary_new());
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &@$));
        
        VALUE all = rb_hash_new();
        rb_ary_push(crefs, all);
        rb_hash_aset(all, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ALL")));
        rb_hash_aset(all, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &@$));
        rb_ary_push(rb_hash_aref($$, ID2SYM(rb_intern("set"))), all);

        VALUE except = rb_hash_new();
        rb_ary_push(crefs, except);
        rb_hash_aset(except, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("EXCEPT")));
        rb_hash_aset(except, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &@$));
        rb_ary_push(rb_hash_aref($$, ID2SYM(rb_intern("set"))), except);

        rb_ary_push(rb_hash_aref($$, ID2SYM(rb_intern("set"))), $Elements);
    }
    |
    Elements NextElements
    {
        $$ = $NextElements;
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &@$));
        rb_ary_unshift(rb_hash_aref($$, ID2SYM(rb_intern("set"))), $Elements);
    }
    ;

NextElements:
    UnionMark Elements NextElements[next]
    {
        $$ = $next;

        rb_ary_unshift(rb_hash_aref($$, ID2SYM(rb_intern("set"))), $Elements);

        VALUE mark = rb_hash_new();
        rb_ary_push(crefs, mark);
        rb_hash_aset(mark, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UNION")));
        rb_hash_aset(mark, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &@$));

        rb_ary_unshift(rb_hash_aref($$, ID2SYM(rb_intern("set"))), mark);
    }
    |
    IntersectionMark Elements NextElements[next]
    {
        $$ = $next;
    
        rb_ary_unshift(rb_hash_aref($$, ID2SYM(rb_intern("set"))), $Elements);
        
        VALUE mark = rb_hash_new();
        rb_ary_push(crefs, mark);
        rb_hash_aset(mark, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("INTERSECTION")));
        rb_hash_aset(mark, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &@$));

        rb_ary_unshift(rb_hash_aref($$, ID2SYM(rb_intern("set"))), mark);
    }    
    |
    empty
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ElementSetSpec")));
        rb_hash_aset($$, ID2SYM(rb_intern("set")), rb_ary_new());
    }
    ;

IntersectionMark:
    INTERSECTION
    |
    '^'
    ;

UnionMark:
    UNION
    |
    '|'
    ;
    
Elements:
    '(' ElementSetSpec ')'
    {
        $$ = $ElementSetSpec;
    }       
    |
    SubTypeElements
    ;

SubTypeElements:
    SingleValue
    |    
    ValueRange
    |
    SizeConstraint    
    ;

SingleValue:
    Value
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SingleValue")));
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &@$));
        rb_hash_aset($$, ID2SYM(rb_intern("value")), $Value);        
    }
    ;

ValueRange:
    LowerEndpoint RANGE UpperEndpoint
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ValueRange")));
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &@$));
        rb_hash_aset($$, ID2SYM(rb_intern("lower")), $LowerEndpoint);
        rb_hash_aset($$, ID2SYM(rb_intern("upper")), $UpperEndpoint);
    }
    ;

LowerEndpoint:
    LowerEndValue
    |
    LowerEndValue '<'
    ;

UpperEndpoint:
    UpperEndValue
    |
    '<' UpperEndValue
    {
        $$ = $UpperEndValue;
    }
    ;

LowerEndValue:
    Value
    |
    MIN
    {
        $$ = ID2SYM(rb_intern("MIN"));
    }
    ;

UpperEndValue:
    Value
    |
    MAX
    {
        $$ = ID2SYM(rb_intern("MAX"));
    }
    ;

SizeConstraint:
    SIZE Constraint
    {
        $$ = rb_hash_new();
        rb_ary_push(crefs, $$);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SizeConstraint")));        
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, crefs, &@$));
        rb_hash_aset($$, ID2SYM(rb_intern("constraint")), $Constraint);
    }
    ;

    
/**********************************************************************/
    
ExceptionSpec:
    '!' ExceptionIdentification
    |
    empty
    ;

ExceptionIdentification:
    Type ':' Value
    |
    identifier
    |
    SignedNumber
    ;

%%

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
