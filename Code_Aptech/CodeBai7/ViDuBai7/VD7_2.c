#include <stdio.h>

int power(int,int);

int power(int x, int n)
{
	int i,ip;
	ip = 1;
	for (i=0;i<n;i++)
	{
		ip *= x;
	}
	return ip;
}

void main()
{
	printf("2 mu 2 la: %d.\n",power(2,2));
	printf("2 mu 3 la: %d.\n",power(2,3));
}