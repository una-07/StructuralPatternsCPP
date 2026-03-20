#pragma once
#include "Beverage.h"

class Tea : public Beverage {
public:
    std::string GetDescription() override {
        return "Tea";
    }

    double Cost() override {
        return 1.5;
    }
};
