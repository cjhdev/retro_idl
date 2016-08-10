# reduce a crazy syntax into a set of ranges and values (for an integer)
# or for a size constraint...
#
#

class ATTN::ASN::Constraint

    def initialize(**opts)

        @location = opts[:location]
        @root = []
        @mod = nil

        opts[:rootElementSetSpec].each do |element|
            @root << ATTN::ASN.const_get(element[:class]).new(parent, element)
        end
        
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

    def to_s

        out = "( "    
        @root.each do |element|
            puts element.class
            out << element.to_s
        end
        out << " )"

    end

end

class Element

    def initialize(parent, opts)
        @parent = parent
        @location = opts[:location]                                
    end

    def link(mod, stack)                
    end

end

class SingleValue < Element

    def initialize(parent, opts)

        super
        @value = ATTN::ASN.const_get(opts[:value][:class]).new(opts[:value])

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

    def to_s
        "#{@value}"            
    end

end

class ValueRange < Element

    def initialize(**opts)

        super
        @upper = ATTN::ASN.const_get(opts[:upper][:class]).new(opts[:upper])
        @lower = ATTN::ASN.const_get(opts[:lower][:class]).new(opts[:lower])
        
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
    end

    def to_s
        "#{@lower} ... #{@upper}"
    end
    
end

class SizeConstraint < Element

    def initialize(**opts)

        super
        @constraint = Constraint.new(self, opts[:constraint])
    
    end

    def link(mod)
        @constraint.link(mod)
    end

    def to_s
        "SIZE #{@constraint}"                
    end

    def evaluate

        if @parent.class 

    end

end

class UnionMark < Element
    def to_s
        "|"
    end
end

class ALL < Element
    def to_s
        "ALL"
    end        
end

class IntersectionMark < Element
    def to_s
        "^"
    end
end

class EXCEPT < Element
    def to_s
        "EXCEPT"
    end
end
