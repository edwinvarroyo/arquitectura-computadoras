`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:43:58 02/01/2022 
// Design Name: 
// Module Name:    fsm 
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
module fsm(
    input clk,
    input [1:0] operacion,
    output enmem,
	 output wrmem,
    output enir,
    output enrop1,
    output enrop2,
    output enrio,
    output enpc,
	 output seloper,
    output [2:0] selmux
    );
	 
	 parameter SUM=2'b00, RES= 2'b01, MOV= 2'b10, OUT=2'b11;
	 parameter F = 4'b0000, D = 4'b0001, OP1 = 4'b0010, OP2 = 4'b0011, WC = 4'b0100, COU = 4'b0101, GA = 4'b0110, WB = 4'b0111, OA = 4'b1000; 
	 
	 reg [1:0] actual, futuro;
	 
	 
	 always @(posedge clk)
	 begin
	  actual = futuro;
	 end
	 
	 
	 always @(actual)
	 begin
			case(actual)
				F: futuro = D;
				D:begin
						case(operacion)
							SUM: futuro = OP1;
							RES: futuro = OP1;
							MOV: futuro = GA;
							OUT: futuro = OA;
						endcase
				  end
				OP1: futuro = OP2l;
				OP2: futuro = WC;
				WC: futuro = COU;
				GA: futuro = GB;
				GB: futuro = COU;
				OA: futuro = COU;
				COU: fututo = F;
				default futuro = F;
			endcase
	 end
	 
	 always @(actual)
	 begin
			case(actual)
				F: begin
					enmem = 0;
					enir= 1;
					enrop1= 0;
					enrop2= 0;
					enrio= 0;
					enpc= 0;
					seloper = 0;
					selmux= 0;
					end
				D:begin
					enmem = 0;
					enir= 0;
					enrop1= 0;
					enrop2= 0;
					enrio= 0;
					enpc= 0;
					seloper = 0;
					selmux= 0;
					end
				OP1: begin
					enmem = 0;
					enir= 0;
					enrop1= 1;
					enrop2= 0;
					enrio= 0;
					enpc= 0;
					seloper = 0;
					selmux= 2'b01;
					end
				OP2: begin
					enmem = 0;
					enir= 0;
					enrop1= 0;
					enrop2= 1;
					enrio= 0;
					enpc= 0;
					selmux= 2'b10;
					if(Operacion == RES)
						seloper = 1;
					else
						seloper = 0;
					
					end
				WC: begin
					enmem = 1;
					enir= 0;
					enrop1= 0;
					enrop2= 0;
					enrio= 0;
					enpc= 0;
					seloper = 0;
					selmux= 2'b11;
					end
				GA: begin
					enmem = 0;
					enir= 0;
					enrop1= 1;
					enrop2= 0;
					enrio= 0;
					enpc= 0;
					seloper = 0;
					selmux= 2'b01;
					end
				WB: begin
					enmem = 1;
					enir= 0;
					enrop1= 0;
					enrop2= 0;
					enrio= 0;
					enpc= 0;
					seloper = 0;
					selmux= 2'b10;
					end
				OA: begin
					enmem = 0;
					enir= 0;
					enrop1= 0;
					enrop2= 0;
					enrio= 1;
					enpc= 0;
					seloper = 0;
					selmux= 2'b01;
					end
				COU: begin
					enmem = 0;
					enir= 0;
					enrop1= 0;
					enrop2= 0;
					enrio= 0;
					enpc= 1;
					seloper = 0;
					selmux= 0;
					end
			endcase
	 end
	 
	 
	 
	 


endmodule
