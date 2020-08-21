
#include <TrinketHidCombo.h>


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


 
// for(int i=0 ; i<50; i++){
//   TrinketHidCombo.pressMultimediaKey(MMKEY_VOL_UP);
//   delay(1);
// }

  for(int i=0 ; i<50; i++){
   TrinketHidCombo.mouseMove('a',(char)200,0);
   delay(1);
 }
 TrinketHidCombo.mouseMove((char)-36,(char)0, 0);
 TrinketHidCombo.mouseMove((char)0,(char)0, MOUSEBTN_LEFT_MASK);
 TrinketHidCombo.mouseMove((char)0,(char)0, 0);
    delay(100);
//   TrinketHidCombo.pressKey(KEYCODE_MOD_LEFT_GUI,KEYCODE_R);
//    TrinketHidCombo.pressKey(KEYCODE_MOD_LEFT_GUI , KEYCODE_SPACE);
//    delay(100);
//    TrinketHidCombo.pressKey(0, 0); 
//    delay(100);
//    TrinketHidCombo.pressKey(0, 0); 
//    delay(500);
    TrinketHidCombo.println("terminal");
    delay(100);
    TrinketHidCombo.pressKey(0, KEYCODE_ENTER);  
    delay(100);
    TrinketHidCombo.pressKey(0, 0);  
    delay(500);
    TrinketHidCombo.println("cd ~/Desktop");  // type something and press enter
    delay(500);
    TrinketHidCombo.println("git clone https://github.com/thwaitesja/photocode.git");  // type something and press enter
    //TrinketHidCombo.println("open https://www.youtube.com/watch?v=dQw4w9WgXcQ");  // type something and press enter

//    delay(2000);
//    TrinketHidCombo.pressKey(KEYCODE_MOD_LEFT_CONTROL, KEYCODE_D);
//    delay(100);
//    TrinketHidCombo.pressKey(0, 0); 
//    delay(100);
//    TrinketHidCombo.pressKey(0, KEYCODE_ENTER);  
//    delay(100);
//    TrinketHidCombo.pressKey(0, 0); 
//  
//
//
//
//  
//
for(;;){
//  TrinketHidCombo.mouseMove('a','a',0);
  delay(10);
}
}
