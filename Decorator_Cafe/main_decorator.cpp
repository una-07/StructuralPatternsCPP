#include <iostream>
#include <memory>
#include "Espresso.h"
#include "Milk.h"
#include "Sugar.h"
#include "WhippedCream.h"
#include "Caramel.h"

int main() {
    std::shared_ptr<Beverage> drink = std::make_shared<Espresso>();

    drink = std::make_shared<Milk>(drink);
    drink = std::make_shared<Sugar>(drink);
    drink = std::make_shared<WhippedCream>(drink);
    drink = std::make_shared<Caramel>(drink);

    std::cout << drink->GetDescription() << std::endl;
    std::cout << "Total cost: " << drink->Cost() << std::endl;

    return 0;
}
