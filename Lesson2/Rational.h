#pragma once
#include <iostream>
using namespace std;

class Rational
{
private:
	int numerator = 1;
	int denominator = 1;
public:

	Rational(int n, int d) : numerator(n), denominator(d)
	{
		numerator = 6;
		denominator = 7;
	}

	void setNumerator(int x)
	{
		numerator = x;
	}
	void setDenominator(int y)
	{
		denominator = y;
	}

	void print()
	{
		cout << numerator << '/' << denominator << '\n';
	}
};