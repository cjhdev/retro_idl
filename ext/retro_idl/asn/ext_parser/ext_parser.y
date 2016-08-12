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

%}

%define api.value.type {VALUE}
%define api.pure full
%locations
%lex-param {yyscan_t scanner}
%parse-param {yyscan_t scanner}{VALUE filename}{VALUE *tree}
%define parse.error verbose

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

hstring: HSTRING;

bstring: BSTRING;

cstring: CSTRING;

identifier: ID;

typereference: TYPEREF;

modulereference: typereference;

valuereference: identifier;
    
number: POSINT | NEGINT;
    
encodingreference: identifier;
    
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
     typereference[ref] ASSIGN optTypePrefix[tag] Type Constraint
    {
        $$ = $Type;
        rb_hash_aset($$, ID2SYM(rb_intern("id")), $ref);
        rb_hash_aset($$, ID2SYM(rb_intern("tag")), $tag);
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, &@$));
        rb_hash_aset($$, ID2SYM(rb_intern("constraint")), $Constraint);
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
        rb_hash_aset($$, ID2SYM(rb_intern("ref")), $value);      
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
    ENUMERATED '{' EnumerationItem[item] NextEnumerationItem[list]
    {
        $$ = $list;
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ENUMERATED")));        
        rb_ary_unshift(rb_hash_aref($$, ID2SYM(rb_intern("root"))), $item);        
    }
    ;

NextEnumerationItem:
    '}'
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("root")), rb_ary_new());
    }
    |    
    ',' EnumerationItem[item] NextEnumerationItem[list]
    {
        $$ = $list;
        rb_ary_unshift(rb_hash_aref($$, ID2SYM(rb_intern("root"))), $item);
    }
    |
    ',' ELLIPSES ExceptionSpec NextAddEnumerationItem[list]
    {
        $$ = $list;
        rb_hash_aset($$, ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset($$, ID2SYM(rb_intern("exceptionSpec")), $ExceptionSpec);        
    }
    ;

NextAddEnumerationItem:
    '}'
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("additional")), rb_ary_new());
        rb_hash_aset($$, ID2SYM(rb_intern("root")), rb_ary_new());
    }
    |
    ',' EnumerationItem[item] NextAddEnumerationItem[list]
    {
        $$ = $list;
        rb_ary_unshift(rb_hash_aref($$, ID2SYM(rb_intern("additional"))), $item);
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
    SEQUENCE '{' HeadComponentTypeList[list]
    {
        $$ = $list;
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("SEQUENCE")));
    }
    ;

HeadComponentTypeList:
    '}'
    {
        $$ = rb_hash_new();
    }
    |
    ELLIPSES ExceptionSpec AdditionalComponentTypeList[list]
    {
        $$ = $list;
        rb_hash_aset($$, ID2SYM(rb_intern("extensible")), Qtrue);        
        rb_hash_aset($$, ID2SYM(rb_intern("exceptionSpec")), $ExceptionSpec);
    }
    |
    ComponentType[item] NextHeadComponentType[list]
    {
        $$ = $list;
        rb_ary_unshift(rb_hash_aref($$, ID2SYM(rb_intern("head"))), $item);
    }
    ;
    
NextHeadComponentType:
    '}'
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("head")), rb_ary_new());
    }
    |
    ',' ELLIPSES ExceptionSpec AdditionalComponentTypeList[list]
    {
        $$ = $list;
        rb_hash_aset($$, ID2SYM(rb_intern("extensible")), Qtrue);        
        rb_hash_aset($$, ID2SYM(rb_intern("exceptionSpec")), $ExceptionSpec);
    }
    |
    ',' ComponentType[item] NextHeadComponentType[list]
    {
        $$ = $list;
        rb_ary_unshift(rb_hash_aref($$, ID2SYM(rb_intern("head"))), $item);
    }
    ;

AdditionalComponentTypeList:
    '}'
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("head")), rb_ary_new());
    }
    |
    ',' AdditionalComponentType[item] NextAdditionalComponentType[list]
    {
        $$ = $list;
        rb_ary_unshift(rb_hash_aref($$, ID2SYM(rb_intern("additional"))), $item); 
    }
    ;

NextAdditionalComponentType:
    '}'
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("additional")), rb_ary_new());
        rb_hash_aset($$, ID2SYM(rb_intern("head")), rb_ary_new());
    }
    |
    ',' ELLIPSES TailComponentTypeList[list] '}'
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("additional")), rb_ary_new());
        rb_hash_aset($$, ID2SYM(rb_intern("tail")), $list);
        rb_hash_aset($$, ID2SYM(rb_intern("extensible")), Qtrue);
    }
    |
    ',' AdditionalComponentType[item] NextAdditionalComponentType[list]
    {
        $$ = $list;
        rb_ary_unshift(rb_hash_aref($$, ID2SYM(rb_intern("additional"))), $item);         
    }
    ;        

AdditionalComponentType:
    ComponentType
    |
    LVERSION VersionNumber[version] ComponentTypeList[additional] RVERSION
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("version")), $version);
        rb_hash_aset($$, ID2SYM(rb_intern("additional")), $additional);
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, &@$));
    }
    ;

ComponentTypeList:
    ComponentType
    |
    ComponentTypeList ',' ComponentType
    ;

TailComponentTypeList:
    empty
    |
    ',' ComponentTypeList[list]
    {
        $$ = $list;
    }
    ;
    
VersionNumber:
    empty
    |
    POSINT ':'
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
    identifier optTypePrefix[tag] Type Constraint
    {
        $$ = $Type;
        rb_hash_aset($$, ID2SYM(rb_intern("id")), $identifier); 
        rb_hash_aset($$, ID2SYM(rb_intern("tag")), $tag);
        rb_hash_aset($$, ID2SYM(rb_intern("location")), newLocation(filename, &@$));
        rb_hash_aset($$, ID2SYM(rb_intern("constraint")), $Constraint);
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
    CHOICE '{' NamedType[item] NextAltType[list]
    {
        $$ = $list;
        rb_hash_aset($$, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("CHOICE")));
        rb_ary_unshift(rb_hash_aref($$, ID2SYM(rb_intern("root"))), $item);        
    }
    ;

NextAltType:
    '}'
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("root")), rb_ary_new());
    }   
    |
    ',' ELLIPSES ExceptionSpec NextAddAltType[list]
    {
        $$ = $list;
        rb_hash_aset($$, ID2SYM(rb_intern("extensible")), Qtrue);
        rb_hash_aset($$, ID2SYM(rb_intern("exceptionSpec")), $ExceptionSpec);
        rb_hash_aset($$, ID2SYM(rb_intern("root")), rb_ary_new());
    }
    |
    ',' NamedType[item] NextAltType[list]
    {
        $$ = $list;
        rb_ary_unshift(rb_hash_aref($$, ID2SYM(rb_intern("root"))), $item);
    }
    ;

NextAddAltType:
    '}'
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("additional")), rb_ary_new());
    }
    |
    ',' ELLIPSES '}'
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("additional")), rb_ary_new());
    }
    |
    ',' AddAltType[item] NextAddAltType[list]
    {
        $$ = $list;
        rb_ary_unshift(rb_hash_aref($$, ID2SYM(rb_intern("additional"))), $item);
    }
    ;

AddAltType:
    NamedType
    |
    LVERSION VersionNumber[version] VersionedAltType[list] RVERSION
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("version")), $version);
        rb_hash_aset($$, ID2SYM(rb_intern("additional")), $list);
    }
    ;

VersionedAltType:
    VersionedAltType[list] ',' NamedType[item]
    {
        rb_ary_push($$, $item);
    }
    |
    NamedType[item]
    {
        $$ = rb_ary_new3(1, $item);        
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


Constraints:
    Constraint
    |
    Constraints ',' Constraint
    ;


Constraint:
    '(' ConstraintSpec ')'
    {        
        $$ = $ConstraintSpec;        
    }
    |
    empty
    ;

ConstraintSpec:
    ElementSetSpec
    {
        $$ = rb_hash_new();
        rb_hash_aset($$, ID2SYM(rb_intern("rootElementSetSpec")), $ElementSetSpec);
    }
    ;

ElementSetSpec:
    ALL EXCEPT Elements 
    {
        $$ = rb_ary_new();

        VALUE all = rb_hash_new();
        rb_hash_aset(all, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("ALL")));
        rb_hash_aset(all, ID2SYM(rb_intern("location")), newLocation(filename, &@$));
        rb_ary_push($$, all);

        VALUE except = rb_hash_new();
        rb_hash_aset(all, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("EXCEPT")));
        rb_hash_aset(all, ID2SYM(rb_intern("location")), newLocation(filename, &@$));
        rb_ary_push($$, except);

        rb_ary_push($$, $Elements);
    }
    |
    Elements NextElements
    {
        $$ = $NextElements;
        rb_ary_unshift($$, $Elements);
    }
    ;

NextElements:
    UnionMark Elements NextElements[next]
    {
        $$ = $next;

        rb_ary_unshift($$, $Elements);

        VALUE mark = rb_hash_new();
        rb_hash_aset(mark, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("UNION")));
        rb_hash_aset(mark, ID2SYM(rb_intern("location")), newLocation(filename, &@$));

        rb_ary_unshift($$, mark);
    }
    |
    IntersectionMark Elements NextElements[next]
    {
        $$ = $next;
    
        rb_ary_unshift($$, $Elements);
        
        VALUE mark = rb_hash_new();
        rb_hash_aset(mark, ID2SYM(rb_intern("class")), ID2SYM(rb_intern("INTERSECTION")));
        rb_hash_aset(mark, ID2SYM(rb_intern("location")), newLocation(filename, &@$));

        rb_ary_unshift($$, mark);
    }    
    |
    empty
    {
        $$ = rb_ary_new();
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
