`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:37:09 02/01/2022 
// Design Name: 
// Module Name:    contador 
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
module contador(
    input en,
    input clk,
    output reg [4:0] c
    );
	 initial c = 0;
	 always  @(posedge clk)
	 begin
		if(en)
			c = c +1;
	 end


endmodule
