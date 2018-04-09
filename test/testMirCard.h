#include <gtest/gtest.h>
#include "cardReader/mirCardReader.h"

TEST(MirCardReader__Test, readInfo) {
    MirCardReader mirCardReader;
    ASSERT_EQ(mirCardReader.readInfo(), "Mir information OK");
}

TEST(MirCardReader__Test, getBalance) {
    MirCardReader mirCardReader;
    ASSERT_EQ(mirCardReader.getBalance(), 42.42);
}

TEST(MirCardReader__Test, _logInfo) {
    MirCardReader mirCardReader;
    ASSERT_EQ(mirCardReader._logInfo(), "Mir log information OK");
}