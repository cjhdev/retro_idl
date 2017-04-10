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

    class ChoiceType < BaseType

        def initialize(mod, opts)

            super(mod, opts)

            errors = false

            @exception = opts[:exception]
            @extensible = opts[:extensible]
            @additional = nil

            @root = TypeList.new(mod, opts[:root], AlternativeType)

            if opts[:additional]

                @additional = TypeList.new(mod, opts[:additional], AlternativeType)

                @additional.list.each do |id, item|
                    if @root.list.keys.include? id
                        ASN.putError(item.location, "duplicate EnumerationItem")
                        errors = true
                    end
                end

            end

            if errors
                raise ASNError
            end

        end

    end

end
