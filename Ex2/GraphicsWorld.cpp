#include <iostream>
#include "GraphicsWorld.h"
#include "Point.h"
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
using namespace std;

void GraphicsWorld::run()
{
    // //=================================== PART 1 ====================================
    cout << "\nThis program has been written by: Thanmayee Mudigonda and Sourabh Mokhasi.";
    cout << "\nSubmitted on April 20, 2020.\n";
    cout << "\nTesting Functions in class Point:" << endl;
    Point m(6, 8);
    Point n(6, 8);
    n.setX(9);
    m.display();
    n.display();
    double distance = m.distance(n);
    double static_distance = Point::distance(m, n);
    cout << "Distance between m and n: " << distance << endl;
    cout << "Distance between m and n calculated with a static method: " << static_distance << endl;
    cout << "The number of Point objects constructed are: " << m.counter() << endl;
    
    // cout << "\nTesting Functions in class Square:" << endl;
    // Square s(5, 7, 12, "SQUARE -S");
    // s.display();
    // cout << "the area of " << s.getName() << " is: " << s.area() << "\n";
    // cout << "the perimeter of " << s.getName() << " is: " << s.perimeter() << "\n";

    // cout << "\nTesting Functions in class Rectangle:" << endl;
    // Rectangle a(5, 7, 12, 15, "RECTANGLE A");
    // a.display();
    // Rectangle b(16, 7, 8, 9, "RECTANGLE B");
    // b.display();
    // cout << "the area of " << a.getName() << " is: " << a.area() << "\n";
    // cout << "the perimeter of " << a.getName() << " is: " << a.perimeter() << "\n";
    // double d = a.distance(b);
    // cout << "\nThe distance between two rectangles is: " << d;
    // cout << "\nTesting copy constructor in class Rectangle:" << endl;
    // Rectangle rec1 = a;
    // rec1.display();

    // cout << "\nTesting assignment operator in class Rectangle:" << endl;
    // Rectangle rec2(3, 4, 11, 7, "RECTANGLE rec2");
    // rec2 = a;
    // rec2.display();
    // cout << "\nTesting Functions in class Circle:" << endl;
    // Circle c(3, 5, 9, "CIRCLE C");
    // c.display();
    // cout << "the area of " << c.getName() << " is: " << c.area() << endl;
    // cout << "the perimeter of " << c.getName() << " is: " << c.perimeter() << endl;
    // d = a.distance(c);
    // cout << "\nThe distance between rectangle a and circle c is: " << d;
}