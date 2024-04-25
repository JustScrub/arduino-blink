/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */

#include "blink_config.h"

#if SEM_LED
  int green = 10;
  int yellow = 11;
  int red = 12;
#else
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
  int led = 13;
#endif

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  #if SEM_LED
    pinMode(green, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(red, OUTPUT);
  #else
    pinMode(led, OUTPUT);
  #endif
}

// the loop routine runs over and over again forever:
void loop() {
  #if SEM_LED
   digitalWrite(green,HIGH);
  delay(4000);
  digitalWrite(green,LOW);
   digitalWrite(yellow,HIGH);
  delay(1500);
  digitalWrite(yellow,LOW);
   digitalWrite(red,HIGH);
  delay(5000);
  digitalWrite(red,LOW);
  #else
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);               // long wait
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(2000);               // short wait
  #endif
}
