module RetroIDL::AXDR

    class NullType

        attr_reader :value
        def self.decode(input)
            self.new
        end
        def initialize
            @value = nil            
        end
        def encode
            ""
        end

    end

end
