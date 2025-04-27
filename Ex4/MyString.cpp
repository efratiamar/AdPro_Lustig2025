#include "MyString.h"
#include <cstring>
#include <iostream>
using namespace std;

MyString::MyString(const char* _str)
{	
	len = strlen(_str);
	if (len)
	{
		str = new char[len + 1];
		strcpy(str, _str);
	}
	else
		str = nullptr;
}

MyString::MyString(const MyString& ms)
{
	len = ms.len;
	if (len)
	{
		str = new char[len + 1];
		strcpy(str, ms.str);
	}
	else
		str = nullptr;
}

MyString::MyString(MyString&& ms)
{
	len = ms.len;
	str = ms.str; //steal
	ms.str = nullptr;//!!!!!
}

MyString::~MyString()
{
	if (str)//!!!!!
		delete[] str;
}


char* MyString::getString() const
{
	return str;
}

int MyString::length() const
{
	return len;
}

void MyString::print() const
{
	for (int i = 0; i < len; i++)
		cout << str[i];
	cout << endl;
}

MyString& MyString::operator=(const MyString& ms)
{
	len = ms.len;
	
	if (str)
		delete[] str;

	if (ms.str)
	{
		str = new char[len + 1];
		strcpy(str, ms.str);
	}
	else
		str = nullptr;

	return *this;

}

MyString& MyString::operator=(MyString&& ms)
{
	len = ms.len;

	if (str)
		delete[] str;

	if (ms.str)
	{
		str =  ms.str;
		ms.str = nullptr; //!!!!!
	}
	else
		str = nullptr;

	return *this;
}

bool MyString::operator==(const MyString& ms) const
{
	return (len == ms.len && strcmp(str, ms.str) == 0);
}

bool MyString::operator!=(const MyString& ms) const
{
	//return !(len == ms.len && strcmp(str, ms.str) == 0);
	return !(*this == ms);
}

bool MyString::operator<(const MyString& ms) const
{
	return (strcmp(str, ms.str) < 0);
}

bool MyString::operator<=(const MyString& ms) const
{
	return (strcmp(str, ms.str) <= 0);
}

bool MyString::operator>(const MyString& ms) const
{
	return (strcmp(str, ms.str) > 0);
}
bool MyString::operator>=(const MyString& ms) const
{
	return (strcmp(str, ms.str) >= 0);
}

MyString MyString::operator+(const MyString& ms) const
{
	char* s = new char(len + ms.len + 1);
	strcat(s, str);
	strcat(s, ms.str);

	MyString t(s);
	return t;
}

MyString MyString::operator*(int n) const
{
	char* s = new char(len*n + 1);
	for (int i = 0; i < n; i++)
		strcat(s, str);
	
	MyString t(s);
	return t;
}

MyString func()
{
	MyString t("QWE");
	//...
	return t;
}

int main()
{
	MyString ms1("abc defg");

	MyString ms2(ms1); //copy ctor

	MyString ms3("124 twetgew");
	ms3 = ms1; //assign op

	ms3 = ms1 = ms2; //assign op

	MyString ms4 = func(); //move ctor

	ms4 = func(); //move assign op

	if (ms1 == ms2)
	{

	}

	if (ms1 < ms2)
	{

	}

	ms1 = ms2 + ms3;

	ms1 = ms2 * 5;


	string s1 = "efrat amar";
	s1.at(3); //a
	s1[0] = 'E';// Efrat amar

	const char* p = s1.c_str();


}
