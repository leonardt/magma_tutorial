import fault
from magma_tutorial.counter import DefineCounter


def test_counter():
    Counter4 = DefineCounter(4)
    tester = fault.Tester(Counter4, clock=Counter4.CLK)
    for i in range((1 << 4) * 2):
        tester.expect(Counter4.O, i & 0xF)
        tester.step(2)

    tester.compile_and_run(target="verilator", directory="tests/build")
