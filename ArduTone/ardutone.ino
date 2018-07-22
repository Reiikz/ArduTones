#include "playSongs.h"
#include "util.h"

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(battlePin, INPUT);
  pinMode(marioPin, INPUT);
  pinMode(resetPin, INPUT);
}

void loop()
{
  if(digitalRead(battlePin))
  {
    BattleSong();
  }
  if(digitalRead(marioPin))
  {
    MarioSong();
  }
  if(digitalRead(piratesPin))
  {
    PlayPiratesOfCaribean();
  }
  check();
}
