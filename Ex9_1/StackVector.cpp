#include "StackVector.h"

void StackVector::push(int value)
{
	try
	{
		data.addLast(value);
	}
	catch (...)
	{
		throw "Overflow - Stack is full!";
	}
}

int StackVector::pop()
{
	try
	{
		return data.removeLast();
	}
	catch (...)
	{
		throw "Underflow - Stack is empty!";
	}
}

int StackVector::top() const
{
	try
	{
		return data.lastValue();
	}
	catch (...)
	{
		throw "Underflow - Stack is empty!";
	}
}

bool StackVector::isEmpty() const
{
	return data.isEmpty();
}

void StackVector::clear()
{
	data.clear();
}


