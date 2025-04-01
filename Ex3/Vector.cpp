#include "Vector.h"
#include <iostream>
using namespace std;

Vector::Vector(int _cap)
{
	cout << "in ctor" << endl;

	capacity = _cap;

	arr = new int[capacity];

	size = 0;
}

Vector::Vector(const Vector& v)
{
	cout << "in copy ctor" << endl;

	capacity = v.capacity; //shallow copy
	size = v.size; //shallow copy
	//arr = v.arr; //not good at all!! aliasing!

	//deep copy
	arr = new int[capacity];
	for (int i = 0; i < size; i++)
		arr[i] = v.arr[i];
}

Vector::Vector(Vector&& v)
{
	cout << "in move ctor" << endl;

	capacity = v.capacity; //shallow copy
	size = v.size; //shallow copy
	arr = v.arr;
	v.arr = nullptr;

}

Vector::~Vector()
{
	cout << "in dtor" << endl;

	if (arr)
		delete[] arr;
	arr = nullptr;
}

int Vector::getSize() const
{
	return size;
}

bool Vector::isEmpty() const
{
	if (size == 0)
		return true;
	return false;
}

void Vector::addLast(int k)
{
	// 1 2 3
	// cap = 3
	// 0 1 2 3
	if (size < capacity)
		arr[size++] = k;
	else
		cout << "Vector is full" << endl;

}

int Vector::lastValue() const
{
	return arr[size-1];
}

int Vector::removeLast()
{
	size--;
	return arr[size];
}

void Vector::clear()
{
	size = 0;
}

int Vector::at(int i) const
{
	return arr[i];
}

void Vector::print() const
{
	for (int i = 0; i < size; i++)
		cout << arr[i];
}

void Vector::sort()
{
	int j;
	for (int i = 0; i < size - 1; i++)
		for (j = size - 1; j > i; j--)
			if (arr[j] < arr[j - 1])
			{
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
}
