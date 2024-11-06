#include <SPI.h>
#include <Wire.h>
#include "config/config.h"
#include "display/lcd.h"
#include "com/i2c.h"
#include "logger/serial_logger.h"
#include "sensor/imu.h"


void setup() {
    Serial.begin(BOUD_RATE);
    while (!Serial){
        delay(10);
    }
    SerialLog.Info("Setup");
    I2CI->scan();
    LcdI;
    IMUI;
}

void loop() {

    delay(5000);
}

