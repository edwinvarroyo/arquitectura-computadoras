`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:03:55 02/01/2022
// Design Name:   memoria
// Module Name:   D:/Verilog/proyectofinal/memoria_tb.v
// Project Name:  proyectofinal
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: memoria
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module memoria_tb;

	// Inputs
	reg clk;
	reg en;
	reg [4:0] address;
	reg [13:0] datain;

	// Outputs
	wire [13:0] dataout;

	// Instantiate the Unit Under Test (UUT)
	memoria uut (
		.clk(clk), 
		.en(en), 
		.address(address), 
		.datain(datain), 
		.dataout(dataout)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		en = 0;
		address = 0;
		datain = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		address = 4'b0010;
		clk = 1'b1;
		
		#100;
		
		clk = 0;
		#100
		
		address = 4'b0100;
		en=1'b1;
		datain=14'b11111111111111;
		clk = 1'b1;
		
		#100
		
		
		clk = 0;
		#100
		
		address = 4'b0100;
		clk = 1'b1;
		

	end
      
endmodule

