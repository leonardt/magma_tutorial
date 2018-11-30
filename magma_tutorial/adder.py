import magma as m
from .full_adder import FullAdder_


def DefineAdd_(n):
    class _Add(m.Circuit):
        name = f'Add{n}'
        IO = ['I0', m.In(m.UInt(n)), 'I1', m.In(m.UInt(n)), 'CIN', m.In(m.Bit),
               'O', m.Out(m.UInt(n)), 'COUT', m.Out(m.Bit) ]
        @classmethod
        def definition(io):
            O = []
            COUT = io.CIN
            for i in range(n):
                fulladder = FullAdder_()
                OI, COUT = fulladder(io.I0[i], io.I1[i], COUT)
                O.append(OI)
            io.O <= m.uint(O)
            io.COUT <= COUT
    return _Add
