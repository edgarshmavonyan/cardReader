#include "mirCardReader.h"
#include "visaCardReader.h"
#include "passportReader.h"
#include "creditCardLoggerProxy.h"
#include <memory>

/// Facade providing easy access to whole API
class CardReaderFacade {
    std::shared_ptr<CreditCardReaderInterface> _visaCardReader;
    std::shared_ptr<CreditCardReaderInterface> _mirCardReader;
    std::shared_ptr<PassportReader> _passportReader;
    std::shared_ptr<CreditCardLoggerProxy> _mirLogger;
    std::shared_ptr<CreditCardLoggerProxy> _visaLogger;
public:
    /// Constructor without output file
    CardReaderFacade();

    /// Constructor with output files.
    /// @param [in] logFileMir file path for logging Mir cards
    /// @param [in] logFileVisa file path for loggin Visa cards
    CardReaderFacade(const std::string& logFileMir, const std::string& logFileVisa);

    /// Method to read everything from card
    /// @returns The information from credit card from all readers
    std::string readInfoFromCard();
};