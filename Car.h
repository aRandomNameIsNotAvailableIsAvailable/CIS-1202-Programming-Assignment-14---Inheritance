// Filename: Car.h

#ifndef CAR_H
#define CAR_H

// libraries
#include "Vehicle.h"

// Class car
class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    // Constructor
    Car(string manufacturer, int yearBuilt, int numberOfDoors);

    // Getter and Setter for number of doors
    void setNumberOfDoors(int numberOfDoors);
    int getNumberOfDoors() const;

    // Override displayInfo to display car info
    void displayInfo() const override;
};

#endif