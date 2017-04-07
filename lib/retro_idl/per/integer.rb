module RetroIDL::PER

    class RetroIDL::ASN::INTEGER

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

        # @param value [Integer]
        # @return [Integer] bytes required to encode value as twos complement using definite length encoding
        def self.twosComplementDefiniteSize(value)
            out = ""
            if value >= 0
                if value < 0x40
                    return 1
                else
                    bytes = 2
                    max = 0x80
                    loop do
                        if value < max
                            return bytes
                        end
                        bytes += 1
                        max = max << 8
                    end
                end
            else
                if value >= -64
                    return 1
                else
                    min = -128
                    bytes = 2
                    loop do
                        if value >= min
                            return bytes
                        end
                        bytes += 1
                        min = min << 8
                    end
                end
            end            
        end

        # @param value [Integer] signed integer
        # @return [String] value encoded as definite length field
        def self.putTwosComplementDefinite(value)
            putDefinite(value, twosComplementDefiniteSize(value))
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

        # @param input [String]
        # @return [Integer] decoded size
        # @raise [AXDRError]
        def self.getUnsignedDefinite!(input)

            begin

                value = 0
                lead = input.slice!(0).unpack("C").first

                if lead.nil? or lead == 0x80
                    raise
                elsif lead < 0x80
                    value = lead
                else
                    input.slice!(0, lead & 0x7f).unpack("C#{lead & 0x7f}").each do |v|
                        if v.nil?
                            raise
                        end
                        value = (value << 8) | v            
                    end
                end

            rescue
                raise
            end
            value                            
        end

        def self.getTwosComplementDefinite!(input)
            value = getUnsignedDefinite!(input)
            top = 0x1 << ((value.size * 8) - 1)
            val = ((top - 1) & value) - top

            if ((value & top) == top)
                val
            
            

            i = value.size.downto(0)
            first = i.next
            if first
            
        end

        

        def encode(value)

            if @constraint
                ""
            else
                putTwosComplementDefinite(value)                            
            end            
        end

        private

            
    
    end

end
