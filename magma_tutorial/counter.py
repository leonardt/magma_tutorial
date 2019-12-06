import magma as m
import mantle


def DefineCounter(n):
    class _Counter(m.Circuit):
        name = f'Counter{n}'
        IO = ["O", m.Out(m.UInt[n])] + m.ClockInterface()

        @classmethod
        def definition(io):
            reg = mantle.Register(n)
            io.O <= reg(m.uint(reg.O) + m.uint(1, n))
    return _Counter
