#include "StackList.h"

StackList::StackList() : 
	data(), Stack()
{
}


// Stack operations
void StackList::clear()
{
	data.clear();
}

bool StackList::isEmpty() const
{
	return data.isEmpty();
}

int StackList::pop()
{
	try
	{
		int f = data.firstElement();
		data.removeFirst();
		return f;
	}
	catch (...)
	{
		throw "underflow - cannot remove from empty Stack\n";
	}

}

void StackList::push(int value) 
{
	data.add(value);
}

int StackList::top()
{

	try
	{
		return data.firstElement();
	}
	catch (...)
	{
		throw "underflow - cannot show an empty Stack\n";
	}
}














//#include "StackList.h"
////--------------------------------
////  class StackList implementation
////--------------------------------
//StackList::StackList() : data()
//{
//    // create and initialize a 
//    // Stack based on Lists
//}
//
//StackList::StackList(const
//    StackList& lst)
//    : data(lst.data)
//{    /* copy constructor*/
//}
//
//void StackList::clear()
//{
//    // clear all elements from Stack, 
//    //by delete all values from List
//    data.clear();
//}
//
//bool StackList::isEmpty() const
//{
//    return data.isEmpty();
//}
//
//int StackList::pop()
//{
//    // return and remove the top most
//    // element in the Stack
//    // get first element in List
//    int result = data.firstElement();
//    // remove element from List
//    data.removeFirst();
//    // return value
//    return result;
//}
//
//void StackList::push(int val)
//{
//    // push new value onto Stack
//    data.add(val);
//}
//
//int StackList::top()
//{
//    return data.firstElement();
//}
