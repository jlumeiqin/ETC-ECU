// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2014.4
// Copyright (C) 2014 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#include "Compult_randac.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic Compult_randac::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic Compult_randac::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<8> Compult_randac::ap_ST_st1_fsm_0 = "1";
const sc_lv<8> Compult_randac::ap_ST_st2_fsm_1 = "10";
const sc_lv<8> Compult_randac::ap_ST_st3_fsm_2 = "100";
const sc_lv<8> Compult_randac::ap_ST_st4_fsm_3 = "1000";
const sc_lv<8> Compult_randac::ap_ST_st5_fsm_4 = "10000";
const sc_lv<8> Compult_randac::ap_ST_st6_fsm_5 = "100000";
const sc_lv<8> Compult_randac::ap_ST_st7_fsm_6 = "1000000";
const sc_lv<8> Compult_randac::ap_ST_st8_fsm_7 = "10000000";
const sc_lv<32> Compult_randac::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> Compult_randac::ap_const_lv1_1 = "1";
const sc_lv<32> Compult_randac::ap_const_lv32_2 = "10";
const sc_lv<32> Compult_randac::ap_const_lv32_3 = "11";
const sc_lv<32> Compult_randac::ap_const_lv32_4 = "100";
const sc_lv<32> Compult_randac::ap_const_lv32_5 = "101";
const sc_lv<32> Compult_randac::ap_const_lv32_6 = "110";
const sc_lv<32> Compult_randac::ap_const_lv32_7 = "111";
const sc_lv<38> Compult_randac::ap_const_lv38_2D = "101101";
const sc_lv<32> Compult_randac::ap_const_lv32_25 = "100101";
const sc_lv<32> Compult_randac::ap_const_lv32_24 = "100100";
const sc_lv<5> Compult_randac::ap_const_lv5_0 = "00000";
const sc_lv<32> Compult_randac::ap_const_lv32_1 = "1";
const sc_lv<32> Compult_randac::ap_const_lv32_1F = "11111";
const sc_lv<12> Compult_randac::ap_const_lv12_0 = "000000000000";
const sc_lv<20> Compult_randac::ap_const_lv20_0 = "00000000000000000000";
const sc_lv<32> Compult_randac::ap_const_lv32_18 = "11000";
const sc_lv<32> Compult_randac::ap_const_lv32_19 = "11001";
const sc_lv<7> Compult_randac::ap_const_lv7_0 = "0000000";
const sc_lv<7> Compult_randac::ap_const_lv7_7F = "1111111";
const sc_lv<16> Compult_randac::ap_const_lv16_0 = "0000000000000000";
const sc_lv<41> Compult_randac::ap_const_lv41_FFFFFFFFFF = "1111111111111111111111111111111111111111";
const sc_lv<41> Compult_randac::ap_const_lv41_10000000000 = "10000000000000000000000000000000000000000";
const sc_lv<32> Compult_randac::ap_const_lv32_10 = "10000";
const sc_lv<32> Compult_randac::ap_const_lv32_28 = "101000";
const sc_lv<32> Compult_randac::ap_const_lv32_14 = "10100";
const sc_lv<4> Compult_randac::ap_const_lv4_0 = "0000";
const sc_lv<4> Compult_randac::ap_const_lv4_F = "1111";
const sc_lv<25> Compult_randac::ap_const_lv25_1 = "1";
const sc_lv<3> Compult_randac::ap_const_lv3_0 = "000";
const sc_lv<20> Compult_randac::ap_const_lv20_7FFFF = "1111111111111111111";
const sc_lv<20> Compult_randac::ap_const_lv20_80000 = "10000000000000000000";
const sc_lv<1> Compult_randac::ap_const_lv1_0 = "0";

Compult_randac::Compult_randac(sc_module_name name) : sc_module(name), mVcdFile(0) {
    Compult_mul_31s_7ns_38_3_U0 = new Compult_mul_31s_7ns_38_3<1,3,31,7,38>("Compult_mul_31s_7ns_38_3_U0");
    Compult_mul_31s_7ns_38_3_U0->clk(ap_clk);
    Compult_mul_31s_7ns_38_3_U0->reset(ap_rst);
    Compult_mul_31s_7ns_38_3_U0->din0(grp_fu_89_p0);
    Compult_mul_31s_7ns_38_3_U0->din1(grp_fu_89_p1);
    Compult_mul_31s_7ns_38_3_U0->ce(grp_fu_89_ce);
    Compult_mul_31s_7ns_38_3_U0->dout(grp_fu_89_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( ap_sig_cseq_ST_st8_fsm_7 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_sig_cseq_ST_st8_fsm_7 );

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_sig_cseq_ST_st8_fsm_7 );
    sensitive << ( brmerge4_fu_467_p2 );
    sensitive << ( result_V_fu_473_p3 );
    sensitive << ( p_Val2_7_fu_481_p3 );

    SC_METHOD(thread_ap_sig_bdd_100);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_122);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_26);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_46);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_61);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_74);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_89);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_cseq_ST_st1_fsm_0);
    sensitive << ( ap_sig_bdd_26 );

    SC_METHOD(thread_ap_sig_cseq_ST_st3_fsm_2);
    sensitive << ( ap_sig_bdd_46 );

    SC_METHOD(thread_ap_sig_cseq_ST_st4_fsm_3);
    sensitive << ( ap_sig_bdd_61 );

    SC_METHOD(thread_ap_sig_cseq_ST_st5_fsm_4);
    sensitive << ( ap_sig_bdd_74 );

    SC_METHOD(thread_ap_sig_cseq_ST_st6_fsm_5);
    sensitive << ( ap_sig_bdd_89 );

    SC_METHOD(thread_ap_sig_cseq_ST_st7_fsm_6);
    sensitive << ( ap_sig_bdd_100 );

    SC_METHOD(thread_ap_sig_cseq_ST_st8_fsm_7);
    sensitive << ( ap_sig_bdd_122 );

    SC_METHOD(thread_brmerge39_i_fu_446_p2);
    sensitive << ( newsignbit_0_not_i_reg_608 );
    sensitive << ( p_not38_i_reg_613 );

    SC_METHOD(thread_brmerge39_i_i1_fu_260_p2);
    sensitive << ( p_not38_i_i1_fu_255_p2 );
    sensitive << ( newsignbit_0_not_i_i1_fu_250_p2 );

    SC_METHOD(thread_brmerge4_fu_467_p2);
    sensitive << ( overflow_1_fu_440_p2 );
    sensitive << ( underflow_2_not_fu_461_p2 );

    SC_METHOD(thread_brmerge_fu_287_p2);
    sensitive << ( overflow_reg_561 );
    sensitive << ( underflow_not_fu_282_p2 );

    SC_METHOD(thread_brmerge_i_fu_431_p2);
    sensitive << ( newsignbit_1_reg_598 );
    sensitive << ( p_not_i_reg_603 );

    SC_METHOD(thread_brmerge_i_i1_fu_234_p2);
    sensitive << ( newsignbit_reg_549 );
    sensitive << ( p_not_i_i1_fu_229_p2 );

    SC_METHOD(thread_brmerge_i_i2_fu_455_p2);
    sensitive << ( underflow_1_fu_450_p2 );
    sensitive << ( overflow_1_fu_440_p2 );

    SC_METHOD(thread_brmerge_i_i_i1_fu_278_p2);
    sensitive << ( overflow_reg_561 );
    sensitive << ( underflow_reg_567 );

    SC_METHOD(thread_grp_fu_89_ce);

    SC_METHOD(thread_grp_fu_89_p0);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( seed_V );

    SC_METHOD(thread_grp_fu_89_p1);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );

    SC_METHOD(thread_newsignbit_0_not_i_fu_377_p2);
    sensitive << ( newsignbit_1_fu_353_p3 );

    SC_METHOD(thread_newsignbit_0_not_i_i1_fu_250_p2);
    sensitive << ( newsignbit_reg_549 );

    SC_METHOD(thread_newsignbit_1_fu_353_p3);
    sensitive << ( p_Val2_3_fu_307_p3 );

    SC_METHOD(thread_overflow_1_fu_440_p2);
    sensitive << ( brmerge_i_fu_431_p2 );
    sensitive << ( tmp_8_fu_435_p2 );

    SC_METHOD(thread_overflow_fu_244_p2);
    sensitive << ( brmerge_i_i1_fu_234_p2 );
    sensitive << ( tmp_1_fu_239_p2 );

    SC_METHOD(thread_p_3_fu_394_p3);
    sensitive << ( ret_V_reg_574 );
    sensitive << ( tmp_3_reg_588 );
    sensitive << ( ret_V_1_fu_389_p2 );

    SC_METHOD(thread_p_Val2_1_fu_192_p3);
    sensitive << ( tmp_12_reg_523 );
    sensitive << ( p_neg_t_fu_186_p2 );
    sensitive << ( p_and_f_fu_166_p3 );

    SC_METHOD(thread_p_Val2_2_35_fu_300_p3);
    sensitive << ( underflow_reg_567 );
    sensitive << ( p_Val2_2_fu_271_p3 );

    SC_METHOD(thread_p_Val2_2_fu_271_p3);
    sensitive << ( tmp_19_reg_544 );

    SC_METHOD(thread_p_Val2_2_mux_fu_292_p3);
    sensitive << ( brmerge_i_i_i1_fu_278_p2 );
    sensitive << ( p_Val2_2_fu_271_p3 );

    SC_METHOD(thread_p_Val2_3_fu_307_p3);
    sensitive << ( brmerge_fu_287_p2 );
    sensitive << ( p_Val2_2_mux_fu_292_p3 );
    sensitive << ( p_Val2_2_35_fu_300_p3 );

    SC_METHOD(thread_p_Val2_4_cast_fu_414_p1);
    sensitive << ( p_Val2_4_fu_406_p3 );

    SC_METHOD(thread_p_Val2_4_fu_406_p3);
    sensitive << ( tmp_s_fu_400_p3 );

    SC_METHOD(thread_p_Val2_5_fu_424_p3);
    sensitive << ( tmp_14_reg_593 );

    SC_METHOD(thread_p_Val2_7_fu_481_p3);
    sensitive << ( underflow_1_fu_450_p2 );
    sensitive << ( p_Val2_5_fu_424_p3 );

    SC_METHOD(thread_p_and_f_fu_166_p3);
    sensitive << ( tmp_13_reg_528 );

    SC_METHOD(thread_p_and_t_fu_178_p3);
    sensitive << ( tmp_17_fu_173_p2 );

    SC_METHOD(thread_p_neg_t_fu_186_p2);
    sensitive << ( p_and_t_fu_178_p3 );

    SC_METHOD(thread_p_not38_i_fu_383_p2);
    sensitive << ( ap_sig_cseq_ST_st7_fsm_6 );
    sensitive << ( tmp_fu_361_p4 );

    SC_METHOD(thread_p_not38_i_i1_fu_255_p2);
    sensitive << ( p_Result_s_reg_555 );
    sensitive << ( ap_sig_cseq_ST_st6_fsm_5 );

    SC_METHOD(thread_p_not_i_fu_371_p2);
    sensitive << ( ap_sig_cseq_ST_st7_fsm_6 );
    sensitive << ( tmp_fu_361_p4 );

    SC_METHOD(thread_p_not_i_i1_fu_229_p2);
    sensitive << ( p_Result_s_reg_555 );
    sensitive << ( ap_sig_cseq_ST_st6_fsm_5 );

    SC_METHOD(thread_result_V_fu_473_p3);
    sensitive << ( brmerge_i_i2_fu_455_p2 );
    sensitive << ( p_Val2_5_fu_424_p3 );

    SC_METHOD(thread_ret_V_1_fu_389_p2);
    sensitive << ( ret_V_reg_574 );

    SC_METHOD(thread_tmp_11_fu_132_p2);
    sensitive << ( tmp_10_reg_512 );

    SC_METHOD(thread_tmp_13_fu_158_p1);
    sensitive << ( tmp_9_fu_144_p3 );

    SC_METHOD(thread_tmp_16_fu_162_p1);
    sensitive << ( tmp_9_fu_144_p3 );

    SC_METHOD(thread_tmp_17_fu_173_p2);
    sensitive << ( tmp_16_reg_533 );

    SC_METHOD(thread_tmp_19_fu_207_p1);
    sensitive << ( p_Val2_1_fu_192_p3 );

    SC_METHOD(thread_tmp_1_fu_239_p2);
    sensitive << ( isneg_reg_538 );

    SC_METHOD(thread_tmp_22_fu_333_p1);
    sensitive << ( p_Val2_3_fu_307_p3 );

    SC_METHOD(thread_tmp_2_fu_127_p2);
    sensitive << ( tmp_5_reg_502 );
    sensitive << ( tmp_6_reg_507 );
    sensitive << ( ap_sig_cseq_ST_st4_fsm_3 );

    SC_METHOD(thread_tmp_3_fu_337_p2);
    sensitive << ( ap_sig_cseq_ST_st7_fsm_6 );
    sensitive << ( tmp_22_fu_333_p1 );

    SC_METHOD(thread_tmp_6_fu_103_p1);
    sensitive << ( grp_fu_89_p2 );

    SC_METHOD(thread_tmp_7_fu_137_p3);
    sensitive << ( tmp_4_reg_517 );
    sensitive << ( tmp_2_fu_127_p2 );
    sensitive << ( tmp_11_fu_132_p2 );

    SC_METHOD(thread_tmp_8_fu_435_p2);
    sensitive << ( isneg_1_reg_581 );

    SC_METHOD(thread_tmp_9_fu_144_p3);
    sensitive << ( tmp_5_reg_502 );
    sensitive << ( tmp_4_reg_517 );
    sensitive << ( tmp_7_fu_137_p3 );

    SC_METHOD(thread_tmp_fu_361_p4);
    sensitive << ( p_Val2_3_fu_307_p3 );

    SC_METHOD(thread_tmp_s_fu_400_p3);
    sensitive << ( ret_V_reg_574 );
    sensitive << ( isneg_1_reg_581 );
    sensitive << ( p_3_fu_394_p3 );

    SC_METHOD(thread_underflow_1_fu_450_p2);
    sensitive << ( isneg_1_reg_581 );
    sensitive << ( brmerge39_i_fu_446_p2 );

    SC_METHOD(thread_underflow_2_not_fu_461_p2);
    sensitive << ( underflow_1_fu_450_p2 );

    SC_METHOD(thread_underflow_fu_266_p2);
    sensitive << ( isneg_reg_538 );
    sensitive << ( brmerge39_i_i1_fu_260_p2 );

    SC_METHOD(thread_underflow_not_fu_282_p2);
    sensitive << ( underflow_reg_567 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );

    ap_CS_fsm = "00000001";
    seed_V = "0000000000000000000000100100000";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "Compult_randac_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st1_fsm_0, "ap_sig_cseq_ST_st1_fsm_0");
    sc_trace(mVcdFile, ap_sig_bdd_26, "ap_sig_bdd_26");
    sc_trace(mVcdFile, seed_V, "seed_V");
    sc_trace(mVcdFile, tmp_5_reg_502, "tmp_5_reg_502");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st3_fsm_2, "ap_sig_cseq_ST_st3_fsm_2");
    sc_trace(mVcdFile, ap_sig_bdd_46, "ap_sig_bdd_46");
    sc_trace(mVcdFile, tmp_6_fu_103_p1, "tmp_6_fu_103_p1");
    sc_trace(mVcdFile, tmp_6_reg_507, "tmp_6_reg_507");
    sc_trace(mVcdFile, tmp_10_reg_512, "tmp_10_reg_512");
    sc_trace(mVcdFile, tmp_4_reg_517, "tmp_4_reg_517");
    sc_trace(mVcdFile, tmp_12_reg_523, "tmp_12_reg_523");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st4_fsm_3, "ap_sig_cseq_ST_st4_fsm_3");
    sc_trace(mVcdFile, ap_sig_bdd_61, "ap_sig_bdd_61");
    sc_trace(mVcdFile, tmp_13_fu_158_p1, "tmp_13_fu_158_p1");
    sc_trace(mVcdFile, tmp_13_reg_528, "tmp_13_reg_528");
    sc_trace(mVcdFile, tmp_16_fu_162_p1, "tmp_16_fu_162_p1");
    sc_trace(mVcdFile, tmp_16_reg_533, "tmp_16_reg_533");
    sc_trace(mVcdFile, isneg_reg_538, "isneg_reg_538");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st5_fsm_4, "ap_sig_cseq_ST_st5_fsm_4");
    sc_trace(mVcdFile, ap_sig_bdd_74, "ap_sig_bdd_74");
    sc_trace(mVcdFile, tmp_19_fu_207_p1, "tmp_19_fu_207_p1");
    sc_trace(mVcdFile, tmp_19_reg_544, "tmp_19_reg_544");
    sc_trace(mVcdFile, newsignbit_reg_549, "newsignbit_reg_549");
    sc_trace(mVcdFile, p_Result_s_reg_555, "p_Result_s_reg_555");
    sc_trace(mVcdFile, overflow_fu_244_p2, "overflow_fu_244_p2");
    sc_trace(mVcdFile, overflow_reg_561, "overflow_reg_561");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st6_fsm_5, "ap_sig_cseq_ST_st6_fsm_5");
    sc_trace(mVcdFile, ap_sig_bdd_89, "ap_sig_bdd_89");
    sc_trace(mVcdFile, underflow_fu_266_p2, "underflow_fu_266_p2");
    sc_trace(mVcdFile, underflow_reg_567, "underflow_reg_567");
    sc_trace(mVcdFile, ret_V_reg_574, "ret_V_reg_574");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st7_fsm_6, "ap_sig_cseq_ST_st7_fsm_6");
    sc_trace(mVcdFile, ap_sig_bdd_100, "ap_sig_bdd_100");
    sc_trace(mVcdFile, isneg_1_reg_581, "isneg_1_reg_581");
    sc_trace(mVcdFile, tmp_3_fu_337_p2, "tmp_3_fu_337_p2");
    sc_trace(mVcdFile, tmp_3_reg_588, "tmp_3_reg_588");
    sc_trace(mVcdFile, tmp_14_reg_593, "tmp_14_reg_593");
    sc_trace(mVcdFile, newsignbit_1_fu_353_p3, "newsignbit_1_fu_353_p3");
    sc_trace(mVcdFile, newsignbit_1_reg_598, "newsignbit_1_reg_598");
    sc_trace(mVcdFile, p_not_i_fu_371_p2, "p_not_i_fu_371_p2");
    sc_trace(mVcdFile, p_not_i_reg_603, "p_not_i_reg_603");
    sc_trace(mVcdFile, newsignbit_0_not_i_fu_377_p2, "newsignbit_0_not_i_fu_377_p2");
    sc_trace(mVcdFile, newsignbit_0_not_i_reg_608, "newsignbit_0_not_i_reg_608");
    sc_trace(mVcdFile, p_not38_i_fu_383_p2, "p_not38_i_fu_383_p2");
    sc_trace(mVcdFile, p_not38_i_reg_613, "p_not38_i_reg_613");
    sc_trace(mVcdFile, p_Val2_4_cast_fu_414_p1, "p_Val2_4_cast_fu_414_p1");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st8_fsm_7, "ap_sig_cseq_ST_st8_fsm_7");
    sc_trace(mVcdFile, ap_sig_bdd_122, "ap_sig_bdd_122");
    sc_trace(mVcdFile, grp_fu_89_p0, "grp_fu_89_p0");
    sc_trace(mVcdFile, grp_fu_89_p1, "grp_fu_89_p1");
    sc_trace(mVcdFile, grp_fu_89_p2, "grp_fu_89_p2");
    sc_trace(mVcdFile, tmp_2_fu_127_p2, "tmp_2_fu_127_p2");
    sc_trace(mVcdFile, tmp_11_fu_132_p2, "tmp_11_fu_132_p2");
    sc_trace(mVcdFile, tmp_7_fu_137_p3, "tmp_7_fu_137_p3");
    sc_trace(mVcdFile, tmp_9_fu_144_p3, "tmp_9_fu_144_p3");
    sc_trace(mVcdFile, tmp_17_fu_173_p2, "tmp_17_fu_173_p2");
    sc_trace(mVcdFile, p_and_t_fu_178_p3, "p_and_t_fu_178_p3");
    sc_trace(mVcdFile, p_neg_t_fu_186_p2, "p_neg_t_fu_186_p2");
    sc_trace(mVcdFile, p_and_f_fu_166_p3, "p_and_f_fu_166_p3");
    sc_trace(mVcdFile, p_Val2_1_fu_192_p3, "p_Val2_1_fu_192_p3");
    sc_trace(mVcdFile, p_not_i_i1_fu_229_p2, "p_not_i_i1_fu_229_p2");
    sc_trace(mVcdFile, brmerge_i_i1_fu_234_p2, "brmerge_i_i1_fu_234_p2");
    sc_trace(mVcdFile, tmp_1_fu_239_p2, "tmp_1_fu_239_p2");
    sc_trace(mVcdFile, p_not38_i_i1_fu_255_p2, "p_not38_i_i1_fu_255_p2");
    sc_trace(mVcdFile, newsignbit_0_not_i_i1_fu_250_p2, "newsignbit_0_not_i_i1_fu_250_p2");
    sc_trace(mVcdFile, brmerge39_i_i1_fu_260_p2, "brmerge39_i_i1_fu_260_p2");
    sc_trace(mVcdFile, underflow_not_fu_282_p2, "underflow_not_fu_282_p2");
    sc_trace(mVcdFile, brmerge_i_i_i1_fu_278_p2, "brmerge_i_i_i1_fu_278_p2");
    sc_trace(mVcdFile, p_Val2_2_fu_271_p3, "p_Val2_2_fu_271_p3");
    sc_trace(mVcdFile, brmerge_fu_287_p2, "brmerge_fu_287_p2");
    sc_trace(mVcdFile, p_Val2_2_mux_fu_292_p3, "p_Val2_2_mux_fu_292_p3");
    sc_trace(mVcdFile, p_Val2_2_35_fu_300_p3, "p_Val2_2_35_fu_300_p3");
    sc_trace(mVcdFile, p_Val2_3_fu_307_p3, "p_Val2_3_fu_307_p3");
    sc_trace(mVcdFile, tmp_22_fu_333_p1, "tmp_22_fu_333_p1");
    sc_trace(mVcdFile, tmp_fu_361_p4, "tmp_fu_361_p4");
    sc_trace(mVcdFile, ret_V_1_fu_389_p2, "ret_V_1_fu_389_p2");
    sc_trace(mVcdFile, p_3_fu_394_p3, "p_3_fu_394_p3");
    sc_trace(mVcdFile, tmp_s_fu_400_p3, "tmp_s_fu_400_p3");
    sc_trace(mVcdFile, p_Val2_4_fu_406_p3, "p_Val2_4_fu_406_p3");
    sc_trace(mVcdFile, brmerge_i_fu_431_p2, "brmerge_i_fu_431_p2");
    sc_trace(mVcdFile, tmp_8_fu_435_p2, "tmp_8_fu_435_p2");
    sc_trace(mVcdFile, brmerge39_i_fu_446_p2, "brmerge39_i_fu_446_p2");
    sc_trace(mVcdFile, underflow_1_fu_450_p2, "underflow_1_fu_450_p2");
    sc_trace(mVcdFile, overflow_1_fu_440_p2, "overflow_1_fu_440_p2");
    sc_trace(mVcdFile, underflow_2_not_fu_461_p2, "underflow_2_not_fu_461_p2");
    sc_trace(mVcdFile, brmerge_i_i2_fu_455_p2, "brmerge_i_i2_fu_455_p2");
    sc_trace(mVcdFile, p_Val2_5_fu_424_p3, "p_Val2_5_fu_424_p3");
    sc_trace(mVcdFile, brmerge4_fu_467_p2, "brmerge4_fu_467_p2");
    sc_trace(mVcdFile, result_V_fu_473_p3, "result_V_fu_473_p3");
    sc_trace(mVcdFile, p_Val2_7_fu_481_p3, "p_Val2_7_fu_481_p3");
    sc_trace(mVcdFile, grp_fu_89_ce, "grp_fu_89_ce");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

Compult_randac::~Compult_randac() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete Compult_mul_31s_7ns_38_3_U0;
}

void Compult_randac::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_st1_fsm_0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st7_fsm_6.read())) {
        isneg_1_reg_581 = p_Val2_3_fu_307_p3.read().range(40, 40);
        newsignbit_0_not_i_reg_608 = newsignbit_0_not_i_fu_377_p2.read();
        newsignbit_1_reg_598 = p_Val2_3_fu_307_p3.read().range(36, 36);
        p_not38_i_reg_613 = p_not38_i_fu_383_p2.read();
        p_not_i_reg_603 = p_not_i_fu_371_p2.read();
        ret_V_reg_574 = p_Val2_3_fu_307_p3.read().range(40, 16);
        tmp_14_reg_593 = p_Val2_3_fu_307_p3.read().range(36, 20);
        tmp_3_reg_588 = tmp_3_fu_337_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st5_fsm_4.read())) {
        isneg_reg_538 = p_Val2_1_fu_192_p3.read().range(31, 31);
        newsignbit_reg_549 = p_Val2_1_fu_192_p3.read().range(24, 24);
        p_Result_s_reg_555 = p_Val2_1_fu_192_p3.read().range(31, 25);
        tmp_19_reg_544 = tmp_19_fu_207_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st6_fsm_5.read())) {
        overflow_reg_561 = overflow_fu_244_p2.read();
        underflow_reg_567 = underflow_fu_266_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st8_fsm_7.read())) {
        seed_V = p_Val2_4_cast_fu_414_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        tmp_10_reg_512 = grp_fu_89_p2.read().range(36, 5);
        tmp_4_reg_517 = grp_fu_89_p2.read().range(36, 5);
        tmp_5_reg_502 = grp_fu_89_p2.read().range(37, 37);
        tmp_6_reg_507 = tmp_6_fu_103_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        tmp_12_reg_523 = tmp_9_fu_144_p3.read().range(31, 31);
        tmp_13_reg_528 = tmp_13_fu_158_p1.read();
        tmp_16_reg_533 = tmp_16_fu_162_p1.read();
    }
}

void Compult_randac::thread_ap_done() {
    if (((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st8_fsm_7.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void Compult_randac::thread_ap_idle() {
    if ((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void Compult_randac::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st8_fsm_7.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void Compult_randac::thread_ap_return() {
    ap_return = (!brmerge4_fu_467_p2.read()[0].is_01())? sc_lv<20>(): ((brmerge4_fu_467_p2.read()[0].to_bool())? result_V_fu_473_p3.read(): p_Val2_7_fu_481_p3.read());
}

void Compult_randac::thread_ap_sig_bdd_100() {
    ap_sig_bdd_100 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(6, 6));
}

void Compult_randac::thread_ap_sig_bdd_122() {
    ap_sig_bdd_122 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(7, 7));
}

void Compult_randac::thread_ap_sig_bdd_26() {
    ap_sig_bdd_26 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void Compult_randac::thread_ap_sig_bdd_46() {
    ap_sig_bdd_46 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(2, 2));
}

void Compult_randac::thread_ap_sig_bdd_61() {
    ap_sig_bdd_61 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(3, 3));
}

void Compult_randac::thread_ap_sig_bdd_74() {
    ap_sig_bdd_74 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(4, 4));
}

void Compult_randac::thread_ap_sig_bdd_89() {
    ap_sig_bdd_89 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(5, 5));
}

void Compult_randac::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_bdd_26.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void Compult_randac::thread_ap_sig_cseq_ST_st3_fsm_2() {
    if (ap_sig_bdd_46.read()) {
        ap_sig_cseq_ST_st3_fsm_2 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st3_fsm_2 = ap_const_logic_0;
    }
}

void Compult_randac::thread_ap_sig_cseq_ST_st4_fsm_3() {
    if (ap_sig_bdd_61.read()) {
        ap_sig_cseq_ST_st4_fsm_3 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st4_fsm_3 = ap_const_logic_0;
    }
}

void Compult_randac::thread_ap_sig_cseq_ST_st5_fsm_4() {
    if (ap_sig_bdd_74.read()) {
        ap_sig_cseq_ST_st5_fsm_4 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st5_fsm_4 = ap_const_logic_0;
    }
}

void Compult_randac::thread_ap_sig_cseq_ST_st6_fsm_5() {
    if (ap_sig_bdd_89.read()) {
        ap_sig_cseq_ST_st6_fsm_5 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st6_fsm_5 = ap_const_logic_0;
    }
}

void Compult_randac::thread_ap_sig_cseq_ST_st7_fsm_6() {
    if (ap_sig_bdd_100.read()) {
        ap_sig_cseq_ST_st7_fsm_6 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st7_fsm_6 = ap_const_logic_0;
    }
}

void Compult_randac::thread_ap_sig_cseq_ST_st8_fsm_7() {
    if (ap_sig_bdd_122.read()) {
        ap_sig_cseq_ST_st8_fsm_7 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st8_fsm_7 = ap_const_logic_0;
    }
}

void Compult_randac::thread_brmerge39_i_fu_446_p2() {
    brmerge39_i_fu_446_p2 = (p_not38_i_reg_613.read() | newsignbit_0_not_i_reg_608.read());
}

void Compult_randac::thread_brmerge39_i_i1_fu_260_p2() {
    brmerge39_i_i1_fu_260_p2 = (p_not38_i_i1_fu_255_p2.read() | newsignbit_0_not_i_i1_fu_250_p2.read());
}

void Compult_randac::thread_brmerge4_fu_467_p2() {
    brmerge4_fu_467_p2 = (overflow_1_fu_440_p2.read() | underflow_2_not_fu_461_p2.read());
}

void Compult_randac::thread_brmerge_fu_287_p2() {
    brmerge_fu_287_p2 = (overflow_reg_561.read() | underflow_not_fu_282_p2.read());
}

void Compult_randac::thread_brmerge_i_fu_431_p2() {
    brmerge_i_fu_431_p2 = (newsignbit_1_reg_598.read() | p_not_i_reg_603.read());
}

void Compult_randac::thread_brmerge_i_i1_fu_234_p2() {
    brmerge_i_i1_fu_234_p2 = (newsignbit_reg_549.read() | p_not_i_i1_fu_229_p2.read());
}

void Compult_randac::thread_brmerge_i_i2_fu_455_p2() {
    brmerge_i_i2_fu_455_p2 = (underflow_1_fu_450_p2.read() | overflow_1_fu_440_p2.read());
}

void Compult_randac::thread_brmerge_i_i_i1_fu_278_p2() {
    brmerge_i_i_i1_fu_278_p2 = (underflow_reg_567.read() | overflow_reg_561.read());
}

void Compult_randac::thread_grp_fu_89_ce() {
    grp_fu_89_ce = ap_const_logic_1;
}

void Compult_randac::thread_grp_fu_89_p0() {
    grp_fu_89_p0 = seed_V.read();
}

void Compult_randac::thread_grp_fu_89_p1() {
    grp_fu_89_p1 =  (sc_lv<7>) (ap_const_lv38_2D);
}

void Compult_randac::thread_newsignbit_0_not_i_fu_377_p2() {
    newsignbit_0_not_i_fu_377_p2 = (newsignbit_1_fu_353_p3.read() ^ ap_const_lv1_1);
}

void Compult_randac::thread_newsignbit_0_not_i_i1_fu_250_p2() {
    newsignbit_0_not_i_i1_fu_250_p2 = (newsignbit_reg_549.read() ^ ap_const_lv1_1);
}

void Compult_randac::thread_newsignbit_1_fu_353_p3() {
    newsignbit_1_fu_353_p3 = p_Val2_3_fu_307_p3.read().range(36, 36);
}

void Compult_randac::thread_overflow_1_fu_440_p2() {
    overflow_1_fu_440_p2 = (brmerge_i_fu_431_p2.read() & tmp_8_fu_435_p2.read());
}

void Compult_randac::thread_overflow_fu_244_p2() {
    overflow_fu_244_p2 = (brmerge_i_i1_fu_234_p2.read() & tmp_1_fu_239_p2.read());
}

void Compult_randac::thread_p_3_fu_394_p3() {
    p_3_fu_394_p3 = (!tmp_3_reg_588.read()[0].is_01())? sc_lv<25>(): ((tmp_3_reg_588.read()[0].to_bool())? ret_V_reg_574.read(): ret_V_1_fu_389_p2.read());
}

void Compult_randac::thread_p_Val2_1_fu_192_p3() {
    p_Val2_1_fu_192_p3 = (!tmp_12_reg_523.read()[0].is_01())? sc_lv<32>(): ((tmp_12_reg_523.read()[0].to_bool())? p_neg_t_fu_186_p2.read(): p_and_f_fu_166_p3.read());
}

void Compult_randac::thread_p_Val2_2_35_fu_300_p3() {
    p_Val2_2_35_fu_300_p3 = (!underflow_reg_567.read()[0].is_01())? sc_lv<41>(): ((underflow_reg_567.read()[0].to_bool())? ap_const_lv41_10000000000: p_Val2_2_fu_271_p3.read());
}

void Compult_randac::thread_p_Val2_2_fu_271_p3() {
    p_Val2_2_fu_271_p3 = esl_concat<25,16>(tmp_19_reg_544.read(), ap_const_lv16_0);
}

void Compult_randac::thread_p_Val2_2_mux_fu_292_p3() {
    p_Val2_2_mux_fu_292_p3 = (!brmerge_i_i_i1_fu_278_p2.read()[0].is_01())? sc_lv<41>(): ((brmerge_i_i_i1_fu_278_p2.read()[0].to_bool())? ap_const_lv41_FFFFFFFFFF: p_Val2_2_fu_271_p3.read());
}

void Compult_randac::thread_p_Val2_3_fu_307_p3() {
    p_Val2_3_fu_307_p3 = (!brmerge_fu_287_p2.read()[0].is_01())? sc_lv<41>(): ((brmerge_fu_287_p2.read()[0].to_bool())? p_Val2_2_mux_fu_292_p3.read(): p_Val2_2_35_fu_300_p3.read());
}

void Compult_randac::thread_p_Val2_4_cast_fu_414_p1() {
    p_Val2_4_cast_fu_414_p1 = esl_sext<31,30>(p_Val2_4_fu_406_p3.read());
}

void Compult_randac::thread_p_Val2_4_fu_406_p3() {
    p_Val2_4_fu_406_p3 = esl_concat<25,5>(tmp_s_fu_400_p3.read(), ap_const_lv5_0);
}

void Compult_randac::thread_p_Val2_5_fu_424_p3() {
    p_Val2_5_fu_424_p3 = esl_concat<17,3>(tmp_14_reg_593.read(), ap_const_lv3_0);
}

void Compult_randac::thread_p_Val2_7_fu_481_p3() {
    p_Val2_7_fu_481_p3 = (!underflow_1_fu_450_p2.read()[0].is_01())? sc_lv<20>(): ((underflow_1_fu_450_p2.read()[0].to_bool())? ap_const_lv20_80000: p_Val2_5_fu_424_p3.read());
}

void Compult_randac::thread_p_and_f_fu_166_p3() {
    p_and_f_fu_166_p3 = esl_concat<12,20>(ap_const_lv12_0, tmp_13_reg_528.read());
}

void Compult_randac::thread_p_and_t_fu_178_p3() {
    p_and_t_fu_178_p3 = esl_concat<12,20>(ap_const_lv12_0, tmp_17_fu_173_p2.read());
}

void Compult_randac::thread_p_neg_t_fu_186_p2() {
    p_neg_t_fu_186_p2 = (!ap_const_lv32_0.is_01() || !p_and_t_fu_178_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_0) - sc_biguint<32>(p_and_t_fu_178_p3.read()));
}

void Compult_randac::thread_p_not38_i_fu_383_p2() {
    p_not38_i_fu_383_p2 = (!tmp_fu_361_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_fu_361_p4.read() != ap_const_lv4_F);
}

void Compult_randac::thread_p_not38_i_i1_fu_255_p2() {
    p_not38_i_i1_fu_255_p2 = (!p_Result_s_reg_555.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_s_reg_555.read() != ap_const_lv7_7F);
}

void Compult_randac::thread_p_not_i_fu_371_p2() {
    p_not_i_fu_371_p2 = (!tmp_fu_361_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_fu_361_p4.read() != ap_const_lv4_0);
}

void Compult_randac::thread_p_not_i_i1_fu_229_p2() {
    p_not_i_i1_fu_229_p2 = (!p_Result_s_reg_555.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_s_reg_555.read() != ap_const_lv7_0);
}

void Compult_randac::thread_result_V_fu_473_p3() {
    result_V_fu_473_p3 = (!brmerge_i_i2_fu_455_p2.read()[0].is_01())? sc_lv<20>(): ((brmerge_i_i2_fu_455_p2.read()[0].to_bool())? ap_const_lv20_7FFFF: p_Val2_5_fu_424_p3.read());
}

void Compult_randac::thread_ret_V_1_fu_389_p2() {
    ret_V_1_fu_389_p2 = (!ret_V_reg_574.read().is_01() || !ap_const_lv25_1.is_01())? sc_lv<25>(): (sc_biguint<25>(ret_V_reg_574.read()) + sc_biguint<25>(ap_const_lv25_1));
}

void Compult_randac::thread_tmp_11_fu_132_p2() {
    tmp_11_fu_132_p2 = (!tmp_10_reg_512.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_10_reg_512.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void Compult_randac::thread_tmp_13_fu_158_p1() {
    tmp_13_fu_158_p1 = tmp_9_fu_144_p3.read().range(20-1, 0);
}

void Compult_randac::thread_tmp_16_fu_162_p1() {
    tmp_16_fu_162_p1 = tmp_9_fu_144_p3.read().range(20-1, 0);
}

void Compult_randac::thread_tmp_17_fu_173_p2() {
    tmp_17_fu_173_p2 = (!ap_const_lv20_0.is_01() || !tmp_16_reg_533.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_0) - sc_biguint<20>(tmp_16_reg_533.read()));
}

void Compult_randac::thread_tmp_19_fu_207_p1() {
    tmp_19_fu_207_p1 = p_Val2_1_fu_192_p3.read().range(25-1, 0);
}

void Compult_randac::thread_tmp_1_fu_239_p2() {
    tmp_1_fu_239_p2 = (isneg_reg_538.read() ^ ap_const_lv1_1);
}

void Compult_randac::thread_tmp_22_fu_333_p1() {
    tmp_22_fu_333_p1 = p_Val2_3_fu_307_p3.read().range(16-1, 0);
}

void Compult_randac::thread_tmp_2_fu_127_p2() {
    tmp_2_fu_127_p2 = (!tmp_6_reg_507.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6_reg_507.read() == ap_const_lv5_0);
}

void Compult_randac::thread_tmp_3_fu_337_p2() {
    tmp_3_fu_337_p2 = (!tmp_22_fu_333_p1.read().is_01() || !ap_const_lv16_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_22_fu_333_p1.read() == ap_const_lv16_0);
}

void Compult_randac::thread_tmp_6_fu_103_p1() {
    tmp_6_fu_103_p1 = grp_fu_89_p2.read().range(5-1, 0);
}

void Compult_randac::thread_tmp_7_fu_137_p3() {
    tmp_7_fu_137_p3 = (!tmp_2_fu_127_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_2_fu_127_p2.read()[0].to_bool())? tmp_4_reg_517.read(): tmp_11_fu_132_p2.read());
}

void Compult_randac::thread_tmp_8_fu_435_p2() {
    tmp_8_fu_435_p2 = (isneg_1_reg_581.read() ^ ap_const_lv1_1);
}

void Compult_randac::thread_tmp_9_fu_144_p3() {
    tmp_9_fu_144_p3 = (!tmp_5_reg_502.read()[0].is_01())? sc_lv<32>(): ((tmp_5_reg_502.read()[0].to_bool())? tmp_7_fu_137_p3.read(): tmp_4_reg_517.read());
}

void Compult_randac::thread_tmp_fu_361_p4() {
    tmp_fu_361_p4 = p_Val2_3_fu_307_p3.read().range(40, 37);
}

void Compult_randac::thread_tmp_s_fu_400_p3() {
    tmp_s_fu_400_p3 = (!isneg_1_reg_581.read()[0].is_01())? sc_lv<25>(): ((isneg_1_reg_581.read()[0].to_bool())? p_3_fu_394_p3.read(): ret_V_reg_574.read());
}

void Compult_randac::thread_underflow_1_fu_450_p2() {
    underflow_1_fu_450_p2 = (brmerge39_i_fu_446_p2.read() & isneg_1_reg_581.read());
}

void Compult_randac::thread_underflow_2_not_fu_461_p2() {
    underflow_2_not_fu_461_p2 = (underflow_1_fu_450_p2.read() ^ ap_const_lv1_1);
}

void Compult_randac::thread_underflow_fu_266_p2() {
    underflow_fu_266_p2 = (brmerge39_i_i1_fu_260_p2.read() & isneg_reg_538.read());
}

void Compult_randac::thread_underflow_not_fu_282_p2() {
    underflow_not_fu_282_p2 = (underflow_reg_567.read() ^ ap_const_lv1_1);
}

void Compult_randac::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if (!esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) {
                ap_NS_fsm = ap_ST_st2_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_st3_fsm_2;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_st4_fsm_3;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_st5_fsm_4;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_st6_fsm_5;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_st7_fsm_6;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_st8_fsm_7;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_st1_fsm_0;
            break;
        default : 
            ap_NS_fsm = "XXXXXXXX";
            break;
    }
}

}
