#pragma once
#include <string>

class Beverage {
public:
    virtual std::string GetDescription() = 0;
    virtual double Cost() = 0;
    virtual ~Beverage() = default;
};
