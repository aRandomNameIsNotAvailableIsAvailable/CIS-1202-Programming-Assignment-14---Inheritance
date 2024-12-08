#include "Car.h"
#include <iostream>
using namespace std;

// Constructor
Car::Car(string manufacturer, int yearBuilt, int numberOfDoors)
    : Vehicle(manufacturer, yearBuilt), numberOfDoors(numberOfDoors) {
}

// Getter and setter for number of doors
void Car::setNumberOfDoors(int numberOfDoors) {
    this->numberOfDoors = numberOfDoors;
}

int Car::getNumberOfDoors() const {
    return numberOfDoors;
}

// override displayInfo to display car info
void Car::displayInfo() const {
    Vehicle::displayInfo();  // displayInfo for vehicle, add info for number of doors
    cout << "Number of Doors: " << numberOfDoors << endl;
}