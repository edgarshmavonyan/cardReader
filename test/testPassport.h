#include <gtest/gtest.h>
#include "cardReader/passportReader.h"

TEST(PassportReader, readInfo) {
    PassportReader passportReader;
    ASSERT_EQ(passportReader.readInfo(), "Passport information OK");
}

TEST(PassportReader, getAge) {
    PassportReader passportReader;
    ASSERT_EQ(passportReader.getAge(), "Passport age information OK");
}