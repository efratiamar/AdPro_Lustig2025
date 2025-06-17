#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;




bool isA(char num) { return num == 'A'; }

int main2()
{

	int* p;
	p = new int;

	int x = 9;
	p = &x;
	*p = 5;

	list<char> numbers;

	numbers.push_back('4');
	numbers.push_back('1');
	numbers.push_back('7');
	numbers.push_back('4');
	numbers.push_back('2');
	numbers.push_back('5');

	list<char>::iterator found =
		find_if(numbers.begin(), numbers.end(), isA);

	if (found == numbers.end())
		cout << "No value is odd\n";
	else
		cout << "value exists: " << *found << "\n"; // value exists: 1
}


int main1()
{
	vector<int> v1;
	v1.push_back(7);
	v1.push_back(37);
	v1.push_back(71);
	v1.pop_back();

	//v1.sort();

	

	for (int i = 0; i < v1.size(); i++)
		cout << v1[i];

	vector<int>::iterator it1; //int* p

	for (it1 = v1.begin(); it1 != v1.end(); it1++)
		cout << *it1;

	it1 = v1.begin();
	v1.erase(it1, it1 + 5);

	list<int> ls1;
	ls1.push_back(5);
	ls1.push_front(6);
	//...

	ls1.sort();

	list<int> ls2;
	//...


	list<int>::iterator it2;

	for (it2 = ls1.begin(); it2 != ls1.end(); it2++)
		cout << *it2;

	for (it2 = ls2.begin(); it2 != ls2.end(); it2++)
		cout << *it2;



}