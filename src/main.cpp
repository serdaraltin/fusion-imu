#include <SPI.h>
#include <Wire.h>
#include "config/config.h"
#include "display/lcd.h"
#include "com/i2c.h"
#include "logger/serial_logger.h"
#include "sensor/imu.h"
#include "device/device_manager.h"

void initialize(){
    Serial.begin(BOUD_RATE);
    SerialLogger::getInstance();
    DeviceManager::getInstance();
    I2C::getInstance();
    Lcd::getInstance();
    IMU::getInstance();
}

void setup() {
    initialize();
    I2CI->scan();
    for(Device device : DeviceManagerI->getDeviceList()){
        SerialLog.Info(device);
    }
}

void loop() {

    delay(5000);
}

