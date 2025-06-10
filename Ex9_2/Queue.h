#pragma once

class Queue
{
	virtual void enqueue(int value) = 0;
	virtual int dequeue() = 0;
	virtual int front() const = 0;
	virtual bool isEmpty() const = 0;
	virtual void clear() = 0;
};