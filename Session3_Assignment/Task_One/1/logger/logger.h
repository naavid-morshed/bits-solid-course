#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <mutex>
#include <vector>

class Logger {
    static std::vector<std::string> log;
    static Logger *logger;
    static std::mutex loggerLocker;

    Logger() {
    }

    Logger(const Logger &) = delete; // Prevent copy constructor
    Logger &operator=(const Logger &) = delete; // Prevent copy assignment

public:
    static Logger *getInstance() {
        std::lock_guard<std::mutex> lock(loggerLocker);
        if (logger == nullptr) {
            logger = new Logger();
        }
        return logger;
    }

    void addLog(const std::string &val) {
        std::lock_guard<std::mutex> lock(loggerLocker);
        log.push_back(val);
    }

    void printLogs() {
        std::lock_guard<std::mutex> lock(loggerLocker);
        for (const auto &entry: log) {
            std::cout << entry << std::endl;
        }
    }
};

std::vector<std::string> Logger::log;
Logger *Logger::logger = nullptr;
std::mutex Logger::loggerLocker;
#endif
