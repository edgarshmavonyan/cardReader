#include "creditCardReaderInterface.h"
#include <gtest/gtest.h>
#pragma once

/// A reader of Visa type cards (implements CreditCardReaderInterface)
class VisaCardReader: public CreditCardReaderInterface {
protected:
    /// Method to get log information for Visa type cards (currently it's Stub)
    /// @param [out] logInfo The information to be logged further
    std::string _logInfo() const override;

    FRIEND_TEST(VisaCardReader, _logInfo);
    FRIEND_TEST(CreditCardLoggerProxy, _logInfo);
public:
    /// Method to read information from Visa type cards (currently it's Stub)
    /// @param [out] info The information from credit card
    std::string readInfo() const override;

    /// Method to get balance for Visa type cards (currently it's Stub)
    /// @param [out] balance The balance of credit card
    double getBalance() const override;
};