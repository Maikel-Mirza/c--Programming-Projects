#include <stdio.h>
#include "FilledRectangle.h"

FilledRectangle::FilledRectangle(int w, int h, char o, char f) : Rectangle(w,h,o){
	fill = f;
}

void FilledRectangle::draw(){
	Rectangle::drawTop();
	drawMiddle();
	Rectangle::drawBottom();
}

void FilledRectangle::drawMiddle(){
		for(int y = 1; y < Rectangle::getHeight() - 1; y++){
			printf("%c", Rectangle::getOutline());
			for(int x = 1; x < Rectangle::getWidth() - 1; x++){
				printf("%c", fill);
			}
			printf("%c\n", Rectangle::getOutline());
		}
}

