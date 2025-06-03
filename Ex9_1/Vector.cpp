#pragma once
#include "Vector.h"

int Vector::getCapacity() const
{
	return capacity;
}

Vector::Vector(int _cap)
	: capacity(_cap), size(0)
{
	numbers = new int[capacity];
	if (!numbers)
		throw "fail allocating Vector";
}

//copy ctor
Vector::Vector(const Vector& v2)
{
	capacity = v2.getCapacity();
	size = v2.getSize();

	numbers = new int[capacity];
	for (int i = 0; i < size; i++)
		numbers[i] = v2.numbers[i];
}

//move ctor
Vector::Vector(Vector&& v2)
{
	capacity = v2.getCapacity();
	size = v2.getSize();

	numbers = v2.numbers;
	v2.numbers = nullptr;
}

Vector::~Vector()
{
	if (numbers)
		delete[] numbers;
	numbers = nullptr;
}


int Vector::getSize() const
{
	return size;
}

bool Vector::isEmpty() const
{
	return size == 0;
}

void Vector::addLast(int k)
{
	if (size == capacity)
		throw "Vector is full";
	else
		numbers[size++] = k;
}

int Vector::lastValue()
{
	if (!isEmpty())
		return numbers[size - 1];
	else
		throw "Vector is empty";
}

int Vector::removeLast()
{
	if (!isEmpty())
		return numbers[--size];
	else
		throw "Vector is empty";
}

void Vector::clear()
{
	size = 0;
}

int Vector::at(int i) const
{
	if (i < size && i >= 0)
	{
		return numbers[i];
	}
	else
		throw "Index is out of range";

}

void Vector::print() const
{
	for (int i = 0; i < size; i++)
		cout << numbers[i] << " ";
	cout << endl;
}


