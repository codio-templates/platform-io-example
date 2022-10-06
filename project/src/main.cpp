#include "Arduino.h"

#ifndef LED_BUILTIN
#define LED_BUILTIN 2
#endif

void setup()
{
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);

  // wait for a second
  delay(500);

  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
	Serial.println("Hello, World!!!!");
}