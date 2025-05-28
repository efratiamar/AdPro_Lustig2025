#pragma once

class List
{
protected:
	class Link
	{
	public:
		int key;
		Link* next;
		Link(int k, Link* n);
	};

	Link* head;

public:
	List();
	List(const List& ls2);
	virtual ~List();
	bool isEmpty();
	void addFirst(int value);
	void removeFirst();
	int firstElement();
	bool search(const int& value);
	void clear();

};