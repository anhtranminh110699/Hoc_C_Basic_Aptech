#include <stdio.h>

void main()
{
	int i,j,a,b;
	printf("Nhap chieu dai hinh chu nhat: ");
	scanf("%d",&a);
	printf("Nhap chieu rong hinh chu nhat: ");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		for(j=1;j<=a;j++)
			printf("*");
		printf("\n");
	}
}