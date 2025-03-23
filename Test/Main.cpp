#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <cstring>

class MyClass
{
	int num;
	char* arr;
public:
	MyClass(int n);
	MyClass(const MyClass& other); //copy ctor
	MyClass(MyClass&& other); //move ctor
	MyClass& operator=(const MyClass& other); //assignment operator
	MyClass& operator=(MyClass&& other); //move assignment operator
	~MyClass();
};

MyClass::MyClass(int n) 
	: num (n)
{
	arr = new char[100];
	strcpy(arr, "Hello");

	cout << "ctor: " << num << endl;
}

MyClass::MyClass(const MyClass& other)
{
	num = other.num;
	if (other.arr == nullptr)
		arr = nullptr;
	else
	{
		arr = new char[strlen(other.arr) + 1];
		strcpy(arr, other.arr);
	}
	cout << "copy ctor: " << num << endl;
}

MyClass::MyClass(MyClass&& other)
{
	num = other.num;
	arr = other.arr;
	other.arr = nullptr;
	cout << "move ctor: " << num << endl;
}

MyClass& MyClass::operator=(const MyClass& other)
{
	if (arr)
		delete[] arr;
	
	num = other.num;
	if (other.arr == nullptr)
		arr = nullptr;
	else
	{
		arr = new char[strlen(other.arr) + 1];
		strcpy(arr, other.arr);
	}
	cout << "assignment op: " << num << endl;
	return *this;
}

MyClass& MyClass::operator=(MyClass&& other)
{
	if (arr)
		delete[] arr;

	num = other.num;
	arr = other.arr;
	other.arr = nullptr;

	cout << "move assignment op: " << num << endl;
	return *this;
}

MyClass::~MyClass()
{
	if (arr)
		delete[] arr;
	arr = nullptr;
	
	cout << "dtor: " << num << endl;
}

MyClass func(int n)
{
	MyClass mc(n);
	// …
	return mc;
}

int main()
{
	cout << "1 ----------------" << endl;

	MyClass a(1); //ctor
	cout << "2 ----------------" << endl;

	MyClass b(a); //copy ctor
	cout << "3 ----------------" << endl;

	MyClass c(move(a)); //move ctor
	cout << "4 ----------------" << endl;

	MyClass d = a; //copy ctor
	cout << "5 ----------------" << endl;

	MyClass e = move(a); //move ctor
	cout << "6 ----------------" << endl;

	a = func(3); //ctor, move assignment op, dtor
	cout << "7 ----------------" << endl;

	a = b; //assignment op
	cout << "8 ----------------" << endl;

	MyClass f = func(4); //ctor ???????
	cout << "9 ----------------" << endl;

	try
	{
		throw a;
	}
	catch (MyClass c) //copy ctor X 2 , dtor X 2- why ??????
	{
		cout << "Caught an exception" << endl;
	}
	cout << "10 ----------------" << endl;

	//dtor X 5
}

/*
1 ----------------
ctor: 1
2 ----------------
copy ctor: 1
3 ----------------
move ctor: 1
4 ----------------
copy ctor: 1
5 ----------------
move ctor: 1
6 ----------------
ctor: 3
move assignment op: 3
dtor: 3
7 ----------------
assignment op: 1
8 ----------------
ctor: 4
9 ----------------
copy ctor: 1
copy ctor: 1
Caught an exception
dtor: 1
dtor: 1
10 ----------------
dtor: 4
dtor: 1
dtor: 1
dtor: 1
dtor: 1
dtor: 1

*/