#include "testMirCard.h"
#include "testVisaCard.h"
#include "testPassport.h"
#include "testLoggerProxy.h"

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}