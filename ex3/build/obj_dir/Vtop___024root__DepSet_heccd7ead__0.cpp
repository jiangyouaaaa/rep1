// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ top__DOT__rst00x;
    top__DOT__rst00x = 0;
    CData/*3:0*/ top__DOT__eql__DOT__temp;
    top__DOT__eql__DOT__temp = 0;
    CData/*3:0*/ top__DOT__i0__DOT__i0__DOT__lut_out;
    top__DOT__i0__DOT__i0__DOT__lut_out = 0;
    CData/*0:0*/ top__DOT__i0__DOT__i0__DOT__hit;
    top__DOT__i0__DOT__i0__DOT__hit = 0;
    CData/*0:0*/ __VdfgTmp_he1deb3f6__0;
    __VdfgTmp_he1deb3f6__0 = 0;
    // Body
    vlSelf->carry = (1U & (((IData)(vlSelf->A) + (IData)(vlSelf->B)) 
                           >> 4U));
    top__DOT__rst00x = (0xfU & ((IData)(vlSelf->A) 
                                + (IData)(vlSelf->B)));
    vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[5U] 
        = (0xfU & (~ (IData)(vlSelf->A)));
    vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = ((IData)(vlSelf->A) ^ (IData)(vlSelf->B));
    vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = ((IData)(vlSelf->A) | (IData)(vlSelf->B));
    vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[4U] 
        = ((IData)(vlSelf->A) & (IData)(vlSelf->B));
    vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[6U] 
        = (0xfU & ((IData)(vlSelf->A) + (IData)(vlSelf->B)));
    vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[7U] 
        = (0xfU & ((IData)(vlSelf->A) + (IData)(vlSelf->B)));
    __VdfgTmp_he1deb3f6__0 = ((1U & ((IData)(vlSelf->A) 
                                     >> 3U)) == (1U 
                                                 & ((IData)(vlSelf->B) 
                                                    >> 3U)));
    top__DOT__eql__DOT__temp = (0xfU & ((IData)(1U) 
                                        + ((~ (IData)(vlSelf->B)) 
                                           + (IData)(vlSelf->A))));
    vlSelf->zero = (1U & (~ (IData)((0U != (IData)(top__DOT__rst00x)))));
    vlSelf->overflow = ((IData)(__VdfgTmp_he1deb3f6__0) 
                        & ((1U & ((IData)(top__DOT__rst00x) 
                                  >> 3U)) != (1U & 
                                              ((IData)(vlSelf->A) 
                                               >> 3U))));
    vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = ((0U != (IData)(top__DOT__eql__DOT__temp))
            ? 0U : 1U);
    vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = ((1U & (((IData)(top__DOT__eql__DOT__temp) 
                   >> 3U) ^ ((IData)(__VdfgTmp_he1deb3f6__0) 
                             & ((1U & ((IData)(top__DOT__eql__DOT__temp) 
                                       >> 3U)) != (1U 
                                                   & ((IData)(vlSelf->A) 
                                                      >> 3U))))))
            ? 1U : 0U);
    top__DOT__i0__DOT__i0__DOT__lut_out = ((- (IData)(
                                                      ((IData)(vlSelf->ALUctr) 
                                                       == 
                                                       vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                       [0U]))) 
                                           & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                           [0U]);
    top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->ALUctr) 
                                       == vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                       [0U]);
    top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(top__DOT__i0__DOT__i0__DOT__lut_out) 
                                           | ((- (IData)(
                                                         ((IData)(vlSelf->ALUctr) 
                                                          == 
                                                          vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                          [1U]))) 
                                              & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                              [1U]));
    top__DOT__i0__DOT__i0__DOT__hit = ((IData)(top__DOT__i0__DOT__i0__DOT__hit) 
                                       | ((IData)(vlSelf->ALUctr) 
                                          == vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                          [1U]));
    top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(top__DOT__i0__DOT__i0__DOT__lut_out) 
                                           | ((- (IData)(
                                                         ((IData)(vlSelf->ALUctr) 
                                                          == 
                                                          vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                          [2U]))) 
                                              & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                              [2U]));
    top__DOT__i0__DOT__i0__DOT__hit = ((IData)(top__DOT__i0__DOT__i0__DOT__hit) 
                                       | ((IData)(vlSelf->ALUctr) 
                                          == vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                          [2U]));
    top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(top__DOT__i0__DOT__i0__DOT__lut_out) 
                                           | ((- (IData)(
                                                         ((IData)(vlSelf->ALUctr) 
                                                          == 
                                                          vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                          [3U]))) 
                                              & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                              [3U]));
    top__DOT__i0__DOT__i0__DOT__hit = ((IData)(top__DOT__i0__DOT__i0__DOT__hit) 
                                       | ((IData)(vlSelf->ALUctr) 
                                          == vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                          [3U]));
    top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(top__DOT__i0__DOT__i0__DOT__lut_out) 
                                           | ((- (IData)(
                                                         ((IData)(vlSelf->ALUctr) 
                                                          == 
                                                          vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                          [4U]))) 
                                              & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                              [4U]));
    top__DOT__i0__DOT__i0__DOT__hit = ((IData)(top__DOT__i0__DOT__i0__DOT__hit) 
                                       | ((IData)(vlSelf->ALUctr) 
                                          == vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                          [4U]));
    top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(top__DOT__i0__DOT__i0__DOT__lut_out) 
                                           | ((- (IData)(
                                                         ((IData)(vlSelf->ALUctr) 
                                                          == 
                                                          vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                          [5U]))) 
                                              & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                              [5U]));
    top__DOT__i0__DOT__i0__DOT__hit = ((IData)(top__DOT__i0__DOT__i0__DOT__hit) 
                                       | ((IData)(vlSelf->ALUctr) 
                                          == vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                          [5U]));
    top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(top__DOT__i0__DOT__i0__DOT__lut_out) 
                                           | ((- (IData)(
                                                         ((IData)(vlSelf->ALUctr) 
                                                          == 
                                                          vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                          [6U]))) 
                                              & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                              [6U]));
    top__DOT__i0__DOT__i0__DOT__hit = ((IData)(top__DOT__i0__DOT__i0__DOT__hit) 
                                       | ((IData)(vlSelf->ALUctr) 
                                          == vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                          [6U]));
    top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(top__DOT__i0__DOT__i0__DOT__lut_out) 
                                           | ((- (IData)(
                                                         ((IData)(vlSelf->ALUctr) 
                                                          == 
                                                          vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                          [7U]))) 
                                              & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                              [7U]));
    top__DOT__i0__DOT__i0__DOT__hit = ((IData)(top__DOT__i0__DOT__i0__DOT__hit) 
                                       | ((IData)(vlSelf->ALUctr) 
                                          == vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                          [7U]));
    vlSelf->ALUout = ((IData)(top__DOT__i0__DOT__i0__DOT__hit)
                       ? (IData)(top__DOT__i0__DOT__i0__DOT__lut_out)
                       : 0U);
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/dante/ysyx-workbench/digital_circuit/ex3/vsrc/top.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/dante/ysyx-workbench/digital_circuit/ex3/vsrc/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/dante/ysyx-workbench/digital_circuit/ex3/vsrc/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->A & 0xf0U))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((vlSelf->B & 0xf0U))) {
        Verilated::overWidthError("B");}
    if (VL_UNLIKELY((vlSelf->ALUctr & 0xf8U))) {
        Verilated::overWidthError("ALUctr");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
