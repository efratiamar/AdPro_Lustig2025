#pragma once
#include "Stack.h"         
#include "Vector.h"    //targil 3
//--------------------------------
//  class StackVector
//  Stack implemented using Vector
//--------------------------------

class StackVector : public Stack
{
public:
	StackVector(int capacity);
	
	void clear() override;
	bool isEmpty() const override;
	int pop() override;
	void push(int value) override;
	int top() override;

	
private:
	Vector data;
};


/*
class StackVector : public Stack
{
public:
	// constructor requires size
	StackVector(int capacity);
	StackVector(const StackVector& s);

	// Stack operations
	void clear() override;
	bool isEmpty() const override;
	int pop() override;
	void push(int value) override;
	int top()override;

protected:
	// data fields
	Vector data;
};
*/