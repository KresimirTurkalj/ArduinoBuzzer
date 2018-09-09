#include <Wire.h>
#include "songs.h"
#define eeprom1 0x50    //Address of 24LC256 eeprom1, eeprom chip

void writeEEPROM(int deviceaddress, unsigned int eeaddress, byte* data);
byte readEEPROM(int deviceaddress, unsigned int eeaddress );

void setup(){
  Serial.begin(9600);
  unsigned int ee = 0, write_size = 0;
  for(int i=0; i<N_SONGS; i++){
    switch(i){
      case 0:  writeEEPROM(eeprom1, ee + write_size, JingleBells);    // ee = 0 -> 101
               write_size += sizeof(JingleBells); 
               break;
      case 1:  writeEEPROM(eeprom1, ee + write_size, OldMcDonald);    // ee = 102 -> 223
               write_size += sizeof(OldMcDonald); 
               break;
      case 2:  writeEEPROM(eeprom1, ee + write_size, YankeeDoodle);   // ee = 224 -> 333
               write_size += sizeof(YankeeDoodle); 
               break;
      case 3:  writeEEPROM(eeprom1, ee + write_size, RowYourBoat);    // ee = 334 -> 387
               write_size += sizeof(RowYourBoat); 
               break;
      case 4:  writeEEPROM(eeprom1, ee + write_size, WeWishYou);      // ee = 388 -> 447
               write_size += sizeof(WeWishYou); 
               break;
      case 5:  writeEEPROM(eeprom1, ee + write_size, ItsyBitsy);      // ee = 448 -> 541
               write_size += sizeof(ItsyBitsy); 
               break;
      case 6:  writeEEPROM(eeprom1, ee + write_size, BlackSheep);     // ee = 542 -> 645
               write_size += sizeof(BlackSheep); 
               break;
      case 7:  writeEEPROM(eeprom1, ee + write_size, TwinkleTwinkle); // ee = 646 -> 729
               write_size += sizeof(TwinkleTwinkle); 
               break;
      case 8:  writeEEPROM(eeprom1, ee + write_size, SvetiNikola);    // ee = 730 -> 789
               write_size += sizeof(SvetiNikola); 
               break;
      case 9:  writeEEPROM(eeprom1, ee + write_size, JesteLIkad);     // ee = 790 -> 847
               write_size += sizeof(JesteLIkad); 
               break;
      case 10: writeEEPROM(eeprom1, ee + write_size, HopaCupa);       // ee = 848 -> 911
               write_size += sizeof(HopaCupa); 
               break;
      case 11: writeEEPROM(eeprom1, ee + write_size, IgraKolo);       // ee = 912 -> 967
               write_size += sizeof(IgraKolo); 
               break;
      case 12: writeEEPROM(eeprom1, ee + write_size, Pile);           // ee = 968 -> 1051
               write_size += sizeof(Pile); 
               break;
      case 13: writeEEPROM(eeprom1, ee + write_size, Maca);           // ee = 1052 -> 1107
               write_size += sizeof(Maca); 
               break;
      case 14: writeEEPROM(eeprom1, ee + write_size, CistaCica);      // ee = 1108 -> 1155
               write_size += sizeof(CistaCica); 
               break;
      case 15: writeEEPROM(eeprom1, ee + write_size, MojKonjic);      // ee = 1156 -> 1263
               write_size += sizeof(MojKonjic); 
               break;
      case 16: writeEEPROM(eeprom1, ee + write_size, Jesenska);       // ee = 1264 -> 1351
               write_size += sizeof(Jesenska); 
               break;
      case 17: writeEEPROM(eeprom1, ee + write_size, DjecaMaca);      // ee = 1352 -> 1415
               write_size += sizeof(DjecaMaca); 
               break; 
    }
  Serial.print("Velicina: ");
  Serial.println(write_size + ee);
  }
}

void loop(){}

void writeEEPROM(int deviceaddress, unsigned int eeaddress, byte* data) 
{
  // Uses Page Write for 24LC256
  // Allows for 64 byte page boundary
  // Splits string into max 16 byte writes
  byte i=0, counter=0;
  unsigned int  address;
  unsigned int  page_space;
  unsigned int  page=0;
  unsigned int  num_writes;
  unsigned int  data_len=0;
  byte first_write_size;
  byte last_write_size;  
  byte write_size;  
  
  // Calculate length of data
  do{ data_len++; } while(data[data_len]);   
   
  // Calculate space available in first page
  page_space = int(((eeaddress/64) + 1)*64)-eeaddress;

  // Calculate first write size
  if (page_space>16){
     first_write_size=page_space-((page_space/16)*16);
     if (first_write_size==0) first_write_size=16;
  }   
  else 
     first_write_size=page_space; 
    
  // calculate size of last write  
  if (data_len>first_write_size) 
     last_write_size = (data_len-first_write_size)%16;   
  
  // Calculate how many writes we need
  if (data_len>first_write_size)
     num_writes = ((data_len-first_write_size)/16)+2;
  else
     num_writes = 1;  
     
  i=0;   
  address=eeaddress;
  for(page=0;page<num_writes;page++) 
  {
     if(page==0) write_size=first_write_size;
     else if(page==(num_writes-1)) write_size=last_write_size;
     else write_size=16;
  
     Wire.beginTransmission(deviceaddress);
     Wire.write((int)((address) >> 8));   // MSB
     Wire.write((int)((address) & 0xFF)); // LSB
     counter=0;
     do{ 
        Wire.write((byte) data[i]);
        i++;
        counter++;
     } while((data[i]) && (counter<write_size));  
     Wire.endTransmission();
     address+=write_size;   // Increment address for next write
     
     delay(6);  // needs 5ms for page write
  }
}

byte readEEPROM(int deviceaddress, unsigned int eeaddress ) 
{
  byte rdata = 0xFF;
 
  Wire.beginTransmission(deviceaddress);
  Wire.write((int)(eeaddress >> 8));   // MSB
  Wire.write((int)(eeaddress & 0xFF)); // LSB
  Wire.endTransmission();
 
  Wire.requestFrom(deviceaddress,1);
 
  if (Wire.available()) rdata = Wire.read();
 
  return rdata;
}