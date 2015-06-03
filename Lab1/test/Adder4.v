`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:06:36 04/06/2015 
// Design Name: 
// Module Name:    Adder4 
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
module Adder4(
    input [3:0] a,
    input [3:0] b,
    input ci,
    output [3:0] s,
    output co
    );

    //wire co1, co2, co3;

    wire [3:0] coa;
    
    wire [3:0] cia;
    assign cia[0] = ci;
    assign cia[1] = coa[0];
    assign cia[2] = coa[1];
    assign cia[3] = coa[2];
    
    FullAdder f1 [3:0](.a(a), .b(b), .ci(cia), .s(s), .co(coa));
    
    assign co = coa[3];
    
    /*FullAdder f2(.a(a[1]), .b(b[1]), .ci(co1), .s(s[1]), .co(co2));
    FullAdder f3(.a(a[2]), .b(b[2]), .ci(co2), .s(s[2]), .co(co3));
    FullAdder f4(.a(a[3]), .b(b[3]), .ci(co3), .s(s[3]), .co(co));*/
   

endmodule
