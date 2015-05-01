#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED

//**********************************************************************
// Class Name: Car
//
// Description: Creates a blueprint for Car class
//
//**********************************************************************

#include <string>
using namespace std;
class Car
{
    private:
        static string color;
        static int cars_sold;
        static bool ready;
        string brand;
        bool state;
        string model;
    public:
    // Constructors
        //**********************************************************************
        Car();
        // Summary: Initialize non-static member variables
        // Preconditions:
        // Postconditions: Non-static member variables are initialized
        //**********************************************************************
        //**********************************************************************
        Car(string brand, bool state, string model);
        // Summary: Initialize non-static member variables to user-inputted arguments
        // Preconditions:
        // Postconditions: Non-static member variables are initialized to user-inputted arguments
        //**********************************************************************
    // Accessor Functions
        //**********************************************************************
        static int getCarSold() {return cars_sold;}
        // Summary: Returns cars_sold
        // Preconditions:
        // Postconditions:
        //**********************************************************************
        //**********************************************************************
        string getBrand()const {return brand;}
        // Summary: Returns brand
        // Preconditions:
        // Postconditions:
        //**********************************************************************
        //**********************************************************************
        bool getState()const {return state;}
        // Summary: Return state
        // Preconditions:
        // Postconditions:
        //**********************************************************************
        //**********************************************************************
        string getModel()const {return model;}
        // Summary: Returns model
        // Preconditions:
        // Postconditions:
        //**********************************************************************
        //**********************************************************************
        bool isReady();
        // Summary: Returns state of car object
        // Preconditions: state of car object must be initialized
        // Postconditions:
        //**********************************************************************
    // Mutator functions
        //**********************************************************************
        static void sellCar();
        // Summary: Increments cars_sold by 1
        // Preconditions: state of car object is true
        // Postconditions: cars_sold is incremented by 1
        //**********************************************************************
        //**********************************************************************
        void setBrand(string brand);
        // Summary: Sets the brand
        // Preconditions:
        // Postconditions: brand is set to a string
        //**********************************************************************
        //**********************************************************************
        void setState(bool state);
        // Summary: Sets the state
        // Preconditions:
        // Postconditions: state is set to a bool
        //**********************************************************************
        //**********************************************************************
        void setModel(string model);
        // Summary: Sets the model
        // Preconditions:
        // Postconditions: model is set to a string
        //**********************************************************************
    // Member function
        //**********************************************************************
        void display();
        // Summary: Displays Car member variables(attributes)
        // Preconditions: Car object must be instantiated
        // Postconditions:
        //**********************************************************************
};

#endif // CAR_H_INCLUDED
