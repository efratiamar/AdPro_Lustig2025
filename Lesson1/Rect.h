#pragma once

class Rect
{
	float width;
	float height;
public:
	float getWidth();
	void setWidth(float w);
	float getHeight(); 
	void setHeight(float h);

	void printArea();
	void printPerimeter();
};
