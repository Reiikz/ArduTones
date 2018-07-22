#include "Notes.h"
#include <avr/pgmspace.h>

const int songspeed = 1.5;
const PROGMEM int piratesOfCaribean[] = {       //NT of the song, 0 is a rest/pulse
   NT_E4, NT_G4, NT_A4, NT_A4, 0, 
   NT_A4, NT_B4, NT_C5, NT_C5, 0, 
   NT_C5, NT_D5, NT_B4, NT_B4, 0,
   NT_A4, NT_G4, NT_A4, 0,
   
   NT_E4, NT_G4, NT_A4, NT_A4, 0, 
   NT_A4, NT_B4, NT_C5, NT_C5, 0, 
   NT_C5, NT_D5, NT_B4, NT_B4, 0,
   NT_A4, NT_G4, NT_A4, 0,
   
   NT_E4, NT_G4, NT_A4, NT_A4, 0, 
   NT_A4, NT_C5, NT_D5, NT_D5, 0, 
   NT_D5, NT_E5, NT_F5, NT_F5, 0,
   NT_E5, NT_D5, NT_E5, NT_A4, 0,
   
   NT_A4, NT_B4, NT_C5, NT_C5, 0, 
   NT_D5, NT_E5, NT_A4, 0, 
   NT_A4, NT_C5, NT_B4, NT_B4, 0,
   NT_C5, NT_A4, NT_B4, 0,

   NT_A4, NT_A4, 
   //Repeat of first part
   NT_A4, NT_B4, NT_C5, NT_C5, 0, 
   NT_C5, NT_D5, NT_B4, NT_B4, 0,
   NT_A4, NT_G4, NT_A4, 0,

   NT_E4, NT_G4, NT_A4, NT_A4, 0, 
   NT_A4, NT_B4, NT_C5, NT_C5, 0, 
   NT_C5, NT_D5, NT_B4, NT_B4, 0,
   NT_A4, NT_G4, NT_A4, 0,
   
   NT_E4, NT_G4, NT_A4, NT_A4, 0, 
   NT_A4, NT_C5, NT_D5, NT_D5, 0, 
   NT_D5, NT_E5, NT_F5, NT_F5, 0,
   NT_E5, NT_D5, NT_E5, NT_A4, 0,
   
   NT_A4, NT_B4, NT_C5, NT_C5, 0, 
   NT_D5, NT_E5, NT_A4, 0, 
   NT_A4, NT_C5, NT_B4, NT_B4, 0,
   NT_C5, NT_A4, NT_B4, 0,
   //End of Repeat

   NT_E5, 0, 0, NT_F5, 0, 0,
   NT_E5, NT_E5, 0, NT_G5, 0, NT_E5, NT_D5, 0, 0,
   NT_D5, 0, 0, NT_C5, 0, 0,
   NT_B4, NT_C5, 0, NT_B4, 0, NT_A4,

   NT_E5, 0, 0, NT_F5, 0, 0,
   NT_E5, NT_E5, 0, NT_G5, 0, NT_E5, NT_D5, 0, 0,
   NT_D5, 0, 0, NT_C5, 0, 0,
   NT_B4, NT_C5, 0, NT_B4, 0, NT_A4
};
const PROGMEM int piratesOfCaribeanTimes[] = {         //duration of each NT (in ms) Quarter NT is set to 250 ms
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125, 
  
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125, 
  
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 125, 250, 125,

  125, 125, 250, 125, 125, 
  250, 125, 250, 125, 
  125, 125, 250, 125, 125,
  125, 125, 375, 375,

  250, 125,
  //Rpeat of First Part
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125, 
  
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125, 
  
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 125, 250, 125,

  125, 125, 250, 125, 125, 
  250, 125, 250, 125, 
  125, 125, 250, 125, 125,
  125, 125, 375, 375,
  //End of Repeat
  
  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 125, 125, 125, 375,
  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 500,

  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 125, 125, 125, 375,
  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 500
};
