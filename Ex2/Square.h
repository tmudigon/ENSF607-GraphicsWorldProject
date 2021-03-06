#ifndef SQUARE_H
#define SQUARE_H
#include <cstddef>
#include "Shape.h"


class Square : virtual public Shape
{
public:
    Square(double x, double y, double sideA, char *shapeName);
    double area() const;
    double perimeter() const;
    double getSideA() const;
    void setSideA(double value);
    void display();
    // Square &operator=(const Square &rhs);

private:
    double sideA;
};

#endif