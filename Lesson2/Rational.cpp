//Rational.cpp
#include "Rational.h"

Rational::Rational(int x, int y)
    :numerator(x), denominator(y)
{
    cout << "assign and default ctor\n";
}

Rational::Rational(const Rational& p)
{
    cout << "copy ctor\n";
    numerator = p.getNumerator();
    denominator = p.getDenominator();
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

void Rational::mult(const Rational& r2)
{
    numerator *= r2.numerator;
    denominator *= r2.denominator;
}

bool Rational::equal(Rational r2)
{	
    reduce();
    r2.reduce();
    return getNumerator() == r2.getNumerator() &&
        getDenominator() == r2.getDenominator();
}

void Rational::print()
{
    cout << numerator << '/' << denominator;
}

