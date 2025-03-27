#pragma once
#include "Point.h"

const double PI = 3.14;

class Circle
{
	Point center;
	float radius;
public:

	//Circle() : radius(1), center(0, 0) {}; //ctor
	Circle(float r = 1, float x = 0, float y = 0); //ctor
	Circle(const Circle& _c); //copy ctor

	void setRadius(float _r) { radius = _r; }
	float getRadius() const { return radius; }

	void setCenter(float x, float y)
	{
		center.setX(x);
		center.setY(y);
	}
	Point getCenter() const { return center; }

	float getArea() const {	return PI * radius * radius; }

	float getPerimeter() const { return 2 * PI * radius; }

	int onInOut(const Point& p) const;

};

