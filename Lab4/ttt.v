`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:08:20 05/13/2015 
// Design Name: 
// Module Name:    ttt 
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
module ttt(
    input clk,
    input [1:0] swX,
    input [1:0] swY,
    input btnS,
    input btnR,
    output btnPress,
    output Hsync,
    output Vsync,
    output wire [2:0] vgaRed,
    output wire [2:0] vgaGreen,
    output wire [1:0] vgaBlue
);

wire clk_50mhz;
wire hsync_out;
wire vsync_out;
wire vidon;

wire [10:0] PixelX;
wire [10:0] PixelY;

wire [8:0] GameMem;
wire [8:0] GridActive;

wire [2:0] RED;
wire [2:0] GREEN;
wire [1:0] BLUE;

assign Hsync = ~hsync_out;
assign Vsync = ~vsync_out;

clk50 clk50(
    .clk100MHz(clk), 
    .clk50MHz(clk_50mhz)
);

vga vga(
    .clk(clk_50mhz),
    .clr(btnR),
    .hsync(hsync_out),
    .vsync(vsync_out),
    .PixelX(PixelX),
    .PixelY(PixelY),
    .vidon(vidon)
);

gamecontroller gamecontroller(
    .clk(clk),
    .btnS(btnS),
    .btnR(btnR),
    .btnPress(btnPress),
    .swX(swX),
    .swY(swY),
    .GameMem(GameMem),
    .GridActive(GridActive)
);

renderer renderer(
    .clk(clk),
    .GameMem(GameMem),
    .GridActive(GridActive),
    .PixelX(PixelX),
    .PixelY(PixelY),
    .RED(RED),
    .BLUE(BLUE),
    .GREEN(GREEN)
);

assign vgaRed = RED;
assign vgaGreen = GREEN;
assign vgaBlue = BLUE;

endmodule
