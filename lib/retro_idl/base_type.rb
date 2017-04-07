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

    class BaseType

        attr_reader :id, :tag, :location

        # Common type object initialisation
        #
        # @param mod [MODULE] module this type instance belongs to
        # @param opts [Hash]
        #
        # @option opts [String, NilClass] :id object identifer or type reference (nil for anon objects)
        # @option opts [Location] :location
        # @option opts [Hash] :tag
        #
        # @raise [ASNError]
        #
        def initialize(mod, opts)

            @mod = mod
            @tag = ( opts[:tag] ? Tag.new(mod, opts[:tag]) : nil )
            @id = opts[:id].freeze
            @location = opts[:location].freeze
            @constraint = nil
            
        end
        
        def self.===(otherClass)
            self == otherClass                
        end

    end

end
