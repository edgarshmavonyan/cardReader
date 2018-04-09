#include "cardReaderInterface.h"
#pragma once

/// The common interface for credit cards of different types (inheritor of CardReaderInterface)
class CreditCardReaderInterface: public CardReaderInterface {
    /// Log proxy can access everything in encapsulated member
    friend class CreditCardLoggerProxy;
protected:
    /// Method used to pass information to log proxy
    virtual std::string _logInfo() const = 0;
public:
    /// Method reading information from credit cards
    virtual std::string readInfo() const override = 0;

    /// Method getting the balance of credit card
    virtual double getBalance() const = 0;
};