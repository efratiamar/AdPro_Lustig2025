#include "QueueVector.h"

void QueueVector::enqueue(int value)
{
	try
	{
		data.addNext(value);
	}
	catch (...)
	{
		throw "Overflow - cannot enqueqe to a full queue";
	}
}

int QueueVector::dequeue()
{
	try
	{
		return data.removeFirst();
	}
	catch (...)
	{
		throw "Underflow - cannot dequeqe from an empty queue";
	}

}

int QueueVector::front() const
{
	try
	{
		return data.firstValue();
	}
	catch (...)
	{
		throw "Underflow - cannot dequeqe from an empty queue";
	}
}

bool QueueVector::isEmpty() const
{
	return data.isEmpty()
}

void QueueVector::clear()
{
	data.clear();
}
