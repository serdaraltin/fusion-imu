//
// Created by Serdar on 5.11.2024.
//
#include "logger.h"
#include "config/config.h"
#include <sstream>

Logger::Logger() {
    level_ = getDefaultLevel();
}

Logger::Logger(Logger::Level level) : level_(level) {
    level_ = level;
}

void Logger::setLevel(Logger::Level level) {
    this->level_ = level;
}

Logger::Level Logger::getDefaultLevel() {
    return Logger::Info;
}

Logger::Level Logger::getLevel() const {
    return level_;
}

std::string Logger::getLevelString(Logger::Level level) {
    switch (level) {
        case Level::None: return "None";
        case Level::Error: return "Error";
        case Level::Warning: return "Warning";
        case Level::Info: return "Info";
        case Level::Debug: return "Debug";
        default: return "None";
    }
}

std::string Logger::logSchema(Logger::Level level, const std::string &message) {
    std::stringstream output;
    output << "[" << APP_NAME << "] [" << level << "] " << message;
    return output.str();
}
