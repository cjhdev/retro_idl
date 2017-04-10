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

    LINK_ERROR = "object must be linked"
    SYMBOL_UNDEFINED_ERROR = "symbol is undefined"

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
        result

    end

    def self.putError(location, message)
        STDERR.puts "#{location}: error: #{message}"
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
        result
    end

    class ASN

        def self.read(*filename)
            input = []
            if filename.size > 0
                filename.each do |f|
                    input << {:buffer => File.read(f), :filename => f}
                end
                self.new(*input)
            else
                raise ArgumentError.new "at least one file required"                
            end
        end

        def mods
            @mods.values
        end

        def initialize(*buffer)

            errors = false

            @crefs = []            
            tree = []

            if buffer.size > 0
                buffer.each do |b|
                    if b.kind_of? String
                        tree << parse_file_buffer(b, nil)
                    else
                        tree << parse_file_buffer(b[:buffer], b[:filename])
                    end
                end                
            else
                raise ArgumentError.new "at least one buffer required"
            end

            tree = tree.flatten
            @crefs = nil

            @mods = {}

            tree.each do |mod|

                if @mods[mod[:id]]
                    ASN.putError(mod[:location], "duplicate module")
                    errors = true
                    next                    
                end

                begin
                    @mods[mod[:id]] = MODULE.new(@mods, mod)
                rescue ASNError
                    errors = true
                end

            end

            # maybe exercise links here
            
            raise ASNError if errors
            
        end

    end


end

require 'retro_idl/asn_error'
require "retro_idl/ext_parser"

require 'retro_idl/tag'

require 'retro_idl/base_value'
require 'retro_idl/defined_value'
require 'retro_idl/value_assignment'
require 'retro_idl/base_type'
require 'retro_idl/component_type'
require 'retro_idl/type_list'
require 'retro_idl/alternative_type'
require 'retro_idl/value_list'
require 'retro_idl/named_number'
require 'retro_idl/enumeration_item'
require 'retro_idl/defined_type'


require 'retro_idl/null'
require 'retro_idl/bitstring'
require 'retro_idl/octetstring'
require 'retro_idl/graphicstring'
require 'retro_idl/visiblestring'
require 'retro_idl/utf8string'
require 'retro_idl/real'
require 'retro_idl/integer'
require 'retro_idl/enumerated'
require 'retro_idl/boolean'
require 'retro_idl/choice'
require 'retro_idl/sequence'
require 'retro_idl/sequenceof'
require 'retro_idl/setof'
require 'retro_idl/set'

require 'retro_idl/constraint'

require 'retro_idl/module'


