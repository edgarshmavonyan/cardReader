#include "cardReader/creditCardLoggerProxy.h"

std::string CreditCardLoggerProxy::_logInfo() const {
    return _cardReader->_logInfo();
}

void CreditCardLoggerProxy::_logToStream(const std::string &logInfo) const {
    if (_out != nullptr) {
        (*_out) << logInfo << std::endl;
    }
}

CreditCardLoggerProxy::CreditCardLoggerProxy(std::shared_ptr<CreditCardReaderInterface> cardReader, std::ofstream* out):
        _cardReader(std::move(cardReader)), _out(out) {}

CreditCardLoggerProxy::CreditCardLoggerProxy(std::shared_ptr<CreditCardReaderInterface> cardReader, const std::string& fileName):
        _cardReader(std::move(cardReader)), _out(new std::ofstream()) {
    _out->open(fileName);
}

std::string CreditCardLoggerProxy::readInfo() const {
    _logToStream("reading info... " + _logInfo());
    return _cardReader->readInfo();
}

double CreditCardLoggerProxy::getBalance() const {
    _logToStream("getting balance... " + _logInfo());
    return _cardReader->getBalance();
}

CreditCardLoggerProxy::~CreditCardLoggerProxy() {
    if (_out != nullptr) {
        _out->close();
    }
    delete _out;
}