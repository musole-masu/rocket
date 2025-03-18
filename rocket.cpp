//
// Created by Winner Musole on 3/18/25.
#include "rocket.h"

#include <iostream>
#include <ostream>
#include <thread>

/**
 * 
 * @param name 
 * @param fuel_tank_level 
 * @param oxidizer_tank_level 
 */
Rocket::Rocket(const std::string& name, double fuel_tank_level, double oxidizer_tank_level) :
    name(name), fuel_tank_level(fuel_tank_level), oxidizer_tank_level(oxidizer_tank_level) {
    std::cout << "New Rocket in the facility: name -> " << name  << std::endl;
};

void Rocket::set_fuel_tank_level(double fuel_tank_level) {
    this->fuel_tank_level = fuel_tank_level;
}

double Rocket::get_fuel_tank_level() const{
    return fuel_tank_level;
}

void Rocket::set_oxidizer_tank_level(double oxidizer_tank_level) {
    this->oxidizer_tank_level = oxidizer_tank_level;
}

double Rocket::get_oxidizer_tank_level() const {
    return oxidizer_tank_level;
}

bool Rocket::pump_fuel_tank() {
    const double limit_fuel = 500;
    while (true) {
        {
            if (fuel_tank_level >= limit_fuel) break;
            fuel_tank_level += 2;
            std::cout << "Pumping fuel tank, current level: " << fuel_tank_level << std::endl;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    return true;
}

bool Rocket::pump_oxidizer_tank() {
    const double limit_oxidizer = 1000;
    while (true) {
        {
            if (oxidizer_tank_level >= limit_oxidizer) break;
            oxidizer_tank_level += 5;
            std::cout << "Pumping oxidizer tank, and the current level is " << this->oxidizer_tank_level << std::endl;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(150));
    }
    return true;
}

void Rocket::start_pumping() {
    std::thread fuel_tank_thread(&Rocket::pump_fuel_tank, this);
    std::thread oxidizer_tank_thread(&Rocket::pump_oxidizer_tank, this);

    fuel_tank_thread.join();
    oxidizer_tank_thread.join();

    std::cout << "Pumping finished for rocket " << name << std::endl;
}






