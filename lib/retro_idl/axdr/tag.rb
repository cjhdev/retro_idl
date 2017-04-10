module RetroIDL::AXDR

    class Tag
        attr_reader :value
        def self.decode(input)
            self.new(input.read(1).unpack("C"))
        end
        def initialize(value)
            @value = value
        end
        def encode
            [@value].pack("C")
        end       
    end

end
