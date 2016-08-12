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

module RetroIDL::ASN

    class Constraints
        
        def initialize(type, constraints)

            @constraints = []
            @type = type
            constraints.each do |c|
                @constraints << Constraint.new(type, **c)
            end            
        end

        # @macro common_to_s
        def to_s
            @constraints.inject("") do |acc, c|
                acc << c.to_s
            end
        end

        def evaluate(value)
            @constraint.each do |c|
                if !c.evaluate(value)
                    return false
                end                    
            end
        end
        
    end

    class Constraint

        def initialize(type, **opts)

            @root = nil
            @additional = nil
            @mod = nil
            @type = type

            @root = ElementSetSpec.new(type, **opts[:root])
            @extensible = opts[:extensible]
            if opts[:additional]
                @additional = ElementSetSpec.new(type, **opts[:additional])
            end
            
        end

        def evaluate(value)
            @root.evaluate(value) or ( @additional and @additional.evaluate )
        end

        # @macro common_link
        def link(mod, stack)

            if @mod.nil? or @mod != mod
                @mod = nil
                @root.each do |element|
                    elem.link(@mod, [])
                end
            else
                @mod
            end

        end

        # @macro common_to_s
        def to_s
            if @extensible
                if @additional
                    "( #{@root}, ... , #{@additional} )"
                else
                    "( #{@root}, ... )"
                end
            else
                "( #{@root} )"
            end
        end

    end

    class ElementSetSpec

        def initialize(type, **opts)
            @set = []
            @top = opts[:top]
            @location = opts[:location]
            @type = type
            opts[:set].each do |element|
                @set << RetroIDL::ASN.const_get(element[:class]).new(type, **element)
            end            
        end

        # @macro common_to_s
        def to_s
            if @top
                @set.inject(""){|acc,e|acc<<e.to_s}
            else
                "(#{@set.inject(""){|acc,e|acc<<e.to_s}})"
            end
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
        def initialize(type, **opts)
        end
    end

    class SingleValue < Element

        def initialize(type, **opts)
            @location = opts[:location]
            @type = opts[:type]
            @value = RetroIDL::ASN.const_get(opts[:value][:class]).new(**opts[:value])                        
        end

        def link(mod, stack)
            if @mod.nil? or @mod != mod
                @mod = nil
                if @value.link(mod, stack) == mod
                    if @parent.evaluate(@value)
                        @mod = mod
                    end
                end
            end
        end

        # @macro common_to_s
        def to_s
            "#{@value}"            
        end

        def evaluate(value)
            value == @value.value
        end

    end

    class ValueRange < Element

        def initialize(type, **opts)
            @location = opts[:location]
            @type = opts[:type]

            @upper = RetroIDL::ASN.const_get(opts[:upper][:class]).new(**opts[:upper])
            @lower = RetroIDL::ASN.const_get(opts[:lower][:class]).new(**opts[:lower])            
            
    
        end

        def link(mod, stack)
            
            if @mod.nil? or @mod != mod
                @mod = nil
                if @upper.link(mod, stack) == mod
                    if @lower.link(mod, stack) == mod
                        if @parent.evaluate(@upper) and @parent.evaluate(@lower)
                            @mod = mod
                        end
                    end
                end
            end
            @mod
            
        end

        # @macro common_to_s
        def to_s
            "#{@lower} .. #{@upper}"
        end

        def evaluate(value)
            Range.new(@lower.value, @upper.value).include? value
        end
        
    end

    class SizeConstraint < Element

        def initialize(type, **opts)
            @location = opts[:location]
            @type = opts[:type]
            opts[:constraint][:type] = @type
            @constraint = Constraint.new(@type, **opts[:constraint])        
        end

        def link(mod)
            @constraint.link(mod)
        end

        # @macro common_to_s
        def to_s
            "SIZE #{@constraint}"                
        end

    end

    class UNION < Element

        # @macro common_to_s
        def to_s
            " | "
        end
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

        # @macro common_to_s
        def to_s
            " ^ "
        end
    end

    class EXCEPT < Element
        def to_s
            " EXCEPT "
        end
    end

end
