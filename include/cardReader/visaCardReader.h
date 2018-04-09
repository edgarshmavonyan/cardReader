#include "creditCardReaderInterface.h"
//#include <gtest/gtest.h>
#pragma once

class VisaCardReader: public CreditCardReaderInterface {
protected:
    std::string _logInfo() const override;
//    FRIEND_TEST(VisaCardReader__Test, _logInfo);
public:
    VisaCardReader() = default;
    std::string readInfo() const override;
    double getBalance() const override;
};