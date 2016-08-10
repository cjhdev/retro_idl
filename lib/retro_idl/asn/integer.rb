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


# X.680 section 19
class RetroIDL::ASN::INTEGER < BaseType

    TAG_CLASS_NUMBER = 2
    TAG_CLASS = :universal

    # @see BaseType#initialize
    #
    # @param opts [Hash]
    #
    # @option opts [Array<Hash>] :numberList NamedNumberList
    #
    # @raise [ASNError]
    #
    def initialize(**opts)
        super(**opts)
        @numberList = nil
        if opts[:numberList]
            @numberList = ValueList.new(opts[:numberList], NamedNumber)
        end
    end

    # @macro common_link
    def link(mod, stack)

        if @mod.nil? or @mod != mod

            @mod = nil

            if @numberList.nil? or @numberList.link(mod, [])

                super(mod, stack)

            end

        end

        @mod

    end
    
    # @macro common_to_s
    def to_s

        result = "#{@tag} INTEGER"
        if @numberList
            result << @numberList.to_s
        end
        result << " #{@constraint}"

    end

    # @macro common_evaluate
    def evaluate(value)
        value.kind_of?(Integer)
    end

    def evaluateConstraint(value)
        if evaluate(value) and ( @constrant.nil? or @constraint.evaluate(value) )
            true
        end
    end

end
