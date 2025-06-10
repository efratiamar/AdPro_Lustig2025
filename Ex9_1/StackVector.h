#pragma once
#include "Stack.h"
#include "Vector.h"

class StackVector : public Stack
{
public:
	void push(int value) override final;
	int pop() override final;
	int top() const override final;
	bool isEmpty() const override final;
	void clear()  override final;

	StackVector(int _cap) : data(_cap) {};

private:
	Vector data;
};