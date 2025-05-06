#pragma once

#include <iostream>
using namespace std;

class Vector
{
	int* arr;
	int capacity; //physical size
	int size; //actual size, the first empty place on the vector

public:
	Vector(int _cap = 10);
	Vector(const Vector& v);
	Vector(Vector&& v);
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

	friend ostream& operator<<(ostream& os, const Vector& v);
};




