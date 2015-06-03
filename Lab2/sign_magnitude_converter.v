`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:36:04 04/20/2015 
// Design Name: 
// Module Name:    sign_magnitude_converter 
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
module sign_magnitude_converter(
    input [11:0] D,
    output reg S,
    output reg [2:0] E,
    output reg [3:0] F
    );
    
    reg [3:0] countbit;
    reg [11:0] magnitude;
    reg fifth_bit;
    
    always @*
    begin
        S = D[11];
        if (S)
            magnitude = (D^'b111111111111) + 1;
        else
            magnitude = D;  
        
        //priority encoder part
        countbit = 0;
        while ((magnitude[11] == 1'b0) && (countbit < 8))
        begin
            magnitude = magnitude << 1;
            countbit = countbit + 1;
        end
        if (countbit == 0)
            E = 7;
        else
            E = 8 - countbit;
        F = magnitude[11:8];
        fifth_bit = magnitude[7];
        
        //rounder
        if (fifth_bit)
            begin
                if (F == 'b1111)
                    begin
                        if (E < 7)
                            begin
                                F = 'b1000;
                                E = E + 1;
                            end
                    end
                else
                    F = F + 1;
            end
        // -2048 case
        if (magnitude == 2048)
            begin
                E = 7;
                F = 'b1111;
            end
         
    end
   
endmodule
