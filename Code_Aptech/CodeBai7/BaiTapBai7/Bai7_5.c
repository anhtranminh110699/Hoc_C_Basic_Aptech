#include <stdio.h>

void solonnhat(int,int);

void main()
{
	int x,y;
	printf("Nhap x: ");
	scanf("%d",&x);
	printf("Nhap y: ");
	scanf("%d",&y);
	solonnhat(x,y);
}

void solonnhat(int a, int b)
{
	int imax;
	imax = a;
	if (imax < b)
		imax = b;
	printf("So lon nhat trong 2 so %d va %d la: %d.\n",a,b,imax);
}