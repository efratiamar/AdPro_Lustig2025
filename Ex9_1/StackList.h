#pragma once
#include "Stack.h"
#include "List.h"

class StackList : public Stack
{
public:
	void push(int value) override final;
	int pop() override final;
	int top() const override final;
	bool isEmpty() const override final;
	void clear()  override final;

	StackList() : data() {};

private:
	List data;
};