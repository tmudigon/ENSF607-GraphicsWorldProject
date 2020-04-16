#include <iostream>
#include "GraphicsWorld.h"
#include "Point.h"
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "CornerCut.h"
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

    // cout << "\nTesting Functions in class Shape:" << endl;
    // char shape1Name[] = "SHAPE1";
    // Shape shape1(10, 5, shape1Name);
    // shape1.display();
    // cout << "\nTestingn shape getOrigin method:" << endl;
    // shape1.getOrigin().display();

    // char shape2Name[] = "SHAPE2";
    // Shape shape2(8, 3, shape2Name);
    // cout << "Distance between shape 1 and shape 2: " << shape2.distance(shape1) << endl;
    // cout << "Static distance between shape 1 and shape 2: " << Shape::distance(shape1, shape2) << endl;
    // cout << "Moving shape 1 one unit to the left and one unit up:" << endl;
    // shape1.move(-1, 1);
    // shape1.display();

    cout << "\nTesting Functions in class Square:" << endl;
    char square1Name[] = "SQUARE -S";
    Square s(5, 7, 12, square1Name);
    s.display();
    cout << "the area of " << s.getName() << " is: " << s.area() << "\n";
    cout << "the perimeter of " << s.getName() << " is: " << s.perimeter() << "\n";

    cout << "\nTesting Functions in class Rectangle:" << endl;
    char recAName[] = "RECTANGLE A";
    Rectangle a(5, 7, 12, 15, recAName);
    a.display();
    char recBName[] = "RECTANGLE B";
    Rectangle b(16, 7, 8, 9, recBName);
    b.display();
    cout << "the area of " << a.getName() << " is: " << a.area() << "\n";
    cout << "the perimeter of " << a.getName() << " is: " << a.perimeter() << "\n";
    double d = a.distance(b);
    cout << "\nThe distance between two rectangles is: " << d;

    cout << "\nTesting copy constructor in class Rectangle:" << endl;
    Rectangle rec1 = a;
    rec1.display();

    cout << "\nTesting assignment operator in class Rectangle:" << endl;
    char rec2Name[] = "RECTANGLE rec2";
    Rectangle rec2(3, 4, 11, 7, rec2Name);
    // rec2.display();
    rec2 = a;
    rec2.display();

    cout << "\nTesting Functions in class Circle:" << endl;
    char cName[] = "CIRCLE C";
    Circle c(3, 5, 9, cName);
    c.display();
    cout << "the area of " << c.getName() << " is: " << c.area() << endl;
    cout << "the perimeter of " << c.getName() << " is: " << c.perimeter() << endl;
    d = a.distance(c);
    cout << "\nThe distance between rectangle a and circle c is: " << d;

    // =================================== PART 2 =============================================
    char cornerCutName[] = "CornerCut rc";
    CornerCut rc(6, 5, 10, 12, 9, cornerCutName);
    rc.display();
    cout << "the area of " << rc.getName() << " is: " << rc.area();
    cout << "the perimeter of " << rc.getName() << " is: " << rc.perimeter();
    d = rc.distance(c);
    cout << "\nThe distance between rc and c is: " << d;
    
    // Using array of Shape pointers:
    cout << "PART 2" << endl;
    cout << endl;
    Shape *sh[4];
    sh[0] = &s;
    sh[1] = &a;
    sh[2] = &c;
    sh[3] = &rc;
    sh[0]->display();
    cout << "\nthe area of " << sh[0]->getName() << "is: " << sh[0]->area();
    cout << "\nthe perimeter of " << sh[0]->getName() << " is: " << sh[0]->perimeter();
    sh[1]->display();
    cout << "\nthe area of " << sh[1]->getName() << "is: " << sh[1]->area();
    cout << "\nthe perimeter of " << sh[0]->getName() << " is: " << sh[1]->perimeter();
    sh[2]->display();
    cout << "\nthe area of " << sh[2]->getName() << "is: " << sh[2]->area();
    cout << "\nthe circumference of " << sh[2]->getName() << " is: " << sh[2]->perimeter();
    sh[3]->display();
    cout << "\nthe area of " << sh[3]->getName() << "is: " << sh[3]->area();
    cout << "\nthe perimeter of " << sh[3]->getName() << " is: " << sh[3]->perimeter();
    cout << "\nTesting copy constructor in class CornerCut:" << endl;
    CornerCut cc = rc;
    cc.display();
    cout << "\nTesting assignment operator in class CornerCut:" << endl;
    char cornerCutName2[] = "CornerCut rc2";
    CornerCut cc2(2, 5, 100, 12, 3, cornerCutName2);
    cc2.display();
    cc2 = cc;
    cc2.display();
    cout << "CC Radius: " << cc.getRadius() << endl;
    cout << "CC2 Radius: " << cc2.getRadius() << endl;
    // ADD ADDITIONAL CODE TO TEST MORE FEATRUES, IF NEEDED
}