#include <string>
#pragma once

///Main interface for all card readers
class CardReaderInterface {
private:
    // here we should be provided connection to reading device
public:
    ///Main method for reading information from card
    virtual std::string readInfo() const = 0;
};