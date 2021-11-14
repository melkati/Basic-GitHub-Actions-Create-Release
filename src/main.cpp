#include "Arduino.h"
#include "Version.h"

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println("Hello word!");
  Serial.print("This is version: ");
  Serial.println(VERSION);
  Serial.flush();
}

void loop() {
    delay(1000);
}