#include <SPI.h>
#include <Wire.h>

#include "config/config.h"
#include "logger/serial_logger.h"

#include "device/device_manager.h"
#include "device/display/lcd.h"
#include "device/sensor/imu.h"

#include "comms/i2c.h"
#include "helper/hex.h"
#include <ArduinoJson.h>

void initialize(){
    Serial.begin(BOUD_RATE);
    Hex::getInstance();
    SerialLogger::getInstance();
    DeviceManager::getInstance();
    I2C::getInstance();
    Lcd::getInstance();
    IMU::getInstance();
}

void test(){
    Serial.begin(BOUD_RATE);
    JsonDocument jsonDocument;

    jsonDocument["sensor"] = "gps";
    jsonDocument["time"] = 1234;

    JsonArray data = jsonDocument["data"].to<JsonArray>();
    data.add(50.0000);
    data.add(34.444);

    serializeJsonPretty(jsonDocument, Serial);

    Serial.println();

    //serializeJsonPretty(jsonDocument, Serial);
}
void setup() {
    //initialize();
    test();

}

void loop() {

    delay(5000);
}

