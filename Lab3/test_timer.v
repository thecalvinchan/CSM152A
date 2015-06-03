`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:03:14 05/04/2015
// Design Name:   Timer
// Module Name:   C:/Users/152/Documents/MeghaCalvin/Lab3/test_timer.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Timer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_timer;

	// Inputs
	reg clk;
	reg adj;
	reg sel;
    reg rst_button;
    reg pause_button;

	// Outputs
    wire [6:0] led;
    wire [6:0] seg;
    wire [3:0] an;

	// Instantiate the Unit Under Test (UUT)
	Timer uut (
		.clk(clk), 
		.adj(adj), 
		.sel(sel),
        .rst_button(rst_button),
        .pause_button(pause_button),
        .led(led),
        .seg(seg),
        .an(an)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		adj = 0;
		sel = 0;
        rst_button = 0;
        pause_button = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
    
    // simulate master clk
    always #5 clk = ~clk;
      
endmodule

