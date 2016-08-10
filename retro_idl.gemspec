Gem::Specification.new do |s|
    s.name    = "RetroIDL"
    s.version = "0.0.1"
    s.summary = "ASN.1 and standard encoding rules as an IDL"
    s.author  = "Cameron Harper"
    s.email = "contact@cjh.id.au"
    s.homepage = "https://github.com/cjhdev/retro_idl"
    s.files = Dir.glob("ext/**/*.{c,h,y,l,rb}") + Dir.glob("lib/**/*.rb") + Dir.glob("test/**/*.rb") + ["rakefile"]
    s.extensions = "ext/retro_idl/asn/ext_parser/extconf.rb"
    s.license = 'MIT'
    s.test_files = Dir.glob("test/**/*.rb")
    s.has_rdoc = 'yard'
    s.add_development_dependency 'rake-compiler'
    s.add_development_dependency 'rake'
    s.add_development_dependency 'test-unit'
    s.required_ruby_version = '>= 2.0'
end
