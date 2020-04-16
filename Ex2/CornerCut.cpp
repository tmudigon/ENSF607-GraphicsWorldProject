#include <iostream>
#include "CornerCut.h"
#include "cmath"
using namespace std;

CornerCut::CornerCut(double x,double y,double width, double length, double radius, char *name):Circle(x,y,radius,name),Rectangle(x,y,length,width,name), Shape(x,y,name)
{
    if(checkRadiusLessThanWidth){
        cout << "Error! Radius must be less than or equal to width" << endl;
    }
}

bool CornerCut::checkRadiusLessThanWidth() const{
    if(Circle::getRadius() > Rectangle::getSideB()){
        return true;
    }
    return false;
}

double CornerCut::area() const{
    return Rectangle::area() - (Circle::area()/4) ;
}

double CornerCut::perimeter() const{
    return abs((2*Circle::getRadius()) - (Circle::perimeter()/4) - Rectangle::perimeter());
}

//Reference:
//https://stackoverflow.com/questions/137282/how-can-i-avoid-the-diamond-of-death-when-using-multiple-inheritance
void CornerCut::display(){
    cout << "CornerCut Name: " << endl;
    Shape::display();
}