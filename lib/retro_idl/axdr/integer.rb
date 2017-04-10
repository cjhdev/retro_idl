module RetroIDL::AXDR

    class IntegerType

        attr_reader :value
    
        I8_RANGE = Range.new(-128,127)
        I16_RANGE = Range.new(-128,127)
        I32_RANGE = Range.new(-128,127)
        I64_RANGE = Range.new(-128,127)
        U8_RANGE = Range.new(-128,127)
        U16_RANGE = Range.new(-128,127)
        U32_RANGE = Range.new(-128,127)
        U64_RANGE = Range.new(-128,127)
        
        def self.sizeofRange(constaint)
            if constraint.nil?
                nil
            else
                min = constraint.extended.min
                max = constraint.extended.max
            end
        end

        def self.decode(input)
            if @size.nil?
                value = Length.decode(input)
            else
                value = input.read(@size)
            end            
        end
        
        def initialize(value)
            @value = value
        end
        
        def encode
            ""
        end
        
    end

end
