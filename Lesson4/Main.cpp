#include <iostream>
using namespace std;

#include "Rational.h"

int main()
{
	//Rect r1(5, 2);
	//Rect r2;
	//r2 = r1; //ok!
	//if (r2 == r1) { /*...*/ }; //compilation error

    Rational a(2, 3), b(1, 9);

    bool c1 = a == b;

    bool c2 = a.operator== (b);

    if (a != b)
    {

    }

    Rational c;

    c = a + b;

    cout << c.getMone()
        << "/" << c.getMechane();  //21/27


    Rational e(6, 7);
    c = a + b + e;


    Rational r1(2, 4);
    Rational r2(r1);
    Rational r3(3, 4);


    r1 += r2;


    r1 += r2 += r3;

    r1 = r2;
    r1 = r2 = r3;

}
