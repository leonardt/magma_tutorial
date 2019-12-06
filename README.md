[![Build Status](https://travis-ci.com/leonardt/magma_tutorial.svg?branch=master)](https://travis-ci.com/leonardt/magma_tutorial)

# Setup

## Python 3.7+
If you don't have a Python version 3.7 or greater installed, you can install it
with https://conda.io/miniconda.html.

## CoreIR
See https://github.com/rdaly525/coreir/blob/master/INSTALL.md for instructions

## hwtypes
You'll need the dependencies for the hwtypes packages, see [these instructions](https://github.com/leonardt/hwtypes#install)

## Verilator
Used for Verilog simulation
```shell
$ brew install verilator
$ apt-get install verilator
```

Install Python libraries
```shell
$ pip install magma-lang mantle fault
```

# Tests
```shell
$ pip install pytest
$ pytest tests
```
