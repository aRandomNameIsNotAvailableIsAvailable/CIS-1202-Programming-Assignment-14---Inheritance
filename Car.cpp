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


/*
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
*/