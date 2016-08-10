
class ATTN::ASN::ValueAssignment

    def initialize(**opts)

        @parent = parent
        @location = opts[:location]
        @mod = nil
        @id = opts[:id]
        @governor = ATTN::ASN.const_get(opts[:governor][:class]).new(**opts[:governor])
        @value = ATTN::ASN.const_get(opts[:value][:class]).new(**opts[:governor])

        if !ATTN::ASN.is_identifier?(@location, @id)
            raise ASNError                    
        end

    end
    
end


