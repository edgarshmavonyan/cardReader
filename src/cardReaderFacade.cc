#include "cardReader/cardReaderFacade.h"

CardReaderFacade::CardReaderFacade():

        _visaCardReader(std::shared_ptr<CreditCardReaderInterface>(new VisaCardReader())),
        _mirCardReader(std::shared_ptr<CreditCardReaderInterface>(new MirCardReader())),
        _passportReader(std::make_shared<PassportReader>()),
        _mirLogger(std::make_shared<CreditCardLoggerProxy>(_mirCardReader)),
        _visaLogger(std::make_shared<CreditCardLoggerProxy>(_visaCardReader)) {}

CardReaderFacade::CardReaderFacade(const std::string& logFileMir, const std::string& logFileVisa):

        _visaCardReader(std::shared_ptr<CreditCardReaderInterface>(new VisaCardReader())),
        _mirCardReader(std::shared_ptr<CreditCardReaderInterface>(new MirCardReader())),
        _passportReader(std::make_shared<PassportReader>()),
        _mirLogger(std::make_shared<CreditCardLoggerProxy>(_mirCardReader, logFileMir)),
        _visaLogger(std::make_shared<CreditCardLoggerProxy>(_visaCardReader, logFileVisa)) {}


std::string CardReaderFacade::readInfoFromCard() {
    std::string response;
    // here we can get some additional info
    response += _visaLogger->readInfo() + '\n';
    response += _mirLogger->readInfo() + '\n';
    response += _passportReader->readInfo();
    return response;
}