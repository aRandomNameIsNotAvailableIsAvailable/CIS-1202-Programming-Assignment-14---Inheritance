/*
Name: Kyle Baker
Date: 12/7/2024
Project Name: CIS 1202 Programming Assignment # 14 - Inheritance
Project Description: Develop a base and derived classes to represent different types of vehicles. Then program a short driver to these classes.
Filename: Source.cpp
*/

// libraries
#include<cmath>
#include<fstream>
#include<iomanip>
#include<iostream>
#include<string>
#include<vector>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h>

// namespace
using namespace std;

	//											+++Start Main+++

int main() {

	// declare variables CLEAN THIS UP WHEN FORMATTING OUTPUT

	int yearBuilt;
	string manufacturer;

cout << "Vehicle Info Program\n";

cout << endl;



// Vehicle class

cout << "Vehicle manufacturer: ";
cin >> manufacturer;

cout << "Vehicle year: ";
cin >> yearBuilt;

Vehicle v(manufacturer, yearBuilt);
cout << "\nVehicle info test: \n" << endl;
v.displayInfo();
cout << endl;

// Car class
int numberOfDoors;

cout << "Car info test: \n";
cout << "car manufacturer: ";
cin >> manufacturer;

cout << "Car year: ";
cin >> yearBuilt;
cout << "Number of doors: ";
cin >> numberOfDoors;

Car c(manufacturer, yearBuilt, numberOfDoors);
cout << "\nCar Information:" << endl;
c.displayInfo();
cout << endl;

// Truck class
double towingCapacity;

cout << "Truck info test: \n";
cout << "truck manufacturer: ";
cin >> manufacturer;

cout << "truck year: ";
cin >> yearBuilt;
cout << "towing capactiy: ";
cin >> towingCapacity;

Truck t(manufacturer, yearBuilt, towingCapacity);
cout << "\nTruck Information:" << endl;
t.displayInfo();
cout << endl;

	//											+++END MAIN+++

	cout << endl << endl;
	system("pause");
	return 0;

}
