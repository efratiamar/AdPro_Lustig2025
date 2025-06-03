#include "List.h"

List::Link::Link(int _k, Link* _n) 
	: key(_k), next(_n)
{};

List::List() : head(nullptr) {};

List::List(const List& ls2)
{
	if (ls2.isEmpty())
	{
		head = nullptr;
		return;
	}

	Link * ptr2 = ls2.head;
	Link* ptr1 = head;

	ptr1 = new Link(ptr2->key);
	head = ptr1;
	ptr2 = ptr2->next;

	while (ptr2 != nullptr)
	{
		ptr1->next = new Link(ptr2->key);
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
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

void List::add(int value)
{
	//Link* ptr = new Link(value);
	//ptr->next = head;
	//head = ptr;

	head = new Link(value, head);
}

void List::removeFirst()
{
	if (isEmpty())
		throw "underflow - cannot remove from empty list\n";

	Link* ptr = head;
	head = head->next;
	if (ptr)
		delete ptr;
}

int List::firstElement() const
{
	if (isEmpty())
		throw "underflow - cannot get first value of empty list\n";

	return head->key;
}

bool List::search(const int& value) const
{
	Link* ptr = head;
	while (ptr != nullptr)
	{
		if (ptr->key == value)
			return true;
		ptr = ptr->next;
	}
	return false;
}

void List::clear()
{
	while (!isEmpty())
		removeFirst();
}

