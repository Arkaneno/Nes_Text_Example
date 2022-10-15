
/*
A simple "Text on you NES" example.
Set the screen background color and palette colors.
Then write a message to the nametable.
Finally, turn on the PPU to display video.
*/

#include "neslib.h"

// link the pattern table into CHR ROM
//#link "chr_generic.s"

// main function, run after console reset
void main(void) {

  // set palette colors
  pal_col(0,0x02);	// set screen to dark blue
  pal_col(1,0x14);	// fuchsia
  pal_col(2,0x20);	// grey
  pal_col(3,0x30);	// white

  // write text to name table
  vram_adr(NTADR_A(2,2));		// set address
vram_write("1st line of text on your NES", 28);  // write bytes to video RAM
  vram_write("    2nd line of text on your NES", 32);
  vram_write("    3rd line of text on your NES", 32);
  vram_write("    4th line of text on your NES", 32);
  vram_write("    5th line of text on your NES", 32);
  vram_write("    6th line of text on your NES", 32);
  vram_write("    7th line of text on your NES", 32);
  vram_write("    8th line of text on your NES", 32);
  vram_write("    9th line of text on your NES", 32);
  vram_write("    10th line of text on an NES!", 32);
  vram_write("    11th line of text on an NES!", 32);
  vram_write("    12th line of text on an NES!", 32);
  vram_write("    13th line of text on an NES!", 32);
  vram_write("    14th line of text on an NES!", 32);
  vram_write("    15th line of text on an NES!", 32);
  vram_write("    16th line of text on an NES!", 32);
  vram_write("    17th line of text on an NES!", 32);
  vram_write("    18th line of text on an NES!", 32);
  vram_write("    19th line of text on an NES!", 32);
  vram_write("    20th line of text on an NES!", 32);
  vram_write("    21st line of text on an NES!", 32);
  vram_write("    22nd line of text on an NES!", 32);
  vram_write("    23rd line of text on an NES!", 32);
  vram_write("    24th line of text on an NES!", 32);
  vram_write("    25th line of text on an NES!", 32);
  vram_write("    26th line of text on an NES!", 32);
  
  // enable PPU rendering (turn on screen)
  ppu_on_all();

  // infinite loop
  while (1) ;
}
