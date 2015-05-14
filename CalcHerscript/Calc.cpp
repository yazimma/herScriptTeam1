// ********************************************************
// Name: Calc.cpp
//
// Summary: This file implements the functionality of the Calc class
//
// Author: Yarely Chino & Naelin Aquino
// Created: 04/16/2015
// Modifications:
//
// *******************************************************

#include "Calc.h"

Calc::Calc()
{
    x = 0;
}

Calc::Calc(double x)
{
    this-> x = x;
}
void Calc::setx(double x)
{
    this->x = x;
}
Calc& Calc::subtract(double y)
{
    x -= y;
    return *this;
}
Calc& Calc::add(double y)
{
    x += y;
    return *this;
}
Calc& Calc::multiply(double y)
{
    x *= y;
    return *this;
}
