#include <stdio.h>
#include "FilledRectangle.h"

int main(void){
	printf("This is a Rectangle\n");
	Rectangle r(3, 4, '-');
	r.draw();
	printf("This is a Filled Rectangle\n");
	FilledRectangle fr = FilledRectangle(10, 10, '-', '.');
	fr.draw();
	return 0;
}