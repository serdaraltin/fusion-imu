//
// Created by Serdar on 5.11.2024.
//

#include "serial_logger.h"
#include "config/config.h"
#include <SPI.h>
#include <string>

SerialLogger *SerialLogger::instance = nullptr;

SerialLogger *SerialLogger::getInstance() {
    if(instance == nullptr)
        instance = new SerialLogger();
    return instance;
}

SerialLogger::SerialLogger() {
    setLevel(LOG_LEVEL);
}

std::optional<std::string> SerialLogger::log2String(Logger::Level level, const std::string &message) {
    std::string output = Logger::log2String(level, message).value();
    Serial.println(output.c_str());
    return output;
}