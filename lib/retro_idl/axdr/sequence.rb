module RetroIDL::AXDR

    class SequenceType

        attr_reader :value
        def self.decode(input)
            value = {}
            @type.root.each do |member|
                value[member.id] = member.decode(input)
            end
        end
        def initialize(value)
            @value = value
        end
        def encode
            
        end
        

    end

end
