`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:01:31 02/04/2022 
// Design Name: 
// Module Name:    Main 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Main(
    input clk,
    input [13:0] Outp
    );
	 
	 wire wenmem, wenir, wenrop1, wenrop2, wenrio, wenpc;
	 wire [4:0] wadd, wpc;
	 wire [13:0] wRIo, wdop1, wdop2, wdatain, wmemdo;
	 wire [1:0] wselmux, wseloper;
	 
	 
	 fsm CONTROL(clk, wRIo[13:12], enmem, enir, enrop1, enrop2, enrio, enpc, wseloper, wselmux);
	 contador PC(wenpc, clk, wpc);
	 registro RI(clk, wenir, wmemdo, wRIo);
	 registro OP1(clk, wenrop1, wmemdo, wdop1);
	 registro OP2(clk, wenrop2, wmemdo, wdop2);
	 registro IO(clk, wenrio, wmemdo, dataout);
	 
	 sumador(wdop1, wdop2, wseloper, wdatain);
	 mux addsel(clk, wselmux, wpc, wRIo[11:8], wRIo[7:4], wRIo[3:0], wadd);
	 memoria mem(clk, wenmem, wadd, wdatain, wmemdo);

endmodule
