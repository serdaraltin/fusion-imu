#include "config/config.h"
#include "logger/serial_logger.h"
#include "device/device_manager.h"
#include "device/display/lcd.h"
#include "device/sensor/imu.h"
#include "comms/i2c.h"
#include "helper/hex.h"

extern "C"{
    #include <string>
    #include "freertos/FreeRTOS.h"
    #include "freertos/task.h"
    #include "esp_log.h"
}

static const char *TAG = "main";

void initialize(){
#ifdef FRAMEWORK_ARDUINO
    //Serial.begin(BOUD_RATE);
#endif
    Hex::getInstance();
    SerialLogger::getInstance();
    DeviceManager::getInstance();
    I2C::getInstance();
    Lcd::getInstance();
    IMU::getInstance();
}

void test(){
    ESP_LOGI(TAG, "I2C scan initializing...");
    I2CI->scan();
}

#ifndef  UNIT_TEST
#ifdef FRAMEWORK_ARDUINO
void setup() {
    //initialize();
}

void loop() {
    delay(5000);
}
#endif
#endif

void app_main(){
    initialize();

    while (true){
        test();
        vTaskDelay(pdMS_TO_TICKS(5000));
    }

}