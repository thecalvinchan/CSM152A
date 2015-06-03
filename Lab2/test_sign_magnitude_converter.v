`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:47:09 04/20/2015
// Design Name:   sign_magnitude_converter
// Module Name:   C:/Users/152/Documents/MeghaCalvin/Lab2/test_sign_magnitude_converter.v
// Project Name:  Lab2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sign_magnitude_converter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_sign_magnitude_converter;

	// Inputs
	reg [11:0] D;

	// Outputs
	wire S;
    wire [2:0] exponent;
    wire [3:0] significand;

	// Instantiate the Unit Under Test (UUT)
	sign_magnitude_converter uut (
		.D(D), 
		.S(S),
        .E(exponent),
        .F(significand)
	);

	initial begin
		// Initialize Inputs
		D = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
        D = 2047;
        #100;
        D = -2048;
        #100;
        D = 'b001101000000;
        // 0 110 1101
        #100;
        D = 'b001101100000;
        // 0 110 1110
        #100;
        D = 'b001111100000;
        // 0 111 1000
        #100;
        $finish;
	end
      
endmodule

