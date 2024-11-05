//
// Created by Serdar on 5.11.2024.
//

#ifndef FUSION_SENS_SERIAL_LOGGER_H
#define FUSION_SENS_SERIAL_LOGGER_H

#include "logger.h"

class SerialLogger : public Logger{
private:
    static SerialLogger *instance;
    SerialLogger();
public:
    SerialLogger(const SerialLogger &) = delete;

    SerialLogger &operator=(const SerialLogger &) = delete;

    static SerialLogger *getInstance();

    void log(Level level, const std::string &message) override;

};


#endif //FUSION_SENS_SERIAL_LOGGER_H
