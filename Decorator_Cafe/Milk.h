#pragma once
#include "BeverageDecorator.h"

class Milk : public BeverageDecorator {
public:
    Milk(std::shared_ptr<Beverage> bev) : BeverageDecorator(bev) {}

    std::string GetDescription() override {
        return beverage->GetDescription() + " + Milk";
    }

    double Cost() override {
        return beverage->Cost() + 0.5;
    }
};
