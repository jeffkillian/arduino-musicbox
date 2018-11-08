/*
CoMotion MakerSpace 2018
Edited by: Ramon Qu
Arduino 101 Basic Workshop
  12 - Melody
 Plays a melody
 circuit:
 * 8-ohm speaker on digital pin 8
 This example code is in the public domain.
 http://www.arduino.cc/en/Tutorial/Tone
 */
#include "pitches.h"
int writeValue;
int readValue;
// notes in the melody:

const int buttonOnePin = 2;     // the number of the pushbutton pin
const int buttonTwoPin = 3;     // the number of the pushbutton pin

void setup() {
    // initialize the pushbutton pin as an input:
  pinMode(buttonOnePin, INPUT);
  pinMode(buttonTwoPin, INPUT);
    Serial.begin(9600);      // turn on Serial Port
}

void loop() {
  // read the state of the pushbutton value:
  int buttonOneState = digitalRead(buttonOnePin);
   int buttonTwoState = digitalRead(buttonTwoPin);
  Serial.println(buttonTwoState);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonOneState == HIGH) {
     tone(8, 300, 50);
     delay(200);
  }
    if (buttonTwoState == HIGH) {
     tone(8, 3000, 50);
     delay(200);
  }
}

/*
Try to create your own song.
*/
