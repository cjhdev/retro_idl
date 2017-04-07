module RetroIDL
    
    class TypeAssignment

        def initalize(**opts)
            begin
                @assignments[assignment[:id]] = RetroIDL.const_get(assignment[:class]).new(**assignment)                            
            rescue ASNError
                errors = true        
            end
        end
        
    end

end
