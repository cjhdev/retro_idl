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

=begin
A constraint gives you a set of permitted values, and/or, field sizes

IntegerType:
- permitted values



=end

    class Constraints

        attr_reader :constraints
        
        def initialize(mod, type, constraints)
            @constraints = constraints.inject([]){|out,c|out << Constraint.new(mod, type, c)}            
            @type = type
            @mod = mod
        end

        # @return [Set] root constraint set
        def root
        end

        # @return [Set] extended constraint set
        def extended
        end

        def validate
            @constraints.each{|c|c.validate}
        end
        
    end

    class Constraint

        def initialize(mod, type, opts)

            @root = nil
            @additional = nil
            @mod = mod
            @type = type
            @mod = mod

            @root = ElementSetSpec.new(mod, type, opts[:root])
            @extensible = opts[:extensible]
            if opts[:additional]
                @additional = ElementSetSpec.new(mod, type, opts[:additional])
            end
            
        end

        def validate
            @root.each{|e|e.validate}
            
            @root.each{|e|e.validate}
        end
        
    end

    class ElementSetSpec

        include Enumerable

        def initialize(mod, type, opts)
            @mod = mod
            @top = opts[:top]
            @location = opts[:location]
            @type = type
            @set = opts[:set].inject([]){|out,e|out << RetroIDL.const_get(e[:class]).new(mod, type, e)}
        end

        def each(&block)
            @set.each{|set|block.call(set)}
        end

        def evaluate(value)

            ptr = @set.each
            left = ptr.next.evaluate(value)

            while ptr.peek do

                case ptr.peek
                when EXCEPT
                    left = left or !ptr.next.next.evaluate(value)
                when INTERSECTION
                    left = left ^ ptr.next.next.evaluate(value)
                when UNION
                    left = left or ptr.next.next.evaluate(value)                
                else
                    raise
                end
                
            end

            left

        end
        
    end

    class Element

        def initialize(mod, type, opts)
            @mod = mod
            @type = mod
        end
        
    end

    class SingleValue < Element

        include Comparable

        def <=>(other)
            @value.value == other.value
        end

        def initialize(mod, type, opts)
            @mod = mod
            @location = opts[:location]
            @type = opts[:type]
            #@value = RetroIDL.const_get(opts[:value][:class]).new(mod, opts[:value])                        
            @value = opts[:value]                        
        end

        def validate
            if !@value.represents? @type
                STDERR.puts "#{@location} error: SingleValue constraint value not valid for this type"
            end
            true
        end

    end

    class ValueRange < Element

        include Comparable

        VALID_TYPES = [
            IntegerType,
            RealType,
            VisibleStringType
        ]

        def <=>(other)
            Range.new(@upper, @lower) == other
        end

        def initialize(mod, type, opts)
            @location = opts[:location]
            @type = type
            #@upper = RetroIDL.const_get(opts[:upper][:class]).new(mod, opts[:upper])
            #@lower = RetroIDL.const_get(opts[:lower][:class]).new(mod, opts[:lower])
            @upper = opts[:upper]
            @lower = opts[:lower]
            @mod = mod
        end

        def evaluate(value)
            Range.new(@lower.value, @upper.value).include? value
        end

        def validate

            if !VALID_TYPES.include? @type.type
                STDERR.puts "#{@location} error: ValueRange constraint not valid for this type"
                raise            
            end

            true

        end
        
    end

    class SizeConstraint < Element

        VALID_TYPES = [
            BitStringType,
            OctetStringType,
            VisibleStringType,
            SequenceOfType,
            SetOfType
        ]

        def initialize(mod, type, opts)
            @location = opts[:location]
            @type = opts[:type]
            @constraint = Constraint.new(mod, @type, opts[:constraint])
            @mod = mod
        end

        def validate
            if !VALID_TYPES.include? @type.type
                STDERR.puts "#{@location} error: ValueRange constraint not valid for this type"
                raise            
            end
            
        end

    end

    class UNION < Element
    end

    class ALL < Element

        # @macro common_to_s
        def to_s
            " ALL "
        end
        def evaluate(value)
            true
        end
    end

    class INTERSECTION < Element
    end

    class EXCEPT < Element
    end

end
