// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VFullAdder__H_
#define _VFullAdder__H_

#include "verilated.h"

class VFullAdder___Syms;

//----------

VL_MODULE(VFullAdder_) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_IN8(cin,0,0);
    VL_OUT8(cout,0,0);
    VL_OUT8(out,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VFullAdder___Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VFullAdder_);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VFullAdder_(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VFullAdder_();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VFullAdder___Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VFullAdder___Syms* symsp, bool first);
  private:
    static QData _change_request(VFullAdder___Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VFullAdder___Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(VFullAdder___Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VFullAdder___Syms* __restrict vlSymsp);
    static void _eval_settle(VFullAdder___Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
