#include <SPI.h>
#include <Wire.h>
#include "config/config.h"
#include "display/lcd.h"
#include "transmission//i2c.h"
#include "logger/serial_logger.h"
#include "sensor/imu.h"
#include "device/device_manager.h"
#include "conversion/convert.h"

void initialize(){
    Serial.begin(BOUD_RATE);
    Convert::getInstance();
    SerialLogger::getInstance();
    DeviceManager::getInstance();
    I2C::getInstance();
    Lcd::getInstance();
    IMU::getInstance();
}

void setup() {
    initialize();
    for(const Device& device : DeviceManagerI->getDeviceList()){
        SerialLog.Info(device);
    }
}

void loop() {

    delay(5000);
}

