#include "List.h"

List::Link::Link(int k, Link* n) : key(k), next(n)
{
}

List::List()
{
	head = nullptr;
}

List::List(const List& ls)
{
	List temp;
	Link* p1 = ls.head;
	while (p1 != nullptr)
	{
		temp.addFirst(p1->key);
	}

	Link* p2 = temp.head;
	while (p2 != nullptr)
	{
		addFirst(p2->key);
	}

}

List::~List()
{
	clear();
}

bool List::isEmpty() const
{
	return head == nullptr;
}

void List::addFirst(int val)
{
	Link* pNew = new Link(val, head);
	head = pNew;

	//head = new Link(val, head);
}

void List::removeFirst()
{
	if (isEmpty())
		throw "cannot remove from empty list";

	Link* p = head;
	head = head->next;
	delete p;
}

int List::firstElement() const
{
	if (isEmpty())
		throw "cannot return value from empty list";
	return head->key;
}

bool List::search(const int& value) const
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
		removeFirst();
}

