`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:07:48 05/06/2015 
// Design Name: 
// Module Name:    display 
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
module display(
    input clk_faster,
    input [5:0] minutes,
    input [5:0] seconds,
    output [7:0] seg,
    output [3:0] an
    );
    
    reg [1:0] sev_seg_clk;
    
    initial
    begin
        sev_seg_clk = 0;
    end
    
    always @ (posedge clk_faster)
        sev_seg_clk = sev_seg_clk + 1;
    begin
        
    end
        
    reg  [3:0] SSD;
    wire [3:0] SSD3, SSD2, SSD1, SSD0;

    assign An0	= ~(~(sev_seg_clk[1]) && ~(sev_seg_clk[0]));  // when sev_seg_clk = 00
    assign An1	= ~(~(sev_seg_clk[1]) &&  (sev_seg_clk[0]));  // when sev_seg_clk = 01
    assign An2	= ~( (sev_seg_clk[1]) && ~(sev_seg_clk[0]));  // when sev_seg_clk = 10
    assign An3	= ~( (sev_seg_clk[1]) &&  (sev_seg_clk[0]));  // when sev_seg_clk = 11
    
    assign an = { An0, An1, An2, An3 };

    always @ (sev_seg_clk, SSD0, SSD1, SSD2, SSD3)
    begin
       case (sev_seg_clk) 
               2'b00: SSD = minutes/10;
               2'b01: SSD = minutes%10;
               2'b10: SSD = seconds/10;
               2'b11: SSD = seconds%10;
       endcase 
    end

    reg [7:0]  cathodes;

    assign seg = cathodes; 
    //
    // Following is Hex-to-SSD conversion. 
    always @ (SSD)
        begin
          case (SSD)
            4'b0000: cathodes = 8'b01000000 ; // 0
            4'b0001: cathodes = 8'b01111001 ; // 1
            4'b0010: cathodes = 8'b00100100 ; // 2
            4'b0011: cathodes = 8'b00110000 ; // 3
            4'b0100: cathodes = 8'b00011001 ; // 4
            4'b0101: cathodes = 8'b00010010 ; // 5
            4'b0110: cathodes = 8'b00000010 ; // 6
            4'b0111: cathodes = 8'b01111000 ; // 7
            4'b1000: cathodes = 8'b00000000 ; // 8
            4'b1001: cathodes = 8'b00011000 ; // 9
            default: cathodes = 8'b00001000 ; // A           
          endcase
        end


endmodule
