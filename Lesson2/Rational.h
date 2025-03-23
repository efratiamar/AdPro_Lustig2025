#pragma once
#include <iostream>
using namespace std;

//Rational.h
#include <iostream>
using namespace std;

class Rational
{
private:
    int numerator;
    int denominator;
    int gcd();
public:
    Rational(int x = 1, int y = 1);
    Rational(const Rational& p);
    int getNumerator() const { return numerator; }
    int getDenominator() const { return denominator; }
    void reduce();
    void mult(const Rational& r2);
    bool equal(Rational r2);
    void print();
};