#pragma once
#include "BeverageDecorator.h"

class Sugar : public BeverageDecorator {
public:
    Sugar(std::shared_ptr<Beverage> bev) : BeverageDecorator(bev) {}

    std::string GetDescription() override {
        return beverage->GetDescription() + " + Sugar";
    }

    double Cost() override {
        return beverage->Cost() + 0.2;
    }
};
