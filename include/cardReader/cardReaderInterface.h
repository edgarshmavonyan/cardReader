#include <string>
#pragma once

class CardReaderInterface {
public:
    virtual std::string readInfo() = 0;
};