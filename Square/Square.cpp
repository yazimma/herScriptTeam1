//************************************************************************
// Filename: Square.cpp
// Description: Implements Square's functions
// Author: Naelin Aquino & Araceli Gopar
// Last modified: 05-14-15
//************************************************************************

#include "Square.h"
#include <fstream>
#include <iostream>
#include <cassert>
using namespace std;

Square::Square()
{
    length = 1;
    width = 1;
    area = 1;
    perimeter = 4;
}
Square::Square(double length, double width, double area, double perimeter)
{
    assert(length > 0);
    assert(width > 0);
    assert(area == (width * length));
    assert(perimeter == (2 * length) + (2 * width));
    this->length = length;
    this->width = width;
    this->area = area;
    this->perimeter = perimeter;
}
void Square::calcArea()
{
    area = length * width;
}
void Square::calcPerimeter()
{
    perimeter = ((2 * length) + (2 * width));
}
ostream& operator <<(ostream& out, const Square& obj)
{
    out << "Length: " << obj.length << endl;
    out << "Width: " << obj.width << endl;
    out << "Area: " << obj.area << endl;
    out << "Perimeter: " << obj.perimeter << endl;
    return out;
}
istream& operator >>(istream& in, Square& obj)
{
    in >> obj.length;
    in >> obj.width;
    in >> obj.area;
    in >> obj.perimeter;
    return in;
}
Square operator +(Square& obj, Square& obj2)
{
    Square obj3;
    // Update new object's width & length
    obj3.width = obj.width + obj2.width;
    obj3.length = obj.length + obj.length;
    // Calculate new object's perimeter
    obj.calcPerimeter();
    obj2.calcPerimeter();
    obj3.perimeter = obj.perimeter + obj2.perimeter;

    return obj3;
}
Square operator *(Square& obj, Square& obj2)
{
    Square obj3;
    // Update new object's width & length
    obj3.width = obj.width + obj2.width;
    obj3.length = obj.length + obj.length;
    // Calculate new object's area
    obj.calcArea();
    obj2.calcArea();
    obj3.area = obj.area * obj2.area;

    return obj3;
}
void Square::setLength(double length)
{
    assert(length > 0);
    this->length = length;
}
void Square::setWidth(double width)
{
    assert(width > 0);
    this->width = width;
}
void Square::setArea(double area)
{
    assert(area > 0);
    this->area = area;
}
void Square::setPerimeter(double perimeter)
{
    assert(perimeter > 0);
    this->perimeter = perimeter;
}
