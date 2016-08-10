class RetroIDL::ASN::Location
    attr_reader :fileName
    def initialize(fileName, firstLine, lastLine, firstCol, lastCol)
        @fileName = fileName
        @firstLine = firstLine
        @lastLine = lastLine
        @firstCol = firstCol
        @lastCol = lastCol
    end
end
