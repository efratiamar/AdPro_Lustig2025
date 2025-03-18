#include <iostream>
using namespace std;

#include "Rect.h"

void Rect::printArea()
{
	cout << width * height << endl;
}

void Rect::printPerimeter()
{
	cout << 2 * (width + height) << endl;
}

float Rect::getWidth()
{
	return width;
}
void Rect::setWidth(float w)
{
	width = w;
}

float Rect::getHeight()
{
	return height;
}

void Rect::setHeight(float h)
{
	height = h;
}

