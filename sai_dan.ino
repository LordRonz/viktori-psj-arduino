#include <DHT_U.h>
#include <DHT.h>
#include "write_serial.h"

DHT dht(2, DHT11);

int MQValue;
int suhu, lembab;

void setup() {
  // initialize the serial port
  Serial.begin(9600);
  dht.begin();
  randomSeed(analogRead(0));
}

void loop() {
  // MQValue = analogRead(0); // read analog input pin 0
  // suhu = dht.readTemperature();
  // lembab = dht.readHumidity();

  // Serial.print(MQValue); // prints the value read
  // Serial.print(" ");
  // Serial.print(suhu);
  // Serial.print(" ");
  // Serial.println(lembab);
  // delay(1000);
  write_serial();
}
