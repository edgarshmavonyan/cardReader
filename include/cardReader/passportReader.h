#include "cardReaderInterface.h"
#pragma once

class PassportReader: public CardReaderInterface {
public:
    std::string readInfo() const override;
    std::string getAge() const;
};