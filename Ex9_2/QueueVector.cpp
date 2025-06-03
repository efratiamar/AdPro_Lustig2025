#include "QueueVector.h"


QueueVector::QueueVector(int max) : data(max)
{}

// implement Queue protocol
void QueueVector::clear()
{
	data.clear();
}

int QueueVector::dequeue()
{
	try
	{
		return data.removeFirst();
	}
	catch (...)
	{
		throw "cannot remove from empty Q";
	}
}

void QueueVector::enqueue(int value)
{
	try
	{
		data.addNext(value);
	}
	catch (...)
	{
		throw "cannot add to full Q";
	}
}
int QueueVector::front()
{

	try
	{
		data.firstValue();
	}
	catch (...)
	{
		throw "cannot get val from empty Q";
	}
}

bool QueueVector::isEmpty() const
{
	return data.isEmpty();
}














//#include "QueueVector.h"
//
////== class QueueVector implementation==
//
//QueueVector::QueueVector(int size)
//	:data(size)
//{
//	// no further initialization
//}
//QueueVector::QueueVector(
//	const QueueVector& Q)
//	:data(Q.data)
//{}
//
//void QueueVector::clear()
//{
//	data.clear();
//}
//
//int QueueVector::dequeue()
//{
//	// can not dequeue from an empty queue
//	if (isEmpty())
//		throw "Queue is empty\n";
//	int val = data.firstValue();
//	data.removeFirst();
//	return val;
//}
//
//void QueueVector::enqueue(int val)
//{
//	try
//	{
//		data.addNext(val);
//	}
//	catch (const char* msg)
//	{
//		throw "the Queue is full\n";
//	}
//}
//
//int QueueVector::front()
//{
//	if (isEmpty())
//		throw "Queue is empty\n";
//	return data.firstValue();
//}
//
//bool QueueVector::isEmpty() const
//{
//	return data.isEmpty();
//}
