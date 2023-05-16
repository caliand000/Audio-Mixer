// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+64,"hz2m",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"hz100",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+67,"pb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 20,0);
    tracep->declBus(c+68,"left",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+69,"right",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+70,"ss7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+71,"ss6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+72,"ss5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+73,"ss4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+74,"ss3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+75,"ss2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+76,"ss1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+77,"ss0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+78,"red",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+79,"green",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"blue",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+81,"txdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+82,"rxdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+83,"txclk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"rxclk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"txready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"rxready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+64,"hz2m",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"hz100",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+67,"pb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 20,0);
    tracep->declBus(c+68,"left",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+69,"right",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+70,"ss7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+71,"ss6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+72,"ss5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+73,"ss4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+74,"ss3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+75,"ss2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+76,"ss1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+77,"ss0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+78,"red",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+79,"green",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"blue",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+81,"txdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+82,"rxdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+83,"txclk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"rxclk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"txready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"rxready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+87,"keycode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+88,"strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+49,"controller_mode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+20,"edit_seq_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+21,"prien_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+50+i*1,"edit_play_smpl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 3,0);
    }
    tracep->declBus(c+89,"edit_sequencer_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+90,"play_sequencer_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,"seq_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+40,"seq_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+41,"temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+91,"raw_play_smpl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+42,"play_smpl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+92,"sample_clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+93,"bpm_clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+7+i*1,"sample_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+11,"sum1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,"sum2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,"sum3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,"final_sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+1,"prev_bpm_clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+43,"enable_ctr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("clkdiv_inst ");
    tracep->declBus(c+105,"BITLEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+64,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+106,"lim",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBit(c+93,"hzX",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"hz1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2,"ctr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->declBus(c+3,"next_Q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clkdiv_inst2 ");
    tracep->declBus(c+105,"BITLEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+64,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+107,"lim",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBit(c+92,"hzX",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"hz1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+4,"ctr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->declBus(c+5,"next_Q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pwm_inst ");
    tracep->declBus(c+108,"CTRVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+109,"CTRLEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+64,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+15,"duty_cycle",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+6,"counter",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+96,"pwm_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+111,"s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sample_clap ");
    tracep->declArray(c+112,"SAMPLE_FILE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 135,0);
    tracep->declBus(c+117,"SAMPLE_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+92,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+16,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+31,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+60,"next_counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBit(c+32,"prev_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sample_hihat ");
    tracep->declArray(c+118,"SAMPLE_FILE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 143,0);
    tracep->declBus(c+117,"SAMPLE_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+92,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+33,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+61,"next_counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBit(c+34,"prev_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sample_kick ");
    tracep->declArray(c+123,"SAMPLE_FILE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 135,0);
    tracep->declBus(c+117,"SAMPLE_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+92,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+18,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+35,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+62,"next_counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBit(c+36,"prev_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sample_snare ");
    tracep->declArray(c+128,"SAMPLE_FILE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 143,0);
    tracep->declBus(c+117,"SAMPLE_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+92,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+19,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+37,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+63,"next_counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBit(c+38,"prev_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBit(c+64,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+97,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+87,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+88,"strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"keyclk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+99,"delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBit(c+88,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+100,"set_edit",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+101,"set_play",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"set_raw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+49,"mode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    {
        const char* __VenumItemNames[]
        = {"EDIT", "PLAY", "RAW"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(1, "controller.sysmode_t", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+49,"sysmode",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBit(c+88,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"srst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"go_left",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+104,"go_right",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+20,"seq_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBus(c+20,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+21,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+22,"G",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBit(c+88,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+49,"mode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+21,"set_time_idx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+91,"tgl_play_smpl",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+23,"seq_smpl_1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+24,"seq_smpl_2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+25,"seq_smpl_3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+26,"seq_smpl_4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+27,"seq_smpl_5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+28,"seq_smpl_6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+29,"seq_smpl_7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+30,"seq_smpl_8",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+133,"temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBit(c+93,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"srst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"go_left",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+104,"go_right",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+89,"seq_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBit(c+93,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"srst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+134,"go_left",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"go_right",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+90,"seq_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u8 ");
    tracep->declBus(c+39,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+40,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+48,"G",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_h994d34ce__0;
    VlWide<5>/*159:0*/ __Vtemp_h6435efe6__0;
    VlWide<5>/*159:0*/ __Vtemp_h87dd4852__0;
    VlWide<5>/*159:0*/ __Vtemp_hdd2950f0__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__prev_bpm_clk));
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__clkdiv_inst__DOT__ctr),20);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__clkdiv_inst__DOT__next_Q),20);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__clkdiv_inst2__DOT__ctr),20);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__clkdiv_inst2__DOT__next_Q),20);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__pwm_inst__DOT__counter),6);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__sample_data[0]),8);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__sample_data[1]),8);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__sample_data[2]),8);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__sample_data[3]),8);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__sum1),8);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__sum2),8);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__sum3),8);
    bufp->fullCData(oldp+14,((0x80U ^ (IData)(vlSelf->top__DOT__sum3))),8);
    bufp->fullCData(oldp+15,((0x3fU & (0x20U ^ ((IData)(vlSelf->top__DOT__sum3) 
                                                >> 2U)))),6);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT____Vcellout__sample_clap__out),8);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT____Vcellout__sample_hihat__out),8);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT____Vcellout__sample_kick__out),8);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT____Vcellout__sample_snare__out),8);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__edit_seq_out),8);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__prien_out),3);
    bufp->fullBit(oldp+22,((IData)((0U != (IData)(vlSelf->top__DOT__edit_seq_out)))));
    bufp->fullCData(oldp+23,(vlSelf->top__DOT____Vcellout__u5__seq_smpl_1),4);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT____Vcellout__u5__seq_smpl_2),4);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT____Vcellout__u5__seq_smpl_3),4);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT____Vcellout__u5__seq_smpl_4),4);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT____Vcellout__u5__seq_smpl_5),4);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT____Vcellout__u5__seq_smpl_6),4);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT____Vcellout__u5__seq_smpl_7),4);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT____Vcellout__u5__seq_smpl_8),4);
    bufp->fullSData(oldp+31,(vlSelf->top__DOT__sample_clap__DOT__counter),12);
    bufp->fullBit(oldp+32,(vlSelf->top__DOT__sample_clap__DOT__prev_en));
    bufp->fullSData(oldp+33,(vlSelf->top__DOT__sample_hihat__DOT__counter),12);
    bufp->fullBit(oldp+34,(vlSelf->top__DOT__sample_hihat__DOT__prev_en));
    bufp->fullSData(oldp+35,(vlSelf->top__DOT__sample_kick__DOT__counter),12);
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__sample_kick__DOT__prev_en));
    bufp->fullSData(oldp+37,(vlSelf->top__DOT__sample_snare__DOT__counter),12);
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__sample_snare__DOT__prev_en));
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__seq_out),8);
    bufp->fullCData(oldp+40,(((0x80U & (IData)(vlSelf->top__DOT__seq_out))
                               ? 7U : ((0x40U & (IData)(vlSelf->top__DOT__seq_out))
                                        ? 6U : ((0x20U 
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
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__temp),8);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__play_smpl),4);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__enable_ctr),32);
    bufp->fullBit(oldp+44,((1U & ((IData)(vlSelf->top__DOT__play_smpl) 
                                  >> 2U))));
    bufp->fullBit(oldp+45,((1U & ((IData)(vlSelf->top__DOT__play_smpl) 
                                  >> 1U))));
    bufp->fullBit(oldp+46,((1U & ((IData)(vlSelf->top__DOT__play_smpl) 
                                  >> 3U))));
    bufp->fullBit(oldp+47,((1U & (IData)(vlSelf->top__DOT__play_smpl))));
    bufp->fullBit(oldp+48,((IData)((0U != (IData)(vlSelf->top__DOT__seq_out)))));
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__u2__DOT__sysmode),2);
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__edit_play_smpl[0]),4);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__edit_play_smpl[1]),4);
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__edit_play_smpl[2]),4);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__edit_play_smpl[3]),4);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__edit_play_smpl[4]),4);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__edit_play_smpl[5]),4);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__edit_play_smpl[6]),4);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__edit_play_smpl[7]),4);
    bufp->fullBit(oldp+58,((0U != (IData)(vlSelf->top__DOT__u2__DOT__sysmode))));
    bufp->fullBit(oldp+59,((1U != (IData)(vlSelf->top__DOT__u2__DOT__sysmode))));
    bufp->fullSData(oldp+60,(vlSelf->top__DOT__sample_clap__DOT__next_counter),12);
    bufp->fullSData(oldp+61,(vlSelf->top__DOT__sample_hihat__DOT__next_counter),12);
    bufp->fullSData(oldp+62,(vlSelf->top__DOT__sample_kick__DOT__next_counter),12);
    bufp->fullSData(oldp+63,(vlSelf->top__DOT__sample_snare__DOT__next_counter),12);
    bufp->fullBit(oldp+64,(vlSelf->hz2m));
    bufp->fullBit(oldp+65,(vlSelf->hz100));
    bufp->fullBit(oldp+66,(vlSelf->reset));
    bufp->fullIData(oldp+67,(vlSelf->pb),21);
    bufp->fullCData(oldp+68,(vlSelf->left),8);
    bufp->fullCData(oldp+69,(vlSelf->right),8);
    bufp->fullCData(oldp+70,(vlSelf->ss7),8);
    bufp->fullCData(oldp+71,(vlSelf->ss6),8);
    bufp->fullCData(oldp+72,(vlSelf->ss5),8);
    bufp->fullCData(oldp+73,(vlSelf->ss4),8);
    bufp->fullCData(oldp+74,(vlSelf->ss3),8);
    bufp->fullCData(oldp+75,(vlSelf->ss2),8);
    bufp->fullCData(oldp+76,(vlSelf->ss1),8);
    bufp->fullCData(oldp+77,(vlSelf->ss0),8);
    bufp->fullBit(oldp+78,(vlSelf->red));
    bufp->fullBit(oldp+79,(vlSelf->green));
    bufp->fullBit(oldp+80,(vlSelf->blue));
    bufp->fullCData(oldp+81,(vlSelf->txdata),8);
    bufp->fullCData(oldp+82,(vlSelf->rxdata),8);
    bufp->fullBit(oldp+83,(vlSelf->txclk));
    bufp->fullBit(oldp+84,(vlSelf->rxclk));
    bufp->fullBit(oldp+85,(vlSelf->txready));
    bufp->fullBit(oldp+86,(vlSelf->rxready));
    bufp->fullCData(oldp+87,(vlSelf->top__DOT__keycode),5);
    bufp->fullBit(oldp+88,(vlSelf->top__DOT__strobe));
    bufp->fullCData(oldp+89,(vlSelf->top__DOT__edit_sequencer_out),8);
    bufp->fullCData(oldp+90,(vlSelf->top__DOT__play_sequencer_out),8);
    bufp->fullCData(oldp+91,((0xfU & vlSelf->pb)),4);
    bufp->fullBit(oldp+92,(vlSelf->top__DOT__sample_clk));
    bufp->fullBit(oldp+93,(vlSelf->top__DOT__bpm_clk));
    bufp->fullBit(oldp+94,(vlSelf->top__DOT__clkdiv_inst__DOT__hz1));
    bufp->fullBit(oldp+95,(vlSelf->top__DOT__clkdiv_inst2__DOT__hz1));
    bufp->fullBit(oldp+96,((((IData)(vlSelf->top__DOT__pwm_inst__DOT__counter) 
                             <= (0x3fU & (0x20U ^ ((IData)(vlSelf->top__DOT__sum3) 
                                                   >> 2U)))) 
                            | ((0U != (0x3fU & (0x20U 
                                                ^ ((IData)(vlSelf->top__DOT__sum3) 
                                                   >> 2U)))) 
                               & (0U == (0x3fU & (0x20U 
                                                  ^ 
                                                  ((IData)(vlSelf->top__DOT__sum3) 
                                                   >> 2U))))))));
    bufp->fullIData(oldp+97,((0xfffffU & vlSelf->pb)),20);
    bufp->fullBit(oldp+98,((0U != (0xfffffU & vlSelf->pb))));
    bufp->fullCData(oldp+99,(vlSelf->top__DOT__u1__DOT__delay),2);
    bufp->fullBit(oldp+100,((1U & (vlSelf->pb >> 0x13U))));
    bufp->fullBit(oldp+101,((1U & (vlSelf->pb >> 0x12U))));
    bufp->fullBit(oldp+102,((1U & (vlSelf->pb >> 0x10U))));
    bufp->fullBit(oldp+103,((1U & (vlSelf->pb >> 0xbU))));
    bufp->fullBit(oldp+104,((1U & (vlSelf->pb >> 8U))));
    bufp->fullIData(oldp+105,(0x14U),32);
    bufp->fullIData(oldp+106,(0x7a11fU),20);
    bufp->fullIData(oldp+107,(0x7fU),20);
    bufp->fullIData(oldp+108,(0x40U),32);
    bufp->fullIData(oldp+109,(6U),32);
    bufp->fullBit(oldp+110,(1U));
    bufp->fullCData(oldp+111,(0U),6);
    __Vtemp_h994d34ce__0[0U] = 0x2e6d656dU;
    __Vtemp_h994d34ce__0[1U] = 0x636c6170U;
    __Vtemp_h994d34ce__0[2U] = 0x64696f2fU;
    __Vtemp_h994d34ce__0[3U] = 0x2e2f6175U;
    __Vtemp_h994d34ce__0[4U] = 0x2eU;
    bufp->fullWData(oldp+112,(__Vtemp_h994d34ce__0),136);
    bufp->fullIData(oldp+117,(0xfa0U),32);
    __Vtemp_h6435efe6__0[0U] = 0x2e6d656dU;
    __Vtemp_h6435efe6__0[1U] = 0x69686174U;
    __Vtemp_h6435efe6__0[2U] = 0x696f2f68U;
    __Vtemp_h6435efe6__0[3U] = 0x2f617564U;
    __Vtemp_h6435efe6__0[4U] = 0x2e2eU;
    bufp->fullWData(oldp+118,(__Vtemp_h6435efe6__0),144);
    __Vtemp_h87dd4852__0[0U] = 0x2e6d656dU;
    __Vtemp_h87dd4852__0[1U] = 0x6b69636bU;
    __Vtemp_h87dd4852__0[2U] = 0x64696f2fU;
    __Vtemp_h87dd4852__0[3U] = 0x2e2f6175U;
    __Vtemp_h87dd4852__0[4U] = 0x2eU;
    bufp->fullWData(oldp+123,(__Vtemp_h87dd4852__0),136);
    __Vtemp_hdd2950f0__0[0U] = 0x2e6d656dU;
    __Vtemp_hdd2950f0__0[1U] = 0x6e617265U;
    __Vtemp_hdd2950f0__0[2U] = 0x696f2f73U;
    __Vtemp_hdd2950f0__0[3U] = 0x2f617564U;
    __Vtemp_hdd2950f0__0[4U] = 0x2e2eU;
    bufp->fullWData(oldp+128,(__Vtemp_hdd2950f0__0),144);
    bufp->fullBit(oldp+133,(vlSelf->top__DOT__u5__DOT__temp));
    bufp->fullBit(oldp+134,(0U));
}
