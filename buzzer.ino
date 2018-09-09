#define DEBOUNCE_DELAY 500
#define TONE_PIN 5
#define N_SONGS 18
#define GO_PIN 11
#define UP_PIN 10
#define DOWN_PIN 9
#define STOP_PIN 8
#define ADDRESS 0x50

#include <Wire.h>
#include "songs.h"
#include "pitches.h"

byte index = 0;

unsigned long lastGoDebounceTime = 0;
unsigned long lastUpDebounceTime = 0;
unsigned long lastDownDebounceTime = 0;

short int buttonGoState;
short int buttonUpState;
short int buttonDownState;

short int readingGo;
short int readingUp;
short int readingDown;

short int lastGoButtonState = LOW;
short int lastUpButtonState = LOW;
short int lastDownButtonState = LOW;

void setup()
{
  pinMode(UP_PIN, INPUT);
  pinMode(DOWN_PIN, INPUT);
  pinMode(GO_PIN, INPUT);
  pinMode(TONE_PIN, OUTPUT);
}

void loop()
{
  readingGo = digitalRead(GO_PIN);
  readingUp = digitalRead(UP_PIN);
  readingDown = digitalRead(DOWN_PIN);

  if (CheckGo())
  {
    PlaySong();
  }
  if (CheckUp())
  {
    if (index == N_SONGS - 1) index = 0;
    else index++;
  }
  if (CheckDown())
  {
    if (index == 0) index = N_SONGS - 1;
    else index--;
  }
}

bool CheckGo()
{
  if (readingGo != lastGoButtonState) {
    lastGoDebounceTime = millis();
  }
  if (millis() - lastGoDebounceTime > DEBOUNCE_DELAY)
  {
    if (readingGo != buttonGoState)
    {
      buttonGoState = readingGo;
      if (buttonGoState == HIGH) {
        return true;
      }
    }
  }
  return false;
}

bool CheckDown()
{
  if (readingDown != lastDownButtonState) {
    lastDownDebounceTime = millis();
  }
  if (millis() - lastDownDebounceTime > DEBOUNCE_DELAY)
  {
    if (readingDown != buttonDownState)
    {
      buttonDownState = readingDown;
      if (buttonDownState == HIGH)
      {
        return true;
      }
    }
  }
  return false;
}

bool CheckUp()
{
  if (readingUp != lastUpButtonState) {
    lastUpDebounceTime = millis();
  }
  if (millis() - lastUpDebounceTime > DEBOUNCE_DELAY)
  {
    if (readingUp != buttonUpState)
    {
      buttonUpState = readingUp;
      if (buttonUpState == HIGH)
      {
        return true;
      }
    }
  }
  return false;
}

byte* readEEPROM(unsigned int eeaddress, unsigned int num_chars)
{
  byte* data = new byte[num_chars];
  byte i = 0;
  Wire.beginTransmission(ADDRESS);
  Wire.write((int)(eeaddress >> 8));   // MSB
  Wire.write((int)(eeaddress & 0xFF)); // LSB
  Wire.endTransmission();

  Wire.requestFrom(deviceaddress, num_chars);

  while (Wire.available()) data[i++] = Wire.read();
  return data;
}

byte* GetSongData( byte* song, int* songLength) {
  switch (index) {
    case 0 :
      song = readEEPROM(0, 102);
      *songLength = 51;
      break;
    case 1 : song = readEEPROM(102, 122);
      *songLength = 61;
      break;
    case 2 : song = readEEPROM(224, 110);
      *songLength = 55;
      break;
    case 3 : song = readEEPROM(334, 54);
      *songLength = 27;
      break;
    case 4 : song = readEEPROM(388, 60);
      *songLength = 30;
      break;
    case 5 : song = readEEPROM(448, 94);
      *songLength = 47;
      break;
    case 6 : song = readEEPROM(542, 104);
      *songLength = 52;
      break;
    case 7 : song = readEEPROM(646, 84);
      *songLength = 42;
      break;
    case 8 : song = readEEPROM(730, 60);
      *songLength = 30;
      break;
    case 9 : song = readEEPROM(790, 58);
      *songLength = 29;
      break;
    case 10: song = readEEPROM(848, 64);
      *songLength = 32;
      break;
    case 11: song = readEEPROM(912, 56);
      *songLength = 28;
      break;
    case 12: song = readEEPROM(968, 84);
      *songLength = 42;
      break;
    case 13: song = readEEPROM(1052, 56);
      *songLength = 28;
      break;
    case 14: song = readEEPROM(1108, 48);
      *songLength = 24;
      break;
    case 15: song = readEEPROM(1156, 108);
      *songLength = 54;
      break;
    case 16: song = readEEPROM(1264, 88);
      *songLength = 44;
      break;
    case 17: song = readEEPROM(1352, 64);
      *songLength = 32;
      break;
  }
}

void PlaySong()
{
  byte* song;
  int* songLength = new int;
  GetSongData(song, songLength);
  for (int i = 0; i < *songLength; i++)
  {
    tone(TONE_PIN, song[i] * 4, song[i + *songLength] * 10);
    delay(song[i + *songLength] * 11);
    noTone(TONE_PIN);
  }
  delete song;
  delete songLength;
}
