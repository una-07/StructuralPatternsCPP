#pragma once
#include "IPaymentProcessor.h"
#include "StripePaymentService.h"

class StripePaymentAdapter : public IPaymentProcessor {
private:
    StripePaymentService stripe;

public:
    void ProcessPayment(double amount) override {
        stripe.MakeTransaction(amount);
    }
};
