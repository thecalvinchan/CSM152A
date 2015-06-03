----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:57:17 04/22/2015 
-- Design Name: 
-- Module Name:    float_pt_converter - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity float_pt_converter is
    Port ( u_input : in  STD_LOGIC_VECTOR (11 downto 0);
           exponent : out  STD_LOGIC_VECTOR (2 downto 0);
           significand : out  STD_LOGIC_VECTOR (3 downto 0);
           fifth_bit : out  STD_LOGIC);
end float_pt_converter;

architecture Behavioral of float_pt_converter is

begin


end Behavioral;

