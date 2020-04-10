#ifndef POINT_H
#define POINT_H
#include <cstddef>

class Point
{
public:
    Point(double x, double y);
    void display() const;
    double getX() const;
    double getY() const;
    void setX(double value);
    void setY(double value);
    double counter() const;
    double distance(Point &otherPoint) const;
    static double distance(Point &p1, Point &p2);

private:
    static int id;
    double x;
    double y;
};

#endif