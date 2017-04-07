module RetroIDL::PER

    class LengthDeterminant

        # @param size [Integer]
        # @return [Integer] byte length to encode size
        def self.unsignedDefiniteSize(value)
            if value >= 0
                if value < 0x80
                    return 1
                else
                    max = 0x100
                    bytes = 2
                    loop do
                        if value < max
                            return bytes
                        end
                        bytes += 1
                        max = max << 8
                    end
                end
            else
                raise ArgumentError.new "value must be unsigned"
            end
        end

        # @param value [Integer] unsigned integer
        # @return [String] value encoded as definite length field
        def self.putUnsignedDefinite(value)
            putDefinite(value, unsignedDefiniteSize(value))
        end

        # @param value [Integer] signed or unsigned integer
        # @param bytes [Integer] byte size of value
        # @return [String] value encoded as definite length field
        def self.putDefinite(value, bytes)

            out = Array.new(bytes)
            if bytes == 1
                out[0] = size
            else
                out.each_with_index do |v,i|
                    if i == 0
                        out[i] = 0x80 + bytes - 1
                    else
                        out[i] = size >> ((bytes - i - 1)*8)
                    end
                end
            end
            out.pack("C#{bytes}")
        end

        def self.put(length)
            self.putDefinite
        end

        
    
    end
end
