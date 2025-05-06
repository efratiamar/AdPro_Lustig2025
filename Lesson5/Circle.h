 //Circle.h
#pragma once

#include "Point.h"
class Circle
{
private:
    int radius;
    Point center;
public:
    double area();
    double perimeter();
    int onInOut(Point p);
    friend ostream& operator<<(ostream& os, Circle c);
    friend istream& operator>>(istream& is, Circle& c);
};
