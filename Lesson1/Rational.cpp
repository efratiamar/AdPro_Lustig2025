//Rational.cpp
#include"Rational.h"
void Rational::setNumerator(int x)
{
	numerator = x;
}

void Rational::setDenominator(int y)
{
	if (y)
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
	cout << numerator << "/" << denominator << '\n';
}

void Rational::multiply(Rational  num)
{
	numerator *= num.numerator;
	denominator *= num.denominator;
}

void Rational::reduce()
{
	int d = gcd();
	numerator /= d;
	denominator /= d;
}

int Rational::gcd()
{
	int x = numerator < denominator ? numerator : denominator;
	for (; x >= 1; x--)
		if (numerator % x == 0 && denominator % x == 0)
			return x;
}