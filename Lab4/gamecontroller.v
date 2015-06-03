`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:50:41 06/01/2015 
// Design Name: 
// Module Name:    gamecontroller 
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
module gamecontroller(
    input clk,
    input btnS,
    input btnR,
    input [1:0] swX,
    input [1:0] swY,
    output btnPress,
    output reg [8:0] GameMem,
    output reg [8:0] GridActive
    );
    
reg user_turn;
reg [4:0] index;

wire select;

assign select = btnS;
assign btnPress = btnS;

initial
begin
    GameMem = 0;
    GridActive = 0;
    user_turn = 0;
end

always @(posedge clk or posedge select)
begin
    //if (btnR)
    //    GridActive = 0;
    if (select)
    begin
        $display("press");
        index = (3 * swY) + swX;
        if (swY == 3 || swX == 3)
        begin
            // don't do anything
        end
        else
        begin
            if (~GridActive[index])
            begin
                GameMem[index] <= user_turn;
                GridActive[index] <= 1;
                user_turn <= ~user_turn;
            end
        end
    end
end

endmodule
