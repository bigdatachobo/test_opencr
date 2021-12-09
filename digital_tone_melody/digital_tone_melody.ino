#include "pitches.h"
void note(const int& arg)
{
  tone(BDPIN_BUZZER, arg, 500);
  delay(200);
  noTone(BDPIN_BUZZER);
}

void setup() {
  // put your setup code here, to run once:
  // 첫 페이지
  // 첫번째 줄 시작
  tone(BDPIN_BUZZER, NOTE_E5, 200); // 미 
  delay(200);
  noTone(BDPIN_BUZZER);
  tone(BDPIN_BUZZER, NOTE_DS5, 200); // 레#
  delay(200);
  noTone(BDPIN_BUZZER);
  
  tone(BDPIN_BUZZER, NOTE_E5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);
  tone(BDPIN_BUZZER, NOTE_DS5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_E5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);
  
  tone(BDPIN_BUZZER, NOTE_B4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_D4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);
  
  tone(BDPIN_BUZZER, NOTE_C5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);
  
  tone(BDPIN_BUZZER, NOTE_A4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  // 두번째 줄 시작 
  tone(BDPIN_BUZZER, NOTE_C4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_E4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_A4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_B4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_E4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_GS4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_A4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_C5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  // 세번째 줄 시작
  tone(BDPIN_BUZZER, NOTE_E4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);
  
  tone(BDPIN_BUZZER, NOTE_E5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_DS5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_E5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_DS5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_E5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_B4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_D5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_C5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_A4, 500);
  delay(400);
  noTone(BDPIN_BUZZER);

  // 네번째줄
  tone(BDPIN_BUZZER, NOTE_C4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);
  tone(BDPIN_BUZZER, NOTE_E4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);
  tone(BDPIN_BUZZER, NOTE_A4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_B4, 500);
  delay(300);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_E4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);
  tone(BDPIN_BUZZER, NOTE_C5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);
  tone(BDPIN_BUZZER, NOTE_B4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_A4, 500);
  delay(500);
  noTone(BDPIN_BUZZER);

  // 두번째 페이지
  // 첫번째 줄
  note(NOTE_B4);
  note(NOTE_C5);
  note(NOTE_D5);

  note(NOTE_E5);

  note(NOTE_G4);
  note(NOTE_F5);
  note(NOTE_E5);

  note(NOTE_D5);

  // 두번째 줄
  note(NOTE_F4);
  note(NOTE_E5);
  note(NOTE_D5);

  note(NOTE_C5);

  note(NOTE_E4);
  note(NOTE_D5);
  note(NOTE_C5);

  note(NOTE_B4);

  // 세번째 줄
  note(NOTE_E3);
  note(NOTE_E4);
  note(NOTE_E4);

  note(NOTE_E5);
  note(NOTE_E4);
  note(NOTE_E5);

  note(NOTE_E5);
  note(NOTE_E6);

  note(NOTE_DS5);
  note(NOTE_E5);
  note(NOTE_DS5);

  note(NOTE_E5);
  note(NOTE_DS5);
  note(NOTE_E5);

  // 네번째 줄
  note(NOTE_DS5);
  note(NOTE_E5);
  note(NOTE_D5);

  note(NOTE_E5);
  note(NOTE_DS5);
  note(NOTE_E5);

  note(NOTE_B4);
  note(NOTE_D5);
  note(NOTE_C5);

  note(NOTE_A4);

  note(NOTE_C4);
  note(NOTE_E4);
  note(NOTE_A4);

  note(NOTE_B4);

  note(NOTE_E4);
  note(NOTE_GS4);
  note(NOTE_B4);

  note(NOTE_C5);
}


void loop() {
  // put your main code here, to run repeatedly:
  
  
}
