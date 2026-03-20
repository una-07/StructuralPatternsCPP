#pragma once
#include "BeverageDecorator.h"

class Caramel : public BeverageDecorator {
public:
    Caramel(std::shared_ptr<Beverage> bev) : BeverageDecorator(bev) {}

    std::string GetDescription() override {
        return beverage->GetDescription() + " + Caramel";
    }

    double Cost() override {
        return beverage->Cost() + 0.6;
    }
};
