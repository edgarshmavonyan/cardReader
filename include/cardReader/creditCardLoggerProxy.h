#include "creditCardReaderInterface.h"
#include <iostream>
#include <fstream>
#pragma once

class CreditCardLoggerProxy: public CreditCardReaderInterface {
protected:
    std::shared_ptr<CreditCardReaderInterface> _cardReader;
    mutable std::ofstream* _out;

    std::string _logInfo() const override;

    void _logToStream(const std::string& logInfo) const;
public:
    CreditCardLoggerProxy(std::shared_ptr<CreditCardReaderInterface> cardReader, std::ofstream& out);
    CreditCardLoggerProxy(std::shared_ptr<CreditCardReaderInterface> cardReader, const std::string& fileName);
    ~CreditCardLoggerProxy();

    std::string readInfo() const override;
    double getBalance() const override;
};