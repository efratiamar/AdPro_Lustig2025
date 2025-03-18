#include <iostream>
using namespace std;
#include "Rect.h"

int main()
{
	Rect r1;
	r1.setWidth(10.7);
	cout << r1.getWidth();

	//r1.height = 5;
	//r1.width = 10;
	//cout << r1.height << endl;
	//cout << r1.width << endl;
	
	
	r1.printArea();

	cout << "Hello World" << endl;
}