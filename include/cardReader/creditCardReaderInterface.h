#include "cardReaderInterface.h"
#pragma once

class CreditCardReaderInterface: public CardReaderInterface {
protected:
    // delete it in release!!!
    static const double TEST_BALANCE_CONSTANT_OK = 42.42;
public:
    virtual std::string readInfo() override = 0;
    virtual double getBalance() = 0;
};