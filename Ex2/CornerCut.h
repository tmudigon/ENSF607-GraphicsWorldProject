#ifndef CORNERCUT_H
#define CORNERCUT_H
#include <cstddef>
#include "Rectangle.h"
#include "Circle.h"
#include "Shape.h"

class CornerCut : public Rectangle, public Circle
{
public:
    CornerCut(double x, double y, double width, double length, double radius, char *shapeName);
    double area() const;
    double perimeter() const;
    // CornerCut &operator=(const CornerCut &rhs);
    void display();

private:
    bool checkRadiusLessThanWidth() const;
};




#endif