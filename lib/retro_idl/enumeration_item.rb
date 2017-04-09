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

    # An item within an ENUMERATED type
    #
    # X.680 section 20
    class EnumerationItem

        attr_reader :location, :id
        
        def initialize(mod, opts)

            @id = opts[:id].freeze
            @location = opts[:location].freeze
            @mod = mod
            @symbol = nil
            @number = nil
            
            if RetroIDL.is_identifier?(@location, @id)
                if opts[:number]
                    if opts[:number].is_a? String
                        @symbol = opts[:number].freeze
                    else
                        @number = opts[:number].to_i
                    end
                end
            else
                raise ASNError
            end                

        end

        def number
            if @symbol
                value = mod.resolve(@symbol)
                if !value.kind_of? BaseValue or value.governor.type != 'INTEGER'
                    raise ASNError.new "EnumerationItem#number must return an INTEGER value"
                end
                value.value
            else
                @number
            end                
        end

    end

end
