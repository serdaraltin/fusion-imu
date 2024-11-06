//
// Created by Serdar on 5.11.2024.
//

#ifndef FUSION_SENS_LOGGER_H
#define FUSION_SENS_LOGGER_H

#include <string>
#include <optional>

class Logger{
private:
    static Logger *instance;
public:
    enum Level{
        None = 0,
        Error = 1,
        Warning = 2,
        Info = 3,
        Debug = 4,
    };

    Logger();

    virtual ~Logger() = default;

    static Logger *getInstance();

    void setLevel(Level level);

    static Level getDefaultLevel();

    static std::string getLevelString(Level level);

    [[nodiscard]] Level getLevel() const;

    virtual std::optional<std::string> log2String(Level level, const std::string &message);

    class LogLevel{
    private:
        Logger *logger_;

    public:
        explicit LogLevel(Logger *logger) : logger_(logger) {}

        static std::string argsFormat(const char *message, va_list args);

        void None(const char *message, ...);
        void Error(const char *message, ...);
        void Info(const char *message, ...);
        void Warning(const char *message, ...);
        void Debug(const char *message, ...);
    };

    LogLevel Log = LogLevel(this);

protected:
    Level level_;
};


#endif //FUSION_SENS_LOGGER_H
