`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:33:14 05/13/2015 
// Design Name: 
// Module Name:    clk50 
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
module clk50(
    input clk100MHz,
    output clk50MHz
    );
    
    reg [1:0] count;
    
    initial
    begin
        count = 0;
    end
    
    always @ (posedge clk100MHz)
    begin
        if (count==2)
            count <= count >> 1;
        else 
            count <= count + 1;
    end
    
    assign clk50MHz = count[1];


endmodule
