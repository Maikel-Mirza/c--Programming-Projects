#include <stdio.h>
#include "FilledRectangle.h"

int main(void){
	printf("This is a Rectangle\n");
	Rectangle* ptr = new Rectangle(3, 4, '-');
	ptr->draw();
	delete ptr;
	printf("This is a Filled Rectangle\n");
	ptr = new FilledRectangle(10, 10, '-', '.');
	ptr->draw();
	delete ptr;
	return 0;
}