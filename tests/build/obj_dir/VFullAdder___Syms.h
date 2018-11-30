// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VFullAdder___Syms_H_
#define _VFullAdder___Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VFullAdder_.h"

// SYMS CLASS
class VFullAdder___Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VFullAdder_*                   TOPp;
    
    // CREATORS
    VFullAdder___Syms(VFullAdder_* topp, const char* namep);
    ~VFullAdder___Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
