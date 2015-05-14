//***************************************************************
// CarDriver.cpp
// Author: Laura Chavez & Naelin Aquino
// Last Modified: 4-30-15
// Description: Tests the Car class functions.
//***************************************************************
//

#include "Car.h"
#include <iostream>
using namespace std;

int main()
{
    Car car1("Honda",true,"Civic");
    car1.sellCar();
    cout << "Total number of cars sold: " << Car::getCarSold() << endl; // Output: 1
    cout << endl;
    cout << "Car 1's attributes: \n";
    car1.display(); // Displays the car object

    return 0;
}