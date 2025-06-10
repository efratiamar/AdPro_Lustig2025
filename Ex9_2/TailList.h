#pragma once

#include "List.h"

class TailList : public List
{
	Link* tail;

public:
	TailList();
	~TailList();

	void addFirst(int val); //override
	void removeFirst(); //override
	void clear();//override

	void addLast(int value); //new method

};