#include "write_serial.h"

void setup() {
  // initialize the serial port
  Serial.begin(9600);
}

void loop() {
  write_serial();
}
