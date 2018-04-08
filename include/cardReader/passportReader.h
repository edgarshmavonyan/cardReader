#include "cardReaderInterface.h"
#pragma once

class PassportReader: public CardReaderInterface {
public:
    std::string readInfo() override;
};