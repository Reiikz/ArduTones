#include "battleSong.h"
#include "marioSong.h"
#include "piratesSong.h"
#include "util.h"
#include "pins.h"
#include <avr/pgmspace.h>
#include <Arduino.h>

int battleSongIndex = 0, marioSongIndex = 0, piratesOfCaribeanIndex = 0;
bool ledState, SongLoop = false, serialPlay = false;

void PlayPiratesOfCaribean()
{
  for (piratesOfCaribeanIndex;piratesOfCaribeanIndex<204;piratesOfCaribeanIndex++)
  {
    if(piratesOfCaribeanIndex + 1 > 203)
      piratesOfCaribeanIndex = 0;
      
    int wait = pgm_read_word_near(piratesOfCaribeanTimes + piratesOfCaribeanIndex) * songspeed;
    if(!digitalRead(piratesPin))
    {
      noTone(buzzPin);
      break;
    }
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
    tone(buzzPin,pgm_read_word_near(piratesOfCaribean + piratesOfCaribeanIndex),wait);
    delay(wait);
  } 
}

void BattleSong()
{
  int f = 75;
  for(battleSongIndex; battleSongIndex < 151; battleSongIndex++)
  {
    if(SongLoop && battleSongIndex + 1 >= 151)
      battleSongIndex = 31;
    if (battleSongIndex>31)
    {
      f=185;
      SongLoop = true;
    }
    if (battleSongIndex>97)
    {
      f=180;
    }
    tone(buzzPin, pgm_read_word_near(battleSong + battleSongIndex));
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
    if(!digitalRead(battlePin))
     {
      noTone(buzzPin);
      SongLoop = false;
      break;
     }
    if(CheckReset())
    {
      f = 75;
      piratesOfCaribeanIndex = 0;
      marioSongIndex = 0;
      battleSongIndex = 0;
      SongLoop = false;
    }
    delay(f);
    noTone(buzzPin);
    delay(f/64);
  }
}

void MarioSong()
{
  int f = 150;
  for(marioSongIndex; marioSongIndex < 78; marioSongIndex++)
  {
    int value = pgm_read_word_near(marioSong + marioSongIndex);
    if(marioSongIndex + 1 >= 78)
      marioSongIndex = 9;
    if(value == 0)
      noTone(buzzPin);
    else
      tone(buzzPin, value);
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
    if(!digitalRead(marioPin))
    {
      noTone(buzzPin);
      break;
    }
    CheckReset();
    delay(f);
    noTone(buzzPin);
    delay(f/64);
  }
}

void check()
{
  if(CheckReset())
  {
    piratesOfCaribeanIndex = 0;
    marioSongIndex = 0;
    battleSongIndex = 0;
    SongLoop = false;
  }
}

