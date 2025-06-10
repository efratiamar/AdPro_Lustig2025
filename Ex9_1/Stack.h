#pragma once

class Stack
{
public:
	virtual void push(int value) = 0;
	virtual int pop() = 0;
	virtual int top() const = 0;
	virtual bool isEmpty() const = 0;
	virtual void clear() = 0;
};