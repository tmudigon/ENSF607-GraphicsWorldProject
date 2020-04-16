#ifndef CIRCLE_H
#define CIRCLE_H
#include <cstddef>
#include "Shape.h"


class Circle : public Shape
{
public:
    Circle(double x, double y, double radius, char *shapeName);
    double area() const;
    double perimeter() const;
    double getRadius() const;
    void setRadius(double value);
    void display();

private:
    double radius;
    const double pi = 3.14159265358979323846;
};

#endif