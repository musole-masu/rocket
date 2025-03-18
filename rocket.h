//
// Created by Winner Musole on 3/18/25.
//

#ifndef ROCKET_H
#define ROCKET_H
#include <string>

class Rocket {
private:
    std::string name;
    double fuel_tank_level;
    double oxidizer_tank_level;

public:
    Rocket(const std::string& name, double fuel_tank_level, double oxidizer_tank_level);

    void set_fuel_tank_level(double fuel_tank_level);

    double get_fuel_tank_level() const;

    void set_oxidizer_tank_level(double oxidizer_tank_level);

    double get_oxidizer_tank_level() const;

    bool pump_fuel_tank();

    bool pump_oxidizer_tank();

    void start_pumping();

};
#endif //ROCKET_H
