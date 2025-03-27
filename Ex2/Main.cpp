#include "Point.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main()
{
	Point p1;
	p1.setX(3);
	p1.setY(4);


	Point p2;
	p2.setX(5);
	p2.setY(-6);

	Point p3(4, 8);
	//p3.setX(7);

	cout << p1.distance(p2);
	cout << p2.distance(p1);

	Circle c4(4, 6, 5); 
	Circle c3(4, 5);
	Circle c2(1);
	Circle c1;

	c1.setRadius(7.5);
	c1.setCenter(4, 3.2);

	c4 = c3;
	
	Circle c5(c3);
	Circle c6 = c3;

	if (c1.onInOut(p2) == 1)
		cout <<"Out";


}