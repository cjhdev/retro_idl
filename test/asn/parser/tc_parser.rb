require_relative "capture_stderr"
require "test/unit"
require "attn"

inputs = {}
root = "../test/asn/input"

# generate TestParser at runtime with one test per input file
testClass = Class.new(Test::Unit::TestCase) do

    class << self

        attr_accessor :inputs

    end

    Dir.foreach(root) do |filename|

        next if filename == ".." or filename == "."

        test_name = "test_#{filename.sub(".asn1", "")}"
        inputs[test_name.to_sym] = {:fileName => filename, :buffer => File.new("#{root}/#{filename}", "r").read}

        # positive tests
        if filename[/^pos_.*\.asn1$/]

            define_method( test_name ) do

                output = nil

                # run stage 1 and intercept stderr output
                err = capture_stderr do

                    output = AASN1::ASN::ASN.new(inputs[__method__])
                
                end

                # there should have been no messages to stderr
                assert_equal("", err.string, "unexpected error messages")

                # if there were messages, forward them to stderr
                if err.string != ""

                    STDERR.puts err.string

                end

                puts output.to_s

            end

        end

        # negative tests
        if filename[/^neg_.*\.asn1$/]

            define_method( test_name ) do

                # run stage 1 and intercept stderr output
                err = capture_stderr do

                    output = AASN1::ASN::ASN.new(inputs[__method__])
                
                end

                # there should have been some messages to stderr
                assert_not_equal("", err.string, "expecting error messages but got none")

                # if there were messages, forward them to stderr
                if err.string != ""

                    STDERR.puts err.string

                end

            end

        end


    end

end

# set inputs as a class variable
testClass.inputs = inputs

# name the dynamic test class
Object.const_set("TestParser", testClass)

