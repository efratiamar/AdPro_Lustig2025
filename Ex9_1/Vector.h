#pragma once
#include <iostream>
using namespace std;

class Vector
{
	int* arr;
	int capacity; //phiyscal size
	int size; //actual members + next empty place
public:
	Vector(int _cap = 10);
	Vector(const Vector& v); //copy ctor
	Vector(Vector&& v); //move ctor
	~Vector();

	int getSize() const;
	bool isEmpty() const;

	void addLast(int k);

	int lastValue() const;
	int removeLast();
	void clear();
	int at(int i) const;
	void print() const;
	void sort();

	friend ostream& operator<<(ostream& os, const Vector& v2);
};