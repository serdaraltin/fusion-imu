//
// Created by Serdar on 5.11.2024.
//

#include "logger.h"
#include "config/config.h"
#include <sstream>

Logger::Logger() {
    level_ = getDefaultLevel();
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

std::optional<std::string> Logger::log2String(Logger::Level level, const std::string &message) {
    std::stringstream output;
    output << "[" << APP_NAME << "] [" << getLevelString(level) << "] " << message;
    return output.str();
}

void Logger::LogLevel::None(const char *message) {
    logger_->log2String(Level::None, message);
}
void Logger::LogLevel::Error(const char *message) {
    logger_->log2String(Level::Error, message);
}

void Logger::LogLevel::Warning(const char *message) {
    logger_->log2String(Level::Warning, message);
}

void Logger::LogLevel::Debug(const char *message) {
    logger_->log2String(Level::Debug, message);
}

void Logger::LogLevel::Info(const std::string &message) {
    logger_->log2String(Level::Info, message);
}

template<typename T, typename... Args>
void Logger::LogLevel::formatMessage(std::ostringstream &oss, const std::string &formatStr, T &&arg, Args &&... args) const {
    size_t pos = formatStr.find("{}");
    if(pos != formatStr.find("{}")){
        oss << formatStr.substr(0, pos) << arg;
        formatMessage(oss, formatStr.substr(pos+2), std::forward<Args>(args)...);
    }
}
/*
template<typename... Args>
void Logger::LogLevel::Info(const std::string &message, Args &&... args) {
    std::ostringstream oss;
    formatMessage(oss, message, std::forward<Args>(args)...);
    logger_->log2String(Level::Info, oss.str());
}*/
