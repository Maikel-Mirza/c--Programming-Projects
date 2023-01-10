#pragma once

class Rectangle{
	public:
	static const int W_MIN = 3;
	static const int W_MAX = 40;
	static const int H_MIN = 3;
	static const int H_MAX = 15;
	
	private:
	int width;
	int height;
	char outline;
	
	public:
	Rectangle();
	Rectangle(int w, int h, char ol);
	int getWidth();
	int getHeight();
	void grow();
	void shrink();
	void draw();
	void static help();
	
	private:
	void drawTop();
	void drawMiddle();
	void drawBottom();
	
};