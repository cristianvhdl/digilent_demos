//Copyright 1986-2015 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2015.1 (lin64) Build 1215546 Mon Apr 27 19:07:21 MDT 2015
//Date        : Wed Jun 10 14:35:00 2015
//Host        : WK49-Ubuntu running 64-bit Ubuntu 14.04.2 LTS
//Command     : generate_target design_1_wrapper.bd
//Design      : design_1_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module design_1_wrapper
   (clock_rtl,
    led_out,
    reset_rtl_0);
  input clock_rtl;
  output led_out;
  input reset_rtl_0;

  wire clock_rtl;
  wire led_out;
  wire reset_rtl_0;

  design_1 design_1_i
       (.clock_rtl(clock_rtl),
        .led_out(led_out),
        .reset_rtl_0(reset_rtl_0));
endmodule
