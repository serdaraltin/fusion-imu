//
// Created by Serdar on 5.11.2024.
//

#ifndef FUSION_SENS_LOGGER_H
#define FUSION_SENS_LOGGER_H

#include <string>

class Logger{
private:
public:
    enum Level{
        None = 0,
        Error = 1,
        Warning = 2,
        Info = 3,
        Debug = 4,
    };

    Logger();

    explicit Logger(Level level);

    virtual ~Logger() = default;

    void setLevel(Level level);

    static Level getDefaultLevel();

    static std::string getLevelString(Level level);

    [[nodiscard]] Level getLevel() const;

    static std::string logSchema(Level level, const std::string &message);

    virtual void log(Level level, const std::string &message) = 0;

protected:
    Level level_;

};


#endif //FUSION_SENS_LOGGER_H
