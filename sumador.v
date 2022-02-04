`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:35:00 02/01/2022 
// Design Name: 
// Module Name:    sumador 
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
module sumador(
    input [13:0] a,
    input [13:0] b,
	 input oper,
    output [13:0] c
    );
	 
	 always @(a, b)
	 begin
		
		if(oper)
			c = a - b;
		else
			c = a + b;
	 
	 end
		


endmodule
