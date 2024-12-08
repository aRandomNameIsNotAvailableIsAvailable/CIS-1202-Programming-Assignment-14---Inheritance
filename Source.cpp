/*
Name: Kyle Baker
Date: 12/7/2024
Project Name: CIS 1202 Programming Assignment # 14 - Inheritance
Project Description: Develop a base and derived classes to represent different types of vehicles. Then program a short driver to these classes.
Filename: Source.cpp
*/

// libraries
#include<iostream>
#include<string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

// namespace
using namespace std;

//											+++Start Main+++

int main() {

// Declare variables

int yearBuilt;
int numberOfDoors;
double towingCapacity;
string manufacturer;

cout << "Vehicle Info Program\n";
cout << endl;

// Vehicle class
cout << "Vehicle:\n";
cout << "Enter the manufacturer: ";
getline(cin, manufacturer);
cout << "Enter the year built: ";
cin >> yearBuilt;
cin.ignore();

	Vehicle v(manufacturer, yearBuilt); // call vehicle
	cout << "Vehicle information: " << endl;
	v.displayInfo();
	cout << endl;

// Car class
cout << "Car: \n";
cout << "Enter the manufacturer: ";
getline(cin, manufacturer);
cout << "Enter the year built: ";
cin >> yearBuilt;
cin.ignore();
cout << "Enter the number of doors: ";
cin >> numberOfDoors;
cin.ignore();

	Car c(manufacturer, yearBuilt, numberOfDoors); // call car
	cout << "Car Information:\n";
	c.displayInfo();
	cout << endl;

// Truck class
cout << "Truck: \n";
cout << "Enter the manufacturer: ";
getline(cin, manufacturer);
cout << "Enter the year built: ";
cin >> yearBuilt;
cin.ignore();
cout << "Enter the towing capacity: ";
cin >> towingCapacity;
cin.ignore();

	Truck t(manufacturer, yearBuilt, towingCapacity); // call truck
	cout << "Truck Information:\n";
	t.displayInfo();
	cout << endl;

//											+++END MAIN+++

cout << endl << endl;
system("pause");
return 0;

}
