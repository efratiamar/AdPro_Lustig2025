#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class A
{
	char* str1;
public:
	A(const char* str)
	{
		cout << "A constructor\n";
		str1 = new char[strlen(str) + 1];
		strcpy(str1, str);
	}

	virtual ~A()
	{
		cout << "A destructor\n";
		if (str1)
			delete str1;;
	}
};

class B :public A
{
	char* str2;
public:
	B(const char* str) :A(str)
	{
		cout << "B constructor\n";
		str2 = new char[strlen(str) + 1];
		strcpy(str2, str);
	}

	~B()
	{
		cout << "B destructor\n";
		if (str2)
			delete str2;
	}
};
