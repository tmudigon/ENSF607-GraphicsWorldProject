#include <iostream>
#include <cstddef>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <math.h>
#include "Circle.h"
#include "Shape.h"

using namespace std;

Circle::Circle(double x, double y, double radius, char *shapeName):Shape(x,y,shapeName){
    this -> radius = radius;
}

double Circle::area() const{
    double area = pi*pow(radius,2);
    return area;
}

double Circle::perimeter() const{
    double perimeter = 2*pi*radius;
    return perimeter;
}

double Circle::getRadius() const{
    return radius;
}

void Circle::setRadius(double value){
    this->radius = value;
}

void Circle::display(){
    cout << "Circle Name: ";
    Shape::display();
}


Circle &Circle::operator=(const Circle &rhs)
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
        Circle::setRadius(rhs.getRadius());
    }

    return *this;
}