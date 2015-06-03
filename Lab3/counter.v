`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:22:42 04/29/2015 
// Design Name: 
// Module Name:    counter 
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
module counter(
    input clk_adj,
    input clk_faster,
    input clk_blink,
    input adj,
    input sel,
    input rst_button,
    input pause_button,
    output reg led, 
    output reg [5:0] minutes,
    output reg [5:0] seconds
    );
    
    reg paused;
    reg pause_flipflop;
    reg [1:0] clk_count;
    
    wire clk;
    
    wire        rst;
    wire        arst_i;
    reg [1:0]   arst_ff;
    
    wire        pause;
    wire        apause_i;
    reg [1:0]   apause_ff;
    
initial
begin  
    minutes = 0;
    seconds = 0;
    pause_flipflop = 0;
    paused = 0;
    clk_count = 0;
end

assign clk = clk_count%2;

assign arst_i = rst_button;
assign rst = arst_ff[0];

always @ (posedge clk_adj or posedge arst_i)
    if (arst_i)
        arst_ff <= 2'b11;
    else
        arst_ff <= {1'b0, arst_ff[1]};
        
assign apause_i = pause_button;
assign pause = apause_ff[0];

always @ (posedge clk_faster or posedge apause_i)
    if (apause_i)
        apause_ff <= 2'b11;
    else
        apause_ff <= {1'b0, apause_ff[1]};
        
always @ (posedge pause)
begin
    paused <= ~paused;
end

always @ (posedge clk_adj)
begin
    clk_count <= clk_count + 1;
    
    if (rst)
        begin
            minutes <= 0;
            seconds <= 0;
        end
    // normal operation
    if (!adj && clk_count%2 && !paused)
        begin
            $display("works");
            if (seconds == 59)
                begin
                    seconds <= 0;
                    if (minutes ==59)
                        minutes <= 0;
                    else 
                        minutes <= minutes + 1;
                end
            else
            begin
                seconds <= seconds + 1;
                $display(seconds);
            end
        end
    // adj operation
    else if (adj)
        begin
            led = clk_blink;
            case(sel)
                0: minutes <= minutes + 1;
                1: seconds <= seconds + 1;
                //default: seconds = seconds + 1;
            endcase
            if (minutes == 60)
                minutes <= 0;
            if (seconds == 60)
                seconds <= 0;
        end
end


endmodule
