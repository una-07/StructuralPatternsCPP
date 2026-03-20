#include "PayPalPaymentProcessor.h"
#include "StripePaymentAdapter.h"
#include "CryptoPaymentAdapter.h"

int main() {
    IPaymentProcessor* paypal = new PayPalPaymentProcessor();
    IPaymentProcessor* stripe = new StripePaymentAdapter();
    IPaymentProcessor* crypto = new CryptoPaymentAdapter();

    paypal->ProcessPayment(100);
    stripe->ProcessPayment(200);
    crypto->ProcessPayment(300);

    delete paypal;
    delete stripe;
    delete crypto;

    return 0;
}
