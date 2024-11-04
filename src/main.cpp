#include <SPI.h>
#include <Wire.h>
#include "config/config.h"
#include "display/lcd.h"
#include "i2c/i2c.h"


I2C *i2C;
Lcd *lcd;

void setup() {
    Serial.begin(BOUD_RATE);
    i2C = I2C::getInstance();
    lcd = Lcd::getInstance();


}

void loop() {

    delay(5000);
}

