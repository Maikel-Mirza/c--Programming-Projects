#include <stdio.h>
#include "Rectangle.h"

Rectangle::Rectangle(){ // default constructor
	height = 3;
	width = 3;
	outline = '*';
}
Rectangle::Rectangle(int w, int h, char o){
	if(w < W_MIN) w = W_MIN;
	if(w > W_MAX) w = W_MAX;
	if(h < H_MIN) h = H_MIN;
	if(h > H_MAX) h = H_MAX;
	width = w;
	height = h;
	outline = o;
}

int Rectangle::getWidth(){
	return width;
}

int Rectangle::getHeight(){
	return height;
}

void Rectangle::grow(){
	if(width < W_MAX) width++;
	if(height < H_MAX) height++;
}

void Rectangle::shrink(){
	if(width > W_MIN) width--;
	if(height > H_MIN) height--;
	}
	
void Rectangle::draw(){
	drawTop();
	drawMiddle();
	drawBottom();
	}
	
void Rectangle::help(){
	printf("Class 'Rectangle' allows us to create, manipulate and "
	"draw Rectangles on console window.\n");
	printf("Rectangles Width must be between %d and %d.\n", W_MIN, W_MAX);
	printf("Rectangles Height must be between %d and %d.\n", H_MIN, H_MAX);
}

void Rectangle::drawTop(){
	int w;
	for(w = 0; w < width; w++){
		printf("%c", outline);
	}
	printf("\n");
	
}
void Rectangle::drawMiddle(){
	int h, w;
	for(h = 1; h < height -1; h++){
		printf("%c", outline);
		for(w = 1; w < width - 1; w++){
			printf(" ");
		}
		printf("%c\n", outline);
	}
}
void Rectangle::drawBottom(){
	int w;
	for(w = 0; w < width; w++){
		printf("%c", outline);
	}
	printf("\n");
}