// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(press,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(seg1,6,0);
    VL_OUT8(seg2,6,0);
    CData/*7:0*/ top__DOT__num;
    CData/*3:0*/ top__DOT__num1;
    CData/*3:0*/ top__DOT__num2;
    CData/*0:0*/ __Vtrigrprev__TOP__press;
    CData/*3:0*/ __Vtrigrprev__TOP__top__DOT__num1;
    CData/*3:0*/ __Vtrigrprev__TOP__top__DOT__num2;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
