#ifndef VEHICLE_H
#define VEHICLE_H

// libraries
#include <string>

// namespace
using namespace std;

// creaes vehicle 
class Vehicle {
protected:
    string manufacturer;
    int yearBuilt;

public:
    // Constructor
    Vehicle(string manufacturer, int yearBuilt);

    // Getters and Setters
    void setManufacturur(string manufacturer);
    string getManufacturer() const;
    
    void setYearBuilt(int yearBuilt);
    int getYearBuilt() const;

    // Method to display vehicle information
    virtual void displayInfo() const;
};

#endif
