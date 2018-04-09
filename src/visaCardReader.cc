#include "cardReader/visaCardReader.h"

std::string VisaCardReader::_logInfo() const {
    // here we get log information from Visa credit card
    return "Visa log information OK";
}

std::string VisaCardReader::readInfo() const {
    // here we get information from Visa credit card
    return "Visa information OK";
}

double VisaCardReader::getBalance() const {
    // here we get balance of Visa credit card
    return 42.42;
}