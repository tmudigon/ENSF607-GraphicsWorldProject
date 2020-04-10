#ifndef SHAPE_H
#define SHAPE_H
#include "Point.h"

class Shape
{
public:
    Shape(double x, double y, char *name); // must dynamically allocate memory for shapeName
    virtual ~Shape();                                   //destructor
    Shape(const Shape &source);                 //copy constructor
    Shape &operator=(const Shape &rhs);         //asignment operator                             //Destroys memory allocation for shapeName
    Point getOrigin() const;
    char *getName() const;
    virtual void display() const;
    double distance(Shape &other) const;
    static double distance(Shape &theShape, Shape &other);
    void move(double dx, double dy);
    //DONT FORGET THE LAW OF BIG 3 - copy constructor, assignment operator and destructor all must be present if one is present

private:
    Point origin;
    char *shapeName;

    int getSize(char *name) const;
};

#endif