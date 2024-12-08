#include "Vehicle.h"
#include <iostream>
using namespace std;

// Getters and Setters
void Vehicle::setManufacturer(string manufacturer) {
    this->manufacturer = manufacturer;
}

string Vehicle::getManufacturer() const {
    return manufacturer;
}