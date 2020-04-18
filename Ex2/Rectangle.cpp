#include <iostream>
#include "Rectangle.h"
#include <cstddef>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

using namespace std;

Rectangle::Rectangle(double x, double y, double sideA, double sideB, char *shapeName) : Square(x, y, sideA, shapeName), Shape(x,y, shapeName)
{
    this->sideB = sideB;
}

double Rectangle::area() const
{
    return getSideA() * sideB;
}

double Rectangle::perimeter() const
{
    return 2 * (getSideA() + sideB);
}

double Rectangle::getSideB() const
{
    return sideB;
}

void Rectangle::setSideB(double value)
{
    sideB = value;
}

void Rectangle::display()
{
    cout << "Rectangle Name: ";
    Shape::display();
}

//Override Shape assignment operator - not necessary
// Rectangle &Rectangle::operator=(const Rectangle &rhs)
// {
//     // cout << "Assignment operator called!" << endl;
//     if (this == &rhs)
//     {
//         return *this;
//     }
//     else
//     {
//         delete[] this->shapeName;
//         int size = getSize(rhs.getName());
//         this->shapeName = new char[size + 1];
//         assert(this->shapeName != 0);
//         strcpy(this->shapeName, rhs.getName());
//         this->origin = rhs.getOrigin();
//         Square::setSideA(rhs.getSideA());
//         Rectangle::setSideB(rhs.getSideB());
//     }

//     return *this;
// }