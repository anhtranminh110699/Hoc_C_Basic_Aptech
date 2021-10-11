#include <stdio.h>

int tinhtong(int);

void main()
{
	int m;
	printf("Nhap m de tinh tong tu 1 den m: ");
	scanf("%d",&m);
	printf("Tong tu 1 den %d la: %d.\n",m,tinhtong(m));
	//tinhtong(m);
}

int tinhtong(int n)
{
	int i, s = 0;
	for (i=1;i<=n;i++)
		s +=i;
	//printf("Tong tu 1 den %d la: %d.\n",n,s);
	return s;
}