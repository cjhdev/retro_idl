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

=begin
                def _model_type(type)
                    klass = AXDR.const_get(type.type)                
                    case klass
                    when CHOICE
                        alternatives = 
                        Class.new(klass) do

                        end
                    when OCTETSTRING, VisibleString
                        if type.constraint
                            min = type.constraint.extended.minSize
                            max = type.constraint.extended.maxSize                                                    
                        else
                            min = nil
                            max = nil
                        end
                        Class.new(AXDR.const_get(type.type)) do
                            @min = min
                            @max = max                            
                        end

                    when INTEGER
                        if type.constraint
                            min = type.constraint.root.minValue
                            max = type.constraint.root.maxValue
                        else
                            min = nil
                            max = nil
                        end 
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
=end
            

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

