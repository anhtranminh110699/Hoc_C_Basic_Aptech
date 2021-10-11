#include <stdio.h>

void main()
{
	int x,y;
	x=5;
	y=6;
	int *px, *py;
	px = &x;
	py = &y;
	printf("x = %d,y = %d\n",x,y);
	*px += 10;
	*py +=10;
	printf("x = %d,y = %d\n",x,y);
}