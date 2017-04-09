
module  RetroIDL

    class BITSTRING < BaseType

        TAG_CLASS_NUMBER = 3
        TAG_CLASS = :universal

        attr_reader :bitList

        def initialize(mod, opts)

            super(mod, opts)
            @bitList = nil
            if opts[:bitList]
                @bitList = ValueList.new(mod, opts[:bitList], NamedNumber)
            end

        end
    
    end

end

