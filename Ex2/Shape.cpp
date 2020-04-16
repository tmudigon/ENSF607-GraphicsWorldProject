#include <iostream>
#include <cstddef>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "Shape.h"
using namespace std;

Shape::Shape(double x, double y, char *name) : origin(x, y)
{
    //Need to dynamically allocate memory space here for shapeName
    int size = getSize(name);
    this->shapeName = new char[size + 1];
    assert(this->shapeName != 0);
    strcpy(this->shapeName, name);
    // cout << "Shape constructor called!" << endl;
}

Shape::~Shape()
{
    //Need to call the destructor for Point?
    delete[] shapeName; // We are only deleting the pointer.
}

Shape::Shape(const Shape &source) : origin(source.origin.getX(), source.origin.getY())
{
    // cout << "Copy constructor called!" << endl;
    //Copy the name
    int size = getSize(source.getName());
    this->shapeName = new char[size + 1];
    assert(this->shapeName != 0);
    strcpy(this->shapeName, source.getName());

    //copy the origin
    source.getOrigin() = this->origin;
}

Shape &Shape::operator=(const Shape &rhs)
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
    }

    return *this;
}

Point Shape::getOrigin() const
{
    return origin;
}

char *Shape::getName() const
{
    return shapeName;
}

void Shape::display() const
{
    char *ptr = shapeName;
    while (*ptr != '\0')
    {
        cout << *ptr;
        ptr++;
    }
    cout << endl;
    origin.display();
}

double Shape::distance(Shape &other) const
{
    double distanceBetween = origin.distance(other.origin);
    return distanceBetween;
}

double Shape::distance(Shape &theShape, Shape &other)
{
    double distanceBetween = Point::distance(theShape.origin, other.origin);
    return distanceBetween;
}

void Shape::move(double dx, double dy)
{
    origin.setX(origin.getX() + dx);
    origin.setY(origin.getY() + dy);
}

int Shape::getSize(char *name) const
{
    char *ptr = name;
    int counter = 0;

    while (*ptr != '\0')
    {
        ptr++;
        counter++;
    }
    return counter;
}
