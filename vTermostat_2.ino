/*
   -- værksted termostat --
   
   This source code of graphical user interface 
   has been generated automatically by RemoteXY editor.
   To compile this code using RemoteXY library 3.1.8 or later version 
   download by link http://remotexy.com/en/library/
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                   
     - for ANDROID 4.11.1 or later version;
     - for iOS 1.9.1 or later version;
    
   This source code is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.    
*/

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__ESP32CORE_BLE
#include <BLEDevice.h>

#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_BLUETOOTH_NAME "RemoteXY"


// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =   // 80 bytes
  { 255,0,0,25,0,73,0,16,24,5,68,51,1,20,62,61,0,8,36,135,
  94,86,97,114,109,101,0,114,101,102,0,84,101,109,112,0,70,20,28,2,
  9,9,0,26,37,0,67,0,42,6,20,5,0,2,26,6,67,0,3,6,
  20,5,0,178,26,6,131,1,29,84,20,7,1,2,31,80,97,103,101,0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // output variables
  float onlineGraph_1_var1;
  float onlineGraph_1_var2;
  float onlineGraph_1_var3;
  uint8_t isHeatOn; // led state 0 .. 1 
  char text_1[6];  // string UTF8 end zero 
  char temp[6];  // string UTF8 end zero 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY;
#pragma pack(pop)

/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////



void setup() 
{
  RemoteXY_Init (); 
  
  
  // TODO you setup code
  
}

void loop() 
{ 
  RemoteXY_Handler ();
  
  
  // TODO you loop code
  // use the RemoteXY structure for data transfer
  // do not call delay() 


}