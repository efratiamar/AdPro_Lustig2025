#pragma once
#include <iostream>
using namespace std;

class Vector
{
	int* numbers;
	int capacity;
	int size;

	int getCapacity() const;

public:
	Vector(int _cap = 10);
	//copy ctor
	Vector(const Vector& v2);
	//move ctor
	Vector(Vector&& v2);
	~Vector();
	int getSize() const;
	bool isEmpty() const;
	void addLast(int k);
	int lastValue();
	int removeLast();
	void clear();
	int at(int i) const;
	void print() const;
};