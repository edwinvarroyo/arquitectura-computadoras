`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:09:03 02/01/2022 
// Design Name: 
// Module Name:    registro 
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
module registro(
    input clk,
    input en,
    input [13:0] datain,
    output reg[13:0] dataout
    );
	 
	 initial dataout = 0;
	 
	 always @(posedge clk)
	 begin
		if(en)
			 dataout = datain;
	 end


endmodule
