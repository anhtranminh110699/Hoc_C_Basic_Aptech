#include <stdio.h>

void thamtri(int x, int y)
{
	x +=1;
	y +=1;
}

void thambien(int *x, int *y)
{
	*x += 1;
	*y += 1;
}

void main()
{
	int a,b;
	a = 5;
	b = 5;
	//thambien(&a,&b);
	//printf("a = %d, b = %d.\n",a,b); //neu viet ve nay truoc a va b se tro thanh 6,6.
	thamtri(a,b);
	printf("a = %d, b = %d.\n",a,b);
	thambien(&a,&b);
	printf("a = %d, b = %d.\n",a,b);
}