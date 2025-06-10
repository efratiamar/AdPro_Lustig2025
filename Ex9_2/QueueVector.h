#pragma once
#include "Queue.h"
#include "RoundVector.h"

class QueueVector : public Queue
{
public:
	void enqueue(int value) override final;
	int dequeue()  override final;
	int front() const  override final;
	bool isEmpty() const  override final;
	void clear()  override final;

	QueueVector(int _cap) : data(_cap) {};
private:
	RoundVector data;
};