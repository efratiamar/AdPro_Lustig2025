#pragma once
#include <iostream>
using namespace std;

class Vector
{
private:
    int numbers[10];
public:
    Vector();
    int add();
    void add(int);
    void add(int, int);
    void print() const;
};
