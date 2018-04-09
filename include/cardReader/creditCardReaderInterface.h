#include "cardReaderInterface.h"
#pragma once

/// The common interface for credit cards of different types (inheritor of CardReaderInterface)
/// @inherit
class CreditCardReaderInterface: public CardReaderInterface {
    friend class CreditCardLoggerProxy;
protected:
    virtual std::string _logInfo() const = 0;
public:
    virtual std::string readInfo() const override = 0;
    virtual double getBalance() const = 0;
};