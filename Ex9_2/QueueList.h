#pragma once
#include "Queue.h"
#include "TailList.h"

class QueueList : public Queue
{
public:
	void enqueue(int value) override final;
	int dequeue()  override final;
	int front() const  override final;
	bool isEmpty() const  override final;
	void clear()  override final;

private:
	TailList data;
};