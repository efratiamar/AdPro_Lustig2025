#include "TailList.h"

TailList::TailList() : List()
{
	tail = nullptr;
}

TailList::~TailList() //the dtor of List will do the clean()
{
	tail = nullptr;
}

void TailList::addFirst(int val)
{
	if (isEmpty())
	{
		List::addFirst(val);
		tail = head;
	}
	else
		List::addFirst(val);

}

void TailList::removeFirst()
{
	List::removeFirst();

	if (isEmpty())
		tail = nullptr;
}

void TailList::clear()
{
	List::clear();
	tail = nullptr;
}

void TailList::addLast(int value)
{
	if (isEmpty())
	{
		List::addFirst(value);
		tail = head;
	}
	else
	{
		Link* p = new Link(value, nullptr);
		tail->next = p;
		tail = p;
	}
}


