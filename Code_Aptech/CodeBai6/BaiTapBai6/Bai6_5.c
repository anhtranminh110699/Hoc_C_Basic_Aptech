#include <stdio.h>

void main()
{
	int n;
	float i;
	float s=0;
	printf("Nhap n so nguyen dau tien: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s += (1/i);
	}
	printf("Tong nghich dao cua n so nguyen dau tien la: %f\n",s);
}