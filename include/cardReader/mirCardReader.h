#include "creditCardReaderInterface.h"

class MirCardReader : public CreditCardReaderInterface {
public:
    std::string readInfo() override;
    double getBalance() override;
};