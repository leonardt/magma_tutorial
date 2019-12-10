from magma_tutorial.adder import DefineAdd_
import fault
import fault.random
import pytest
import random


@pytest.mark.parametrize("width", [random.randint(0, 32) for _ in range(3)])
def test_adder(width):
    Add = DefineAdd_(width)
    tester = fault.Tester(Add)
    for i in range(32):
        I0 = fault.random.random_bv(width)
        I1 = fault.random.random_bv(width)
        CIN = random.randint(0, 1)
        tester.poke(Add.I0, I0)
        tester.poke(Add.I1, I1)
        tester.poke(Add.CIN, CIN)
        tester.eval()
        tester.expect(Add.COUT,
                      (I0.as_uint() + I1.as_uint() + CIN).bit_length() > width)
        tester.expect(Add.O, I0 + I1 + CIN)

    tester.compile_and_run(target="verilator", directory="tests/build")
