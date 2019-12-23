#include "notas.h"
const int buzzerPin = 11;
const int irPin =  8;
boolean state;
void setup() {
  Serial.begin(9600);
  pinMode(irPin,INPUT);
  state = false;
}

void loop() {
  state = digitalRead(irPin);
  Serial.println("Sensor en: "+state);
  if(state == HIGH){
    beep(NOTE_C6,2000);  
  }
}
 
void beep(int note, int duration)
{
  //Play tone on buzzerPin with determinate duration. Pause calculated for a better tone 
  tone(buzzerPin, note, duration);
  int pause = duration * 1.30;
  delay(pause);
  noTone(buzzerPin);
}
