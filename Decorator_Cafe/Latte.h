#pragma once
#include "Beverage.h"

class Latte : public Beverage {
public:
    std::string GetDescription() override {
        return "Latte";
    }

    double Cost() override {
        return 3.0;
    }
};
