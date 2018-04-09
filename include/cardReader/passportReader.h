#include "cardReaderInterface.h"
#pragma once

/// A reader for passports (implements CardReaderInterface)
class PassportReader: public CardReaderInterface {
public:
    /// Method to read information from passports (currently it's Stub)
    /// @param [out] info The information from passport
    std::string readInfo() const override;

    /// Method to get the age of a person from passports (currently it's Stub)
    /// @param [out] age The age information from passport
    std::string getAge() const;
};