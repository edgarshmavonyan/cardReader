#include <gtest/gtest.h>
#include "cardReader/visaCardReader.h"

TEST(VisaCardReader__Test, readInfo) {
    VisaCardReader visaCardReader;
    ASSERT_EQ(visaCardReader.readInfo(), "Visa information OK");
}

TEST(VisaCardReader__Test, getBalance) {
    VisaCardReader visaCardReader;
    ASSERT_EQ(visaCardReader.getBalance(), 42.42);
}

TEST(VisaCardReader__Test, _logInfo) {
    VisaCardReader visaCardReader;
    ASSERT_EQ(visaCardReader._logInfo(), "Visa log information OK");
}