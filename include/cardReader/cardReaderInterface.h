#include <string>
#pragma once

class CardReaderInterface {
private:
    // here we should be provided connection to reading device
public:
    virtual std::string readInfo() const = 0;
};