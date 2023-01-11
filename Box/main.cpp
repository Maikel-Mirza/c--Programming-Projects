#include <stdio.h>
#include "Box.h"



int main(void){
	Box bx = Box(10, 10, 10, '*');
	bx.draw();
	bx.grow();
	bx.draw();
	bx.shrink();
	bx.shrink();
	bx.draw();
	return 0;
 }
