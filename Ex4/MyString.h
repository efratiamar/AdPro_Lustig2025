#pragma once

class MyString
{
	int len;
	char* str;
public:
	MyString(const char* _str = nullptr); //ctor
	MyString(const MyString& ms);
	MyString(MyString&& ms);
	~MyString();

	char* getString() const;
	int length() const;
	void print() const;

	MyString& operator=(const MyString& ms);
	MyString& operator=(MyString&& ms);
	bool operator==(const MyString& ms) const;
	bool operator!=(const MyString& ms) const;
	bool operator<(const MyString& ms) const;
	bool operator<=(const MyString& ms) const;
	bool operator>(const MyString& ms) const;
	bool operator>=(const MyString& ms) const;
	MyString operator+(const MyString& ms) const;
	MyString operator*(int n) const;



};
