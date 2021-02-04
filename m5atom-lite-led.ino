#define FASTLED_INTERNAL

#include <M5Atom.h>

void setup() {
  M5.begin(true, false, true);
  
  M5.dis.drawpix(0, 0xff0000);
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