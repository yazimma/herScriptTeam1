//************************************************************************
// Filename: SquareDriver.cpp
// Description: Tests the Square class's functions
// Author: Naelin Aquino & Araceli Gopar
// Last modified: 05-14-15
//************************************************************************

#include "Square.h"
#include <iostream>
using namespace std;

int main()
{
    Square sq1(2, 2, 4, 8),
           sq2,
           sq3;

    // TEST: Output Square 1's variables
    cout << "Square 1" << endl;
    cout << sq1 << endl;

    // TEST: Grab user input
    cout << "Enter the length, width, area, and perimeter for Square 2\n";
    cin >> sq2;

    // TEST: Output Square 2's variables
    cout << "Square 2" << endl;
    cout << sq2 << endl;

    // TEST: Add two squares
    sq3 = sq1 + sq2;
    cout << "Square 1 & Square 2's Perimeter: " << endl;
    cout << sq3 << endl;

    // TEST: Multiplying two squares' area
    sq3 = sq1 * sq2;
    cout << "Square 1 & Square 2's Area: " << endl;
    cout << sq3 << endl;

    return 0;
}
