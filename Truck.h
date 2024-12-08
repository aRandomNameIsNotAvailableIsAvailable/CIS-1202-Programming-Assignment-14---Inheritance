// Filename: Truck.h

#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

// Class truck

class Truck : public Vehicle {
private:
    double towingCapacity;

public:
    // Constructor
    Truck(string manufacturer, int yearBuilt, double towingCapacity);

    // Getter and Setter for towing capacity
    void setTowingCapacity(double towingCapacity);
    double getTowingCapacity() const;

    // Override displayInfo to display truck info
    void displayInfo() const override;
};

#endif
