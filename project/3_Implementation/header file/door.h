#ifndef OUT_H
#define OUT_H
#include <arduino.h>

void setupoutput( int byte pin1,byte pin2);
void runforward(byte pin1,byte pin2);
void runbackward(byte pin1,byte pin2);
void stop(byte pin1,byte pin2);

#endif
