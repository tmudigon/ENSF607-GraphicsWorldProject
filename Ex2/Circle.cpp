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
