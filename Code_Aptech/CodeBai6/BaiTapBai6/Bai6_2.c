#include <stdio.h>

void main()
{
	int i,n,a,s;
	a=0;
	s=0;
	printf("Nhap n so nguyen: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		a = i*i*i;
		s = s + a;
	}
	printf("Tong bac 3 n so nguyen dau tien la:%d.\n",s);
}