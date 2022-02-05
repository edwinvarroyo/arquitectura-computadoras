`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:37:43 02/04/2022
// Design Name:   Main
// Module Name:   D:/Verilog/proyectofinal/main_tb.v
// Project Name:  proyectofinal
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module main_tb;

	// Inputs
	reg clk;
	
	// Outputs
	wire [13:0] Outp;

	// Instantiate the Unit Under Test (UUT)
	Main uut (
		.clk(clk), 
		.Outp(Outp)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		forever
		begin
			clk = !clk;
			#50;
		end

	end
      
endmodule

