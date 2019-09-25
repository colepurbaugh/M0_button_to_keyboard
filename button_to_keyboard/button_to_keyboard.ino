#include "Keyboard.h"

//physical button tied to 3.3v
const int buttonPin = 1;
const int ledPin = 13;

int toggle = 1;         //one press of button is one letter, does not repeat
int buttonState = 0;    //whether the button is pressed or not

void setup() {
  pinMode(buttonPin, INPUT_PULLDOWN);
  pinMode(ledPin, OUTPUT);
  Keyboard.begin();
}

/*
 * Press the button, get a typed letter
 * LED turns on when the button is pressed
 */
void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState && toggle){
    Keyboard.print("f");
    digitalWrite(ledPin, HIGH);
    toggle = 0;
    delay(100);
  } else if (!buttonState && !toggle) {
    digitalWrite(ledPin, LOW);
    toggle = 1;
    delay(100);
  }
}
