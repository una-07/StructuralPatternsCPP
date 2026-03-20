#pragma once
#include "Beverage.h"

class Espresso : public Beverage {
public:
    std::string GetDescription() override {
        return "Espresso";
    }

    double Cost() override {
        return 2.0;
    }
};
