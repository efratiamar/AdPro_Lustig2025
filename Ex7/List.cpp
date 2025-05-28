#include "List.h"

List::Link::Link(int k, Link* n) : key(k), next(n)
{}

List::List() 
{
	head = nullptr;
}

List::List(const List& l)
{
	Link* src, * trg;
	if (l.head == nullptr)
		head = nullptr;
	else
	{
		head = new Link((l.head)->key, nullptr);
		src = l.head;
		trg = head;
		while (src->next != nullptr)
		{
			trg->next = new Link
			((src->next)->key, nullptr);
			src = src->next;
			trg = trg->next;
		}
	}
}


List::~List()
{
	clear();
}

bool List::isEmpty()
{
	return head == nullptr;
}

void List::addFirst(int value)
{
	Link* pNew = new Link(value, head);
	head = pNew;

	//head = new Link(value, head);
}

void List::removeFirst()
{
	if (isEmpty())
		throw "List empty, no Elements to remove";

	Link* pFirst = head;
	head = pFirst->next;	
	delete pFirst;
}

int List::firstElement()
{
	if (isEmpty())
		throw "List empty, no Elements to return";

	return head->key;
}

bool List::search(const int& value)
{
	Link* p = head;
	while (p != nullptr)
	{
		if (p->key == value)
			return true;
		p = p->next;
	}

	return false;
}

void List::clear()
{	
	while (!isEmpty())
	{
		removeFirst();
	}
}
