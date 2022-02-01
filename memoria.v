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
    input wr,
    input [4:0] address,
    input [13:0] datain,
    output reg [13:0] dataout
    );
	 
	 reg [13:0] mem [31:0];
	 initial $readmemh("memoria.txt",mem);
	 
	 always @( posedge clk, en, wr, address, datain)
	 begin
	 
		if(en)
		begin
		
			if(wr)
			begin
				mem[address] = datain;
			end
			if(!wr)
			begin
				dataout = mem[address];
			end
			
		end
	 end


endmodule
