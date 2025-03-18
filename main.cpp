#include <iostream>
#include <ostream>

#include "rocket.h"

int main() {
    auto *rocket_01 = new Rocket("Nyira", 2, 4  );

    rocket_01->start_pumping();

    std::cout << "Final Fuel Level: " << rocket_01->get_fuel_tank_level() << std::endl;
    std::cout << "Final Oxidizer Level: " << rocket_01->get_oxidizer_tank_level() << std::endl;

    delete rocket_01;

    return 0;

}