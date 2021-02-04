#define FASTLED_INTERNAL

#include <M5Atom.h>

// LED色
const int RED = 0x00ff00;

void setup() {
  M5.begin(true, false, true);
  delay(200);

  M5.dis.drawpix(0, RED);
  delay(1000);

  for (int i = 0; i <= 100; i++)
  {
    M5.dis.setBrightness(i);
    Serial.println(i);
    delay(200);
  }
  for (int i = 100; i >= 0; i--)
  {
    M5.dis.setBrightness(i);
    Serial.println(i);
    delay(200);
  }
}

void loop() {}