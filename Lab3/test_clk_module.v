`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:46:17 04/29/2015
// Design Name:   clk_module
// Module Name:   C:/Users/152/Documents/MeghaCalvin/Lab3/test_clk_module.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clk_module
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_clk_module;

	// Inputs
	reg clk_master;

	// Outputs
	wire clk_2hz;
	wire clk_1hz;
	wire clk_faster;
	wire clk_blink;

	// Instantiate the Unit Under Test (UUT)
	clk_module uut (
		.clk_master(clk_master), 
		.clk_2hz(clk_2hz), 
		.clk_1hz(clk_1hz), 
		.clk_faster(clk_faster), 
		.clk_blink(clk_blink)
	);

	initial begin
		// Initialize Inputs
		clk_master = 0;

		// Wait 100 ns for global reset to finish
		//#100;
        // 15*10^6 ns
        //#15000000;
        //$finish;
	end
    
    // Simulate 100 MHz clock
    always #5 clk_master = ~clk_master;
      
endmodule

