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
	//MyClass& operator=(MyClass&& other); //move assignment operator
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

//MyClass& MyClass::operator=(MyClass&& other)
//{
//	if (arr)
//		delete[] arr;
//
//	num = other.num;
//	arr = other.arr;
//	other.arr = nullptr;
//
//	cout << "move assignment op: " << num << endl;
//	return *this;
//}

MyClass::~MyClass()
{
	if (arr)
		delete[] arr;
	arr = nullptr;
	
	cout << "dtor: " << num << endl;
}

MyClass func1(int n)
{
	MyClass mc(n);
	//...
	return mc;
}

void func2(MyClass mc)
{
	//...
}


int main()
{
	cout << "\n ---------------- A ----------------\n";
	MyClass a(1); //ctor
	
	cout << "\n ---------------- B ----------------\n";
	MyClass b = a; //copy ctor
	
	cout << "\n ---------------- C ----------------\n";
	a = func1(3); //ctor, move assignment op, dtor

	cout << "\n ---------------- D ----------------\n";
	a = b; //assignment op

	cout << "\n ---------------- E ----------------\n";
	MyClass c = func1(4); //ctor ???????

	cout << "\n ---------------- F ----------------\n";
	func2(c); //copy ctor, dtor

	cout << "\n ---------------- G ----------------\n";
	try
	{
		throw a;
	}
	catch (MyClass c) //copy ctor, copy ctor, exception, dtor, dtor - why ??????
	{
		cout << "exception" << endl;
	}

	cout << "\n ---------------- H ----------------\n";
	//dtor X 3
}

/*

 ---------------- A ----------------
ctor: 1

 ---------------- B ----------------
copy ctor: 1

 ---------------- C ----------------
ctor: 3
move assignment op: 3
dtor: 3

 ---------------- D ----------------
assignment op: 1

 ---------------- E ----------------
ctor: 4

 ---------------- F ----------------
copy ctor: 1
copy ctor: 1
exception
dtor: 1
dtor: 1

 ---------------- G ----------------
dtor: 4
dtor: 1
dtor: 1
*/