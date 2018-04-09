#include "cardReader/mirCardReader.h"

std::string MirCardReader::_logInfo() const {
    // here we get some information from Mir credit card
    return "Mir log information OK";
}

std::string MirCardReader::readInfo() const {
    // here we get information from Mir credit card
    return "Mir information OK";
}

double MirCardReader::getBalance() const {
    // here we get balance of Mir credit card
    return 42.42;
}