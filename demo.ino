#include <Arduino.h>

#define BUZZER 5

#define NOTE_A 220
#define NOTE_B 246.9
#define NOTE_C 261.6
#define NOTE_D 293.7
#define NOTE_E 329.6
#define NOTE_F 349.2
#define NOTE_G 392

#define BPM 120
// 60 seconds (60 * 1000 ms)
#define BEAT (60*1000 / BPM)

#define NOTE_WHOLE     (BEAT * 4)
#define NOTE_HALF      (BEAT * 2)
#define NOTE_QUARTER   (BEAT)
#define NOTE_EIGHTH    (BEAT / 2)
#define NOTE_SIXTEENTH (BEAT / 4)

void setup() {
}

void loop() {
  tone(BUZZER, NOTE_C); delay(NOTE_EIGHTH);  noTone(BUZZER); delay(NOTE_EIGHTH);
  tone(BUZZER, NOTE_D); delay(NOTE_EIGHTH);  noTone(BUZZER); delay(NOTE_EIGHTH);
  tone(BUZZER, NOTE_F); delay(NOTE_EIGHTH);  noTone(BUZZER); delay(NOTE_QUARTER);
  tone(BUZZER, NOTE_F); delay(NOTE_EIGHTH);  noTone(BUZZER); delay(NOTE_EIGHTH);
  tone(BUZZER, NOTE_F); delay(NOTE_EIGHTH);  noTone(BUZZER); delay(NOTE_EIGHTH);
  tone(BUZZER, NOTE_F); delay(NOTE_EIGHTH);  noTone(BUZZER); delay(NOTE_SIXTEENTH);
  tone(BUZZER, NOTE_F); delay(NOTE_EIGHTH);  noTone(BUZZER); delay(NOTE_SIXTEENTH);
  tone(BUZZER, NOTE_F); delay(NOTE_EIGHTH);  noTone(BUZZER); delay(NOTE_SIXTEENTH);
  tone(BUZZER, NOTE_F); delay(NOTE_EIGHTH);  noTone(BUZZER); delay(NOTE_EIGHTH);

  tone(BUZZER, NOTE_C); delay(NOTE_EIGHTH);  noTone(BUZZER); delay(NOTE_EIGHTH);
  tone(BUZZER, NOTE_D); delay(NOTE_EIGHTH);  noTone(BUZZER); delay(NOTE_EIGHTH);
  tone(BUZZER, NOTE_F); delay(NOTE_EIGHTH);  noTone(BUZZER); delay(NOTE_QUARTER);
  tone(BUZZER, NOTE_F); delay(NOTE_EIGHTH);  noTone(BUZZER); delay(NOTE_EIGHTH);
  tone(BUZZER, NOTE_F); delay(NOTE_EIGHTH);  noTone(BUZZER); delay(NOTE_EIGHTH);
  tone(BUZZER, NOTE_F); delay(NOTE_EIGHTH);  noTone(BUZZER); delay(NOTE_SIXTEENTH);
  tone(BUZZER, NOTE_F); delay(NOTE_EIGHTH);  noTone(BUZZER); delay(NOTE_SIXTEENTH);
  tone(BUZZER, NOTE_F); delay(NOTE_EIGHTH);  noTone(BUZZER); delay(NOTE_SIXTEENTH);
  tone(BUZZER, NOTE_F); delay(NOTE_EIGHTH);  noTone(BUZZER); delay(NOTE_EIGHTH);

  tone(BUZZER, NOTE_F); delay(NOTE_QUARTER); noTone(BUZZER); delay(NOTE_EIGHTH);
  tone(BUZZER, NOTE_F); delay(NOTE_QUARTER); noTone(BUZZER); delay(NOTE_EIGHTH);
  tone(BUZZER, NOTE_E); delay(NOTE_EIGHTH);  noTone(BUZZER); delay(NOTE_QUARTER);

  delay(1000);
}
