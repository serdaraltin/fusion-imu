//
// Created by Serdar on 6.11.2024.
//

#ifndef FUSION_SENS_CONVERT_H
#define FUSION_SENS_CONVERT_H

#include <string>

#define ConvertI Convert::getInstance()

class Convert {
private:
    static Convert *instance;
public:
    Convert();
    ~Convert() = default;

    static Convert *getInstance();
    static std::string int2Hex(int address);
    static int hex2Int(uint8_t address);
    static std::string hex2String(uint8_t address);
};


#endif //FUSION_SENS_CONVERT_H
