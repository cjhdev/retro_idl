module RetroIDL::AXDR

    class OctetStringType
        
        def self.min
            @min
        end
        def self.max
            @max
        end
        attr_reader :value
        def self.decode(input)
            if @min and @max and @min == @max
                length = @min
            else
                length = Length.decode(input)
            end
            if length.size > 0
                value = input.read(length.value)
                if value.size != length.value
                    raise "EOF"
                end
            else
                value = ""            
            end
            self.new(value)
        end
        def initialize(value)
            @value = value
        end
        def encode
            out = ""
            if self.class.min and self.class.max and self.class.min == self.class.max
                out << Length.new(@value.size).encode
            end
            out << @value        
        end               
    end

end
