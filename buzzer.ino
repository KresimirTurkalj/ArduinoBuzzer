#define DEBOUNCE_DELAY 500
#define TONE_PIN 5
#define N_SONGS 18
#define GO_PIN 4
#define UP_PIN 2
#define DOWN_PIN 3
#define ADDRESS 0x50

#include <Wire.h>

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

short int lastGoButtonState = HIGH;
short int lastUpButtonState = HIGH;
short int lastDownButtonState = HIGH;

void setup()
{
  Wire.begin();
  pinMode(UP_PIN, INPUT_PULLUP);
  pinMode(DOWN_PIN, INPUT_PULLUP);
  pinMode(GO_PIN, INPUT_PULLUP);
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
    lastGoButtonState = readingGo;
  }
  if (millis() - lastGoDebounceTime > DEBOUNCE_DELAY)
  {
    if (readingGo != buttonGoState)
    {
      buttonGoState = readingGo;
      if (buttonGoState == LOW) {
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
    lastDownButtonState = readingDown;
  }
  if (millis() - lastDownDebounceTime > DEBOUNCE_DELAY)
  {
    if (readingDown != buttonDownState)
    {
      buttonDownState = readingDown;
      if (buttonDownState == LOW)
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
    lastUpButtonState = readingUp;
  }
  if (millis() - lastUpDebounceTime > DEBOUNCE_DELAY)
  {
    if (readingUp != buttonUpState)
    {
      buttonUpState = readingUp;
      if (buttonUpState == LOW)
      {
        return true;
      }
    }
  }
  return false;
}

void PlaySong()
{
  int* song;
  int songLength, frequency, duration;
  song = GetSongData(&songLength);
  for (int i = 0; i < songLength; i++)
  {
    frequency = song[i];
    duration = song[i + songLength];
    tone(TONE_PIN, frequency, duration);
    delay(duration * 1.1);
    noTone(TONE_PIN);
  }
  delete song;
}

int* GetSongData(int* songLength) {
  byte* song;
  int startEE, remainChars, pageLoad, passedChars = 0;
  switch (index) {
    case 0 : *songLength = 51;
      startEE = 0;
      break;
    case 1 : *songLength = 61;
      startEE = 204;
      break;
    case 2 : *songLength = 55;
      startEE = 448;
      break;
    case 3 : *songLength = 27;
      startEE = 668;
      break;
    case 4 : *songLength = 30;
      startEE = 776;
      break;
    case 5 : *songLength = 47;
      startEE = 896;
      break;
    case 6 : *songLength = 52;
      startEE = 1084;
      break;
    case 7 : *songLength = 42;
      startEE = 1292;
      break;
    case 8 : *songLength = 30;
      startEE = 1460;
      break;
    case 9 : *songLength = 29;
      startEE = 1580;
      break;
    case 10: *songLength = 32;
      startEE = 1696;
      break;
    case 11: *songLength = 28;
      startEE = 1824;
      break;
    case 12: *songLength = 42;
      startEE = 1936;
      break;
    case 13: *songLength = 28;
      startEE = 2108;
      break;
    case 14: *songLength = 24;
      startEE = 2216;
      break;
    case 15: *songLength = 54;
      startEE = 2312;
      break;
    case 16: *songLength = 44;
      startEE = 2528;
      break;
    case 17: *songLength = 32;
      startEE = 2704;
      break;
  }
  song = new byte[*songLength * 4];
  remainChars = *songLength * 4;
  while(remainChars > 0){
    if(remainChars > 32){
      remainChars -= 32;
      pageLoad = 32;
    }
    else{
      pageLoad = remainChars;
      remainChars = 0;
    }
    readEEPROM(startEE, song, passedChars, pageLoad);
    passedChars += pageLoad;
    startEE += pageLoad;
  }
  return ByteToIntArray(song, *songLength * 2);
}

int* ByteToIntArray(byte* byteArray, int intSize) {
  int j = 0;
  byte high, low;
  int* intArray = new int[intSize];
  for (int i = 0; i < intSize; i++) {
    high = byteArray[j];
    low = byteArray[j + 1];
    intArray[i] = (((int)high<<8) | (int)low );
    j += 2;
  }
  delete byteArray;
  return intArray;
}

void readEEPROM(int eeaddress, byte* data, byte i, int num_chars)
{
  Wire.beginTransmission(ADDRESS);

  Wire.write((int)(eeaddress >> 8));   // MSB
  Wire.write((int)(eeaddress & 0xFF)); // LSB
  Wire.endTransmission();
  
  Wire.requestFrom(ADDRESS, num_chars);
  
  while (Wire.available()) {
    data[i++] = Wire.read();
  }
}


