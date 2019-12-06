import magma as m
from .full_adder import FullAdder_


def DefineAdd_(n):
    class _Add(m.Circuit):
        name = f'Add{n}'
        IO = ['I0', m.In(m.UInt[n]), 'I1', m.In(m.UInt[n]), 'CIN', m.In(m.Bit),
              'O', m.Out(m.UInt[n]), 'COUT', m.Out(m.Bit)]

        @classmethod
        def definition(io):
            O = []
            # Initialize COUT with the CIN
            COUT = io.CIN
            for i in range(n):
                # Create an instance
                fulladder = FullAdder_()
                # Wire up the i-th bits of the inputs and the previous COUT
                OI, COUT = fulladder(io.I0[i], io.I1[i], COUT)
                # Build up a list of full adder outputs
                O.append(OI)
            # Convert list of full adder outputs into a packed uint type
            io.O <= m.uint(O)
            io.COUT <= COUT
    return _Add
