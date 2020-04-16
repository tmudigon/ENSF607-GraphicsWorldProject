#include <iostream>
#include "Square.h"
#include <cstddef>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "Shape.h"

using namespace std;
//Constructor
Square::Square(double x,double y,double side, char *name): Shape(x,y,name){
    sideA = side;
}

double Square::area() const{
    return sideA*sideA;
}

double Square::perimeter() const{
    return 4*sideA;
}

double Square::getSideA() const{
    return sideA;
}

void Square::setSideA(double value){
    this->sideA = value;
}

void Square::display(){
    cout << "Square Name: ";
    Shape::display();
}

Square &Square::operator=(const Square &rhs)
{
    // cout << "Assignment operator called!" << endl;
    if (this == &rhs)
    {
        return *this;
    }
    else
    {
        delete[] this->shapeName;
        int size = getSize(rhs.getName());
        this->shapeName = new char[size + 1];
        assert(this->shapeName != 0);
        strcpy(this->shapeName, rhs.getName());

        this->origin = rhs.getOrigin();
        setSideA(rhs.getSideA());
    }

    return *this;
}