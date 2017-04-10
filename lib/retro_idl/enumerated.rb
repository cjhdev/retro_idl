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

# X.680 section 20
module RetroIDL

    class EnumeratedType < BaseType

        TAG_CLASS_NUMBER = 10
        TAG_CLASS = :universal

        attr_reader :exception

        def symbolToValue(symbol)
            if !(result = @root.list[symbol])
                if !(result = @additional.list[symbol])
                    raise RangeError.new "symbol 'symbol' is not in root or additional definitions"
                end
            end
            result                
        end

        def valueToSymbol(value)
            if !(result = @root.list.key(value))
                if !(result = @additional.list.key(value))
                    raise RangeError.new "value is not in root or additional"
                end
            end
            result
        end

        def symbols
            [@root.list.keys, @additional.list.keys].flatten
        end

        def initialize(mod, opts)

            super(mod, opts)

            errors = false

            @exception = opts[:exception]
            @extensible = opts[:extensible]
            @additional = nil

            begin

            @root = ValueList.new(mod, opts[:root], EnumerationItem)

            rescue ASNError

            errors = true
            
            end

            if opts[:additional]

                begin

                @additional = ValueList.new(mod, opts[:additional], EnumerationItem)

                rescue ASNError

                errors = true

                end

                if @additional

                    @additional.list.each do |id, item|

                        if @root.list.keys.include? id

                            ASN.putError(item.location, "duplicate EnumerationItem")
                            errors = true

                        end

                    end

                end

            else

                @additional = ValueList.new(mod, [], EnumerationItem)

            end

            raise ASNError.new if errors

        end

    end

end
