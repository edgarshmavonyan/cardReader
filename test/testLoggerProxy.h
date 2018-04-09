#include <gtest/gtest.h>
#include "cardReader/creditCardLoggerProxy.h"
#include "cardReader/visaCardReader.h"
#include <string>

TEST(CreditCardLoggerProxy, _logInfo) {
    auto visaCardReaderPtr = std::make_shared<VisaCardReader>();
    CreditCardLoggerProxy creditCardLoggerProxy(visaCardReaderPtr);
    ASSERT_EQ(creditCardLoggerProxy._logInfo(), visaCardReaderPtr->_logInfo());
}

TEST(CreditCardLoggerProxy, readInfo) {
    auto visaCardReaderPtr = std::make_shared<VisaCardReader>();
    CreditCardLoggerProxy creditCardLoggerProxy(visaCardReaderPtr);
    ASSERT_EQ(creditCardLoggerProxy.readInfo(), visaCardReaderPtr->readInfo());
}

TEST(CreditCardLoggerProxy, getBalance) {
    auto visaCardReaderPtr = std::make_shared<VisaCardReader>();
    CreditCardLoggerProxy creditCardLoggerProxy(visaCardReaderPtr);
    ASSERT_EQ(creditCardLoggerProxy.getBalance(), visaCardReaderPtr->getBalance());
}

TEST(CreditCardLoggerProxy, _logToStream) {
    const std::string testFileName = "temp.txt";
    auto visaCardReaderPtr = std::make_shared<VisaCardReader>();
    auto creditCardLoggerProxyPtr = new CreditCardLoggerProxy(visaCardReaderPtr, testFileName);
    creditCardLoggerProxyPtr->readInfo();
    creditCardLoggerProxyPtr->getBalance();

    std::string logTest = creditCardLoggerProxyPtr->_logInfo();

    delete creditCardLoggerProxyPtr;
    std::ifstream inTestFile(testFileName);

    std::string first, second;
    std::getline(inTestFile, first);
    std::getline(inTestFile, second);

    ASSERT_EQ(first, "reading info... " + logTest);
    ASSERT_EQ(second, "getting balance... " + logTest);

    std::remove(testFileName.c_str());
}