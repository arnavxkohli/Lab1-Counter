// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcounter__Syms.h"


VL_ATTR_COLD void Vcounter___024root__trace_init_sub__TOP__0(Vcounter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"count", false,-1, 7,0);
    tracep->pushNamePrefix("counter ");
    tracep->declBus(c+5,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"count", false,-1, 7,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vcounter___024root__trace_init_top(Vcounter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root__trace_init_top\n"); );
    // Body
    Vcounter___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcounter___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcounter___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcounter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcounter___024root__trace_register(Vcounter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcounter___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcounter___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcounter___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcounter___024root__trace_full_sub_0(Vcounter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcounter___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root__trace_full_top_0\n"); );
    // Init
    Vcounter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounter___024root*>(voidSelf);
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcounter___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcounter___024root__trace_full_sub_0(Vcounter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullBit(oldp+3,(vlSelf->en));
    bufp->fullCData(oldp+4,(vlSelf->count),8);
    bufp->fullIData(oldp+5,(8U),32);
}
