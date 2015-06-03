`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:34:04 04/27/2015 
// Design Name: 
// Module Name:    Timer 
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
module Timer(
    input clk,
    input adj,
    input sel,
    input rst_button,
    input pause_button,
    output wire led,
    output wire [7:0] seg,
    output wire [3:0] an
    );
    
    wire clk_2hz;
    wire clk_1hz;
    wire clk_faster;
    wire clk_blink;
    wire [5:0] count_min;
    wire [5:0] count_sec;
    
    clk_module clock_module(
        .clk_master(clk),
        .clk_2hz(clk_2hz),
        .clk_1hz(clk_1hz),
        .clk_faster(clk_faster),
        .clk_blink(clk_blink)
    );
    
    counter counter(
        .clk_adj(clk_2hz),
        .clk_faster(clk_faster),
        .clk_blink(clk_blink),
        .adj(adj),
        .sel(sel),
        .rst_button(rst_button),
        .pause_button(pause_button),
        .led(led),
		.minutes(count_min), 
		.seconds(count_sec)
    );
    
    display display(
        .clk_faster(clk_faster),
        .minutes(count_min),
        .seconds(count_sec),
        .seg(seg),
        .an(an)
    );

endmodule
