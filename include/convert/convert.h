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
    Convert() = default;
    ~Convert() = default;

    static Convert *getInstance();
    static std::string int2Hex(int _address);
    static int hex2Int(uint8_t _address);
};


#endif //FUSION_SENS_CONVERT_H
