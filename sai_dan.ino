#include <DHT_U.h>
#include <DHT.h>
#include "write_serial.h"

#define DHT_PIN 2
#define MQ_PIN 0

DHT dht(DHT_PIN, DHT11);

int MQValue;
int suhu, lembab;

void setup() {
  // initialize the serial port
  Serial.begin(9600);
  dht.begin();
  randomSeed(analogRead(0));
}

void loop() {
  char s[100] = {0};
  MQValue = analogRead(MQ_PIN); // read analog input pin 0
  suhu = dht.readTemperature();
  lembab = dht.readHumidity();

  sprintf(s, "%d %d %d", MQValue, suhu, lembab);
  Serial.println(s);
  delay(1000);
}
