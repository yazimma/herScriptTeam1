#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED

//************************************************************************
// Class name: Square
// Description: Outlines a Square class
// Author: Naelin Aquino & Araceli Gopar
// Last modified: 05-14-15
//************************************************************************

#include <fstream>
using namespace std;

class Square
{
    private:
        double length,
               width,
               area,
               perimeter;
    public:
    // Constructors
        Square();
        Square(double length, double width, double area, double perimeter);
    // Member functions
        void calcArea();
        void calcPerimeter();
    // Friend functions
        friend ostream& operator <<(ostream& out, const Square& obj);
        friend istream& operator >>(istream& in, Square& obj);
        friend Square operator +(Square& obj, Square& obj2);
        friend Square operator *(Square& obj, Square& obj2);
    // Mutator functions
        void setLength(double length);
        void setWidth(double width);
        void setArea(double area);
        void setPerimeter(double perimeter);
    // Accessor functions
        double getLength()const {return length;}
        double getWidth()const {return width;}
        double getArea()const {return area;}
        double getPerimeter()const {return perimeter;}
};


#endif // SQUARE_H_INCLUDED
