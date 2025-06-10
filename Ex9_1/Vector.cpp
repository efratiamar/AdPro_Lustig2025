#include "Vector.h"
#include <iostream>
using namespace std;


Vector::Vector(int _cap)
	:capacity(_cap), size(0)
{
	arr = new int[_cap];
}

Vector::Vector(const Vector& v)
{
	capacity = v.capacity;
	size = v.size;
	arr = new int[capacity];
	for (int i = 0; i < size; i++)
	{
		arr[i] = v.arr[i];
	}
}

Vector::Vector(Vector&& v)
{
	capacity = v.capacity;
	size = v.size;
	arr = v.arr;
	v.arr = nullptr;
}



Vector::~Vector()
{
	if (arr) //!!!
		delete[] arr;
	arr = nullptr;
}

int Vector::getSize() const
{
	return size;
}

bool Vector::isEmpty() const
{
	return 0 == size;
}

void Vector::addLast(int k)
{
	if (size < capacity)
		arr[size++] = k;
	else
		throw "Vector is full";
}

int Vector::lastValue() const
{
	if (size != 0 && size < capacity)
		return arr[size - 1];
	else
		throw "Vector is empty";

}

int Vector::removeLast()
{
	if (size != 0)
		return arr[--size];
	else
		throw "vector is Empty!";
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
		cout << arr[i] << " ";
	cout << endl;
}

void Vector::sort()
{
	int i, j;
	for (i = 1; i < size; i++)
	{
		int tmp = arr[i];
		for (j = i; j > 0 && tmp < arr[j - 1]; j--)
			arr[j] = arr[j - 1];
		arr[j] = tmp;
	}
}

ostream& operator<<(ostream& os, const Vector& v2)
{
	for (int i = 0; i < v2.size; i++)
		os << v2.arr[i] << " ";
	return os;
}
