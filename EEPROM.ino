#include <Wire.h>
#include "songs.h"
#define ADDRESS 0x50    //Address of 24LC256 ADDRESS, eeprom chip

void setup() {
  Wire.begin();
  unsigned int ee = 0, writePos = 0, arraySize = 0;
  for (int i = 0; i < N_SONGS; i++) {
    switch (i) {
      case 0:  arraySize = sizeof(JingleBells);
        writeEEPROM(ee + writePos, IntToByteArray(JingleBells, arraySize), arraySize);    // ee = 0 -> 203
        break;
      case 1:  arraySize = sizeof(OldMcDonald);
        writeEEPROM(ee + writePos, IntToByteArray(OldMcDonald, arraySize), arraySize);    // ee = 204 -> 447
        break;
      case 2: arraySize = sizeof(YankeeDoodle);
        writeEEPROM(ee + writePos, IntToByteArray(YankeeDoodle, arraySize), arraySize);   // ee = 448 -> 667
        break;
      case 3: arraySize = sizeof(RowYourBoat);
        writeEEPROM(ee + writePos, IntToByteArray(RowYourBoat, arraySize), arraySize);    // ee = 668 -> 775
        break;
      case 4: arraySize = sizeof(WeWishYou);
        writeEEPROM(ee + writePos, IntToByteArray(WeWishYou, arraySize), arraySize);      // ee = 776 -> 895
        break;
      case 5: arraySize = sizeof(ItsyBitsy);
        writeEEPROM(ee + writePos, IntToByteArray(ItsyBitsy, arraySize), arraySize);      // ee = 896 -> 1083
        break;
      case 6: arraySize = sizeof(BlackSheep);
        writeEEPROM(ee + writePos, IntToByteArray(BlackSheep, arraySize), arraySize);     // ee = 1084 -> 1291
        break;
      case 7: arraySize = sizeof(TwinkleTwinkle);
        writeEEPROM(ee + writePos, IntToByteArray(TwinkleTwinkle, arraySize), arraySize); // ee = 1292 -> 1459
        break;
      case 8: arraySize = sizeof(SvetiNikola);
        writeEEPROM(ee + writePos, IntToByteArray(SvetiNikola, arraySize), arraySize);    // ee = 1460 -> 1699
        break;
      case 9: arraySize = sizeof(JesteLIkad);
        writeEEPROM(ee + writePos, IntToByteArray(JesteLIkad, arraySize), arraySize);     // ee = 1700 -> 1815
        break;
      case 10: arraySize = sizeof(HopaCupa);
        writeEEPROM(ee + writePos, IntToByteArray(HopaCupa, arraySize), arraySize);       // ee = 1816 -> 1943
        break;
      case 11: arraySize = sizeof(IgraKolo);
        writeEEPROM(ee + writePos, IntToByteArray(IgraKolo, arraySize), arraySize);       // ee = 1944 -> 2167
        break;
      case 12: arraySize = sizeof(Pile);
        writeEEPROM(ee + writePos, IntToByteArray(Pile, arraySize), arraySize);           // ee = 2168 -> 2335
        break;
      case 13: arraySize = sizeof(Maca);
        writeEEPROM(ee + writePos, IntToByteArray(Maca, arraySize), arraySize);           // ee = 2336 -> 2447
        break;
      case 14: arraySize = sizeof(CistaCica);
        writeEEPROM(ee + writePos, IntToByteArray(CistaCica, arraySize), arraySize);      // ee = 2448 -> 2639
        break;
      case 15: arraySize = sizeof(MojKonjic);
        writeEEPROM(ee + writePos, IntToByteArray(MojKonjic, arraySize), arraySize);      // ee = 2640 -> 2855
        break;
      case 16: arraySize = sizeof(Jesenska);
        writeEEPROM(ee + writePos, IntToByteArray(Jesenska, arraySize), arraySize);       // ee = 2856 -> 3031
        break;
      case 17: arraySize = sizeof(DjecaMaca);
        writeEEPROM(ee + writePos, IntToByteArray(DjecaMaca, arraySize), arraySize);      // ee = 3032 -> 3159
        break;
    }
    writePos += arraySize;
  }
}

void loop() {}

byte* IntToByteArray(int* intArray, int arraySize) {
  byte high, low;
  int j = 0;
  byte* byteArray = new byte[arraySize];
  for (int i = 0; i < arraySize/2; i++) {
    high = (byte) ((intArray[i] >> 8));
    low = (byte) (intArray[i] & 0xFF);
    byteArray[j] = high;
    byteArray[j + 1] = low;
    j += 2;
  }
  return byteArray;
}

void writeEEPROM(unsigned int eeaddress, byte* data, unsigned int data_len)
{
  // Uses Page Write for 24LC256
  // Allows for 64 byte page boundary
  // Splits string into max 16 byte writes
  byte i = 0, counter = 0;
  unsigned int  address;
  unsigned int  page_space;
  unsigned int  page = 0;
  unsigned int  num_writes;
  byte first_write_size;
  byte last_write_size;
  byte write_size;
  
  // Calculate space available in first page
  page_space = int(((eeaddress / 64) + 1) * 64) - eeaddress;

  // Calculate first write size
  if (page_space > 16) {
    first_write_size = page_space - ((page_space / 16) * 16);
    if (first_write_size == 0) first_write_size = 16;
  }
  else
    first_write_size = page_space;

  // calculate size of last write
  if (data_len > first_write_size)
    last_write_size = (data_len - first_write_size) % 16;

  // Calculate how many writes we need
  if (data_len > first_write_size)
    num_writes = ((data_len - first_write_size) / 16) + 2;
  else
    num_writes = 1;

  i = 0;
  address = eeaddress;
  for (page = 0; page < num_writes; page++)
  {
    if (page == 0) write_size = first_write_size;
    else if (page == (num_writes - 1)) write_size = last_write_size;
    else write_size = 16;

    Wire.beginTransmission(ADDRESS);
    Wire.write((int)((address) >> 8));   // MSB
    Wire.write((int)((address) & 0xFF)); // LSB
    counter = 0;
    do {
      Wire.write((byte)data[i]);
      i++;
      counter++;
    } while ((i<data_len) && (counter < write_size));
    Wire.endTransmission();
    address += write_size; // Increment address for next write
    
    delay(6);  // needs 5ms for page write
  }
  delete data;
}
