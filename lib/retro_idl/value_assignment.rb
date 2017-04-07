
module RetroIDL

    class ValueAssignment

        attr_reader :governor, :id, :value, :location

        def initialize(mod, opts)
            @value = opts[:value]
            @location = opts[:location]
            @mod = mod
            @id = opts[:id]
            @governor = RetroIDL.const_get(opts[:governor][:class]).new(mod, opts[:governor])            
        end

        # @macro common_link
        def link(mod, stack)

            if @mod.nil? or @mod != mod

                @mod = nil

                if @governor.link(mod, stack.push(self))

                    if @governor.evaluate(@value)

                        @mod = mod

                    else

                        ASN.putError(@location, "evaluate didn't work")
                        
                    end

                end

            else

                @mod

            end
            
        end

        def self.===(otherClass)

            if self == otherClass

                true

            else

                false

            end

        end

        
    end

end
