//main.cpp
#include"Rational.h"
int main()
{
	Rational  num1, num2;

	num1.setNumerator(4);
	num1.setDenominator(8);
	cout << "num1 = "; 
	num1.print();

	num2.setNumerator(3);
	num2.setDenominator(4);
	cout << "num2 = ";
	num2.print();

	num1.reduce();
	cout << "After reduce: num1 = ";
	num1.print();

	num1.multiply(num2);
	cout << "After multiply num1 = ";
	num1.print();

	return 0;
}

/*
num1 = 4/8
num2 = 3/4
After reduce: num1 = 1/2
After multiply num1 = 3/8
*/