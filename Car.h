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