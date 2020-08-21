
#include <TrinketHidCombo.h>

//#define VIDEO_URL "chrome https://www.youtube.com/watch?v=dQw4w9WgXcQ"
#define VIDEO_URL "brave https://www.youtube.com/watch?v=dQw4w9WgXcQ"


int dataPin = 0;   
int clockPin = 1;  // digispark pins to cd4021 pins
int latchPin = 2;  

byte RegisterValue = 0; 
const int delayTime = 10;

void setup() {

//define pins used to connect to the CD4021 Shift Register
  pinMode(dataPin, INPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT); 

TrinketHidCombo.begin();

 
}

void loop() {

//  //Set latch pin to 1 to get recent data into the CD4021
//  digitalWrite(latchPin,1);
//  
//  delayMicroseconds(20);
//  
//  //Set latch pin to 0 to get data from the CD4021
//  digitalWrite(latchPin,0);
//
//  //Get CD4021 register data in byte variable
//  RegisterValue = shiftIn(dataPin, clockPin, MSBFIRST);
//
//
//  if (RegisterValue == B1000000) {
// 
//   
//    TrinketHidCombo.pressMultimediaKey(MMKEY_VOL_DOWN);
//
//
//  } else {
//    TrinketHidCombo.poll(); // do nothing, check if USB needs anything done
//  }
//
//  
 for(int i=0 ; i<50; i++){
   TrinketHidCombo.pressMultimediaKey(MMKEY_VOL_UP);
   delay(1);
 }
    TrinketHidCombo.pressKey(KEYCODE_MOD_LEFT_GUI,KEYCODE_R);

    
    //TrinketHidCombo.pressKey(0, KEYCODE_PERIOD);
    delay(100);
    TrinketHidCombo.pressKey(0, 0); 
    delay(100);
    TrinketHidCombo.println(VIDEO_URL);  // type something and press enter

    delay(1000);
    TrinketHidCombo.pressKey(KEYCODE_MOD_LEFT_CONTROL, KEYCODE_D);
    delay(100);
    TrinketHidCombo.pressKey(0, 0); 
    delay(100);
    TrinketHidCombo.pressKey(0, KEYCODE_ENTER);  
    delay(100);
    TrinketHidCombo.pressKey(0, 0); 
  



  

for(;;){
  TrinketHidCombo.mouseMove('a','a',0);
  delay(10);
}
}
