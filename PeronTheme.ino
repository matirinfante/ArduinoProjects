#include "notas.h"
const int buzzerPin = 40;
void setup() {
  //marchaPeronista();
  //despacitoTheme();
}

void loop() {
  marchaPeronista();
}

void marchaPeronista(){
  beep(NOTE_C4,500);
  delay(15);
  beep(NOTE_GS3, 210);
  beep(NOTE_F3, 220);
  beep(NOTE_C4,500);
  delay(15);
  beep(NOTE_GS3, 210);
  beep(NOTE_F3, 220);
  
  beep(NOTE_C4,1000);
  beep(NOTE_GS3, 500);
  
  delay(40);
  
  beep(NOTE_C4,500);
  delay(15);
  beep(NOTE_GS3, 210);
  beep(NOTE_F3, 220);
  beep(NOTE_C4,500);
  delay(15);
  beep(NOTE_GS3, 210);
  beep(NOTE_F3, 220);

  beep(NOTE_AS3, 1000);
  beep(NOTE_G3, 500);

  delay(40);

  beep(NOTE_AS3,500);
  delay(15);
  beep(NOTE_G3, 220);
  beep(NOTE_E3, 220);
  beep(NOTE_AS3,500);
  delay(15);
  beep(NOTE_G3, 220);
  beep(NOTE_E3, 220);
  
  beep(NOTE_AS3,1000);
  beep(NOTE_G3, 500);

  delay(40);
  
  //HARDCORE PART
  beep(NOTE_CS4,400);
  delay(15);
  beep(NOTE_CS4,220);
  beep(NOTE_CS4,220);
  beep(NOTE_CS4,420);
  // VIVA PERON INTENSIFIES
  beep(NOTE_C4, 220); //5
  beep(NOTE_AS3,220); //3
  beep(NOTE_C4, 220); //5
  beep(NOTE_CS4,220); //6
  beep(NOTE_C4, 220);
  beep(NOTE_AS3,220);
  beep(NOTE_C4, 220);
  beep(NOTE_CS4,220);
  beep(NOTE_C4,220);
  beep(NOTE_AS3,300);
  delay(2000);
}
 
void beep(int note, int duration)
{
  //Play tone on buzzerPin with determinate duration. Pause calculated for a better tone 
  tone(buzzerPin, note, duration);
  int pause = duration * 1.30;
  delay(pause);
  noTone(buzzerPin);
}
