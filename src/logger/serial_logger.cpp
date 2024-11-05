//
// Created by Serdar on 5.11.2024.
//

#include "serial_logger.h"
#include "config/config.h"
#include <SPI.h>
#include <string>
#include <sstream>

SerialLogger *SerialLogger::instance = nullptr;

SerialLogger *SerialLogger::getInstance() {
    if(instance == nullptr)
        instance = new SerialLogger();
    return instance;
}

SerialLogger::SerialLogger() {
    setLevel(LOG_LEVEL);
    this->log(Info, "Serial Logger initialized.");
}

void SerialLogger::log(Logger::Level level, const std::string &message) {
    if(level <= getLevel()){
        Serial.println(Logger::logSchema(level, message).c_str());
    }
}
