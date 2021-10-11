#include <stdio.h>

void main()
{
	int i,dem,n;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	/*for(i=2;i<=n;i++)
	{
		for(j=2;j<=i;j++)
		{
			if ((i%j)!=0)
				s = s + 0;
			else
				s = s + 1;
		}
		if (s==0)
		{
			printf("%d la so nguyen to, thuoc cac phan tu tich thua so nguyen to.\n",i);
			n=n/i;
		}
	}*/
	//ko can quan tam chat che nhu tren, vi so do co the chia cho nhieu lan chu so 2.
	for (i=2;i<=n;i++)
	{
		dem = 0;
		while(n%i == 0)
		{
			++dem;
			n/=i;
		}
		if(dem)
		{
			if(dem>1)
				printf("%d^%d",i,dem);
			else
				printf("%d",i);
			if(n>i)
			{
				printf(" * ");
			}
		}
	}
	printf("\n");
}