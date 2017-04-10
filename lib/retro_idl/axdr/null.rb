module RetroIDL::AXDR

    class NULL

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
