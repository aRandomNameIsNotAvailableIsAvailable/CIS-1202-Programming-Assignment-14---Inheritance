// Filename: Truck.cpp

//libraries
#include "Truck.h"
#include <iostream>

// namespace
using namespace std;

// Constructor
Truck::Truck(string manufacturer, int yearBuilt, double towingCapacity)
    : Vehicle(manufacturer, yearBuilt), towingCapacity(towingCapacity) {
}

// Getter and Setter for towing capacity
void Truck::setTowingCapacity(double towingCapacity) {
    this->towingCapacity = towingCapacity;
}

double Truck::getTowingCapacity() const {
    return towingCapacity;
}

// Override displayInfo to display truck info
void Truck::displayInfo() const {
    Vehicle::displayInfo();  // Call vehicle info
    cout << "Towing Capacity: " << towingCapacity << " lbs" << endl; //add truck info
}
