import pytest
from magma.circuit import magma_clear_circuit_cache
from magma import clear_cachedFunctions
import magma.backend.coreir_ as coreir_

@pytest.fixture(autouse=True)
def magma_test():
    magma_clear_circuit_cache()
    clear_cachedFunctions()
    coreir_.__reset_context()
