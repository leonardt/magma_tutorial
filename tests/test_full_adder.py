from magma_tutorial.full_adder import FullAdder_
import fault
import bit_vector
import itertools


def test_full_adder():
    tester = fault.Tester(FullAdder_)
    for a, b, cin in itertools.product(range(0, 2), range(0, 2), range(0, 2)):
        tester.poke(FullAdder_.a, a)
        tester.poke(FullAdder_.b, b)
        tester.poke(FullAdder_.cin, cin)
        tester.eval()
        tester.expect(FullAdder_.out, a ^ b ^ cin)
        tester.expect(FullAdder_.cout, (a & b) | (b & cin) | (a & cin))

    tester.compile_and_run(target="verilator", directory="tests/build")
