#pragma once
#include <iostream>

class CryptoPaymentService {
public:
    void SendCrypto(double amount) {
        std::cout << "Crypto payment: " << amount << std::endl;
    }
};
