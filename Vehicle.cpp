#include "Vehicle.h"
#include <iostream>
using namespace std;

// Constructor
Vehicle::Vehicle(string manufacturer, int yearBuilt) : manufacturer(manufacturer), yearBuilt(yearBuilt) {}


// Getters and Setters
void Vehicle::setManufacturer(string manufacturer) {
    this->manufacturer = manufacturer;
}

string Vehicle::getManufacturer() const {
    return manufacturer;
}

void Vehicle::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt;
}

int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

// display vehicle information
void Vehicle::displayInfo() const {
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year Built: " << yearBuilt << endl;
}