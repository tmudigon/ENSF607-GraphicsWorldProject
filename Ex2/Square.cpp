#include <iostream>
#include "Square.h"
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