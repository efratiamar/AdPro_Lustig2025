//main.cpp
#include "Rational.h"
#include "Vector.h"
#include "Rect.h"

int main()
{

	Rect rec1(5,7);
	rec1.length = 6;

	Rect rec2;

	Rect rec3(4);

	rec1.printArea();



	//Rational  num1, num2;
	//num1.print(); // 1/1
	//num2.print(); // 1/1

	//num1.setNumerator(3);
	//num1.setDenominator(6);
	//num1.print(); // 3/6
	//num2.print(); // 1/1

	Rational num3(4, 8);
	num3.print();

	Vector vec;
	cout << "add(): " << vec.add() << endl;
	vec.add(3);
	cout << "add(3): ";      vec.print();
	vec.add(2, 5);
	cout << "add(2,5): ";   vec.print();
	
}