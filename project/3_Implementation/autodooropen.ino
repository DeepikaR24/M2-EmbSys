#include "out.h"
#define mpin1 8
#define mpin2 9 
const int pirPin = 3; 
int pirState = 0;    

void setup() {
  setupoutput(mpin1,mpin2);
    pinMode(pirPin, INPUT);

}

void loop() {

  pirState = digitalRead(pirPin);

  if (pirState == HIGH) 
  {
    runforward(mpin1,mpin2);
    delay(2000);
    stop(mpin1,mpin2);
    delay(4000);
    runbackward(mpin1,mpin2);
    delay(2000);
    stop(mpin1,mpin2);
   
  }
    
  
}
