#include <Keypad.h>

int tune;
const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {{'F', 'E', 'D', 'C'}, {'B', '3', '6', '9'},
  {'A', '2', '5', '8'}, {'0', '1', '4', '7'}};

byte rowPins[ROWS] = {5, 4, 3, 2};
// 連到 Keypad 的 4 個 Rows
byte colPins[COLS] = {10, 9, 8, 7};
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);
#define pin 11
void setup() {
  pinMode(11, OUTPUT);
}

void loop() {
  char key = keypad.getKey();
  if (key != NO_KEY) {
    if (key == '1')
      tune = 262;
    else if (key == '2')
      tune = 277;
    else if (key == '3')
      tune = 330;
    else if (key == '4')
      tune = 349;
    else if (key == '5')
      tune = 392;
    else if (key == '6')
      tune = 415;
    else if (key == '7')
      tune = 440;
    else if (key == '8')
      tune = 466;
    else
      tune = 0;
    tone(11, tune);
    delay(500);
    noTone(11);
  }
}
