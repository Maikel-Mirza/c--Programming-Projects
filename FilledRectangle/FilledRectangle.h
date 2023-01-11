#pragma once
#include "Rectangle.h"

class FilledRectangle : public Rectangle{
	private:
	char fill;
	public:
	FilledRectangle(int w, int h, char o, char f);
	void draw();
	void drawMiddle();
};