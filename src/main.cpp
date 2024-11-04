#include <SPI.h>
#include <Wire.h>
#include "display/lcd.h"
#include "i2c/i2c.h"


//Lcd lcd = *new Lcd();
I2C i2C = *new I2C();

void setup() {
    Serial.begin(115200);
}

void loop() {
    i2C.scan();
    delay(5000);
}
