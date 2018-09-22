

#ifndef songs_h
#define songs_h

#include "pitches.h"
#define N_SONGS 18

#define JIBEAT 410
#define OLBEAT 300
#define YABEAT 450
#define ROBEAT 600
#define WEBEAT 390
#define ITBEAT 550
#define BLBEAT 480
#define TWBEAT 600
#define SVBEAT 500
#define JEBEAT 500
#define HOBEAT 500
#define IGBEAT 500
#define PIBEAT 500
#define MABEAT 500
#define CIBEAT 500
#define MOBEAT 500
#define JSBEAT 500
#define DJBEAT 500

int JingleBells[102] = {                                                                                  //1                                                                                          //2                                                                                      //3                                                                                        //4                                                                                      //5                                                                                       //6                                                                                 
                         NOTE_E4 ,NOTE_E4 ,NOTE_E4 ,NOTE_E4 ,NOTE_E4 ,NOTE_E4 ,NOTE_E4 ,NOTE_G4 ,NOTE_C4 ,NOTE_D4 ,NOTE_E4 ,NOTE_F4 ,NOTE_F4 ,NOTE_F4 ,NOTE_F4 ,NOTE_F4 ,NOTE_E4 ,NOTE_E4 ,NOTE_E4 ,NOTE_E4 ,NOTE_E4 ,NOTE_D4 ,NOTE_D4 ,NOTE_E4 ,NOTE_D4 ,NOTE_G4 ,NOTE_E4 ,NOTE_E4 ,NOTE_E4 ,NOTE_E4 ,NOTE_E4 ,NOTE_E4 ,NOTE_E4 ,NOTE_G4 ,NOTE_C4 ,NOTE_D4 ,NOTE_E4 ,NOTE_F4 ,NOTE_F4 ,NOTE_F4 ,NOTE_F4 ,NOTE_F4 ,NOTE_E4 ,NOTE_E4 ,NOTE_E4 ,NOTE_E4 ,NOTE_G4 ,NOTE_G4 ,NOTE_F4 ,NOTE_D4 ,NOTE_C4 ,
                         JIBEAT  ,JIBEAT  ,JIBEAT*2,JIBEAT  ,JIBEAT  ,JIBEAT*2,JIBEAT  ,JIBEAT  ,JIBEAT  ,JIBEAT/2,JIBEAT*4,JIBEAT  ,JIBEAT  ,JIBEAT  ,JIBEAT/2,JIBEAT  ,JIBEAT  ,JIBEAT  ,JIBEAT/2,JIBEAT/2,JIBEAT  ,JIBEAT  ,JIBEAT  ,JIBEAT  ,JIBEAT*2,JIBEAT*2,JIBEAT  ,JIBEAT  ,JIBEAT*2,JIBEAT  ,JIBEAT  ,JIBEAT*2,JIBEAT  ,JIBEAT  ,JIBEAT  ,JIBEAT/2,JIBEAT*4,JIBEAT  ,JIBEAT  ,JIBEAT  ,JIBEAT  ,JIBEAT  ,JIBEAT  ,JIBEAT  ,JIBEAT/2,JIBEAT/2,JIBEAT  ,JIBEAT  ,JIBEAT  ,JIBEAT  ,JIBEAT*4     
                        };


int OldMcDonald[122] = {                                                                                                                                                                                                                                                                                                                                                                                                                      
                        NOTE_C4, NOTE_C4, NOTE_C4, NOTE_G3, NOTE_A3, NOTE_A3, NOTE_G3, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4, BLANK  , NOTE_G3, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_G3, NOTE_A3, NOTE_A3, NOTE_G3, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4, BLANK  , NOTE_G3, NOTE_G3, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_G3, NOTE_G3, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_G3, NOTE_A3, NOTE_A3, NOTE_G3, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4,
                        OLBEAT ,OLBEAT  ,OLBEAT  ,OLBEAT  ,OLBEAT  ,OLBEAT  ,OLBEAT*2,OLBEAT  ,OLBEAT  ,OLBEAT  ,OLBEAT  ,OLBEAT*2,OLBEAT  ,OLBEAT  ,OLBEAT  ,OLBEAT  ,OLBEAT  ,OLBEAT  ,OLBEAT  ,OLBEAT  ,OLBEAT*2,OLBEAT  ,OLBEAT  ,OLBEAT  ,OLBEAT  ,OLBEAT*2,OLBEAT  ,OLBEAT/2,OLBEAT/2,OLBEAT  ,OLBEAT  ,OLBEAT  ,OLBEAT/2,OLBEAT/2,OLBEAT  ,OLBEAT  ,OLBEAT*2,OLBEAT/2,OLBEAT/2,OLBEAT  ,OLBEAT/2,OLBEAT  ,OLBEAT  ,OLBEAT/2,OLBEAT/2,OLBEAT/2,OLBEAT/2,OLBEAT  ,OLBEAT  ,OLBEAT  ,OLBEAT  ,OLBEAT  ,OLBEAT  ,OLBEAT  ,OLBEAT  ,OLBEAT*2,OLBEAT  ,OLBEAT  ,OLBEAT  ,OLBEAT  ,OLBEAT*2
                        };

int YankeeDoodle[110] = {                                                                                                                                                                                                                                                                                                                                                                                                           
                          NOTE_C4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_C4, NOTE_E4, NOTE_D4, NOTE_G4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_C4, NOTE_B4, NOTE_G3, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_B4, NOTE_G3, NOTE_A3, NOTE_B4, NOTE_C4, NOTE_C4, NOTE_A3  , NOTE_B4, NOTE_A3, NOTE_G3, NOTE_A3, NOTE_B4, NOTE_C4, NOTE_G3  , NOTE_A3, NOTE_G3, NOTE_F3, NOTE_E3, NOTE_G3, NOTE_A3  , NOTE_B4, NOTE_A3, NOTE_G3, NOTE_B4, NOTE_C4, NOTE_A3, NOTE_G3, NOTE_C4, NOTE_B4, NOTE_D4, NOTE_C4, NOTE_C4,
                         YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT  ,YABEAT  ,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT  ,YABEAT  ,YABEAT*3/4,YABEAT/4,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT  ,YABEAT*3/4,YABEAT/4,YABEAT/2,YABEAT/2,YABEAT  ,YABEAT  ,YABEAT*3/4,YABEAT/4,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT/2,YABEAT  ,YABEAT
                          };  

                                            
int RowYourBoat[54] = {                                                                                                                                                                                                                                                                                                                                                                                                                      
                          NOTE_D4 ,  NOTE_D4 , NOTE_D4, NOTE_E4, NOTE_FS4 , NOTE_FS4, NOTE_E4, NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_D5, NOTE_D5, NOTE_D5, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_A4, NOTE_G4, NOTE_FS4, NOTE_E4, NOTE_D4,
                        ROBEAT*3/2,ROBEAT*3/2,ROBEAT  ,ROBEAT/2,ROBEAT*3/2,ROBEAT   ,ROBEAT/2,ROBEAT   ,ROBEAT/2,ROBEAT*3,ROBEAT/2,ROBEAT/2,ROBEAT/2,ROBEAT/2,ROBEAT/2,ROBEAT/2,ROBEAT/2 , ROBEAT/2,ROBEAT/2 ,ROBEAT/2,ROBEAT/2,ROBEAT/2,ROBEAT  ,ROBEAT/2, ROBEAT  ,ROBEAT/2,ROBEAT*3    
                       };
                               
int WeWishYou[60] = {                                                                                                                                                                                                                                                                                                                                                                                                             
                      NOTE_G3, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_B3, NOTE_A3, NOTE_A3, NOTE_A3, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_B3, NOTE_G3, NOTE_G3, NOTE_E4, NOTE_E4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_A3, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_D4, NOTE_B3, NOTE_C4,
                      WEBEAT ,WEBEAT  ,WEBEAT/2,WEBEAT/2,WEBEAT/2,WEBEAT/2,WEBEAT  ,WEBEAT  ,WEBEAT  ,WEBEAT  ,WEBEAT/2,WEBEAT/2,WEBEAT/2,WEBEAT/2,WEBEAT  ,WEBEAT  ,WEBEAT  ,WEBEAT  ,WEBEAT/2,WEBEAT/2,WEBEAT/2,WEBEAT/2,WEBEAT  ,WEBEAT  ,WEBEAT/2,WEBEAT/2,WEBEAT  ,WEBEAT  ,WEBEAT  ,WEBEAT*2
                     };

int ItsyBitsy[94] = {                                                                                                                                                                                                                                                                              //                                                                                                                                       
                       NOTE_G3, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_D4,   NOTE_E4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_C4,   NOTE_E4, NOTE_E4, NOTE_F4,  NOTE_G4 ,  NOTE_G4 , NOTE_F4, NOTE_E4, NOTE_F4,   NOTE_G4, NOTE_E4, NOTE_C4, NOTE_C4, NOTE_D4,  NOTE_E4 ,  NOTE_E4 , NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4,  NOTE_C4 , NOTE_G3, NOTE_G3, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_D4,  NOTE_E4 , NOTE_E4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_C4,
                      ITBEAT/2,ITBEAT  ,ITBEAT/2,ITBEAT  ,ITBEAT/2,ITBEAT*3/2,ITBEAT  ,ITBEAT/2,ITBEAT  ,ITBEAT/2,ITBEAT  ,ITBEAT/2,ITBEAT*3,ITBEAT*3/2,ITBEAT  ,ITBEAT/2,ITBEAT*3/2,ITBEAT*3/2,ITBEAT  ,ITBEAT/2,ITBEAT  ,ITBEAT/2,ITBEAT*3,ITBEAT*3/2,ITBEAT  ,ITBEAT/2,ITBEAT*3/2,ITBEAT*3/2,ITBEAT  ,ITBEAT/2,ITBEAT  ,ITBEAT/2,ITBEAT*3/2,ITBEAT  ,ITBEAT/2,ITBEAT  ,ITBEAT/2,ITBEAT  ,ITBEAT/2,ITBEAT*3/2,ITBEAT  ,ITBEAT/2,ITBEAT  ,ITBEAT/2,ITBEAT  ,ITBEAT/2,ITBEAT*3    
                     };

int BlackSheep[104] = {                                                                                                                                                                                                                                                                                 //                                                                                                                                       //
                        NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4,
                        BLBEAT , BLBEAT , BLBEAT , BLBEAT ,BLBEAT/2,BLBEAT/2,BLBEAT/2,BLBEAT/2,BLBEAT*2, BLBEAT , BLBEAT , BLBEAT , BLBEAT , BLBEAT , BLBEAT ,BLBEAT*2, BLBEAT ,BLBEAT/2,BLBEAT/2, BLBEAT , BLBEAT , BLBEAT ,BLBEAT/2,BLBEAT/2,BLBEAT*2, BLBEAT ,BLBEAT/2,BLBEAT/2,BLBEAT/2,BLBEAT/2,BLBEAT/2,BLBEAT/2, BLBEAT ,BLBEAT/2,BLBEAT/2,BLBEAT*2, BLBEAT , BLBEAT , BLBEAT , BLBEAT ,BLBEAT/2,BLBEAT/2,BLBEAT/2,BLBEAT/2,BLBEAT*2, BLBEAT , BLBEAT , BLBEAT , BLBEAT , BLBEAT , BLBEAT ,BLBEAT*2   
                       };

int TwinkleTwinkle[84] = {                                                             //                                                                 //                                                               //                                                                 //                                                               //                                                                 ///
                           NOTE_E4, NOTE_E4, NOTE_B4, NOTE_B4, NOTE_CS5, NOTE_CS5, NOTE_B4, NOTE_A4, NOTE_A4, NOTE_GS4, NOTE_GS4, NOTE_FS4, NOTE_FS4, NOTE_E4, NOTE_B4, NOTE_B4, NOTE_A4, NOTE_A4, NOTE_GS4, NOTE_GS4, NOTE_FS4, NOTE_B4, NOTE_B4, NOTE_A4, NOTE_A4, NOTE_GS4, NOTE_GS4, NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_B4, NOTE_B4, NOTE_CS5, NOTE_CS5, NOTE_B4, NOTE_A4, NOTE_A4, NOTE_GS4, NOTE_GS4, NOTE_FS4, NOTE_FS4, NOTE_E4,
                           TWBEAT ,TWBEAT  ,TWBEAT  ,TWBEAT  ,TWBEAT   ,TWBEAT   ,TWBEAT*2,TWBEAT  ,TWBEAT  ,TWBEAT   ,TWBEAT   ,TWBEAT   ,TWBEAT   ,TWBEAT*2,TWBEAT  ,TWBEAT  ,TWBEAT  ,TWBEAT  ,TWBEAT  ,TWBEAT    ,TWBEAT*2 ,TWBEAT  ,TWBEAT  ,TWBEAT  ,TWBEAT  ,TWBEAT   ,TWBEAT   ,TWBEAT*2 ,TWBEAT  ,TWBEAT  ,TWBEAT  ,TWBEAT  ,TWBEAT   ,TWBEAT   ,TWBEAT*2,TWBEAT  ,TWBEAT  ,TWBEAT   ,TWBEAT   ,TWBEAT   ,TWBEAT   ,TWBEAT*2
                          };

int SvetiNikola[60] = {                                                                                                                                                                                                                                                                                                                                                                                                             
                           NOTE_D4 , NOTE_D4, NOTE_F4, NOTE_F4, NOTE_A4, NOTE_A4, NOTE_F4, NOTE_F4,   NOTE_B4, NOTE_B4, NOTE_G4, NOTE_B4, NOTE_A4, NOTE_A4,  BLANK ,   NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4,   NOTE_F4, NOTE_A4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4,   NOTE_E4, NOTE_D4, NOTE_D4, BLANK ,
                        SVBEAT*3/2 ,SVBEAT/2,SVBEAT  ,SVBEAT  ,SVBEAT  ,SVBEAT  ,SVBEAT  ,SVBEAT  ,SVBEAT*3/2,SVBEAT/2,SVBEAT  ,SVBEAT  ,SVBEAT*2,SVBEAT  ,SVBEAT  ,SVBEAT*3/2,SVBEAT/2,SVBEAT  ,SVBEAT  ,SVBEAT*3/2,SVBEAT/2,SVBEAT  ,SVBEAT  ,SVBEAT*3/2,SVBEAT/2,SVBEAT  ,SVBEAT  ,SVBEAT*2,SVBEAT  ,SVBEAT
                       };

int JesteLIkad[58] =  {                                                                                                                                                                       //19                                                                                                                                                                                                                                      
                        NOTE_G4 , NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_G4, NOTE_E4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_G4, NOTE_E4,
                        JEBEAT/2,JEBEAT/2,HOBEAT/2,JEBEAT/2,JEBEAT/2,JEBEAT/2,JEBEAT/2,JEBEAT/2,JEBEAT/2,JEBEAT/2,JEBEAT/2,JEBEAT/2,JEBEAT/2,JEBEAT/2,JEBEAT/2,JEBEAT/2,JEBEAT/2,JEBEAT/2,JEBEAT  ,JEBEAT/2,JEBEAT/2,JEBEAT  ,JEBEAT/2,JEBEAT/2,JEBEAT/2,JEBEAT/2,JEBEAT/2,JEBEAT/2,JEBEAT
                        };

int HopaCupa[64] =    {                                                                                                                                                                                                                                                                                                                                                                                                                      
                        NOTE_G4 ,NOTE_G4 , NOTE_F4, NOTE_F4,NOTE_G4 ,NOTE_G4 , NOTE_F4, NOTE_F4, NOTE_E4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_D4,NOTE_G4 ,NOTE_G4 , NOTE_F4, NOTE_F4,NOTE_G4 ,NOTE_G4 , NOTE_F4, NOTE_F4, NOTE_E4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_D4,
                        HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT  ,HOBEAT    
                       };
               
int IgraKolo[56] =    {                                                                                                                                                                       //19                                                                                                                                                                                                                                      
                        NOTE_A4 , NOTE_A4, NOTE_A4, NOTE_FS4,NOTE_A4 , NOTE_A4, NOTE_A4, NOTE_FS4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_G4, NOTE_FS4, NOTE_D4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_D4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_D4, NOTE_FS4, NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4,
                        IGBEAT/2,IGBEAT/2,IGBEAT/2,IGBEAT/2 ,IGBEAT/2,IGBEAT/2,IGBEAT/2,IGBEAT/2 ,IGBEAT/2,IGBEAT/2,IGBEAT/2,IGBEAT/2,IGBEAT   ,IGBEAT  ,IGBEAT/2 ,IGBEAT/2 ,IGBEAT/2 ,IGBEAT/2,IGBEAT/2 ,IGBEAT/2 ,IGBEAT/2 ,IGBEAT/2,IGBEAT/2 ,IGBEAT/2 ,IGBEAT/2,IGBEAT/2,IGBEAT  ,IGBEAT  
                       };
        
int Pile[84] =  {                                                             //                                                                 //                                                               //                                                                 //                                                               //                                                                 ///
                    NOTE_E4, NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_GS4, NOTE_FS4, NOTE_FS4, BLANK , NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_FS4, NOTE_E4, NOTE_E4,  BLANK , NOTE_E4, NOTE_E4, NOTE_E4,  BLANK , NOTE_CS3, NOTE_E4,  BLANK , NOTE_E4, NOTE_E4, NOTE_E4,  BLANK , NOTE_B4, NOTE_E4,  BLANK ,  BLANK , NOTE_E4,
                   PIBEAT/2,PIBEAT/2,PIBEAT/2,PIBEAT/2 ,PIBEAT   ,PIBEAT   ,PIBEAT/2 ,PIBEAT/2 ,PIBEAT/2 ,PIBEAT/2 ,PIBEAT   ,PIBEAT   ,PIBEAT/2,PIBEAT/2,PIBEAT/2,PIBEAT/2,PIBEAT/2 ,PIBEAT/2 ,PIBEAT  ,PIBEAT/2,PIBEAT/2 ,PIBEAT/2 ,PIBEAT/2 ,PIBEAT/2,PIBEAT/2,PIBEAT  ,PIBEAT/2,PIBEAT/2,PIBEAT/2,PIBEAT/2,PIBEAT/2 ,PIBEAT/2,PIBEAT  ,PIBEAT/2,PIBEAT/2,PIBEAT/2,PIBEAT/2,PIBEAT/2,PIBEAT/2,PIBEAT  ,PIBEAT  ,PIBEAT
                 };

int Maca[56] = {                                                                                                                                                                                                                                                                                                                                                                                                                      
                NOTE_G4 , NOTE_F4, NOTE_E4, NOTE_E4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_F4, NOTE_E4, NOTE_E4,
                MABEAT*2,MABEAT  ,MABEAT*2,MABEAT  ,MABEAT*2,MABEAT  ,MABEAT*2,MABEAT  ,MABEAT*2,MABEAT  ,MABEAT*2,MABEAT  ,MABEAT*2,MABEAT*2,MABEAT*2,MABEAT  ,MABEAT*2,MABEAT  ,MABEAT*2,MABEAT  ,MABEAT*2,MABEAT  ,MABEAT*2,MABEAT  ,MABEAT*2,MABEAT  ,MABEAT*2,MABEAT*2
                };

int CistaCica[48] =   {                                                                                                                                                                                                                                                                                                                                                                                                                      
                         NOTE_G4, NOTE_G4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_A4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_E4,
                        CIBEAT/2,CIBEAT/2,CIBEAT/2,CIBEAT/2,CIBEAT  ,CIBEAT  ,CIBEAT/2,CIBEAT/2,CIBEAT/2,CIBEAT/2,CIBEAT  ,CIBEAT  ,CIBEAT/2,CIBEAT/2,CIBEAT/2,CIBEAT/2,CIBEAT  ,CIBEAT  ,CIBEAT/2,CIBEAT/2,CIBEAT/2,CIBEAT/2,CIBEAT  ,CIBEAT    
                       };

int MojKonjic[108] =  {                                                                                                                               //                                                                                                                                                                                                                                                                            
                         NOTE_B4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_G4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_G4,  BLANK , NOTE_A4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_G4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_E4, NOTE_G4,  BLANK , NOTE_D4, NOTE_B4, NOTE_A4, NOTE_E4, NOTE_B4, NOTE_A4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_D4, NOTE_B4, NOTE_A4, NOTE_E4, NOTE_B4, NOTE_A4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_G4,
                        MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT  ,MOBEAT  ,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT  ,MOBEAT  ,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT*2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT/2,MOBEAT*2 
                       };
                       
int Jesenska[88] =    {                                                             //                                                                 //                                                               //                                                                 //                                                               //                                                                 ///
                        NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_AS4, NOTE_A4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_F4, NOTE_E4, NOTE_D4,
                       JSBEAT/2,JSBEAT/2,JSBEAT/2,JSBEAT/2,JSBEAT  ,JSBEAT  ,JSBEAT/2 ,JSBEAT/2,JSBEAT/2,JSBEAT/2 ,JSBEAT*2,JSBEAT/2,JSBEAT/2,JSBEAT/2,JSBEAT/2,JSBEAT  ,JSBEAT  ,JSBEAT/2 ,JSBEAT/2,JSBEAT/2,JSBEAT/2 ,JSBEAT*2,JSBEAT/2,JSBEAT/2,JSBEAT/2,JSBEAT/2,JSBEAT  ,JSBEAT  ,JSBEAT/2,JSBEAT/2,JSBEAT/2,JSBEAT/2 ,JSBEAT*2,JSBEAT/2,JSBEAT/2,JSBEAT/2,JSBEAT/2,JSBEAT  ,JSBEAT  ,JSBEAT/2,JSBEAT/2,JSBEAT/2,JSBEAT/2,JSBEAT*2
                       };
                       
int DjecaMaca[64] =   {                                                                                                                                                                       //19                                                                                                                                                                                                                                      
                        NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_B4, NOTE_A4, NOTE_FS4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_G4, NOTE_FS4, NOTE_G4, NOTE_FS4, NOTE_E4, NOTE_FS4, NOTE_FS4, NOTE_G4, NOTE_E4, NOTE_FS4, NOTE_FS4, NOTE_G4, NOTE_E4, NOTE_FS4, NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4,
                        DJBEAT/2,DJBEAT/2,DJBEAT/2,DJBEAT/2,DJBEAT/2,DJBEAT/2,DJBEAT/2,DJBEAT/2 ,DJBEAT/2,DJBEAT/2,DJBEAT/2,DJBEAT/2,DJBEAT/2 ,DJBEAT/2,DJBEAT/2,DJBEAT/2 ,DJBEAT/2 ,DJBEAT/2 ,DJBEAT/2,DJBEAT/2,DJBEAT/2 ,DJBEAT/2 ,DJBEAT/2,DJBEAT/2 ,DJBEAT/2,DJBEAT/2 ,DJBEAT/2,DJBEAT/2,DJBEAT/2,DJBEAT/2,DJBEAT/2,DJBEAT/2 
                       };

#endif
