module RetroIDL::AXDR

    class BooleanType

        attr_reader :value
        def self.decode(input)
            case input.read(1).unpack("C")
            when 0
                self.new(false)
            when 0xff
                self.new(true)
            else
                raise "invalid boolean value"
            end                   
        end
        def initialize(value)
            case value
            when 0, nil, false
                @value = false
            else
                @value = true
            end
        end
        def encode
            [(@value ? 0xff : 0)].pack("C")
        end

    end

end
