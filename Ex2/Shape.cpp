#include <iostream>
#include <cstddef>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "Shape.h"
using namespace std;

/**
 * HOW DO I DEAL WITH THE VIRTUAL FUNCITONS HERE???? DO I HAVE TO GET RID OF THE IMPLEMENTATION?
 */

Shape::Shape(double x, double y, char *name) : origin(x, y)
{
    //Need to dynamically allocate memory space here for shapeName
    int size = getSize(name);
    this->shapeName = new char[size + 1];
    assert(this->shapeName != 0);
    strcpy(this->shapeName, name);
    cout << "Shape constructor called!" << endl;
}

Shape::~Shape()
{
    delete[] shapeName;
}

// Shape::Shape(const Shape &source) : origin(source.origin.getX(), source.origin.getY())
// {
//     int size = getSize(shapeName);
//     char* sourceName = new char [size+1];
//     assert(sourceName != 0);
//     strcpy(sourceName, this->shapeName);

//     source.setName(this->shapeName);
// }

// Shape &Shape::operator=(const Shape &rhs)
// {
//     //FINISH
// }

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
    cout << "Shape Name: ";
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
