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

class ATTN::ASN::NamedNumber

    def initialize(**opts)

        @id = opts[:id].to_s
        @location = opts[:location]
        @mod = nil
        @number = nil
        @symbol = nil
        
        if ATTN::ASN.is_identifier?(@location, @id)
            if opts[:number].is_a? String
                @symbol = opts[:number].to_s            
            else
                @number = opts[:number].to_i
            end
        else
            raise ASNError
        end

    end

    def link(mod, stack)

        if @mod.nil? or @mod != mod

            @mod = nil

            if @symbol

                if mod.symbols(@symbol)

                    @mod = mod

                end

            else

                @mod = mod

            end

        else

            @mod

        end

    end


    # @macro common_to_s
    def to_s

        if @symbol        
            "#{@id} (#{@symbol})"
        else
            "#{@id} (#{@number})"
        end

    end

end

