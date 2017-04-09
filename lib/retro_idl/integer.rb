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

    # X.680 section 19
    class INTEGER < BaseType

        TAG_CLASS_NUMBER = 2
        TAG_CLASS = :universal

        attr_reader :numberList

        # @see BaseType#initialize
        #
        # @param opts [Hash]
        #
        # @option opts [Array<Hash>] :numberList NamedNumberList
        #
        # @raise [ASNError]
        #
        def initialize(mod, opts)
            super(mod, opts)
            @numberList = nil
            if opts[:numberList]
                @numberList = ValueList.new(mod, opts[:numberList], NamedNumber)
            end
        end

    end

end