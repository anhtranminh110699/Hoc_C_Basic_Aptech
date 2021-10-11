#include <stdio.h>

int fibonaci(int);

void main()
{
	int n;
	printf("Nhap thu tu n trong day fibonaci: ");
	scanf("%d",&n);
	printf("So thu %d trong day fibonaci la so hang: %d.\n",n,fibonaci(n));
}

int fibonaci(int n)
{
	//tim so hang thu n trong day Fibonaci.
	int i,s,s1,s2;
	s1 = 1;
	s2 = 1;
	for (i=3;i<=n;i++)
	{
		s = s1 + s2;
		s1 = s2;
		s2 = s;
	}
	return s;
}