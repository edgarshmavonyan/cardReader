#include <gtest/gtest.h>
#include <iostream>

TEST(first, kekos) {
    std::cout << "AHAH";
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}