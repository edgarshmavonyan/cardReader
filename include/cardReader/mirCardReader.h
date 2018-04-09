#include "creditCardReaderInterface.h"
#include <gtest/gtest.h>
#pragma once

class MirCardReader : public CreditCardReaderInterface {
protected:
    std::string _logInfo() const override;
    FRIEND_TEST(MirCardReader, _logInfo);
public:
    std::string readInfo() const override;
    double getBalance() const override;
};