#include "creditCardReaderInterface.h"
#include <gtest/gtest.h>
#pragma once

/// A reader of Visa type cards (implements CreditCardReaderInterface)
class VisaCardReader: public CreditCardReaderInterface {
protected:
    /// Method to get log information for Visa type cards (currently it's Stub)
    /// @return The information to be logged further
    std::string _logInfo() const override;

    /// Test accessing protected method
    FRIEND_TEST(VisaCardReader, _logInfo);
    /// Test accessing protected method
    FRIEND_TEST(CreditCardLoggerProxy, _logInfo);
public:
    /// Method to read information from Visa type cards (currently it's Stub)
    /// @return The information from credit card
    std::string readInfo() const override;

    /// Method to get balance for Visa type cards (currently it's Stub)
    /// @return The balance of credit card
    double getBalance() const override;
};