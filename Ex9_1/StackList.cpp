#include "StackList.h"

void StackList::push(int value)
{
	data.addFirst(value);
}

int StackList::pop()
{
	try
	{
		int f = data.firstElement();
		data.removeFirst();
		return f;
	}
	catch (...)
	{
		throw "Underflow - Stack is empty!";
	}
}

int StackList::top() const
{
	try
	{
		return data.firstElement();
	}
	catch (...)
	{
		throw "Underflow - Stack is empty!";
	}
}

bool StackList::isEmpty() const
{
	return data.isEmpty();
}

void StackList::clear()
{
	data.clear();
}


