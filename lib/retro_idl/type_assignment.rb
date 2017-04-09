module RetroIDL
    
    class TypeAssignment

        def initalize(mod, opts)
            begin
                @assignments[assignment[:id]] = RetroIDL.const_get(assignment[:class]).new(mod, assignment)                            
            rescue ASNError
                errors = true        
            end
        end
        
    end

end
