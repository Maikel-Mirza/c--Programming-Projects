#include <stdio.h>
#include "Rectangle.h"



int main(void){
	Rectangle::help();
	Rectangle recOne(10, 8, '|');
	Rectangle recTwo = Rectangle();
	

	recOne.draw();
	recOne.grow();
	recOne.draw();
	recTwo.draw();
	recTwo.shrink();
	recTwo.draw();
 	return 0;
}