// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFullAdder_.h for the primary calling header

#include "VFullAdder_.h"       // For This
#include "VFullAdder___Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VFullAdder_) {
    VFullAdder___Syms* __restrict vlSymsp = __VlSymsp = new VFullAdder___Syms(this, name());
    VFullAdder_* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VFullAdder_::__Vconfigure(VFullAdder___Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VFullAdder_::~VFullAdder_() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VFullAdder_::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFullAdder_::eval\n"); );
    VFullAdder___Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VFullAdder_* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void VFullAdder_::_eval_initial_loop(VFullAdder___Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VFullAdder_::_combo__TOP__1(VFullAdder___Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder_::_combo__TOP__1\n"); );
    VFullAdder_* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = (((IData)(vlTOPp->a) ^ (IData)(vlTOPp->b)) 
		   ^ (IData)(vlTOPp->cin));
    vlTOPp->cout = ((((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
		     | ((IData)(vlTOPp->b) & (IData)(vlTOPp->cin))) 
		    | ((IData)(vlTOPp->a) & (IData)(vlTOPp->cin)));
}

void VFullAdder_::_eval(VFullAdder___Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder_::_eval\n"); );
    VFullAdder_* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VFullAdder_::_eval_initial(VFullAdder___Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder_::_eval_initial\n"); );
    VFullAdder_* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFullAdder_::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder_::final\n"); );
    // Variables
    VFullAdder___Syms* __restrict vlSymsp = this->__VlSymsp;
    VFullAdder_* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFullAdder_::_eval_settle(VFullAdder___Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder_::_eval_settle\n"); );
    VFullAdder_* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VFullAdder_::_change_request(VFullAdder___Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder_::_change_request\n"); );
    VFullAdder_* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VFullAdder_::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder_::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((a & 0xfeU))) {
	Verilated::overWidthError("a");}
    if (VL_UNLIKELY((b & 0xfeU))) {
	Verilated::overWidthError("b");}
    if (VL_UNLIKELY((cin & 0xfeU))) {
	Verilated::overWidthError("cin");}
}
#endif // VL_DEBUG

void VFullAdder_::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder_::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    cin = VL_RAND_RESET_I(1);
    cout = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(1);
}
