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

    //Need law of big 3?
private:
    double radius;
};

#endif