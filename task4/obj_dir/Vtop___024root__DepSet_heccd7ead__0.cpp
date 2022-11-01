// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__count = ((IData)(vlSelf->rst)
                                ? 0U : (0xffU & ((IData)(vlSelf->top__DOT__count) 
                                                 + (IData)(vlSelf->en))));
    vlSelf->top__DOT__myDecoder__DOT__result = 0U;
    vlSelf->top__DOT__myDecoder__DOT__result = ((0xfff00U 
                                                 & vlSelf->top__DOT__myDecoder__DOT__result) 
                                                | (IData)(vlSelf->top__DOT__count));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    vlSelf->bcd = (0xfffU & (vlSelf->top__DOT__myDecoder__DOT__result 
                             >> 8U));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
