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
	void setNumerator(int x);
	void setDenominator(int y);
	int getNumerator();
	int getDenominator();
	void print();
	void multiply(Rational num);
	void reduce();
};