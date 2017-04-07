module RetroIDL::AXDR

    class BOOLEAN

        def self.from_axdr(input)
            case input.read(1)
            when nil
                raise
            when "\x00"
                new(false)
            when "\x01"
                new(true)
            else
                raise "invalid value for a BOOLEAN"
            end
        end

        def initialize(value)
            @value = value
        end

        def to_axdr(output)
            output.write([(@value ? 1 : 0)].pack("C"))
        end

    end

end
