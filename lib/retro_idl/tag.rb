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

    # X.680 section 31.2
    class Tag

        attr_reader :tagClass, :location, :tagType

        def initialize(mod, opts)

            

            @mod = mod
            @symbol = nil
            @tagClass = opts[:class]
            @location = opts[:location].freeze
            @tagType = opts[:type]
            
            if opts[:classNumber].is_a? String            
                if RetroIDL.is_identifier?(@location, opts[:classNumber])
                    @symbol = opts[:classNumber].to_s
                else
                    raise ASNError
                end
            else
                @tagClassNumber = opts[:classNumber].to_i
                if @tagClassNumber < 0
                    ASN.putError(@location, "ClassNumber must be an integer >= 0")                
                end            
            end

        end

        # Return the tag ClassNumber
        #
        # @return [Integer] ClassNumber
        #
        # @raise [ASNError] tag has not been linked
        #
        def tagClassNumber            
            if @symbol
                @symbol.value
            else
                @tagClassNumber
            end
        end
    end

end
