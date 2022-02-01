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
    input clk,
    input en,
    input [1:0] sel,
    input [3:0] d1,
    input [3:0] d2,
    input [3:0] d3,
    input [3:0] d4,
    output [4:0] q
    );


	always @(posedge clk)
	begin
	
		if(en)
		begin
			case(sel)
				00:begin
						q = d1;
						q[4] = 1'b0;
					end
				01:begin
						q = d2;
						q[4] = 1'b1;
					end
				10:begin
						q = d3;
						q[4] = 1'b1;
					end
				11:begin
						q = d4;
						q[4] = 1'b1;
					end
			endcase
		end
		
	end

endmodule
