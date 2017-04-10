module RetroIDL
    module AXDR
        class Model
    
            def initialize(asn, **opts)

                @except = opts[:except]||[]
            
                @asn = asn

                @types = {}

                @asn.mods.each do |mod|

                    mod.types.each do |type|

                        next if @except.include? type.id

                        @types[type.id] = Class.new(AXDR.const_get(type.type)) do
                            @type = type
                        end

                    end
                end

            end

            def type(id)
                @types[id]
            end

            private

                def _model_type(type)
                    klass = AXDR.const_get(type.type)
                
                    case klass
                    when CHOICE
                        alternatives = 
                        Class.new(klass) do

                        end
                    when OCTETSTRING, VisibleString
                        
                    when INTEGER
                        values = type.constraints.values
                        Class.new(AXDR.const_get(type.type)) do
                            @type = type
                            @values = values
                        end
                            
                        
                        
                    else
                        Class.new(AXDR.const_get(type.type)) do
                            @type = type
                        end
                    end
                end

        end
    end
end

require 'retro_idl/axdr/length'
require 'retro_idl/axdr/integer'
require 'retro_idl/axdr/tag'

require 'retro_idl/axdr/null'
require 'retro_idl/axdr/enumerated'
require 'retro_idl/axdr/boolean'
require 'retro_idl/axdr/octetstring'
require 'retro_idl/axdr/visiblestring'
require 'retro_idl/axdr/sequence'
require 'retro_idl/axdr/sequenceof'
require 'retro_idl/axdr/enumerated'
require 'retro_idl/axdr/bitstring'
require 'retro_idl/axdr/choice'

