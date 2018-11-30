import magma as m
import mantle


# Append _ to avoid name conflict with mantle.FullAdder
class FullAdder_(m.Circuit):
    IO = ["a", m.In(m.Bit), "b", m.In(m.Bit), "cin", m.In(m.Bit),
          "out", m.Out(m.Bit), "cout", m.Out(m.Bit)]
    @classmethod
    def definition(io):
        # Generate the sum
        io.out <= io.a ^ io.b ^ io.cin
        # Generate the carry
        io.cout <= (io.a & io.b) | (io.b & io.cin) | (io.a & io.cin)
