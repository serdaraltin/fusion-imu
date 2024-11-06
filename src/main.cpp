#include <SPI.h>
#include <Wire.h>
#include "config/config.h"
#include "display/lcd.h"
#include "com/i2c.h"
#include "logger/serial_logger.h"
#include "sensor/imu.h"

void setup() {
    Serial.begin(BOUD_RATE);
    SerialLog.Info("Serial Bound Rate=%d", BOUD_RATE);
    while (!Serial){
        delay(10);
    }
    SerialLog.Info("Serial initialized.");
    I2CI;
    LcdI;
    IMUI;
}

void loop() {

    delay(5000);
}

