// ********************************************************
// Name: CalcDriver.cpp
//
// Summary: This file tests the methods as well as a chain function call
//
// Author: Yarely Chino & Naelin Aquino
// Created: 04/16/2015
// Modifications:
//
// *******************************************************

#include "Calc.h"
#include <iostream>

using namespace std;

int main()
{
    Calc c2(1), c3;

    //anseer = 6
    c2.add(5);
    cout<<c2.getx()<<endl;
    //answer = 3
    c2.subtract(3);
    cout<<c2.getx()<<endl;
    //answer 15
    c2.multiply(5);
    cout<<c2.getx()<<endl;
    //answer 1
    c3.add(1).multiply(3).subtract(2);

    cout<<c3.getx()<<endl;





    return 0;
}
