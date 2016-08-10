
class RetroIDL::ASN::ValueAssignment

    def initialize(**opts)

        @parent = parent
        @location = opts[:location]
        @mod = nil
        @id = opts[:id]
        @governor = RetroIDL::ASN.const_get(opts[:governor][:class]).new(**opts[:governor])
        @value = RetroIDL::ASN.const_get(opts[:value][:class]).new(**opts[:governor])

        if !RetroIDL::ASN.is_identifier?(@location, @id)
            raise ASNError                    
        end

    end
    
end


