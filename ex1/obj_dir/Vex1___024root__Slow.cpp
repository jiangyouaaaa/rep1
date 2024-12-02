// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vex1.h for the primary calling header

#include "verilated.h"

#include "Vex1__Syms.h"
#include "Vex1___024root.h"

void Vex1___024root___ctor_var_reset(Vex1___024root* vlSelf);

Vex1___024root::Vex1___024root(Vex1__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vex1___024root___ctor_var_reset(this);
}

void Vex1___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vex1___024root::~Vex1___024root() {
}
