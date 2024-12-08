#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    // Constructor
    Car(string manufacturer, int yearBuilt, int numberOfDoors);

    // getter and Setter for number of doors
    void setNumberOfDoors(int numberOfDoors);
    int getNumberOfDoors() const;

    // override displayInfo to display car info
    void displayInfo() const override;
};

#endif


/*
class Vehicle {
protected:
    string manufacturer;
    int yearBuilt;

public:
    // Constructor
    Vehicle(string manufacturer, int yearBuilt);

    // Getters and Setters
    void setManufacturer(string manufacturer);
    string getManufacturer() const;

    void setYearBuilt(int yearBuilt);
    int getYearBuilt() const;

    // Method to display vehicle information
    virtual void displayInfo() const;
};
*/