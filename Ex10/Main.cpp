#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Person
{
private:
	bool married; //is have married or not
	string name;
public:
	Person(string _name, bool _married) :
		name(_name), married(_married)
	{
	};
	bool getmarried() { return married; };
	string getname() { return name; };

	void print() { cout << name << endl; };

	bool operator<(const Person& s2) const
	{
		return (name < s2.name);
	}

};


int main()
{
	vector<int> v1;
	cout << v1.size(); //0
	cout << v1.capacity(); //??

	v1.push_back(45);
	v1.push_back(32); //45, 32
	v1.pop_back(); //45
	v1.push_back(6);
	v1.push_back(7);

	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << endl;

	vector<int>::iterator it;  //pointer

	for (it = v1.begin(); it != v1.end(); it++)
		cout << *it << endl;

	cout << v1.front();

	v1[0] = 6; //6
	v1[1] = 7; //6,7

	vector<char> v2(5); // '\0','\0', '\0', '\0', '\0'
	v2.push_back('#'); //\0,\0,\0,\0,\0, '#'
	v2[1] = '*';//\0,'*',\0,\0,\0, '#'

	vector<char>::iterator it2;  //pointer

	for (it2 = v2.begin(); it2 != v2.end(); it2++)
		cout << *it2 << endl;



	vector<float> v3(3, '7.8'); //7.8, 7.8, 7.8
	
	list<int> ls1;

	ls1.push_back(1); //1
	ls1.push_front(5); //5, 1
	ls1.pop_back();
	ls1.pop_front();

	ls1.sort();

	list<int>::iterator it3;  //pointer

	for (it3 = ls1.begin(); it3 != ls1.end(); it3++)
		cout << *it3 << endl;


	list<Person> ls2;

	Person p1("A", true);
	ls2.push_back(p1);

	Person p2("B", false);
	ls2.push_back(p2);

	list<Person>::iterator it4;
	for (it4 = ls2.begin(); it4 != ls2.end(); it4++)
		if ((*it4).getmarried())
			(*it4).print();
	
	ls2.sort();

	list<Person*> ls3;

	ls3.push_back(&p1);

	Person* p = new Person("C", true);
	ls3.push_front(p);


	list<Person*>::iterator it5;
	for (it5 = ls3.begin(); it5 != ls3.end(); it5++)
		if ((*it5)->getmarried())
			(*it5)->print();




}