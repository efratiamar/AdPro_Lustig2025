#include "Vector.h"
#include <iostream>
using namespace std;

Vector func()
{
	Vector a(34); //ctor

	for (int i = 0; i < 15; i++)
	{
		a.addLast(rand() % 100);
	}

	return a;
}


int main()
{

	Vector v3(5); // ctor
	v3.addLast(4);

	Vector v6(v3); //copy ctor

	Vector v7 = v3; //copy ctor

	Vector b = func(); //optimization => ctor

	//ctor a, copy ctor a -> temp, dtor a, copy ctor temp-> b;
	//ctor a



/*
	Vector v1; //new int[10]
	Vector v2(15); //new int[15]

	v1.addLast(88);
	v1.addLast(-4);
	//...

	cout << "The vector contain: " << v1.getSize() << " members" << endl;

	cout << "The vector before sorting:" << endl;
	v1.print();
	v1.sort();
	cout << "The vector after sorting:" << endl;
	v1.print();


	Vector v3(v1); //copy ctor
	Vector v5 = v1; //copy ctor


	Vector v4(34);
	for (int i = 0; i < 15; i++)
	{
		v4.addLast(rand() % 100);
		v4.print();
	}
	while (!v4.isEmpty())
	{
		cout << v4.lastValue() << endl;
		v4.removeLast();
		v4.print();
	}

	*/


}