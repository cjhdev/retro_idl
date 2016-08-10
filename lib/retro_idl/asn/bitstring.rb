
module  RetroIDL::ASN

    class BITSTRING < BaseType

        TAG_CLASS_NUMBER = 3
        TAG_CLASS = :universal

        def initialize(**opts)

            super(**opts)
            @bitList = nil
            if opts[:bitList]
                @bitList = ValueList.new(opts[:bitList], NamedNumber)
            end

        end

        # @macro common_link
        def link(mod, stack)

            if @mod.nil? or @mod != mod
                @mod = nil
                if @bitList.nil? or @bitList.link(mod, [])
                    super(mod, stack)
                end
            else
                @mod
            end
            
        end

        # @macro common_to_s
        def to_s

            result = "#{@tag} BIT STRING"
            if @bitList
                result << @bitList.to_s
            end
            result << " #{@constraint}"
            
        end
            
    end

end

