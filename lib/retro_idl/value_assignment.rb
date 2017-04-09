
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

        def self.===(otherClass)
            self == otherClass
        end
           
    end

end
