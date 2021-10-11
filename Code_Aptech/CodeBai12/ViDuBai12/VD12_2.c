#include <stdio.h>

long fibonaci(long);

void main()
{
	int n;
	printf("Nhap so n: ");
	scanf("%ld",&n);
	printf("fibonaci(%ld)=%ld.\n",n,fibonaci(n));
}

long fibonaci(long n)
{
	if (n == 0 || n == 1)
	{
		return n;
	}
	else
	{
		return fibonaci(n-1)+fibonaci(n-2);
	}
}