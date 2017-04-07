module RetroIDL::PER

    class RetroIDL::ASN::BOOLEAN

        def encode(value)
            [(value) ? 0x1 : 0x0].pack("C")
        end
    
    end

end
