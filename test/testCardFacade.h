#include <gtest/gtest.h>
#include "cardReader/cardReaderFacade.h"

TEST(CardReaderFacade, readInfoFromCard) {
    auto readerPtr = std::make_unique<CardReaderFacade>();
    VisaCardReader visaCardReader;
    MirCardReader mirCardReader;
    PassportReader passportReader;
    ASSERT_EQ(readerPtr->readInfoFromCard(), visaCardReader.readInfo() + '\n' + mirCardReader.readInfo() + '\n' +
              passportReader.readInfo());
}