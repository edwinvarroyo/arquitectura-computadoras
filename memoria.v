`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:57:02 02/01/2022 
// Design Name: 
// Module Name:    memoria 
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
module memoria(
    input clk,
    input en,
    input [4:0] address,
    input [13:0] datain,
    output [13:0] dataout
    );
	 
	 reg [13:0] mem [31:0];
	 initial $readmemh("memoria.txt",mem);
	 
	 assign dataout = mem[address];
	 
	 always @( posedge clk)
	 begin
		if(en)
			mem[address] = datain;
	 end


endmodule
