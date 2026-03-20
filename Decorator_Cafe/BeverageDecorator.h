#pragma once
#include "Beverage.h"
#include <memory>

class BeverageDecorator : public Beverage {
protected:
    std::shared_ptr<Beverage> beverage;

public:
    BeverageDecorator(std::shared_ptr<Beverage> bev) : beverage(bev) {}
};
