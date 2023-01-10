#pragma once
#include "Rectangle.h"
class Box{
	
private:
	Rectangle front;
	Rectangle back;
	Rectangle right;
	Rectangle left;
	Rectangle bottom;
	Rectangle top;
	char outline;	
public:
	Box(int w, int h, int d, char o);
	void grow();
	void shrink();
	void draw();
	// void getWidth();
};