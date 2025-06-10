#include "QueueList.h"

void QueueList::enqueue(int value)
{
	data.addLast(value);
}

int QueueList::dequeue()
{
	try
	{
		int f = data.firstElement();
		data.removeFirst();
		return f;
	}
	catch (...)
	{
		throw "Underflow - cannot dequeqe from an empty queue";
	}

}

int QueueList::front() const
{
	try
	{
		return data.firstElement();
	}
	catch (...)
	{
		throw "Underflow - cannot dequeqe from an empty queue";
	}
}

bool QueueList::isEmpty() const
{
	return data.isEmpty()
}

void QueueList::clear()
{
	data.clear();
}
