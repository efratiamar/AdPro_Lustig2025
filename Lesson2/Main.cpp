//main.cpp
#include "Rational.h"
#include "Vector.h"

int main()
{
	Rational a(10, 20);
	Rational b(a);
	Rational c = a;
	c = a;

	Rational d;
	d = a;

	cout << a.equal(b);
	a.reduce();
	a.mult(b);
	cout << a.equal(b);
}