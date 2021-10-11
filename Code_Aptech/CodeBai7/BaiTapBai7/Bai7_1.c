#include <stdio.h>

int tinhgiaithua(int);

void main()
{
	int n;
	printf("Nhap n de tinh gia thua cua n: ");
	scanf("%d",&n);
	printf("Giai thua cua n la: %d.\n",tinhgiaithua(n));
}

int tinhgiaithua(int m)
{
	int i, gt = 1;
	for (i=1;i<=m;i++)
	{
		gt *= i;
	}
	return gt;
}