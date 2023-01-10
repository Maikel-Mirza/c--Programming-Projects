#include <stdio.h>
#include "Box.h"

Box::Box(int width, int height, int depth, char o):
		front(width, height, o),
		back(width, height, o),
		right(depth, height, o),
		left(depth, height, o),
		top(width, depth, o),
		bottom(width, depth, o),
		outline(o){

}

void Box::grow(){
	front.grow();
	back.grow();
	right.grow();
	left.grow();
	bottom.grow();
	top.grow();
	}
	
void Box::shrink(){
	front.shrink();
	back.shrink();
	right.shrink();
	left.shrink();
	bottom.shrink();
	top.shrink();
	}
	

void Box::draw(){
	printf("Depth -> %d\n", right.getWidth());
	front.draw();
	}