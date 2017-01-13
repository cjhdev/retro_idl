/* Bison Configuration
 *
 * Cameron Harper 2016
 * 
 * */
%{

/* includes ***********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ruby.h>
#include <assert.h>

#include "lexer.h"

/* function prototypes ************************************************/

void yyerror(YYLTYPE *locp, yyscan_t scanner, VALUE filename, VALUE *tree, char const *msg, ... );

/* static function prototypes *****************************************/

static VALUE parseFileBuffer(VALUE self, VALUE attr);
static VALUE newLocation(VALUE filename, const YYLTYPE *location);

/* static variables ***************************************************/

static VALUE ASN;
static VALUE cLog;
static VALUE cParseError;

/* generated **********************************************************/

%}

%define api.value.type {VALUE}
%define api.pure
%locations
%lex-param {yyscan_t scanner}
%parse-param {yyscan_t scanner}{VALUE filename}{VALUE *tree}
%define parse.error verbose
%glr-parser
%debug

%nonassoc   EXCEPT
%left       CARET INTERSECTION
%left       PIPE UNION

%define api.token.prefix {TOK_}

%token
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
    REAL
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
    POSINT "positive integer"
    NEGINT "negative integer"
    HEXINT
    ID "identifier"
    RVERSION "]]"
    PLUS_INFINITY
    MINUS_INFINITY
    NOT_A_NUMBER
    TRUE
    FALSE
    NULL
    CONTAINS
    POSREAL "positive real number"
    NEGREAL "negative real number"
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


    
%%

Top:
    {
        *tree = rb_ary_new();
    }
    AssignmentList
    {
        *tree = $AssignmentList;
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

cstring:
    CSTRING
    ;

identifier:
    ID
    ;

typereference:
    TYPEREF
    ;

modulereference:
    typereference
    ;

valuereference:
    identifier
    ;
    
number:
    POSINT
    |
    NEGINT
    ;
    
encodingreference:
    identifier
    ;
    
/**********************************************************************/

AssignmentList:
    AssignmentList[list] Assignment[item]
    {
        $$ = $list;
        rb_ary_push($$, $item);    
    }
    |
    Assignment[item]
    {
        $$ = rb_ary_new3(1, $item);
    }
    ;
    
Assignment:
    TypeAssignment
    |
    ValueAssignment
    ;

TypeAssignment:
     typereference[ref] ASSIGN optTypePrefix[tag] Type
    {
        $$ = $Type;
        rb_hash_aset($$, ID2SYM(rb_intern("id")), $ref);
        rb_hash_aset($$, ID2SYM(rb_intern("tag")), $tag);
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, &@$));
        
    }
    ;

ValueAssignment:
    valuereference[ref] Type[gov] ASSIGN Value[value]
    {
        $$ = $value;
        rb_hash_aset($$, ID2SYM(rb_intern("id")), $ref);
        rb_hash_aset($$, ID2SYM(rb_intern("governor")), $gov);
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, &@$));
    }
    ;

/**********************************************************************/

Value:
    BuiltinValue[value]
    {
        $$ = rb_hash_new();        
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BuiltinValue")));      
        rb_hash_aset($$, ID2SYM(rb_intern("value")), $value);      
    }
    |
    DefinedValue[value]
    {
        $$ = rb_hash_new();        
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("DefinedValue")));
        rb_hash_aset($$, ID2SYM(rb_intern("value")), $value);      
    }
    ;

BuiltinValue:
    TRUE
    |
    FALSE
    |
    NULL
    |
    POSINT
    |
    NEGINT
    |
    HEXINT
    |
    POSREAL
    |
    NEGREAL
    |
    PLUS_INFINITY
    |
    MINUS_INFINITY
    |
    NOT_A_NUMBER
    ;
    
DefinedValue:
    valuereference
    ;

NamedValue:
    identifier Value
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("id")), $identifier);
        rb_hash_aset($$, ID2SYM(rb_intern("value")), $Value);
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, &@$));
    }
    ;

/**********************************************************************/

Type:
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
    OctetStringType
    |
    RealType
    |
    SequenceOfType
    |
    SequenceType    
    |
    DefinedType
    |
    ConstrainedType
    ;

ConstrainedType:
    Type Constraint
    {
        if(rb_hash_aref($$, ID2SYM(rb_intern("constraints"))) == Qnil){
            rb_hash_aset($$, ID2SYM(rb_intern("constraints")), rb_ary_new());
        }
        rb_ary_push(rb_hash_aref($$, ID2SYM(rb_intern("constraints"))), $Constraint);
    }
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
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("CharacterString")));
    }
    ;
    
RestrictedCharacterStringType:
    BMPString
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BMPString")));
    }
    |
    GeneralString
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("GeneralString")));
    }    
    |    
    GraphicString
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("GraphicString")));
    }    
    |    
    IA5String
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("IA5String")));
    }    
    |    
    ISO646String
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ISO646String")));
    }    
    |    
    NumericString
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("NumericString")));
    }    
    |    
    PrintableString
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("PrintableString")));
    }    
    |    
    TeletexString
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("TeletexString")));
    }    
    |    
    T61String
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("T61String")));
    }    
    |    
    UniversalString
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UniversalString")));
    }    
    |    
    UTF8String
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UTF8String")));
    }    
    |    
    VideotexString
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("VideotexString")));
    }    
    |    
    VisibleString
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("VisibleString")));
    }    
    ;

/**********************************************************************/

DefinedType:
    typereference[ref]
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("DefinedType")));
        rb_hash_aset($$, ID2SYM(rb_intern("ref")), $ref);
    }
    ;

/**********************************************************************/

BooleanType:
    BOOLEAN
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BOOLEAN")));
    }
    ;

/**********************************************************************/

IntegerType:
    INTEGER
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("INTEGER")));        
    }
    |
    INTEGER '{' NamedNumberList '}'
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("INTEGER")));
        rb_hash_aset($$, ID2SYM(rb_intern("numberList")), $NamedNumberList);
    }
    ;

NamedNumberList:
    NamedNumber
    {
        $$ = rb_ary_new();
        rb_ary_push($$, $NamedNumber);
    }    
    |
    NamedNumberList ',' NamedNumber
    {
        rb_ary_push($$, $NamedNumber);
    }
    ;

NamedNumber:
    identifier[id] '(' NamedNumberNumber[number] ')'
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("id")), $id);
        rb_hash_aset($$, ID2SYM(rb_intern("number")), $number);
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, &@$));
    }
    ;

NamedNumberNumber:
    DefinedValue
    |
    SignedNumber
    ;

SignedNumber:
    POSINT
    |
    NEGINT
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
        rb_hash_aset($$, ID2SYM(rb_intern("root")), $RootEnumeration);
    }    
    |
    RootEnumeration ',' ELLIPSES ExceptionSpec
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("root")), $RootEnumeration);
        rb_hash_aset($$, ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset($$, ID2SYM(rb_intern("exception")), $ExceptionSpec); 
    }
    |
    RootEnumeration ',' ELLIPSES ExceptionSpec ',' AdditionalEnumeration
    {
        $$ = rb_hash_new();
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
        rb_hash_aset($$, ID2SYM(rb_intern("id")), $identifier);
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, &@$));
    }
    |
    NamedNumber
    ;

/**********************************************************************/

RealType:
    REAL
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("REAL")));
    }
    ;

/**********************************************************************/

BitStringType:    
    BIT STRING
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BITSTRING")));        
    }
    |
    BIT STRING '{' NamedNumberList '}'
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("BITSTRING")));
        rb_hash_aset($$, ID2SYM(rb_intern("bitList")), $NamedNumberList);
    }
    ;
    
/**********************************************************************/

OctetStringType:
    OCTET STRING
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("OCTETSTRING")));
    }
    ;

/**********************************************************************/

NullType:
    NULL
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("NULL")));
    }
    ;
    
/**********************************************************************/    

SequenceType:
    SEQUENCE '{' '}'
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SEQUENCE")));  
    }
    |
    SEQUENCE '{' ELLIPSES ExceptionSpec OptionalExtensionMarker '}'
    {
        $$ = rb_hash_new();
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
        rb_hash_aset($$, ID2SYM(rb_intern("head")), $head);                
    }
    |
    RootComponentTypeList[head] ',' ELLIPSES ExceptionSpec ExtensionAdditions OptionalExtensionMarker
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("head")), $head);
        rb_hash_aset($$, ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset($$, ID2SYM(rb_intern("exception")), $ExceptionSpec);
        rb_hash_aset($$, ID2SYM(rb_intern("head")), $ExtensionAdditions);
    }
    |
    RootComponentTypeList[head] ',' ELLIPSES ExceptionSpec ExtensionAdditions ExtensionEndMarker ',' RootComponentTypeList[tail]
    {
        $$ = rb_hash_new();
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
        rb_hash_aset($$, ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset($$, ID2SYM(rb_intern("exception")), $ExceptionSpec);
        rb_hash_aset($$, ID2SYM(rb_intern("head")), $ExtensionAdditions);
        rb_hash_aset($$, ID2SYM(rb_intern("tail")), $tail);
    }
    |
    ELLIPSES ExceptionSpec ExtensionAdditions OptionalExtensionMarker
    {
        $$ = rb_hash_new();
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
        rb_hash_aset($$, ID2SYM(rb_intern("version")), $VersionNumber);
        rb_hash_aset($$, ID2SYM(rb_intern("additional")), $ComponentTypeList);
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, &@$));
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
    identifier optTypePrefix[tag] Type
    {
        $$ = $Type;
        rb_hash_aset($$, ID2SYM(rb_intern("id")), $identifier); 
        rb_hash_aset($$, ID2SYM(rb_intern("tag")), $tag);
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, &@$));        
    }
    ;

    
/**********************************************************************/
    
SequenceOfType:
    SEQUENCE SequenceOfTypeVariant SequenceOfTypeTarget
    {
        $$ = $SequenceOfTypeVariant;
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SEQUENCEOF")));
        rb_hash_aset($$, ID2SYM(rb_intern("type")), $SequenceOfTypeTarget);
    }

SequenceOfTypeVariant:
    OF
    {
        $$ = rb_hash_new();
    }
    |
    Constraint OF
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("constraint")), $Constraint);
    }    
    |
    SizeConstraint OF
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("constraint")), $SizeConstraint);
    }
    ;

SequenceOfTypeTarget:
    Type
    |
    NamedType    
    ;
    
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
        rb_hash_aset($$, ID2SYM(rb_intern("root")), $root);
    }
    |
    RootAlternativeTypeList[root] ',' ELLIPSES ExceptionSpec ExtensionAdditionAlternatives[additional] OptionalExtensionMarker
    {
        $$ = rb_hash_new();
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
        rb_hash_aset($$, ID2SYM(rb_intern("version")), $VersionNumber);
        rb_hash_aset($$, ID2SYM(rb_intern("additional")), $AlternativeTypeList);
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, &@$));
    }
    ;

AlternativeTypeList:
    NamedType
    {
        $$ = rb_ary_new();
        rb_ary_push($$, $NamedType);
    }
    |
    AlternativeTypeList ',' NamedType
    {
        rb_ary_push($$, $NamedType);
    }
    ;


/**********************************************************************/

optTypePrefix:
    empty
    |
    TypePrefix
    ;

TypePrefix:
    Tag
    |
    Tag IMPLICIT
    {   
        $$ = $Tag;
        rb_hash_aset($Tag, ID2SYM(rb_intern("type")), ID2SYM(rb_intern("EXPLICIT")));        
    }
    |
    Tag EXPLICIT
    {   
        $$ = $Tag;
        rb_hash_aset($Tag, ID2SYM(rb_intern("type")), ID2SYM(rb_intern("EXPLICIT")));        
    }
    ;
    
Tag:
    '[' encodingreference ':' Class ']'
    {
        $$ = $Class;            
    }
    |
    '[' Class ']'
    {
        $$ = $Class;
    }
    ;

Class:
    UNIVERSAL ClassNumber
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("classNumber")), $ClassNumber);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UNIVERSAL")));        
    }
    |
    APPLICATION ClassNumber
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("classNumber")), $ClassNumber);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("APPLICATION")));        
    }
    |
    PRIVATE ClassNumber
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("classNumber")), $ClassNumber);
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("PRIVATE")));
    }
    |
    ClassNumber
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("classNumber")), $ClassNumber);
    }
    ;

ClassNumber:
    number
    |
    DefinedValue
    ;


/**********************************************************************/

Constraint:
    '(' ConstraintSpec ExceptionSpec ')'
    {
        $$ = $ConstraintSpec;
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
        rb_hash_aset($$, ID2SYM(rb_intern("root")), $root);
    }
    |
    ElementSetSpec[root] ',' ELLIPSES
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("root")), $root);        
        rb_hash_aset($$, ID2SYM(rb_intern("extensible")), Qtrue);

        rb_hash_aset($root, ID2SYM(rb_intern("top")), Qtrue);
    }
    |
    ElementSetSpec[root] ',' ELLIPSES ',' ElementSetSpec[additional]
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("root")), $root);
        
        rb_hash_aset($$, ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset($$, ID2SYM(rb_intern("additional")), $additional);

        rb_hash_aset($root, ID2SYM(rb_intern("top")), Qtrue);
        rb_hash_aset($additional, ID2SYM(rb_intern("additional")), Qtrue);
    }
    ;

ElementSetSpec:
    ALL EXCEPT Elements 
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ElementSetSpec")));
        rb_hash_aset($$, ID2SYM(rb_intern("set")), rb_ary_new());
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, &@$));
        
        VALUE all = rb_hash_new();
        rb_hash_aset(all, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ALL")));
        rb_hash_aset(all, ID2SYM(rb_intern("location")), newLocation(filename, &@$));
        rb_ary_push(rb_hash_aref($$, ID2SYM(rb_intern("set"))), all);

        VALUE except = rb_hash_new();
        rb_hash_aset(except, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("EXCEPT")));
        rb_hash_aset(except, ID2SYM(rb_intern("location")), newLocation(filename, &@$));
        rb_ary_push(rb_hash_aref($$, ID2SYM(rb_intern("set"))), except);

        rb_ary_push(rb_hash_aref($$, ID2SYM(rb_intern("set"))), $Elements);
    }
    |
    Elements NextElements
    {
        $$ = $NextElements;
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, &@$));
        rb_ary_unshift(rb_hash_aref($$, ID2SYM(rb_intern("set"))), $Elements);
    }
    ;

NextElements:
    UnionMark Elements NextElements[next]
    {
        $$ = $next;

        rb_ary_unshift(rb_hash_aref($$, ID2SYM(rb_intern("set"))), $Elements);

        VALUE mark = rb_hash_new();
        rb_hash_aset(mark, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UNION")));
        rb_hash_aset(mark, ID2SYM(rb_intern("location")), newLocation(filename, &@$));

        rb_ary_unshift(rb_hash_aref($$, ID2SYM(rb_intern("set"))), mark);

    }
    |
    IntersectionMark Elements NextElements[next]
    {
        $$ = $next;
    
        rb_ary_unshift(rb_hash_aref($$, ID2SYM(rb_intern("set"))), $Elements);
        
        VALUE mark = rb_hash_new();
        rb_hash_aset(mark, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("INTERSECTION")));
        rb_hash_aset(mark, ID2SYM(rb_intern("location")), newLocation(filename, &@$));

        rb_ary_unshift(rb_hash_aref($$, ID2SYM(rb_intern("set"))), mark);
    }    
    |
    empty
    {
        $$ = rb_hash_new();
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
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SingleValue")));
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, &@$));
        rb_hash_aset($$, ID2SYM(rb_intern("value")), $Value);        
    }
    ;

ValueRange:
    LowerEndpoint RANGE UpperEndpoint
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ValueRange")));
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, &@$));
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
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SizeConstraint")));        
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, &@$));
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
    DefinedValue
    |
    SignedNumber
    ;

%%



/* public functions ***************************************************/

void Init_ext_parser(void)
{
    ASN = rb_define_module_under(rb_define_module("RetroIDL"), "ASN");    
    rb_define_module_function(ASN, "parseFileBuffer", parseFileBuffer, 1);
}

void yyerror(YYLTYPE *locp, yyscan_t scanner, VALUE filename, VALUE *tree, char const *msg, ... )
{
    VALUE message = newLocation(filename, locp);
    rb_str_append(message, rb_str_new2(": error: "));
    rb_str_append(message, rb_str_new2(msg));
    rb_io_puts(1, &message, rb_stderr);            
}

/* static functions ***************************************************/

static VALUE parseFileBuffer(VALUE self, VALUE attr)
{
    yyscan_t scanner;
    VALUE tree = Qnil;
    int retval;    

    VALUE buffer = rb_hash_aref(attr, ID2SYM(rb_intern("buffer")));
    VALUE filename = rb_hash_aref(attr, ID2SYM(rb_intern("fileName")));

    if(yylex_init(&scanner) == 0){

        if(yy_scan_bytes((const char *)RSTRING_PTR(buffer), RSTRING_LEN(buffer), scanner)){

            retval = yyparse(scanner, filename, &tree);

            yylex_destroy(scanner);

            switch(retval){
            case 0:
                break;
            case 1:
                rb_raise(cParseError, "parse error");
                break;
            case 2:
                rb_bug("yyparse: bison parser reports memory exhaustion");
                break;
            default:
                rb_bug("yyparse: unknown return code");
                break;
            }
        }
        else{

            yylex_destroy(scanner);
        }
    }

    return tree;
}

static VALUE newLocation(VALUE filename, const YYLTYPE *location)
{
    char msg[500];    
    int len = 0;

    if(filename != Qnil){

        len = snprintf(msg, sizeof(msg), "%s:%i:%i", (const char *)RSTRING_PTR(filename), location->first_line, location->first_column);
    }
    else{

        len = snprintf(msg, sizeof(msg), "%i:%i", location->first_line, location->first_column);
    }
    
    return rb_str_new(msg, len);
}
