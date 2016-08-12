# reduce a crazy syntax into a set of ranges and values (for an integer)
# or for a size constraint...
#
#

module RetroIDL::ASN

    class Constraint

        def initialize(**opts)

            @root = []
            @mod = nil

            opts[:rootElementSetSpec].each do |element|
                @root << RetroIDL::ASN.const_get(element[:class]).new(**element)
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
            "( #{@root.inject(""){|acc,e|acc<<e.to_s}} )"                
        end

    end

    class Element

        def initialize(**opts)
            @location = opts[:location]                                
        end

        def link(mod, stack)                
        end

    end

    class SingleValue < Element

        def initialize(**opts)
            super(**opts)
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

        def to_s
            "#{@value}"            
        end

    end

    class ValueRange < Element

        def initialize(**opts)

            super(**opts)
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

        def to_s
            "#{@lower} .. #{@upper}"
        end
        
    end

    class SizeConstraint < Element

        def initialize(**opts)
            super(**opts)
            @constraint = Constraint.new(**opts[:constraint])        
        end

        def link(mod)
            @constraint.link(mod)
        end

        def to_s
            "SIZE #{@constraint}"                
        end

        def evaluate
        end

    end

    class UNION < Element
        def to_s
            " | "
        end
    end

    class ALL < Element
        def to_s
            " ALL "
        end        
    end

    class INTERSECTION < Element
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
