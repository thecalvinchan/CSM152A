`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:35:43 04/27/2015 
// Design Name: 
// Module Name:    clk_module 
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
module clk_module(
    input clk_master,
    output reg clk_2hz,
    output reg clk_1hz,
    output reg clk_faster,
    output reg clk_blink
);

reg [28:0] count;

initial
begin
    count = 0;
    clk_2hz = 0;
    clk_1hz = 0;
    clk_faster = 0;
    clk_blink = 0;
end

always @ (posedge clk_master)
begin
    count = count + 1;
    
    // 2Hz
    if (!(count % 50000000))
        clk_2hz = 1;
    else
        clk_2hz = 0;
        
    // clk_faster - 500 Hz
    if (!(count % 200000 ))
        clk_faster = 1;
    else
        clk_faster = 0;
        
    // clk_blink
    if (!(count % 75000000))
        clk_blink = 1;
    else
        clk_blink = 0;
        
    // 1 Hz
    if (!(count % 100000000))
        clk_1hz = 1;
    else
        clk_1hz = 0;
        
    if (count == 300000000)
        count = 0;
end

endmodule
