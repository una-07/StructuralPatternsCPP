#pragma once
#include "IPaymentProcessor.h"
#include "CryptoPaymentService.h"

class CryptoPaymentAdapter : public IPaymentProcessor {
private:
    CryptoPaymentService crypto;

public:
    void ProcessPayment(double amount) override {
        crypto.SendCrypto(amount);
    }
};
