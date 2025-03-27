#include "Point.h"

float Point::distance(const Point& p) const
{
	return sqrt(pow(x - p.getX(), 2) + pow(y - p.getY(), 2));
}