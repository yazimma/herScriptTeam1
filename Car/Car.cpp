//***************************************************************
// Car.cpp
// Author: Laura Chavez & Naelin Aquino
// Last Modified: 04-30-15
// Description: Implements Car class's functions
//***************************************************************
//
#include "Car.h"
#include <cassert>
#include <iostream>
using namespace std;

string Car::color = "white";
int Car::cars_sold = 0;
bool Car::ready = false;

// Constructors
Car::Car()
{
    model = "";
    brand = "";
    state = true;
}
Car::Car(string brand, bool state, string model)
{
    this->brand = brand;
    this->state = state;
    this->model = model;
    Car::ready = state;
}

void Car::sellCar()
{
    if(ready)
        Car::cars_sold++;
}
// Accessor function
bool Car::isReady()
{
    return state;
}
// Mutator functions
void Car::sellCar()
{
    if(ready)
        Car::cars_sold++;
}
void Car::setBrand(string brand)
{
    assert(brand != "");
    this->brand = brand;
}

void Car::setState(bool state)
{
    assert(state == true || state == false);
    this->state = state;
    Car::ready = state;
}

void Car::setModel(string model)
{
    assert(model != "");
    this->model = model;
}
// Member function
void Car::display()
{
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Car Color: " << Car::color << endl;
}