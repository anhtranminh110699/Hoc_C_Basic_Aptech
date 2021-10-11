#include <stdio.h>

void main()
{
	int i,n,s1,s2,s;
	s1 = 1;
	s2 = 1;
	do
	{
		printf("Nhap thu tu thu n cua so hang thu n trong day Fibonaci: ");
		scanf("%d",&n);
	} while(n<=2);
	for(i=3;i<=n;i++)
	{
		s = s1 + s2;
		s1 = s2;
		s2 = s;
	}
	printf("So hang thu %d cua day Fibonaci co gia tri la: %d.\n",n,s);
}