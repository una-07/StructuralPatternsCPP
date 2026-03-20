#pragma once
#include <iostream>

class StripePaymentService {
public:
    void MakeTransaction(double amount) {
        std::cout << "Stripe payment: " << amount << std::endl;
    }
};
