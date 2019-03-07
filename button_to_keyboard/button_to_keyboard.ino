#include "Keyboard.h"

const int buttonPin = 4;          // input pin for pushbutton
int previousButtonState = HIGH;   // for checking the state of a pushButton
int counter = 0;                  // button push counter

void setup() {
  pinMode(buttonPin, INPUT_PULLDOWN);
  Keyboard.begin();
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  if ((buttonState != previousButtonState) && (buttonState == HIGH)) {
    counter++;
    Keyboard.print("You pressed the button ");
    Keyboard.print(counter);
    Keyboard.println(" times.");
  }
  previousButtonState = buttonState;
}
