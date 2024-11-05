#include <SPI.h>
#include <Wire.h>
#include "config/config.h"
#include "display/lcd.h"
#include "com/i2c.h"
#include "logger/serial_logger.h"

SerialLogger *serialLogger;
I2C *i2C;
Lcd *lcd ;

void setup() {
    Serial.begin(BOUD_RATE);
    serialLogger = SerialLogger::getInstance();
    serialLogger->Log.Info("denem");
    i2C = I2C::getInstance();
    lcd= Lcd::getInstance();
}

void loop() {

    delay(5000);
}

