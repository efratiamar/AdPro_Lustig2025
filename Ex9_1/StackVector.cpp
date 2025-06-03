#include "StackVector.h"
//-------------------------------------
//  class StackVector implementation
//-------------------------------------

StackVector::StackVector(int capacity)
    : data(capacity), Stack()
{}

void StackVector::clear()
{
    data.clear();
}
bool StackVector::isEmpty() const
{
    return data.isEmpty();
}
int StackVector::pop()
{
    try
    {
        data.removeLast();
    }
    catch (...)
    {
        throw "underflow - cannot remove from empty Stack\n";
    }

}
void StackVector::push(int value)
{
    try
    {
        data.addLast(value);
    }
    catch (...)
    {
        throw "overflow - Stack is full!";
    }
}

int StackVector::top()
{
    try
    {
        data.lastValue();
    }
    catch (...)
    {
        throw "underflow - cannot show an empty Stack\n";
    }
}



/*
StackVector::StackVector(int capacity)
    : data(capacity)
{
    // create and initialize a Stack 
//based on Vectors
}

StackVector::StackVector(const
    StackVector& s)
    : data(s.data)
{}


void StackVector::clear()
{
    // clear all elements from Stack, 
    // by setting index to bottom of Stack
    data.clear();
}

bool StackVector::isEmpty() const
{
    return data.isEmpty();
}

int StackVector::pop()
{
    // return and remove the top most 
    //element in the Stack
    if (isEmpty()) throw "Stack is empty";
    return data.removeLast();
}

void StackVector::push(int val)
{
    // push new value onto Stack
    data.addLast(val);
}

int StackVector::top()
{
    // return the topmost element in Stack
    if (isEmpty()) throw "Stack is empty";
    return data.at(data.getSize() - 1);
}
*/