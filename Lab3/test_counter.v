`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:37:18 04/29/2015
// Design Name:   counter
// Module Name:   C:/Users/152/Documents/MeghaCalvin/Lab3/test_counter.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_counter;

	// Inputs
	reg clk;
    reg clk_adj;
    reg adj;
    reg sel;
    reg rst_button;
    reg pause_button;

	// Outputs
	wire [5:0] minutes;
	wire [5:0] seconds;

	// Instantiate the Unit Under Test (UUT)
	counter uut (
		.clk(clk),
        .clk_adj(clk_adj),
        .adj(adj),
        .sel(sel),
        .rst_button(rst_button),
        .pause_button(pause_button),
		.minutes(minutes), 
		.seconds(seconds)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
        clk_adj = 0;
        adj = 0;
        sel = 0;
        rst_button = 0;
        pause_button = 0;
        
        // after 4 seconds
        // adjust seconds
        /**
        #2000000000;
        adj = 1;
        sel = 1;
        
        // adjust minutes
        #2000000000;
        sel = 0;
        
        // finish adjust
        #2000000000;
        adj = 0;
        **/
        
        // pause
        #2000000000;
        pause_button = 1;
        #100
        pause_button = 0;
        
        // unpause
        #1999999900;
        pause_button = 1;
        #100
        pause_button = 0;
        
        // reset
        #1999999900;
        rst_button = 1;
        #100;
        rst_button = 0;
        
	end
    
    always #500000000 clk = ~clk;
    always #250000000 clk_adj = ~clk_adj;
      
endmodule

