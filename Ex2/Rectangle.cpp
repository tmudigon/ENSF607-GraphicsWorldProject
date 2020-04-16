#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(double x,double y,double sideA,double sideB, char *shapeName):Square(x,y,sideA,shapeName){
    this->sideB = sideB;
}

double Rectangle::area() const{
    return getSideA()*sideB;
}

double Rectangle::perimeter() const{
    return 2*(getSideA() + sideB);
}

double Rectangle::getSideB() const{
    return sideB;
}

void Rectangle::setSideB(double value){
    sideB = value;
}

void Rectangle::display(){
    display(); //Calls the display method of Square
}