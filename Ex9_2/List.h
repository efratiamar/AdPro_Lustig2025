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
	List(const List& ls);
	~List();

	bool isEmpty() const;
	void addFirst(int val);
	void removeFirst();
	int firstElement() const;
	bool search(const int& value) const;
	void clear();


};
