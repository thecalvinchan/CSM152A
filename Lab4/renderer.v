`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:43:01 05/18/2015 
// Design Name: 
// Module Name:    renderer 
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
module renderer(
    input clk,
    input [10:0] PixelX,
    input [10:0] PixelY,
    input [8:0] GameMem,
    input [8:0] GridActive,
    output reg [2:0] RED,
    output reg [2:0] GREEN,
    output reg [1:0] BLUE
);

reg [2:0] gridX;
reg [2:0] gridY;
reg [4:0] index;

initial
begin
    /**
    GameMem[0] = 1;
    GameMem[1] = 0;
    GameMem[2] = 1;
    GameMem[3] = 0;
    GameMem[4] = 1;
    GameMem[5] = 0;
    GameMem[6] = 1;
    GameMem[7] = 0;
    GameMem[8] = 0;
    GridActive[0] = 1;
    GridActive[1] = 0;
    GridActive[2] = 1;
    GridActive[3] = 0;
    GridActive[4] = 1;
    GridActive[5] = 0;
    GridActive[6] = 1;
    GridActive[7] = 1;
    GridActive[8] = 1;
    **/
end

always @(posedge clk)
begin
    // Deals with Grid
    if (PixelX > 373 || PixelY > 373)
        begin
            RED = 'b000;
            GREEN = 'b000;
            BLUE = 'b00;
        end
    //Assuming 800 x 600
    else if (
        PixelX > 117 && PixelX < 127 ||
        PixelX > 246 && PixelX < 256 ||
        PixelY > 117 && PixelY < 127 ||
        PixelY > 246 && PixelY < 256
    )
        begin
            RED = 'b111;
            GREEN = 'b111;
            BLUE = 'b11;
        end
    else
        begin
            if (PixelX < 118)
            begin
                gridX = 0;
            end
            
            else if (PixelX < 247)
                gridX = 1;
            else
                gridX = 2;
            
            if (PixelY < 118)
                gridY = 0;
            else if (PixelY < 247)
                gridY = 1;
            else
                gridY = 2;
                
            index = (3 * gridY) + gridX;
            
            if (GridActive[index])
            begin
                if (GameMem[index])
                begin
                    $display("red");
                    RED = 'b111;
                    GREEN = 'b000;
                    BLUE = 'b00;
                end
                else
                begin
                    $display("green");
                    RED = 'b000;
                    GREEN = 'b111;
                    BLUE = 'b00;
                end
            end
            else
            begin
                RED = 'b000;
                GREEN = 'b000;
                BLUE = 'b00;
            end
        end
end


endmodule
