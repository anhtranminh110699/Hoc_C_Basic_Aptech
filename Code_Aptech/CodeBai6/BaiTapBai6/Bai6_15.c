#include <stdio.h>

void main()
{
	int i,n,x,s;
	s = 0;
	printf("Nhap bac n cua da thuc: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("Nhap x%d: ",i);
		scanf("%d",&x);
		s += x;
	}
	printf("Tong xn la: %d.\n",s);
}