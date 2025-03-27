#pragma once
#include <iostream>
using namespace std;

class  Rect
{
public:
    int length;
    int width;

    void printArea()
    {
        cout << length * width;
    };

    Rect();
    Rect(int l, int w=7);


};



