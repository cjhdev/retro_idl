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
class RetroIDL::ASN::ENUMERATED < BaseType

    TAG_CLASS_NUMBER = 10
    TAG_CLASS = :universal

    def initialize(**opts)

        super(**opts)

        errors = false
        
        @exception = opts[:exception]
        @extensible = opts[:extensible]
        @additional = nil

        begin

        @root = ValueList.new(opts[:root], EnumerationItem)

        rescue ASNError

        errors = true
        
        end

        if opts[:additional]

            begin

            @additional = ValueList.new(opts[:additional], EnumerationItem)

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

        end

        if errors

            raise ASNError.new

        end
        
    end

    # @macro common_link
    def link(mod, stack)

        if @mod.nil? or @mod != mod

            @mod = nil

            if @root.link(mod, stack)

                if @additional.nil? or @additional.link(mod, stack)
                
                    super(mod, stack)

                end
                
            end

        end

        @mod
        
    end

    # @macro common_to_s
    def to_s

        result = "#{@tag} ENUMERATED { #{@root} "

        if @extensible

            result << ", ... "

        end

        result << "} #{@constraint}"

    end

    def evaluate(value)

        false

    end
    
end
