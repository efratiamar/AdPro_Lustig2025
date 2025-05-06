#pragma once
#include<iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;
public:
    Point(int _x = 0, int _y = 0);
    bool operator!=(Point p);
    
    friend ostream& operator<<(ostream& os, Point p);
    friend istream& operator>>(istream& is, Point& p);

    friend int sample10();
    friend int sample11();
        
    friend class Circle;
};
