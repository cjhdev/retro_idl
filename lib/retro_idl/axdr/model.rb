module RetroIDL
    module AXDR
        class Model
    
            def initialize(schema)
                @schema
            end


            private

                def _boolean(type)
                    Class.new(BOOLEAN) do                        
                    end
                end

                def _integer(type)
                    Class.new(INTEGER) do
                        @min = type.min
                        @max = type.max
                    end
                end            
        
        end
    end
end

require 'axdr/boolean'
