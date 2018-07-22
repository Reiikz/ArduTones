#include "pins.h"
#include <avr/pgmspace.h>
#include <Arduino.h>

bool CheckReset()
{
  if(digitalRead(resetPin))
  {
    return true;
  }
  return false;
}
