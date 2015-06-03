`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:54:10 06/01/2015
// Design Name:   ttt
// Module Name:   C:/Users/152/Documents/MeghaCalvin/Lab4/ttt_test.v
// Project Name:  Lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ttt
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ttt_test;

	// Inputs
	reg clk;
	reg [1:0] swX;
	reg [1:0] swY;
	reg btnS;
	reg btnR;

	// Outputs
	wire btnPress;
	wire Hsync;
	wire Vsync;
	wire [2:0] vgaRed;
	wire [2:0] vgaGreen;
	wire [1:0] vgaBlue;

	// Instantiate the Unit Under Test (UUT)
	ttt uut (
		.clk(clk), 
		.swX(swX), 
		.swY(swY), 
		.btnS(btnS), 
		.btnR(btnR), 
		.btnPress(btnPress), 
		.Hsync(Hsync), 
		.Vsync(Vsync), 
		.vgaRed(vgaRed), 
		.vgaGreen(vgaGreen), 
		.vgaBlue(vgaBlue)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		swX = 0;
		swY = 0;
		btnS = 0;
		btnR = 0;

		// Wait 100 ns for global reset to finish
		#100;
        btnS = 1;
        #150
        btnS = 0;
		// Add stimulus here

	end
    
    always #5 clk = ~clk;
endmodule

