#include <stdio.h> //truyen dia chi sang ham.

void init(int*,int*);

void main()
{
	int a = 5, b = 6;
	printf("a = %d, b = %d\n",a,b);
	init(&a,&b);
	printf("a = %d, b = %d\n",a,b);
}

void init(int *x,int *y)
{
	*x +=10;
	*y +=10;
}