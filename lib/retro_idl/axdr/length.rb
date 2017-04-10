module RetroIDL::AXDR

    class Length
        
        attr_reader :value

        def self.byteSize(value)
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
        end
        
        def self.decode(input)
            begin

                size = 0
                lead = input.read(1).unpack("C").first

                if lead.nil? or lead == 0x80
                    raise AXDRError
                elsif lead < 0x80
                    size = lead
                else
                    input.read(lead & 0x7f).unpack("C#{lead & 0x7f}").each do |v|
                        size = (size << 8) | v            
                    end
                end

            rescue
                raise AXDRError
            end

            self.new(size)
            
        end
        
        def initialize(value)
            if value.nil?
                raise
            end
            @value = value
        end

        def encode
            bytes = self.class.byteSize(@value)
            out = ::Array.new(bytes)

            if bytes == 1
                out[0] = value
            else
                out.each_with_index do |v,i|
                    if i == 0
                        out[i] = 0x80 + bytes - 1
                    else
                        out[i] = value >> ((bytes - i - 1)*8)
                    end
                end
            end

            out.pack("C#{bytes}")
        end
    end
end
