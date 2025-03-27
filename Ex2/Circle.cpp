#include "Circle.h"

Circle::Circle(float r, float x, float y)
	: radius(r), center(x, y)
{
	//option 1
	//center.setX(x);
	//center.setY(y);

	//option 2
	//setCenter(x, y);
}

Circle::Circle(const Circle& _c)
{
	//option 1
	radius = _c.radius; //_c.getRadius();
	center.setX(_c.center.getX());
	center.setY(_c.center.getY());

	//option 2
	//radius = _c.radius; //_c.getRadius();
	//setCenter(_c.center.getX(), _c.center.getY());

	//option 3
	//(*this) = _c;
};

int Circle::onInOut(const Point& p) const
{
	float dis = center.distance(p);

	if (dis > radius)
		return 1;

	if (dis < radius)
		return -1;

	return 0;
}
