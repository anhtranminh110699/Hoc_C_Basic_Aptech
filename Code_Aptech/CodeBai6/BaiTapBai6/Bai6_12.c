#include <stdio.h>

void main()
{
	int i,n,s;
	s=0;
	printf("Nhap so nguyen to n: ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if ((n%i)!=0)
			s = s + 0;
		else
			s = s + i;
	}
	if (s==0)
		printf("n %d la so nguyen to.\n",n);
	else
		printf("n %d ko la so nguyen to.\n",n);
}