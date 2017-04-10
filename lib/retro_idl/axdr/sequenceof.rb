module RetroIDL::AXDR

    class SequenceOfType
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
            value = []
            while value.size < length.size
                value << @value.decode(input)
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
            @value.each do |v|
                out << v.encode
            end  
        end               
    end

end

