#include "Keyboard.h"

const int buttonPin = 2;
const int triggerPin = 3;
int buttonState = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLDOWN);
  pinMode(triggerPin, OUTPUT);
  Keyboard.begin();
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState){
    Keyboard.print("j");
    digitalWrite(triggerPin, HIGH);
  } else {
    digitalWrite(triggerPin, LOW);
  }
}
