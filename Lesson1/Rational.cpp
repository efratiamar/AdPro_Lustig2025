//Rational.cpp
#include"Rational.h"

void Rational::setNumerator(int x)
{
	numerator = x;
}

void Rational::setDenominator(int y)
{
	if (y) //!= 0
		denominator = y;
	else
		denominator = 1;
}

int Rational::getNumerator()
{
	return numerator;
}

int Rational::getDenominator()
{
	return denominator;
}

void Rational::print()
{
	cout << numerator << "/" << denominator << '\n'; // 3/4
}

void Rational::multiply(Rational num) //num1.multiply(num2);
{
	numerator *= num.numerator;
	denominator *= num.denominator;
}

void Rational::reduce()
{
	int d = gcd();
	numerator /= d; //numerator = numerator/d;
	denominator /= d;
}

int Rational::gcd()
{
	int x = numerator < denominator ? numerator : denominator;
	for (; x >= 1; x--)
		if (numerator % x == 0 && denominator % x == 0)
			return x;
}