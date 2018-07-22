#include "Notes.h"
#include <avr/pgmspace.h>

const int PROGMEM marioSong[] =
{
  NT_E7, NT_E7, 0, NT_E7,
  0, NT_C7, NT_E7, 0,
  NT_G7, 0, 0,  0,
  NT_G6, 0, 0, 0,
 
  NT_C7, 0, 0, NT_G6,
  0, 0, NT_E6, 0,
  0, NT_A6, 0, NT_B6,
  0, NT_AS6, NT_A6, 0,
 
  NT_G6, NT_E7, NT_G7,
  NT_A7, 0, NT_F7, NT_G7,
  0, NT_E7, 0, NT_C7,
  NT_D7, NT_B6, 0, 0,
 
  NT_C7, 0, 0, NT_G6,
  0, 0, NT_E6, 0,
  0, NT_A6, 0, NT_B6,
  0, NT_AS6, NT_A6, 0,
 
  NT_G6, NT_E7, NT_G7,
  NT_A7, 0, NT_F7, NT_G7,
  0, NT_E7, 0, NT_C7,
  NT_D7, NT_B6, 0, 0
};
