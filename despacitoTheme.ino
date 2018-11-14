#include "notas.h"
// Despacito by Fonsi y el daddy waiting for v65
// Computer science student github.com/matirinfante
const int buzzerPin = 40;
void setup() {
  despacito();
}

void loop() {
}

void despacito(){

  verso();
  delay(1500);
  verso();
  delay(1000);
  versoFin();
  delay(1000);
  //Variacion loca v656876
  beep(NOTE_B6,120); //E7
  beep(NOTE_B6,120); //E7
  versoFin();
  // HERE THE BUZZER BURNS x2
  delay(500);
  besto();
  besto();
}
void verso(){
  beep(NOTE_B6,400); //E7
  beep(NOTE_FS5,200); //B7
  beep(NOTE_B6,200); //E7
  beep(NOTE_CS7,200); //E9
  beep(NOTE_D7,200); //E10
  beep(NOTE_E7,200); //E12
  beep(NOTE_D7,200); //E10
  beep(NOTE_CS7,200); //E9
  beep(NOTE_B6,200); //E7
  beep(NOTE_A5,200); //B10
  beep(NOTE_G5,300); //B8
  delay(40);
  beep(NOTE_D7,400); //E10
  beep(NOTE_D7,400); //E10
  delay(1000);
  beep(NOTE_D7,220); //E10
  beep(NOTE_A5,220); //B10
  beep(NOTE_D7,220); //E10
  beep(NOTE_A5,220); //B10
  beep(NOTE_D7,220); //E10
  beep(NOTE_A5,220); //B10
  beep(NOTE_D7,380); //E10
  beep(NOTE_E7,250); //E12
  beep(NOTE_CS7,300); //E9
  
  //beep(NOTE_B6,200); //E7
  //beep(NOTE_B6,200); //E7
}

void versoFin(){
  beep(NOTE_B6,300); //E7
  beep(NOTE_B6,120); //E7
  beep(NOTE_B6,120); //E7
  beep(NOTE_B6,120); //E7
  beep(NOTE_CS7,120); //E9
  beep(NOTE_D7,120); //E10
  beep(NOTE_D7,120); //E10
  beep(NOTE_D7,120); //E10
  beep(NOTE_D7,120); //E10
  beep(NOTE_D7,275); //E10
  beep(NOTE_CS7,175); //E9
  beep(NOTE_B6,300); //E7
  delay(40);
  beep(NOTE_B6,120); //E7
  beep(NOTE_B6,120); //E7
  beep(NOTE_B6,120); //E7
  beep(NOTE_CS7,120); //E9
  beep(NOTE_D7,120); //E10
  beep(NOTE_D7,120); //E10
  beep(NOTE_D7,120); //E10
  beep(NOTE_D7,120); //E10
  beep(NOTE_D7,275); //E10
  beep(NOTE_E7,175); //E12
  beep(NOTE_A5,300); //B10
  delay(40);
  beep(NOTE_A5,120); //B10
  beep(NOTE_A5,120); //B10
  beep(NOTE_A5,120); //B10
  beep(NOTE_A5,120); //B10
  beep(NOTE_D7,120); //E10
  beep(NOTE_D7,120); //E10
  beep(NOTE_D7,120); //E10
  beep(NOTE_D7,120); //E10
  beep(NOTE_D7,120); //E10
  beep(NOTE_E7,275); //E12
  beep(NOTE_E7,275); //E12
  beep(NOTE_CS7,300); //E9
  
}

void besto(){
  beep(NOTE_D7,250); //E10
  delay(500);
  beep(NOTE_CS7,250); //E9
  delay(500);
  beep(NOTE_B6,250); //E7
  beep(NOTE_FS5,250); //B7
  beep(NOTE_FS5,120); //B7
  beep(NOTE_FS5,120); //B7
  beep(NOTE_FS5,120); //B7
  beep(NOTE_FS5,120); //B7
  beep(NOTE_B6,120); //E7
  beep(NOTE_B6,120); //E7
  beep(NOTE_B6,120); //E7
  beep(NOTE_B6,120); //E7
  beep(NOTE_B6,120); //E7
  beep(NOTE_A5,200); //B10
  beep(NOTE_B5,300); //B12
  beep(NOTE_G5,275); //B8
  delay(40);
  beep(NOTE_G5,120); //B8
  beep(NOTE_G5,120); //B8
  beep(NOTE_G5,120); //B8
  beep(NOTE_G5,120); //B8
  beep(NOTE_B6,120); //E7
  beep(NOTE_B6,120); //E7
  beep(NOTE_B6,120); //E7
  beep(NOTE_B6,120); //E7
  beep(NOTE_B6,200); //E7
  beep(NOTE_CS7,300); //E9
  beep(NOTE_D7,300); //E10
  delay(40);
  beep(NOTE_A5,120); //B10
  beep(NOTE_A5,120); //B10
  beep(NOTE_A5,120); //B10
  beep(NOTE_A5,120); //B10
  beep(NOTE_A5,120); //B10
  beep(NOTE_D7,120); //E10
  beep(NOTE_D7,120); //E10
  beep(NOTE_D7,120); //E10
  beep(NOTE_D7,120); //E10
  beep(NOTE_E7,200); //E12
  beep(NOTE_E7,300); //E12
  beep(NOTE_CS7,500); //E9
}


void beep(int note, int duration)
{
  //Play tone on buzzerPin with determinate duration. Pause calculated for a better tone 
  tone(buzzerPin, note, duration);
  int pause = duration * 1.30;
  delay(pause);
  noTone(buzzerPin);
}
