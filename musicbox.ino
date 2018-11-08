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

const int buttonPin = 2;     // the number of the pushbutton pin
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
    // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
    Serial.begin(9600);      // turn on Serial Port
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    
     tone(8, random(20, 4970), 200);
     delay(200);
  } else {
    // turn LED off:
  }
}

/*
Try to create your own song.
*/
