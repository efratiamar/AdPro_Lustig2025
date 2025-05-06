#include "Vector.h"
#include <iostream>
#include <fstream>
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

//////////////////////////////////
ostream& operator<<(ostream& os, const Vector& v)
{
	for (int i = 0; i < v.size; i++)
		os << v.arr[i] << ' ';
	os << endl;
	return os;
}

//main Ex 5
int main()
{
	string fileName;
	cout << "Enter file name: ";
	cin >> fileName;

	ifstream myFile_R;
	myFile_R.open(fileName); //open file for reading

	if (!myFile_R)
	{
		cout << "error opening file " << fileName << " for reading" << endl;
		return -1;
	}

	Vector v(50);
	int i = 0;
	while (!myFile_R.eof() && i++ < 50)
	{
		int num;
		myFile_R >> num;
		v.addLast(num);
	}

	v.sort();

	myFile_R.close();

	ofstream myFile_W;
	myFile_W.open(fileName);

	if (!myFile_W)
	{
		cout << "error opening file " << fileName << " for writing" << endl;
		return -1;
	}

	myFile_W << v;


	myFile_W.close();


}

void mainEx3()
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