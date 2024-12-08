// Filename: Car.cpp

// libraries
#include "Car.h"
#include <iostream>

// namespace
using namespace std;

// Constructor
Car::Car(string manufacturer, int yearBuilt, int numberOfDoors)
    : Vehicle(manufacturer, yearBuilt), numberOfDoors(numberOfDoors) {
}

// Getter and Setter for number of doors
void Car::setNumberOfDoors(int numberOfDoors) {
    this->numberOfDoors = numberOfDoors;
}

int Car::getNumberOfDoors() const {
    return numberOfDoors;
}

// Override displayInfo to display car info
void Car::displayInfo() const {
    Vehicle::displayInfo();  // Call vehicle info
    cout << "Number of Doors: " << numberOfDoors << endl; // Add car info
}