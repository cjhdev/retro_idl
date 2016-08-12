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

module RetroIDL::ASN

    class BaseType

        attr_reader :id        

        # Common type object initialisation
        #
        # @param opts [Hash]
        #
        # @option opts [String, NilClass] :id object identifer or type reference (nil for anon objects)
        # @option opts [Location] :location
        # @option opts [Hash] :tag
        #
        # @raise [ASNError]
        #
        def initialize(**opts)

            @mod = nil
            @tag = nil
            @id = opts[:id]
            @location = opts[:location]
            @constraint = nil

            if opts[:tag]
                @tag = Tag.new(**opts[:tag])
            end
            if opts[:constraints]
                @constraint = Constraints.new(opts[:constraints])            
            end 

        end
        
        # @macro common_link
        def link(mod, stack)

            if @mod.nil? or @mod != mod
                @mod = nil                
                if @tag.nil? or @tag.link(mod, [])
                    @mod = mod
                    stack.push self                    
                end
            else
                @mod
            end

        end

        def self.===(otherClass)
            if self == otherClass
                true
            else
                false
            end
        end

    end

end
