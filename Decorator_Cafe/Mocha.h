#pragma once
#include "Beverage.h"

class Mocha : public Beverage {
public:
    std::string GetDescription() override {
        return "Mocha";
    }

    double Cost() override {
        return 3.5;
    }
};
