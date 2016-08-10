# Copyright (c) 2016 Cameron Harper
# 
# Permission is hereby granted, free of charge, to any person obtaining a copy of
# this software and associated documentation files (the "Software"), to deal in
# the Software without restriction, including without limitation the rights to
# use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
# the Software, and to permit persons to whom the Software is furnished to do so,
# subject to the following conditions:
#  
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
# 
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
# FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
# COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
# IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
# CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

module RetroIDL

    # Module containing the ASN syntax to Ruby parser
    module ASN

        # @!macro [new] common_evaluate
        #   
        #   evaluate a native Ruby value against a type definition
        #   
        #   @note may be called before linking but will raise exception if references to not resolve
        #   
        #   @param value [String, Numeric] value to test against type definition
        #   
        #   @return [TrueClass] value fits type definition
        #   @return [FalseClass] value does not fit type definition
        #   
        #   @raise [ASNError] cannot evaluate against unresolved references
        #

        # @!macro [new] common_link
        #
        #   resolve symbols to definitions in module
        #
        #   @param mod [MODULE] module this type belongs to
        #   @param stack [Array] objects called before this object for depth first search of recursion
        #
        #   @return [MODULE] object has been linked
        #   @return [nil] object has not been linked
        #

        # @!macro [new] common_to_s
        #
        #   Convert object to ASN.1 syntax representation
        #
        #   @return [String] ASN.1 syntax representation
        #
        #   @raise [ASNError]
        #

        LINK_ERROR = "object must be linked"
        SYMBOL_UNDEFINED_ERROR = "symbol is undefined"

        # Reserved Words
        #
        # X.680 section 12.38 
        RESERVED_CHARACTER_SEQUENCE = [
            "ABSENT".freeze,
            "ENCODED".freeze,
            "INTERSECTION".freeze,
            "SEQUENCE".freeze,
            "ABSTRACT-SYNTAX".freeze,
            "ENCODING-CONTROL".freeze,
            "ISO646String".freeze,
            "SET".freeze,
            "ALL".freeze,
            "END".freeze,
            "MAX".freeze,
            "SETTINGS".freeze,
            "APPLICATION".freeze,
            "ENUMERATED".freeze,
            "MIN".freeze,
            "SIZE".freeze,
            "AUTOMATIC".freeze,
            "EXCEPT".freeze,
            "MINUS-INFINITY".freeze,
            "STRING".freeze,
            "BEGIN".freeze,
            "EXPLICIT".freeze,
            "NOT-A-NUMBER".freeze,
            "SYNTAX".freeze,
            "BIT".freeze,
            "EXPORTS".freeze,
            "NULL".freeze,
            "T61String".freeze,
            "BMPString".freeze,
            "EXTENSIBILITY".freeze,
            "NumericString".freeze,
            "TAGS".freeze,
            "BOOLEAN".freeze,
            "EXTERNAL".freeze,
            "OBJECT".freeze,
            "TeletexString".freeze,
            "BY".freeze,
            "FALSE".freeze,
            "ObjectDescriptor".freeze,
            "TIME".freeze,
            "CHARACTER".freeze,
            "FROM".freeze,
            "OCTET".freeze,
            "TIME-OF-DAY".freeze,
            "CHOICE".freeze,
            "GeneralizedTime".freeze,
            "OF".freeze,
            "TRUE".freeze,
            "CLASS".freeze,
            "GeneralString".freeze,
            "OID-IRI".freeze,
            "TYPE-IDENTIFIER".freeze,
            "COMPONENT".freeze,
            "GraphicString".freeze,
            "OPTIONAL".freeze,
            "UNION".freeze,
            "COMPONENTS".freeze,
            "IA5String".freeze,
            "PATTERN".freeze,
            "UNIQUE".freeze,
            "CONSTRAINED".freeze,
            "IDENTIFIER".freeze,
            "PDV".freeze,
            "UNIVERSAL".freeze,
            "CONTAINING".freeze,
            "IMPLICIT".freeze,
            "PLUS-INFINITY".freeze,
            "UniversalString".freeze,
            "DATE".freeze,
            "IMPLIED".freeze,
            "PRESENT".freeze,
            "UTCTime".freeze,
            "DATE-TIME".freeze,
            "IMPORTS".freeze,
            "PrintableString".freeze,
            "UTF8String".freeze,
            "DEFAULT".freeze,
            "INCLUDES".freeze,
            "PRIVATE".freeze,
            "VideotexString".freeze,
            "DEFINITIONS".freeze,
            "INSTANCE".freeze,
            "REAL".freeze,
            "VisibleString".freeze,
            "DURATION".freeze,
            "INSTRUCTIONS".freeze,
            "RELATIVE-OID".freeze,
            "WITH".freeze,
            "EMBEDDED".freeze,
            "INTEGER".freeze,
            "RELATIVE-OID-IRI".freeze
        ]

        # test a typereference string against requirements
        #
        # @param location [Hash] location of the typereference
        # @param typereference [String] typereference string
        #
        # @return [TrueClass] typereference meets format requirements
        # @return [FalseClass] typereference does not meet format requirements 
        #
        def self.is_typereference?(location, typereference)

            result = true
            if typereference[/^[A-Z]/].nil?
                putError(location, "typereference \"#{typereference}\": The initial character shall be an upper-case letter (12.2.1)")
                result = false
            end            
            if typereference[/--/]
                putError(location, "typereference \"#{typereference}\": A hyphen shall not be immediately followed by another hyphen (12.2.1)")
                result = false    
            end
            if typereference[/-$/]
                putError(location, "typereference \"#{typereference}\": A hyphen shall not be the last character (12.2.1)")
                result = false
            end
            if RESERVED_CHARACTER_SEQUENCE.include?(typereference)
                putError(location, "typereference \"#{typereference}\": A typereference shall not be one of the reserved character sequences listed in 12.38 (12.2.2)")
                result = false    
            end
            return result

        end

        def self.putError(location, message)
            STDERR.puts "#{location[:fileName]}:#{location[:firstLine]}:#{location[:firstCol]}: error: #{message}"
        end

        # test an identifier string against requirements
        #
        # @param location [Hash] location of the identifier
        # @param identifier [String] identifier string
        #
        # @return [TrueClass] identifier meets format requirements
        # @return [FalseClass] identifier does not meet format requirements 
        #
        def self.is_identifier?(location, identifier)
            result = true
            if identifier[/^[a-z]/].nil?
                putError(location, "identifier \"#{identifier}\": The initial character shall be a lower-case letter (12.4)")
                result = false
            end
            if identifier[/--/]
                putError(location, "identifier \"#{identifier}\": A hyphen shall not be immediately followed by another hyphen (12.4)")
                result = false
            end
            if identifier[/-$/]
                putError(location, "identifier \"#{identifier}\": A hyphen shall not be the last character (12.4)")
                result = false
            end
            return result
        end

        class ASN

            def symbols(id)
                @assignments[id]
            end

            def initialize(input)

                errors = false

                @modules = {}
                
                # run the parser to produce the syntax tree
                tree = RetroIDL::ASN.parseFileBuffer(input)   

                if tree.nil?
                    raise "tree should not be nil"
                end

                # initialise the assignments
                @assignments = {}
                tree.each do |assignment|

                    if @assignments[assignment[:id]]
                        ASN.putError(assignment[:location], "duplicate assignment")
                        errors = true
                    else
                        begin
                            @assignments[assignment[:id]] = RetroIDL::ASN.const_get(assignment[:class]).new(**assignment)                            
                        rescue ASNError
                            errors = true        
                        end
                    end
                end

                if errors
                    raise
                end

                @assignments.each do |id, assignment|
                    assignment.link(self, [])
                end
                
            end

            # @macro common_to_s
            def to_s

                result = ""

                @assignments.each do |id, assignment|

                    case assignment.class
                    when DefinedValue, BuiltinValue
                        result << "#{id} #{assignment.governor} ::= #{assignment}"
                    else
                        result << " #{id} ::= #{assignment}"
                    end

                end

                result

            end

        end

    end

end

require 'retro_idl/asn/asn_error'
require 'retro_idl/asn/location'
require "retro_idl/asn/ext_parser"

require 'retro_idl/asn/tag'

require 'retro_idl/asn/builtin_value'
require 'retro_idl/asn/defined_value'
require 'retro_idl/asn/base_type'
require 'retro_idl/asn/component_type'
require 'retro_idl/asn/type_list'
require 'retro_idl/asn/alternative_type'
require 'retro_idl/asn/value_list'
require 'retro_idl/asn/named_number'
require 'retro_idl/asn/enumeration_item'

require 'retro_idl/asn/null'
require 'retro_idl/asn/bitstring'
require 'retro_idl/asn/octetstring'
require 'retro_idl/asn/real'
require 'retro_idl/asn/integer'
require 'retro_idl/asn/enumerated'
require 'retro_idl/asn/boolean'
require 'retro_idl/asn/choice'
require 'retro_idl/asn/sequence'
require 'retro_idl/asn/sequenceof'
