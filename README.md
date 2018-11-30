[![Build Status](https://travis-ci.com/leonardt/magma_tutorial.svg?branch=master)](https://travis-ci.com/leonardt/magma_tutorial)

# Setup

## Python 3.6+
If you don't have a Python version 3.6 or greater installed, you can install it
with https://conda.io/miniconda.html.

## CoreIR

Linux requires gcc 4.9+

MacOS requires modern apple clang (Apple LLVM version 8.0.0+)

```shell
$ git clone https://github.com/rdaly525/coreir.git
$ cd coreir
$ make -j
$ make install
```

## Verilator
Used for Verilog simulation
```shell
$ brew install verilator
$ apt-get install verilator
```

Install Python libraries
```shell
$ pip install magma-lang mantle
```

# Tests
```shell
$ pip install pytest
$ pytest tests
```
