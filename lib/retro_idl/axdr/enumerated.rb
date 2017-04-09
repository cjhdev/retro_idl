module RetroIDL::AXDR

    class ENUMERATED < INTEGER

        def self.type
            @type
        end        
        attr_reader :value
        def self.decode(input)
            self.new(@type.valueToSymbol(input.read(1).unpack("C")))
        end
        def initialize(value)
            raise ArgumentError if self.class.type.symbols.include? value
            @value = value
        end
        def encode
            [self.class.type.symbolToValue(value)].pack("C")
        end

    end

end
