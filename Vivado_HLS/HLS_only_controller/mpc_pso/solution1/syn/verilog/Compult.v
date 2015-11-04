// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2014.4
// Copyright (C) 2014 Xilinx Inc. All rights reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="Compult,hls_ip_2014_4,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=1,HLS_INPUT_PART=xc7z010clg400-1,HLS_INPUT_CLOCK=8.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=6.877500,HLS_SYN_LAT=149807,HLS_SYN_TPT=none,HLS_SYN_MEM=5,HLS_SYN_DSP=74,HLS_SYN_FF=7605,HLS_SYN_LUT=12093}" *)

module Compult (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        y_in_V,
        ref_in_V,
        ap_return
);

parameter    ap_const_logic_1 = 1'b1;
parameter    ap_const_logic_0 = 1'b0;
parameter    ap_ST_st1_fsm_0 = 12'b1;
parameter    ap_ST_st2_fsm_1 = 12'b10;
parameter    ap_ST_st3_fsm_2 = 12'b100;
parameter    ap_ST_st4_fsm_3 = 12'b1000;
parameter    ap_ST_st5_fsm_4 = 12'b10000;
parameter    ap_ST_st6_fsm_5 = 12'b100000;
parameter    ap_ST_st7_fsm_6 = 12'b1000000;
parameter    ap_ST_st8_fsm_7 = 12'b10000000;
parameter    ap_ST_st9_fsm_8 = 12'b100000000;
parameter    ap_ST_st10_fsm_9 = 12'b1000000000;
parameter    ap_ST_st11_fsm_10 = 12'b10000000000;
parameter    ap_ST_st12_fsm_11 = 12'b100000000000;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv1_1 = 1'b1;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv32_2 = 32'b10;
parameter    ap_const_lv32_3 = 32'b11;
parameter    ap_const_lv32_5 = 32'b101;
parameter    ap_const_lv32_6 = 32'b110;
parameter    ap_const_lv32_7 = 32'b111;
parameter    ap_const_lv32_8 = 32'b1000;
parameter    ap_const_lv32_9 = 32'b1001;
parameter    ap_const_lv32_A = 32'b1010;
parameter    ap_const_lv32_B = 32'b1011;
parameter    ap_const_lv32_1F = 32'b11111;
parameter    ap_const_lv32_1D = 32'b11101;
parameter    ap_const_lv30_1FFFFFFF = 30'b11111111111111111111111111111;
parameter    ap_const_lv32_1E = 32'b11110;
parameter    ap_const_lv30_20000000 = 30'b100000000000000000000000000000;
parameter    ap_const_lv2_0 = 2'b00;
parameter    ap_const_lv42_1F4 = 42'b111110100;
parameter    ap_const_lv32_29 = 32'b101001;
parameter    ap_const_lv32_21 = 32'b100001;
parameter    ap_const_lv32_22 = 32'b100010;
parameter    ap_const_lv8_FF = 8'b11111111;
parameter    ap_const_lv8_0 = 8'b00000000;
parameter    ap_const_lv32_7FFFFFFF = 32'b1111111111111111111111111111111;
parameter    ap_const_lv32_80000000 = 32'b10000000000000000000000000000000;
parameter    ap_const_lv32_20 = 32'b100000;
parameter    ap_const_lv3_0 = 3'b000;
parameter    ap_const_lv3_7 = 3'b111;
parameter    ap_true = 1'b1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [31:0] y_in_V;
input  [29:0] ref_in_V;
output  [29:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;
(* fsm_encoding = "none" *) reg   [11:0] ap_CS_fsm = 12'b1;
reg    ap_sig_cseq_ST_st1_fsm_0;
reg    ap_sig_bdd_28;
reg   [29:0] x1_1_V = 30'b000000000000000000000000000000;
reg   [31:0] x2_2_V = 32'b00000000000000000000000000000000;
reg   [29:0] u_V = 30'b000000000000000000000000000000;
wire   [29:0] p_Val2_19_fu_187_p2;
reg   [29:0] p_Val2_19_reg_700;
wire   [0:0] overflow_fu_207_p2;
reg   [0:0] overflow_reg_705;
wire   [29:0] p_Val2_20_fu_213_p3;
reg   [29:0] p_Val2_20_reg_710;
reg    ap_sig_cseq_ST_st2_fsm_1;
reg    ap_sig_bdd_56;
reg   [0:0] isneg_reg_715;
wire   [29:0] p_Val2_23_fu_245_p1;
reg   [29:0] p_Val2_23_reg_722;
reg   [0:0] newsignbit_reg_728;
wire   [29:0] tmp_21_fu_301_p3;
reg   [29:0] tmp_21_reg_735;
reg    ap_sig_cseq_ST_st3_fsm_2;
reg    ap_sig_bdd_71;
wire   [31:0] dx1_V_fu_309_p3;
reg   [31:0] dx1_V_reg_740;
reg    ap_sig_cseq_ST_st4_fsm_3;
reg    ap_sig_bdd_80;
reg   [0:0] signbit_reg_750;
reg    ap_sig_cseq_ST_st6_fsm_5;
reg    ap_sig_bdd_91;
reg   [0:0] qbit_3_reg_756;
reg   [0:0] newsignbit_4_reg_761;
reg   [0:0] tmp_58_reg_767;
reg   [30:0] tmp_16_reg_772;
reg   [7:0] p_Result_20_i_reg_777;
wire   [0:0] qb_assign_8_fu_378_p2;
reg   [0:0] qb_assign_8_reg_783;
reg    ap_sig_cseq_ST_st7_fsm_6;
reg    ap_sig_bdd_110;
wire   [0:0] brmerge_i_i2_fu_392_p2;
reg   [0:0] brmerge_i_i2_reg_788;
wire   [0:0] brmerge40_demorgan_i_i_fu_397_p2;
reg   [0:0] brmerge40_demorgan_i_i_reg_793;
wire   [31:0] p_Val2_26_fu_455_p3;
reg   [31:0] p_Val2_26_reg_799;
reg    ap_sig_cseq_ST_st8_fsm_7;
reg    ap_sig_bdd_123;
wire   [29:0] p_Val2_29_fu_488_p1;
reg   [29:0] p_Val2_29_reg_805;
reg    ap_sig_cseq_ST_st9_fsm_8;
reg    ap_sig_bdd_132;
wire   [0:0] overflow_5_fu_528_p2;
reg   [0:0] overflow_5_reg_811;
wire   [0:0] underflow_4_fu_552_p2;
reg   [0:0] underflow_4_reg_817;
reg    ap_sig_cseq_ST_st10_fsm_9;
reg    ap_sig_bdd_145;
wire   [29:0] dx2_V_fu_590_p3;
reg   [29:0] dx2_V_reg_829;
wire   [28:0] du_V_fu_604_p3;
reg   [28:0] du_V_reg_840;
reg    ap_sig_cseq_ST_st11_fsm_10;
reg    ap_sig_bdd_158;
wire    grp_Compult_mpc_pso_fu_113_ap_done;
reg   [0:0] isneg_3_reg_845;
wire   [29:0] p_Val2_34_fu_633_p1;
reg   [29:0] p_Val2_34_reg_852;
reg   [0:0] newsignbit_6_reg_858;
wire    grp_Compult_mpc_pso_fu_113_ap_start;
wire    grp_Compult_mpc_pso_fu_113_ap_idle;
wire    grp_Compult_mpc_pso_fu_113_ap_ready;
wire   [31:0] grp_Compult_mpc_pso_fu_113_dx1_in_V;
wire   [29:0] grp_Compult_mpc_pso_fu_113_dx2_in_V;
wire   [29:0] grp_Compult_mpc_pso_fu_113_y_in_V;
wire   [29:0] grp_Compult_mpc_pso_fu_113_u_in_V;
wire   [29:0] grp_Compult_mpc_pso_fu_113_ref_in_V;
wire   [26:0] grp_Compult_mpc_pso_fu_113_ap_return;
reg    grp_Compult_mpc_pso_fu_113_ap_start_ap_start_reg = 1'b0;
wire   [29:0] tmp_20_fu_686_p3;
reg    ap_sig_cseq_ST_st12_fsm_11;
reg    ap_sig_bdd_225;
wire   [0:0] tmp_50_fu_163_p3;
wire   [0:0] r_fu_159_p1;
wire   [0:0] r_i_i_fu_171_p2;
wire   [0:0] qbit_fu_151_p3;
wire   [0:0] qb_assign_6_fu_177_p2;
wire   [29:0] p_Val2_s_fu_141_p4;
wire   [29:0] tmp_s_fu_183_p1;
wire   [0:0] tmp_47_fu_133_p3;
wire   [0:0] tmp_51_fu_193_p3;
wire   [0:0] tmp_15_fu_201_p2;
wire  signed [30:0] tmp_i_fu_219_p1;
wire  signed [30:0] tmp_i_41_fu_227_p1;
wire  signed [30:0] p_Val2_22_fu_231_p2;
wire   [0:0] tmp_36_i_fu_263_p2;
wire   [0:0] isneg_not_i_fu_277_p2;
wire   [0:0] brmerge_i_i_i_fu_273_p2;
wire   [0:0] underflow_fu_268_p2;
wire   [0:0] brmerge_i6_fu_282_p2;
wire   [29:0] p_Val2_94_mux_i_fu_287_p3;
wire   [29:0] p_Val2_i_fu_294_p3;
wire  signed [31:0] grp_fu_320_p0;
wire   [9:0] grp_fu_320_p1;
wire  signed [41:0] grp_fu_320_p2;
wire   [0:0] p_not_i_i_fu_387_p2;
wire   [0:0] Range1_all_ones_fu_382_p2;
wire   [0:0] tmp_34_i_fu_408_p2;
wire   [0:0] tmp_fu_418_p2;
wire   [0:0] underflow_3_fu_423_p2;
wire   [0:0] overflow_4_fu_413_p2;
wire   [0:0] brmerge_i_i_i3_fu_428_p2;
wire   [31:0] p_Val2_25_fu_402_p3;
wire   [0:0] tmp7_fu_434_p2;
wire   [31:0] p_Val2_97_mux_i_fu_439_p3;
wire   [31:0] p_Val2_i4_fu_447_p3;
wire  signed [32:0] tmp_35_i_fu_463_p1;
wire  signed [32:0] tmp_36_i5_fu_470_p1;
wire  signed [32:0] p_Val2_28_fu_474_p2;
wire   [2:0] p_Result_21_i_fu_500_p4;
wire   [0:0] newsignbit_5_fu_492_p3;
wire   [0:0] p_not_i5_i_fu_510_p2;
wire   [0:0] isneg_2_fu_480_p3;
wire   [0:0] brmerge_i6_i_fu_516_p2;
wire   [0:0] tmp_37_i6_fu_522_p2;
wire   [0:0] p_not38_i_i_fu_540_p2;
wire   [0:0] newsignbit_0_not_i_i_fu_534_p2;
wire   [0:0] brmerge39_i_i_fu_546_p2;
wire   [0:0] underflow_16_not_i_fu_567_p2;
wire   [0:0] brmerge_i_i5_i_fu_563_p2;
wire   [0:0] brmerge2_i_fu_572_p2;
wire   [29:0] p_Val2_101_mux_i_fu_577_p3;
wire   [29:0] p_Val2_3_i_fu_584_p3;
wire  signed [30:0] tmp_17_fu_612_p1;
wire  signed [30:0] tmp_18_fu_615_p1;
wire  signed [30:0] p_Val2_33_fu_619_p2;
wire   [0:0] tmp_19_fu_648_p2;
wire   [0:0] isneg_not_fu_662_p2;
wire   [0:0] brmerge_i_i_fu_658_p2;
wire   [0:0] underflow_5_fu_653_p2;
wire   [0:0] brmerge_fu_667_p2;
wire   [29:0] p_Val2_108_mux_fu_672_p3;
wire   [29:0] p_Val2_s_42_fu_679_p3;
wire    grp_fu_320_ce;
reg   [11:0] ap_NS_fsm;


Compult_mpc_pso grp_Compult_mpc_pso_fu_113(
    .ap_clk( ap_clk ),
    .ap_rst( ap_rst ),
    .ap_start( grp_Compult_mpc_pso_fu_113_ap_start ),
    .ap_done( grp_Compult_mpc_pso_fu_113_ap_done ),
    .ap_idle( grp_Compult_mpc_pso_fu_113_ap_idle ),
    .ap_ready( grp_Compult_mpc_pso_fu_113_ap_ready ),
    .dx1_in_V( grp_Compult_mpc_pso_fu_113_dx1_in_V ),
    .dx2_in_V( grp_Compult_mpc_pso_fu_113_dx2_in_V ),
    .y_in_V( grp_Compult_mpc_pso_fu_113_y_in_V ),
    .u_in_V( grp_Compult_mpc_pso_fu_113_u_in_V ),
    .ref_in_V( grp_Compult_mpc_pso_fu_113_ref_in_V ),
    .ap_return( grp_Compult_mpc_pso_fu_113_ap_return )
);

Compult_mul_32s_10ns_42_3 #(
    .ID( 1 ),
    .NUM_STAGE( 3 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 10 ),
    .dout_WIDTH( 42 ))
Compult_mul_32s_10ns_42_3_U59(
    .clk( ap_clk ),
    .reset( ap_rst ),
    .din0( grp_fu_320_p0 ),
    .din1( grp_fu_320_p1 ),
    .ce( grp_fu_320_ce ),
    .dout( grp_fu_320_p2 )
);



/// the current state (ap_CS_fsm) of the state machine. ///
always @ (posedge ap_clk)
begin : ap_ret_ap_CS_fsm
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_st1_fsm_0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

/// grp_Compult_mpc_pso_fu_113_ap_start_ap_start_reg assign process. ///
always @ (posedge ap_clk)
begin : ap_ret_grp_Compult_mpc_pso_fu_113_ap_start_ap_start_reg
    if (ap_rst == 1'b1) begin
        grp_Compult_mpc_pso_fu_113_ap_start_ap_start_reg <= ap_const_logic_0;
    end else begin
        if ((ap_const_logic_1 == ap_sig_cseq_ST_st10_fsm_9)) begin
            grp_Compult_mpc_pso_fu_113_ap_start_ap_start_reg <= ap_const_logic_1;
        end else if ((ap_const_logic_1 == grp_Compult_mpc_pso_fu_113_ap_ready)) begin
            grp_Compult_mpc_pso_fu_113_ap_start_ap_start_reg <= ap_const_logic_0;
        end
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st7_fsm_6)) begin
        brmerge40_demorgan_i_i_reg_793 <= brmerge40_demorgan_i_i_fu_397_p2;
        brmerge_i_i2_reg_788 <= brmerge_i_i2_fu_392_p2;
        qb_assign_8_reg_783 <= qb_assign_8_fu_378_p2;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st11_fsm_10) & ~(ap_const_logic_0 == grp_Compult_mpc_pso_fu_113_ap_done))) begin
        du_V_reg_840[2] <= du_V_fu_604_p3[2];
du_V_reg_840[3] <= du_V_fu_604_p3[3];
du_V_reg_840[4] <= du_V_fu_604_p3[4];
du_V_reg_840[5] <= du_V_fu_604_p3[5];
du_V_reg_840[6] <= du_V_fu_604_p3[6];
du_V_reg_840[7] <= du_V_fu_604_p3[7];
du_V_reg_840[8] <= du_V_fu_604_p3[8];
du_V_reg_840[9] <= du_V_fu_604_p3[9];
du_V_reg_840[10] <= du_V_fu_604_p3[10];
du_V_reg_840[11] <= du_V_fu_604_p3[11];
du_V_reg_840[12] <= du_V_fu_604_p3[12];
du_V_reg_840[13] <= du_V_fu_604_p3[13];
du_V_reg_840[14] <= du_V_fu_604_p3[14];
du_V_reg_840[15] <= du_V_fu_604_p3[15];
du_V_reg_840[16] <= du_V_fu_604_p3[16];
du_V_reg_840[17] <= du_V_fu_604_p3[17];
du_V_reg_840[18] <= du_V_fu_604_p3[18];
du_V_reg_840[19] <= du_V_fu_604_p3[19];
du_V_reg_840[20] <= du_V_fu_604_p3[20];
du_V_reg_840[21] <= du_V_fu_604_p3[21];
du_V_reg_840[22] <= du_V_fu_604_p3[22];
du_V_reg_840[23] <= du_V_fu_604_p3[23];
du_V_reg_840[24] <= du_V_fu_604_p3[24];
du_V_reg_840[25] <= du_V_fu_604_p3[25];
du_V_reg_840[26] <= du_V_fu_604_p3[26];
du_V_reg_840[27] <= du_V_fu_604_p3[27];
du_V_reg_840[28] <= du_V_fu_604_p3[28];
        isneg_3_reg_845 <= p_Val2_33_fu_619_p2[ap_const_lv32_1E];
        newsignbit_6_reg_858 <= p_Val2_33_fu_619_p2[ap_const_lv32_1D];
        p_Val2_34_reg_852 <= p_Val2_34_fu_633_p1;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st4_fsm_3)) begin
        dx1_V_reg_740[2] <= dx1_V_fu_309_p3[2];
dx1_V_reg_740[3] <= dx1_V_fu_309_p3[3];
dx1_V_reg_740[4] <= dx1_V_fu_309_p3[4];
dx1_V_reg_740[5] <= dx1_V_fu_309_p3[5];
dx1_V_reg_740[6] <= dx1_V_fu_309_p3[6];
dx1_V_reg_740[7] <= dx1_V_fu_309_p3[7];
dx1_V_reg_740[8] <= dx1_V_fu_309_p3[8];
dx1_V_reg_740[9] <= dx1_V_fu_309_p3[9];
dx1_V_reg_740[10] <= dx1_V_fu_309_p3[10];
dx1_V_reg_740[11] <= dx1_V_fu_309_p3[11];
dx1_V_reg_740[12] <= dx1_V_fu_309_p3[12];
dx1_V_reg_740[13] <= dx1_V_fu_309_p3[13];
dx1_V_reg_740[14] <= dx1_V_fu_309_p3[14];
dx1_V_reg_740[15] <= dx1_V_fu_309_p3[15];
dx1_V_reg_740[16] <= dx1_V_fu_309_p3[16];
dx1_V_reg_740[17] <= dx1_V_fu_309_p3[17];
dx1_V_reg_740[18] <= dx1_V_fu_309_p3[18];
dx1_V_reg_740[19] <= dx1_V_fu_309_p3[19];
dx1_V_reg_740[20] <= dx1_V_fu_309_p3[20];
dx1_V_reg_740[21] <= dx1_V_fu_309_p3[21];
dx1_V_reg_740[22] <= dx1_V_fu_309_p3[22];
dx1_V_reg_740[23] <= dx1_V_fu_309_p3[23];
dx1_V_reg_740[24] <= dx1_V_fu_309_p3[24];
dx1_V_reg_740[25] <= dx1_V_fu_309_p3[25];
dx1_V_reg_740[26] <= dx1_V_fu_309_p3[26];
dx1_V_reg_740[27] <= dx1_V_fu_309_p3[27];
dx1_V_reg_740[28] <= dx1_V_fu_309_p3[28];
dx1_V_reg_740[29] <= dx1_V_fu_309_p3[29];
dx1_V_reg_740[30] <= dx1_V_fu_309_p3[30];
dx1_V_reg_740[31] <= dx1_V_fu_309_p3[31];
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st10_fsm_9)) begin
        dx2_V_reg_829 <= dx2_V_fu_590_p3;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st2_fsm_1)) begin
        isneg_reg_715 <= p_Val2_22_fu_231_p2[ap_const_lv32_1E];
        newsignbit_reg_728 <= p_Val2_22_fu_231_p2[ap_const_lv32_1D];
        p_Val2_20_reg_710 <= p_Val2_20_fu_213_p3;
        p_Val2_23_reg_722 <= p_Val2_23_fu_245_p1;
        x1_1_V <= p_Val2_20_fu_213_p3;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st6_fsm_5)) begin
        newsignbit_4_reg_761 <= grp_fu_320_p2[ap_const_lv32_21];
        p_Result_20_i_reg_777 <= {{grp_fu_320_p2[ap_const_lv32_29 : ap_const_lv32_22]}};
        qbit_3_reg_756 <= grp_fu_320_p2[ap_const_lv32_1];
        signbit_reg_750 <= grp_fu_320_p2[ap_const_lv32_29];
        tmp_16_reg_772 <= {{grp_fu_320_p2[ap_const_lv32_21 : ap_const_lv32_3]}};
        tmp_58_reg_767 <= grp_fu_320_p2[ap_const_lv32_2];
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st9_fsm_8)) begin
        overflow_5_reg_811 <= overflow_5_fu_528_p2;
        p_Val2_29_reg_805 <= p_Val2_29_fu_488_p1;
        underflow_4_reg_817 <= underflow_4_fu_552_p2;
        x2_2_V <= p_Val2_26_reg_799;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~(ap_start == ap_const_logic_0))) begin
        overflow_reg_705 <= overflow_fu_207_p2;
        p_Val2_19_reg_700 <= p_Val2_19_fu_187_p2;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st8_fsm_7)) begin
        p_Val2_26_reg_799 <= p_Val2_26_fu_455_p3;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st3_fsm_2)) begin
        tmp_21_reg_735 <= tmp_21_fu_301_p3;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st12_fsm_11)) begin
        u_V <= tmp_20_fu_686_p3;
    end
end

/// ap_done assign process. ///
always @ (ap_sig_cseq_ST_st12_fsm_11)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st12_fsm_11)) begin
        ap_done = ap_const_logic_1;
    end else begin
        ap_done = ap_const_logic_0;
    end
end

/// ap_idle assign process. ///
always @ (ap_start or ap_sig_cseq_ST_st1_fsm_0)
begin
    if ((~(ap_const_logic_1 == ap_start) & (ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0))) begin
        ap_idle = ap_const_logic_1;
    end else begin
        ap_idle = ap_const_logic_0;
    end
end

/// ap_ready assign process. ///
always @ (ap_sig_cseq_ST_st12_fsm_11)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st12_fsm_11)) begin
        ap_ready = ap_const_logic_1;
    end else begin
        ap_ready = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st10_fsm_9 assign process. ///
always @ (ap_sig_bdd_145)
begin
    if (ap_sig_bdd_145) begin
        ap_sig_cseq_ST_st10_fsm_9 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st10_fsm_9 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st11_fsm_10 assign process. ///
always @ (ap_sig_bdd_158)
begin
    if (ap_sig_bdd_158) begin
        ap_sig_cseq_ST_st11_fsm_10 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st11_fsm_10 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st12_fsm_11 assign process. ///
always @ (ap_sig_bdd_225)
begin
    if (ap_sig_bdd_225) begin
        ap_sig_cseq_ST_st12_fsm_11 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st12_fsm_11 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st1_fsm_0 assign process. ///
always @ (ap_sig_bdd_28)
begin
    if (ap_sig_bdd_28) begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st2_fsm_1 assign process. ///
always @ (ap_sig_bdd_56)
begin
    if (ap_sig_bdd_56) begin
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st3_fsm_2 assign process. ///
always @ (ap_sig_bdd_71)
begin
    if (ap_sig_bdd_71) begin
        ap_sig_cseq_ST_st3_fsm_2 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st3_fsm_2 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st4_fsm_3 assign process. ///
always @ (ap_sig_bdd_80)
begin
    if (ap_sig_bdd_80) begin
        ap_sig_cseq_ST_st4_fsm_3 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st4_fsm_3 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st6_fsm_5 assign process. ///
always @ (ap_sig_bdd_91)
begin
    if (ap_sig_bdd_91) begin
        ap_sig_cseq_ST_st6_fsm_5 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st6_fsm_5 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st7_fsm_6 assign process. ///
always @ (ap_sig_bdd_110)
begin
    if (ap_sig_bdd_110) begin
        ap_sig_cseq_ST_st7_fsm_6 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st7_fsm_6 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st8_fsm_7 assign process. ///
always @ (ap_sig_bdd_123)
begin
    if (ap_sig_bdd_123) begin
        ap_sig_cseq_ST_st8_fsm_7 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st8_fsm_7 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st9_fsm_8 assign process. ///
always @ (ap_sig_bdd_132)
begin
    if (ap_sig_bdd_132) begin
        ap_sig_cseq_ST_st9_fsm_8 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st9_fsm_8 = ap_const_logic_0;
    end
end
/// the next state (ap_NS_fsm) of the state machine. ///
always @ (ap_start or ap_CS_fsm or grp_Compult_mpc_pso_fu_113_ap_done)
begin
    case (ap_CS_fsm)
        ap_ST_st1_fsm_0 : 
        begin
            if (~(ap_start == ap_const_logic_0)) begin
                ap_NS_fsm = ap_ST_st2_fsm_1;
            end else begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end
        end
        ap_ST_st2_fsm_1 : 
        begin
            ap_NS_fsm = ap_ST_st3_fsm_2;
        end
        ap_ST_st3_fsm_2 : 
        begin
            ap_NS_fsm = ap_ST_st4_fsm_3;
        end
        ap_ST_st4_fsm_3 : 
        begin
            ap_NS_fsm = ap_ST_st5_fsm_4;
        end
        ap_ST_st5_fsm_4 : 
        begin
            ap_NS_fsm = ap_ST_st6_fsm_5;
        end
        ap_ST_st6_fsm_5 : 
        begin
            ap_NS_fsm = ap_ST_st7_fsm_6;
        end
        ap_ST_st7_fsm_6 : 
        begin
            ap_NS_fsm = ap_ST_st8_fsm_7;
        end
        ap_ST_st8_fsm_7 : 
        begin
            ap_NS_fsm = ap_ST_st9_fsm_8;
        end
        ap_ST_st9_fsm_8 : 
        begin
            ap_NS_fsm = ap_ST_st10_fsm_9;
        end
        ap_ST_st10_fsm_9 : 
        begin
            ap_NS_fsm = ap_ST_st11_fsm_10;
        end
        ap_ST_st11_fsm_10 : 
        begin
            if (~(ap_const_logic_0 == grp_Compult_mpc_pso_fu_113_ap_done)) begin
                ap_NS_fsm = ap_ST_st12_fsm_11;
            end else begin
                ap_NS_fsm = ap_ST_st11_fsm_10;
            end
        end
        ap_ST_st12_fsm_11 : 
        begin
            ap_NS_fsm = ap_ST_st1_fsm_0;
        end
        default : 
        begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign Range1_all_ones_fu_382_p2 = (p_Result_20_i_reg_777 == ap_const_lv8_FF? 1'b1: 1'b0);
assign ap_return = $signed(du_V_reg_840);

/// ap_sig_bdd_110 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_110 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_6]);
end

/// ap_sig_bdd_123 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_123 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_7]);
end

/// ap_sig_bdd_132 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_132 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_8]);
end

/// ap_sig_bdd_145 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_145 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_9]);
end

/// ap_sig_bdd_158 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_158 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_A]);
end

/// ap_sig_bdd_225 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_225 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_B]);
end

/// ap_sig_bdd_28 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_28 = (ap_CS_fsm[ap_const_lv32_0] == ap_const_lv1_1);
end

/// ap_sig_bdd_56 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_56 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_1]);
end

/// ap_sig_bdd_71 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_71 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_2]);
end

/// ap_sig_bdd_80 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_80 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_3]);
end

/// ap_sig_bdd_91 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_91 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_5]);
end
assign brmerge2_i_fu_572_p2 = (overflow_5_reg_811 | underflow_16_not_i_fu_567_p2);
assign brmerge39_i_i_fu_546_p2 = (p_not38_i_i_fu_540_p2 | newsignbit_0_not_i_i_fu_534_p2);
assign brmerge40_demorgan_i_i_fu_397_p2 = (newsignbit_4_reg_761 & Range1_all_ones_fu_382_p2);
assign brmerge_fu_667_p2 = (newsignbit_6_reg_858 | isneg_not_fu_662_p2);
assign brmerge_i6_fu_282_p2 = (newsignbit_reg_728 | isneg_not_i_fu_277_p2);
assign brmerge_i6_i_fu_516_p2 = (newsignbit_5_fu_492_p3 | p_not_i5_i_fu_510_p2);
assign brmerge_i_i2_fu_392_p2 = (newsignbit_4_reg_761 | p_not_i_i_fu_387_p2);
assign brmerge_i_i5_i_fu_563_p2 = (underflow_4_reg_817 | overflow_5_reg_811);
assign brmerge_i_i_fu_658_p2 = (isneg_3_reg_845 ^ newsignbit_6_reg_858);
assign brmerge_i_i_i3_fu_428_p2 = (underflow_3_fu_423_p2 | overflow_4_fu_413_p2);
assign brmerge_i_i_i_fu_273_p2 = (isneg_reg_715 ^ newsignbit_reg_728);
assign du_V_fu_604_p3 = {{grp_Compult_mpc_pso_fu_113_ap_return}, {ap_const_lv2_0}};
assign dx1_V_fu_309_p3 = {{tmp_21_reg_735}, {ap_const_lv2_0}};
assign dx2_V_fu_590_p3 = ((brmerge2_i_fu_572_p2)? p_Val2_101_mux_i_fu_577_p3: p_Val2_3_i_fu_584_p3);
assign grp_Compult_mpc_pso_fu_113_ap_start = grp_Compult_mpc_pso_fu_113_ap_start_ap_start_reg;
assign grp_Compult_mpc_pso_fu_113_dx1_in_V = dx1_V_reg_740;
assign grp_Compult_mpc_pso_fu_113_dx2_in_V = dx2_V_reg_829;
assign grp_Compult_mpc_pso_fu_113_ref_in_V = ref_in_V;
assign grp_Compult_mpc_pso_fu_113_u_in_V = u_V;
assign grp_Compult_mpc_pso_fu_113_y_in_V = p_Val2_20_reg_710;
assign grp_fu_320_ce = ap_const_logic_1;
assign grp_fu_320_p0 = dx1_V_fu_309_p3;
assign grp_fu_320_p1 = ap_const_lv42_1F4;
assign isneg_2_fu_480_p3 = p_Val2_28_fu_474_p2[ap_const_lv32_20];
assign isneg_not_fu_662_p2 = (isneg_3_reg_845 ^ ap_const_lv1_1);
assign isneg_not_i_fu_277_p2 = (isneg_reg_715 ^ ap_const_lv1_1);
assign newsignbit_0_not_i_i_fu_534_p2 = (newsignbit_5_fu_492_p3 ^ ap_const_lv1_1);
assign newsignbit_5_fu_492_p3 = p_Val2_28_fu_474_p2[ap_const_lv32_1D];
assign overflow_4_fu_413_p2 = (brmerge_i_i2_reg_788 & tmp_34_i_fu_408_p2);
assign overflow_5_fu_528_p2 = (brmerge_i6_i_fu_516_p2 & tmp_37_i6_fu_522_p2);
assign overflow_fu_207_p2 = (tmp_51_fu_193_p3 & tmp_15_fu_201_p2);
assign p_Result_21_i_fu_500_p4 = {{p_Val2_28_fu_474_p2[ap_const_lv32_20 : ap_const_lv32_1E]}};
assign p_Val2_101_mux_i_fu_577_p3 = ((brmerge_i_i5_i_fu_563_p2)? ap_const_lv30_1FFFFFFF: p_Val2_29_reg_805);
assign p_Val2_108_mux_fu_672_p3 = ((brmerge_i_i_fu_658_p2)? ap_const_lv30_1FFFFFFF: p_Val2_34_reg_852);
assign p_Val2_19_fu_187_p2 = (p_Val2_s_fu_141_p4 + tmp_s_fu_183_p1);
assign p_Val2_20_fu_213_p3 = ((overflow_reg_705)? ap_const_lv30_1FFFFFFF: p_Val2_19_reg_700);
assign p_Val2_22_fu_231_p2 = ($signed(tmp_i_fu_219_p1) - $signed(tmp_i_41_fu_227_p1));
assign p_Val2_23_fu_245_p1 = p_Val2_22_fu_231_p2[29:0];
assign p_Val2_25_fu_402_p3 = {{tmp_16_reg_772}, {qb_assign_8_reg_783}};
assign p_Val2_26_fu_455_p3 = ((tmp7_fu_434_p2)? p_Val2_97_mux_i_fu_439_p3: p_Val2_i4_fu_447_p3);
assign p_Val2_28_fu_474_p2 = ($signed(tmp_35_i_fu_463_p1) - $signed(tmp_36_i5_fu_470_p1));
assign p_Val2_29_fu_488_p1 = p_Val2_28_fu_474_p2[29:0];
assign p_Val2_33_fu_619_p2 = ($signed(tmp_17_fu_612_p1) + $signed(tmp_18_fu_615_p1));
assign p_Val2_34_fu_633_p1 = p_Val2_33_fu_619_p2[29:0];
assign p_Val2_3_i_fu_584_p3 = ((underflow_4_reg_817)? ap_const_lv30_20000000: p_Val2_29_reg_805);
assign p_Val2_94_mux_i_fu_287_p3 = ((brmerge_i_i_i_fu_273_p2)? ap_const_lv30_1FFFFFFF: p_Val2_23_reg_722);
assign p_Val2_97_mux_i_fu_439_p3 = ((brmerge_i_i_i3_fu_428_p2)? ap_const_lv32_7FFFFFFF: p_Val2_25_fu_402_p3);
assign p_Val2_i4_fu_447_p3 = ((underflow_3_fu_423_p2)? ap_const_lv32_80000000: p_Val2_25_fu_402_p3);
assign p_Val2_i_fu_294_p3 = ((underflow_fu_268_p2)? ap_const_lv30_20000000: p_Val2_23_reg_722);
assign p_Val2_s_42_fu_679_p3 = ((underflow_5_fu_653_p2)? ap_const_lv30_20000000: p_Val2_34_reg_852);
assign p_Val2_s_fu_141_p4 = {{y_in_V[ap_const_lv32_1F : ap_const_lv32_2]}};
assign p_not38_i_i_fu_540_p2 = (p_Result_21_i_fu_500_p4 != ap_const_lv3_7? 1'b1: 1'b0);
assign p_not_i5_i_fu_510_p2 = (p_Result_21_i_fu_500_p4 != ap_const_lv3_0? 1'b1: 1'b0);
assign p_not_i_i_fu_387_p2 = (p_Result_20_i_reg_777 != ap_const_lv8_0? 1'b1: 1'b0);
assign qb_assign_6_fu_177_p2 = (r_i_i_fu_171_p2 & qbit_fu_151_p3);
assign qb_assign_8_fu_378_p2 = (tmp_58_reg_767 & qbit_3_reg_756);
assign qbit_fu_151_p3 = y_in_V[ap_const_lv32_1];
assign r_fu_159_p1 = y_in_V[0:0];
assign r_i_i_fu_171_p2 = (tmp_50_fu_163_p3 | r_fu_159_p1);
assign tmp7_fu_434_p2 = (brmerge40_demorgan_i_i_reg_793 | tmp_34_i_fu_408_p2);
assign tmp_15_fu_201_p2 = (tmp_47_fu_133_p3 ^ ap_const_lv1_1);
assign tmp_17_fu_612_p1 = $signed(u_V);
assign tmp_18_fu_615_p1 = $signed(du_V_fu_604_p3);
assign tmp_19_fu_648_p2 = (newsignbit_6_reg_858 ^ ap_const_lv1_1);
assign tmp_20_fu_686_p3 = ((brmerge_fu_667_p2)? p_Val2_108_mux_fu_672_p3: p_Val2_s_42_fu_679_p3);
assign tmp_21_fu_301_p3 = ((brmerge_i6_fu_282_p2)? p_Val2_94_mux_i_fu_287_p3: p_Val2_i_fu_294_p3);
assign tmp_34_i_fu_408_p2 = (signbit_reg_750 ^ ap_const_lv1_1);
assign tmp_35_i_fu_463_p1 = $signed(p_Val2_26_reg_799);
assign tmp_36_i5_fu_470_p1 = $signed(x2_2_V);
assign tmp_36_i_fu_263_p2 = (newsignbit_reg_728 ^ ap_const_lv1_1);
assign tmp_37_i6_fu_522_p2 = (isneg_2_fu_480_p3 ^ ap_const_lv1_1);
assign tmp_47_fu_133_p3 = y_in_V[ap_const_lv32_1F];
assign tmp_50_fu_163_p3 = y_in_V[ap_const_lv32_2];
assign tmp_51_fu_193_p3 = p_Val2_19_fu_187_p2[ap_const_lv32_1D];
assign tmp_fu_418_p2 = (brmerge40_demorgan_i_i_reg_793 ^ ap_const_lv1_1);
assign tmp_i_41_fu_227_p1 = $signed(x1_1_V);
assign tmp_i_fu_219_p1 = $signed(p_Val2_20_fu_213_p3);
assign tmp_s_fu_183_p1 = qb_assign_6_fu_177_p2;
assign underflow_16_not_i_fu_567_p2 = (underflow_4_reg_817 ^ ap_const_lv1_1);
assign underflow_3_fu_423_p2 = (signbit_reg_750 & tmp_fu_418_p2);
assign underflow_4_fu_552_p2 = (brmerge39_i_i_fu_546_p2 & isneg_2_fu_480_p3);
assign underflow_5_fu_653_p2 = (isneg_3_reg_845 & tmp_19_fu_648_p2);
assign underflow_fu_268_p2 = (isneg_reg_715 & tmp_36_i_fu_263_p2);
always @ (posedge ap_clk)
begin
    dx1_V_reg_740[1:0] <= 2'b00;
    du_V_reg_840[1:0] <= 2'b00;
end



endmodule //Compult
