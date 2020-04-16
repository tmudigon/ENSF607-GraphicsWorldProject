#ifndef CORNERCUT_H
#define CORNERCUT_H
#include <cstddef>
#include "Rectangle.h"
#include "Circle.h"

class CornerCut : virtual public Rectangle, virtual public Circle
{
public:
    CornerCut(double x, double y, double width, double length, double radius, char *shapeName);
    double area() const;
    double perimeter() const;
    double getName() const;
    void display();

private:
    bool checkRadiusLessThanWidth() const;
};




#endif