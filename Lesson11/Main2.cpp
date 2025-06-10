#include <iostream>
using namespace std;

#include <vector>

int main()
{
	vector<int> v1;

	v1.push_back(12);
	v1.push_back(13);//12,13
	cout << v1.size(); //2
	v1.pop_back();//12

	vector<int> v2(5);
	cout << v2.size(); //5

	vector<char> cv2(5, 'x');



}