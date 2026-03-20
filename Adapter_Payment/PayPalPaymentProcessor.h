#pragma once
#include "IPaymentProcessor.h"
#include <iostream>

class PayPalPaymentProcessor : public IPaymentProcessor {
public:
    void ProcessPayment(double amount) override {
        std::cout << "Paid via PayPal: " << amount << std::endl;
    }
};
