`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:25:02 02/01/2022 
// Design Name: 
// Module Name:    mux 
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
module mux(
    input [1:0] sel,
    input [3:0] d1,
    input [3:0] d2,
    input [3:0] d3,
    input [3:0] d4,
    output reg [4:0] q
    );
	 
	 initial q = 0;
	 parameter COM= 2'b00, A= 2'b01, B=2'b10, C=2'b11;
	 
	 
	always @(sel, d1, d2, d3, d4)
	begin
		case(sel)
			COM:begin
					q = d1;
					q[4] = 1'b0;
				end
			A:begin
					q = d2;
					q[4] = 1'b1;
				end
			B:begin
					q = d3;
					q[4] = 1'b1;
				end
			C:begin
					q = d4;
					q[4] = 1'b1;
				end
			endcase
	end

endmodule
