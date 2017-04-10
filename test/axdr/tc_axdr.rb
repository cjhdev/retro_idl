require "test/unit"
require 'retro_idl'

class TestAXDRModel < Test::Unit::TestCase

    include RetroIDL

    def setup

        @asn = RetroIDL::ASN.read(File.expand_path(File.join(File.dirname(__FILE__), "..", "input", "pos_dlms_pdu.asn1")))
        
    end

    def test_model

        excepts = [
            'AARQ',
            'AARE-apdu',
            'RLRQ-apdu',
            'RLRE-apdu',
            'Application-context-name',
            'AP-title',
            'AE-qualifier',
            'AP-invocation-identifier',
            'AE-invocation-identifier',
            'ACSE-requirements',
            'Mechanism-name',
            'Authentication-value',
            'Implementation-data',
            'Association-information',
            'Association-result',
            'Associate-source-diagnostic',
            'Release-request-reason',
            'Release-response-reason'
        ]

        AXDR::Model.new(@asn, :except => excepts)
    
    end

end
