#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <cstddef>
#include "Square.h"

class Rectangle : public Square
{
public:
    Rectangle(double x, double y, double sideA, double sideB, char *shapeName);
    double area() const;
    double perimeter() const;
    double getSideB() const;
    void setSideB(double value);
    void display();
    
private:
    double sideB;
};

#endif