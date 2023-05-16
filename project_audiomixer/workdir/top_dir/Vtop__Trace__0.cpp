// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__prev_bpm_clk));
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__clkdiv_inst__DOT__ctr),20);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__clkdiv_inst__DOT__next_Q),20);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__clkdiv_inst2__DOT__ctr),20);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__clkdiv_inst2__DOT__next_Q),20);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__pwm_inst__DOT__counter),6);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__sample_data[0]),8);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__sample_data[1]),8);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__sample_data[2]),8);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__sample_data[3]),8);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__sum1),8);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__sum2),8);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__sum3),8);
        bufp->chgCData(oldp+13,((0x80U ^ (IData)(vlSelf->top__DOT__sum3))),8);
        bufp->chgCData(oldp+14,((0x3fU & (0x20U ^ ((IData)(vlSelf->top__DOT__sum3) 
                                                   >> 2U)))),6);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT____Vcellout__sample_clap__out),8);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT____Vcellout__sample_hihat__out),8);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT____Vcellout__sample_kick__out),8);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT____Vcellout__sample_snare__out),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__edit_seq_out),8);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__prien_out),3);
        bufp->chgBit(oldp+21,((IData)((0U != (IData)(vlSelf->top__DOT__edit_seq_out)))));
        bufp->chgCData(oldp+22,(vlSelf->top__DOT____Vcellout__u5__seq_smpl_1),4);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT____Vcellout__u5__seq_smpl_2),4);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT____Vcellout__u5__seq_smpl_3),4);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT____Vcellout__u5__seq_smpl_4),4);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT____Vcellout__u5__seq_smpl_5),4);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT____Vcellout__u5__seq_smpl_6),4);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT____Vcellout__u5__seq_smpl_7),4);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT____Vcellout__u5__seq_smpl_8),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgSData(oldp+30,(vlSelf->top__DOT__sample_clap__DOT__counter),12);
        bufp->chgBit(oldp+31,(vlSelf->top__DOT__sample_clap__DOT__prev_en));
        bufp->chgSData(oldp+32,(vlSelf->top__DOT__sample_hihat__DOT__counter),12);
        bufp->chgBit(oldp+33,(vlSelf->top__DOT__sample_hihat__DOT__prev_en));
        bufp->chgSData(oldp+34,(vlSelf->top__DOT__sample_kick__DOT__counter),12);
        bufp->chgBit(oldp+35,(vlSelf->top__DOT__sample_kick__DOT__prev_en));
        bufp->chgSData(oldp+36,(vlSelf->top__DOT__sample_snare__DOT__counter),12);
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__sample_snare__DOT__prev_en));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__seq_out),8);
        bufp->chgCData(oldp+39,(((0x80U & (IData)(vlSelf->top__DOT__seq_out))
                                  ? 7U : ((0x40U & (IData)(vlSelf->top__DOT__seq_out))
                                           ? 6U : (
                                                   (0x20U 
                                                    & (IData)(vlSelf->top__DOT__seq_out))
                                                    ? 5U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->top__DOT__seq_out))
                                                     ? 4U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->top__DOT__seq_out))
                                                      ? 3U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->top__DOT__seq_out))
                                                       ? 2U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->top__DOT__seq_out))
                                                        ? 1U
                                                        : 0U)))))))),3);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__temp),8);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__play_smpl),4);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__enable_ctr),32);
        bufp->chgBit(oldp+43,((1U & ((IData)(vlSelf->top__DOT__play_smpl) 
                                     >> 2U))));
        bufp->chgBit(oldp+44,((1U & ((IData)(vlSelf->top__DOT__play_smpl) 
                                     >> 1U))));
        bufp->chgBit(oldp+45,((1U & ((IData)(vlSelf->top__DOT__play_smpl) 
                                     >> 3U))));
        bufp->chgBit(oldp+46,((1U & (IData)(vlSelf->top__DOT__play_smpl))));
        bufp->chgBit(oldp+47,((IData)((0U != (IData)(vlSelf->top__DOT__seq_out)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgCData(oldp+48,(vlSelf->top__DOT__u2__DOT__sysmode),2);
        bufp->chgCData(oldp+49,(vlSelf->top__DOT__edit_play_smpl[0]),4);
        bufp->chgCData(oldp+50,(vlSelf->top__DOT__edit_play_smpl[1]),4);
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__edit_play_smpl[2]),4);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__edit_play_smpl[3]),4);
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__edit_play_smpl[4]),4);
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__edit_play_smpl[5]),4);
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__edit_play_smpl[6]),4);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__edit_play_smpl[7]),4);
        bufp->chgBit(oldp+57,((0U != (IData)(vlSelf->top__DOT__u2__DOT__sysmode))));
        bufp->chgBit(oldp+58,((1U != (IData)(vlSelf->top__DOT__u2__DOT__sysmode))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgSData(oldp+59,(vlSelf->top__DOT__sample_clap__DOT__next_counter),12);
        bufp->chgSData(oldp+60,(vlSelf->top__DOT__sample_hihat__DOT__next_counter),12);
        bufp->chgSData(oldp+61,(vlSelf->top__DOT__sample_kick__DOT__next_counter),12);
        bufp->chgSData(oldp+62,(vlSelf->top__DOT__sample_snare__DOT__next_counter),12);
    }
    bufp->chgBit(oldp+63,(vlSelf->hz2m));
    bufp->chgBit(oldp+64,(vlSelf->hz100));
    bufp->chgBit(oldp+65,(vlSelf->reset));
    bufp->chgIData(oldp+66,(vlSelf->pb),21);
    bufp->chgCData(oldp+67,(vlSelf->left),8);
    bufp->chgCData(oldp+68,(vlSelf->right),8);
    bufp->chgCData(oldp+69,(vlSelf->ss7),8);
    bufp->chgCData(oldp+70,(vlSelf->ss6),8);
    bufp->chgCData(oldp+71,(vlSelf->ss5),8);
    bufp->chgCData(oldp+72,(vlSelf->ss4),8);
    bufp->chgCData(oldp+73,(vlSelf->ss3),8);
    bufp->chgCData(oldp+74,(vlSelf->ss2),8);
    bufp->chgCData(oldp+75,(vlSelf->ss1),8);
    bufp->chgCData(oldp+76,(vlSelf->ss0),8);
    bufp->chgBit(oldp+77,(vlSelf->red));
    bufp->chgBit(oldp+78,(vlSelf->green));
    bufp->chgBit(oldp+79,(vlSelf->blue));
    bufp->chgCData(oldp+80,(vlSelf->txdata),8);
    bufp->chgCData(oldp+81,(vlSelf->rxdata),8);
    bufp->chgBit(oldp+82,(vlSelf->txclk));
    bufp->chgBit(oldp+83,(vlSelf->rxclk));
    bufp->chgBit(oldp+84,(vlSelf->txready));
    bufp->chgBit(oldp+85,(vlSelf->rxready));
    bufp->chgCData(oldp+86,(vlSelf->top__DOT__keycode),5);
    bufp->chgBit(oldp+87,(vlSelf->top__DOT__strobe));
    bufp->chgCData(oldp+88,(vlSelf->top__DOT__edit_sequencer_out),8);
    bufp->chgCData(oldp+89,(vlSelf->top__DOT__play_sequencer_out),8);
    bufp->chgCData(oldp+90,((0xfU & vlSelf->pb)),4);
    bufp->chgBit(oldp+91,(vlSelf->top__DOT__sample_clk));
    bufp->chgBit(oldp+92,(vlSelf->top__DOT__bpm_clk));
    bufp->chgBit(oldp+93,(vlSelf->top__DOT__clkdiv_inst__DOT__hz1));
    bufp->chgBit(oldp+94,(vlSelf->top__DOT__clkdiv_inst2__DOT__hz1));
    bufp->chgBit(oldp+95,((((IData)(vlSelf->top__DOT__pwm_inst__DOT__counter) 
                            <= (0x3fU & (0x20U ^ ((IData)(vlSelf->top__DOT__sum3) 
                                                  >> 2U)))) 
                           | ((0U != (0x3fU & (0x20U 
                                               ^ ((IData)(vlSelf->top__DOT__sum3) 
                                                  >> 2U)))) 
                              & (0U == (0x3fU & (0x20U 
                                                 ^ 
                                                 ((IData)(vlSelf->top__DOT__sum3) 
                                                  >> 2U))))))));
    bufp->chgIData(oldp+96,((0xfffffU & vlSelf->pb)),20);
    bufp->chgBit(oldp+97,((0U != (0xfffffU & vlSelf->pb))));
    bufp->chgCData(oldp+98,(vlSelf->top__DOT__u1__DOT__delay),2);
    bufp->chgBit(oldp+99,((1U & (vlSelf->pb >> 0x13U))));
    bufp->chgBit(oldp+100,((1U & (vlSelf->pb >> 0x12U))));
    bufp->chgBit(oldp+101,((1U & (vlSelf->pb >> 0x10U))));
    bufp->chgBit(oldp+102,((1U & (vlSelf->pb >> 0xbU))));
    bufp->chgBit(oldp+103,((1U & (vlSelf->pb >> 8U))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
}
