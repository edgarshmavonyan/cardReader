#include "creditCardReaderInterface.h"
#include <gtest/gtest.h>
#include <iostream>
#include <fstream>
#pragma once

class CreditCardLoggerProxy: public CreditCardReaderInterface {
protected:
    std::shared_ptr<CreditCardReaderInterface> _cardReader;
    mutable std::ofstream* _out;

    std::string _logInfo() const override;

    void _logToStream(const std::string& logInfo) const;

    FRIEND_TEST(CreditCardLoggerProxy, _logInfo);
    FRIEND_TEST(CreditCardLoggerProxy, _logToStream);
public:
    CreditCardLoggerProxy(std::shared_ptr<CreditCardReaderInterface> cardReader, std::ofstream* out = nullptr);
    CreditCardLoggerProxy(std::shared_ptr<CreditCardReaderInterface> cardReader, const std::string& fileName);
    ~CreditCardLoggerProxy();

    std::string readInfo() const override;
    double getBalance() const override;
};