module RetroIDL::AXDR

    class ChoiceType

        attr_reader :value
        def self.decode(input)
            tag = Tag.decode(input)
            
        end
        def initialize(value)
            @value = value
        end
        def encode
            
        end
        
    end

end
