#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_C5  523
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define WHOLE 1 //全分符
#define HALF 0.5 //半分符
#define QUARTER 0.25
#define EIGHTH 0.125
#define SIXTEENTH 0.0625
#define pin 8
#define beat 500
void setup() {
  pinMode(8, OUTPUT);
}
void xx(int a, int b, int c) {
  tone(a, b, c);
  delay(b);
  noTone(c);
}
void loop()
{
  xx(pin, NOTE_C4, beat);
  xx(pin, NOTE_D4, beat);
  xx(pin, NOTE_E4, beat);
  xx(pin, NOTE_C4, beat);
  xx(pin, NOTE_G4, beat);
  xx(pin, NOTE_A4, beat);
  xx(pin, NOTE_A4, beat);
  xx(pin, NOTE_C4, beat);
  xx(pin, NOTE_A4, beat);
  xx(pin, NOTE_G4, beat);
  xx(pin, NOTE_A4, beat);
  xx(pin, NOTE_A4, beat);
  xx(pin, NOTE_C4, beat);
  xx(pin, NOTE_G4, beat);
  xx(pin, NOTE_A4, beat);
  xx(pin, NOTE_G4, beat);
  xx(pin, NOTE_A4, beat);
  xx(pin, NOTE_G4, beat);
  xx(pin, NOTE_E4, beat);
  xx(pin, NOTE_G4, beat);
  xx(pin, NOTE_E4, beat);
  xx(pin, NOTE_C4, beat);
  xx(pin, NOTE_D4, beat);
  xx(pin, NOTE_E4, beat);
  xx(pin, NOTE_C4, beat);

}
