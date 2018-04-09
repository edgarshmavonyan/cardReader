#include "creditCardReaderInterface.h"
#include <gtest/gtest.h>
#include <iostream>
#include <fstream>
#include <memory>
#pragma once

/// Proxy to log the information about credit cards
class CreditCardLoggerProxy: public CreditCardReaderInterface {
protected:
    /// Incapsulated CreditCardReaderInterface implementation instance
    std::shared_ptr<CreditCardReaderInterface> _cardReader;
    /// The output stream for logger
    mutable std::ofstream* _out;

    /// Getting log information from member
    /// @param [out] logInfo The information to be logged further
    std::string _logInfo() const override;

    /// Main method to write log into files (if provided)
    /// @param [in] logInfo The information to be written to the file
    void _logToStream(const std::string& logInfo) const;

    FRIEND_TEST(CreditCardLoggerProxy, _logInfo);
    FRIEND_TEST(CreditCardLoggerProxy, _logToStream);
public:
    /// Constructor of proxy from creditCardReader and already existing ofstream.
    /// @param [in] cardReader The existing CreditCardReaderInterface implementation instance
    /// @param [in] out The pointer to opened std::ofstream
    CreditCardLoggerProxy(std::shared_ptr<CreditCardReaderInterface> cardReader, std::ofstream* out = nullptr);

    /// Constructor of proxy from creditCardReader and the name of file where log is supposed to be written.
    /// @param [in] cardReader The existing CreditCardReaderInterface implementation instance
    /// @param [in] fileName The path to log file
    CreditCardLoggerProxy(std::shared_ptr<CreditCardReaderInterface> cardReader, const std::string& fileName);

    /// Destructor of proxy instances
    ~CreditCardLoggerProxy();

    /// Reading info from member
    /// @param [out] info The information from credit card
    std::string readInfo() const override;

    /// Getting balance of card from member
    /// @param [out] balance The balance of credit card
    double getBalance() const override;
};