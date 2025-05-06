
#include "MyString.h"
#include <iostream>
using namespace std; 

MyString func()
{
	MyString t("QWE");
	//...
	return t;
}

ostream& operator<<(ostream& os, const MyString& ms)
{
	os << ms.str;
	return os;
}

istream& operator>>(istream& is, MyString& ms)
{
	//option 1
	//char s[100];
	//is >> s;
	//MyString t(s);
	//ms = t;
	//return is;

	//option 2
	string s;
	is >> s;
	MyString t(s.c_str());
	ms = t;
	return is;

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


	cin >> ms3;
	MyString ms6;
	cin >> ms6;



	cout << ms1 << "---" << ms2;



	string s1 = "efrat amar";
	s1.at(3); //a
	s1[0] = 'E';// Efrat amar

	const char* p = s1.c_str();




}