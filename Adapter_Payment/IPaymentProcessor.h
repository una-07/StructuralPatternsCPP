#pragma once

class IPaymentProcessor {
public:
    virtual void ProcessPayment(double amount) = 0;
    virtual ~IPaymentProcessor() = default;
};
