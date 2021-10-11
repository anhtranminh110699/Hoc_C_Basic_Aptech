#include <stdio.h>

long tinhtong(int);

void main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("tong cua %d so nguyen duong dau tien la %ld.\n",n,tinhtong(n));
}

long tinhtong(int n)
{
	int i;
	if(n == 0)
	{
		return n;
	}
	else
	{
		return n + tinhtong(n-1);
	}
}