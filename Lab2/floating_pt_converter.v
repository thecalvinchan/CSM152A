`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:58:53 04/22/2015 
// Design Name: 
// Module Name:    floating_pt_converter 
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
module floating_pt_converter(
    input [11:0] u_input,
    output reg [2:0] exponent,
    output reg [3:0] significand,
    output reg fifth_bit
    );
    
    reg [3:0] countbit;
    reg [11:0] sig;
    
    always @*
    begin
        sig = u_input;
        countbit = 0;
        while ((sig[11] == 1'b0) && (countbit < 8))
        begin
            sig = sig << 1;
            countbit = countbit + 1;
        end
        if (countbit == 0)
            begin
                exponent = 7;
            end
        else
            begin
                exponent = 8 - countbit;
            end
        significand = sig[11:8];
        fifth_bit = sig[7];    
    end

endmodule
