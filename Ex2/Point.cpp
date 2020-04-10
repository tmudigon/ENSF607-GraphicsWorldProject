#include <iostream>
#include <cstddef>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include "Point.h"
using namespace std;

int Point::id = 1000;

Point::Point(double x_coordinate, double y_coordinate)
{
    x = x_coordinate;
    y = y_coordinate;
    id++;
    cout << "Point constructor called!" << endl;
}

void Point::display() const
{
    cout << "X-Coordinate: " << x << endl;
    cout << "Y-Coordinate: " << y << endl;
}

double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}

void Point::setX(double value)
{
    this->x = value;
}

void Point::setY(double value)
{
    this->y = value;
}

int Point::counter() const
{
    int num_obj = id - 1000;
    return num_obj;
}

double Point::distance(Point &otherPoint) const
{
    double x_diff = x - otherPoint.getX();
    double y_diff = y - otherPoint.getY();
    double distance = sqrt(pow(x_diff, 2.0) + pow(y_diff, 2.0));
    return distance;
}

double Point::distance(Point &p1, Point &p2)
{
    double x_diff = p1.getX() - p2.getX();
    double y_diff = p1.getY() - p2.getY();
    double distance = sqrt(pow(x_diff, 2.0) + pow(y_diff, 2.0));
    return distance;
}
