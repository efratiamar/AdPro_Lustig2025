#pragma once

class List
{
	class Link
	{
	//private:
	//	int key;
	//	Link* next;
	//	friend class List;
	public:
		int key;
		Link* next;
		Link(int _k, Link* _n = nullptr);
	};

	Link* head;

public:
	List();	
	List(const List& ls2);
	~List();

	bool isEmpty() const;
	void add(int value);
	void removeFirst();
	int firstElement() const;
	bool search(const int& value) const;
	void clear();
};
