#include <stdio.h>

void main()
{
	int i,n,x,a,an,ai;
	printf("Nhap bac n cua da thuc: ");
	scanf("%d",&n);
	printf("Nhap x: ");
	scanf("%d",&x);
	printf("Nhap a%d: ",n);
	scanf("%d",&an);
	for (i=(n-1);i>=0;i--)
	{
		printf("Nhap a%d: ",i);
		scanf("%d",&ai);
		a = (an*x)+ai;
		an = a;
	}
	printf("Tong da thuc la: %d.\n",a);
}