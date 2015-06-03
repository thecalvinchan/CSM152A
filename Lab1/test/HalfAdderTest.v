`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:53:07 04/06/2015
// Design Name:   HalfAdder
// Module Name:   C:/Users/152/Documents/Temp1/Test/HalfAdderTest.v
// Project Name:  Test
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: HalfAdder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module HalfAdderTest;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire s;
	wire co;

	// Instantiate the Unit Under Test (UUT)
	HalfAdder uut (
		.a(a), 
		.b(b), 
		.s(s), 
		.co(co)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100; 
        a = 1;
        b = 1;
        #5;
        
        
		// Add stimulus here

	end
      
endmodule

