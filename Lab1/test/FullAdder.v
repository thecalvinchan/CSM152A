`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:58:00 04/06/2015 
// Design Name: 
// Module Name:    FullAdder 
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
module FullAdder(
    input a,
    input b,
    input ci,
    output s,
    output co
    );

    wire g, p, pc;
    
    HalfAdder h1(.a(a), .b(b), .s(p), .co(g));
    HalfAdder h2(.a(p), .b(ci), .s(s), .co(pc));
    
    assign co = g | pc;

endmodule
