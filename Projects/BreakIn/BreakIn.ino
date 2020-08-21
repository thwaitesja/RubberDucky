#include <TrinketHidCombo.h>
#define DELAY 500

int dataPin = 0;   
int clockPin = 1;  // digispark pins to cd4021 pins
int latchPin = 2;  

void setup() {

//define pins used to connect to the CD4021 Shift Register
  pinMode(dataPin, INPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT); 

TrinketHidCombo.begin();
}

void loop() {
  delay(10000);
    for(int a=0 ; a<10; a++){
        TrinketHidCombo.pressKey(0, 30+a); 
        delay(DELAY);
        for(int b=0 ; b<10; b++){
            TrinketHidCombo.pressKey(0, 30+b); 
            delay(DELAY);
            for(int c=0 ; c<10; c++){
                TrinketHidCombo.pressKey(0, 30+c); 
                delay(DELAY);
                for(int d=0 ; d<10; d++){
                    TrinketHidCombo.pressKey(0, 30+d); 
                    delay(DELAY);
                    TrinketHidCombo.pressKey(0, KEYCODE_BACKSPACE);
                }
            delay(DELAY);
            TrinketHidCombo.pressKey(0, 0);
            delay(DELAY);
            TrinketHidCombo.pressKey(0, KEYCODE_BACKSPACE);
            }
        delay(DELAY);
        TrinketHidCombo.pressKey(0, 0);
        delay(DELAY);
        TrinketHidCombo.pressKey(0, KEYCODE_BACKSPACE);
        }
    delay(DELAY);
    TrinketHidCombo.pressKey(0, 0);
    delay(DELAY);
    TrinketHidCombo.pressKey(0, KEYCODE_BACKSPACE);
    }
    delay(DELAY);
    
    TrinketHidCombo.pressKey(0, KEYCODE_ENTER);  
}
