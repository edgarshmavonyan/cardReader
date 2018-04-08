#include "creditCardReaderInterface.h"

class VisaCardReader: public CreditCardReaderInterface {
public:
    std::string readInfo() override;
    double getBalance() override;
};