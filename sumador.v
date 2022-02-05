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
	 input [1:0]oper,
    output reg [13:0] c
    );
	 
	 parameter SUM=2'b00, RES= 2'b01, NO = 2'b10; 
	 
	 always @(a, b, oper)
	 begin
	 
		case(oper)
			SUM: c = a+b;
			RES: c = a-b;
			NO: c = a;
			
		endcase
	 
	 end
		


endmodule
