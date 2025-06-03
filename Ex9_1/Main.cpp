#include "StackVector.h"
#include "StackList.h"

#include <iostream>
using namespace std;

int main()
{
	try
	{
		//Stack s;

		Stack* st;
		char base[7];
		cout << "Do you want a list base or a vector base ? ";
		cin >> base;
		if (!strcmp(base, "vector"))
			st = new StackVector(20);
		else
			st = new StackList();
		for (int i = 0; i <= 20; i++)
			st->push(i);
		while (!st->isEmpty())
			cout << st->pop() << " ";
	}
	catch (const char* str) {
		cout << str;
	}
	return 0;
}
