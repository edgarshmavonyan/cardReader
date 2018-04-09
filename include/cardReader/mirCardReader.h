#include "creditCardReaderInterface.h"
#include <gtest/gtest.h>
#pragma once

/// A reader of Mir type cards (implements CreditCardReaderInterface)
class MirCardReader : public CreditCardReaderInterface {
protected:
    /// Method to get log information for Mir type cards (currently it's Stub)
    /// @return The information to be logged further
    std::string _logInfo() const override;
    /// Test accessing protected method
    FRIEND_TEST(MirCardReader, _logInfo);
public:
    /// Method to read information from Mir type cards (currently it's Stub)
    /// @return The information from credit card
    std::string readInfo() const override;

    /// Method to get balance for Mir type cards (currently it's Stub)
    /// @return The balance of credit card
    double getBalance() const override;
};