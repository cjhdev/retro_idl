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

    # X.680 section 13
    class MODULE

        attr_reader :id

        def assignments
            @assignments.values
        end

        def types
            @assignments.values.select{|a|a.kind_of? BaseType}
        end

        def values
            @assignments.values.select{|a|a.kind_of? BaseValue}
        end

        def resolve(id)
            result = @assignments[id]
            raise RangeError.new("id '#{id}' does not resolve") if result.nil?
            result
        end

        def initialize(mods, attr)

            errors = false
            @id = attr[:id]
            @assignments = {}
            @mods = mods
            
            attr[:assignments].each do |assignment|
                if @assignments[assignment[:id]]
                    ASN.putError(assignment[:location], "duplicate assignment")
                    errors = true
                    next
                end

                begin
                    @assignments[assignment[:id]] = RetroIDL.const_get(assignment[:class]).new(self, assignment)                         
                rescue ASNError
                    errors = true        
                end
            end

            if errors
                raise ASNError.new
            end

        end

    end

end
