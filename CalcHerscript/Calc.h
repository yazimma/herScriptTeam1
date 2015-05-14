#ifndef CALC_H_INCLUDED
#define CALC_H_INCLUDED

// ********************************************************
// Class Name: Calc
//
/* Description: This class declares methods that add, subtract, and multiply


*/
// *******************************************************

class Calc
{

private:
    double x;
public:
    Calc();
/***************************************************
Summary: init x to zero
Postconditiont: x is zero
****************************************************
*/
    Calc(double x);
/***************************************************
Summary: init x to a varible by the user
Postconditiont: x is x
****************************************************
*/
    void setx(double x);
/***************************************************
Summary: sets the member variable to x
Postconditiont: x is x
****************************************************
*/
    double getx()const{return x;}
/***************************************************
Summary: returns the value of x
Precondition: x is defined
****************************************************
*/
    Calc& subtract(double y);
/***************************************************
Summary: subtract a variable from x
Postconditiont: x is subtracted by y
****************************************************
*/
    Calc& add(double y);
/***************************************************
Summary: add a variable x
Postconditiont: x is zero
****************************************************
*/
    Calc& multiply(double y);
/***************************************************
Summary: multiply x and y
Postconditiont: x is multiplied with y
****************************************************
*/




};
#endif // CALC_H_INCLUDED
