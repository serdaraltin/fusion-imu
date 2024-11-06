#include <SPI.h>
#include <Wire.h>
#include "config/config.h"
#include "display/lcd.h"
#include "com/i2c.h"
#include "logger/serial_logger.h"
#include "sensor/imu.h"
#include "device/device_manager.h"



void initialze(){
    Serial.begin(BOUD_RATE);
    SerialLog.Info("Serial Bound Rate=%d", BOUD_RATE);
    while (!Serial){
        delay(10);
    }
    SerialLog.Info("Serial initialized.");
    I2CI->scan();
    LcdI;
    IMUI;
    DeviceManagerI;
}

void setup() {
    initialze();
}

void loop() {

    delay(5000);
}

