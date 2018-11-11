/*
  CoMotion MakerSpace 2018
  Edited by: Ramon Qu
  Arduino 101 Basic Workshop
  12 - Melody
  Plays a melody
  circuit:
   8-ohm speaker on digital pin 8
  This example code is in the public domain.
  http://www.arduino.cc/en/Tutorial/Tone
*/
#include "pitches.h"
int writeValue;
int readValue;
// notes in the melody:

const int buttonOnePin = 2;     // the number of the pushbutton pin
const int buttonTwoPin = 3;     // the number of the pushbutton pin
const int buttonThreePin = 4;
const int buttonFourPin = 5;

int notes[2][3] = {{NOTE_GS5, NOTE_AS5, NOTE_B5},
{NOTE_GS7, NOTE_AS7, NOTE_B7}};
void setup() {
  // initialize the pushbutton pin as an input:
  pinMode(buttonOnePin, INPUT);
  pinMode(buttonTwoPin, INPUT);
  pinMode(buttonThreePin, INPUT);
  pinMode(buttonFourPin, INPUT);
  Serial.begin(9600);      // turn on Serial Port
}

void loop() {
  // read the state of the pushbutton value:
  int buttonOneState = digitalRead(buttonOnePin);
  int buttonTwoState = digitalRead(buttonTwoPin);
  int buttonThreeState = digitalRead(buttonThreePin);
  int buttonFourState = digitalRead(buttonFourPin);
  int noteIndex = 0;
  if (buttonOneState == HIGH) {
    noteIndex = 1;
  }
  if (buttonTwoState == HIGH) {
    tone(8, notes[noteIndex][0], 50);
    delay(60);
  }
  if (buttonThreeState == HIGH) {
    tone(8, notes[noteIndex][1], 50);
    delay(60);
  }
  if (buttonFourState == HIGH) {
    tone(8, notes[noteIndex][2], 50);
    delay(60);
  }
}

/*
  Try to create your own song.
*/
