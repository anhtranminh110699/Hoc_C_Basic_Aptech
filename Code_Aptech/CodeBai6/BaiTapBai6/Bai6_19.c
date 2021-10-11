#include <stdio.h>

void main()
{
	int i,j,a,b,min,ucln,bcnn;
	ucln = 0;
	//bcnn = a*b;
	printf("Nhap so a: ");
	scanf("%d",&a);
	printf("Nhap so b: ");
	scanf("%d",&b);
	bcnn = a*b;
	min = a;
	if (min>b)
		min = b;
	for (i=1;i<=min;i++)
	{
		if (((min%i)==0)&&((b%i)==0))
		{
			if (ucln<i)
			{
				ucln = i;
			}
		}
	}
	printf("%d la Uoc chung lon nhat cua 2 so %d va %d.\n",ucln,a,b);
	for (i=1;i<=b;i++)
	{
		for(j=1;j<=a;j++)
		{
			if ((a*i)==(b*j))
			{
				if (bcnn > (a*i))
				{
					bcnn = (a*i);
				}
			}
		}
	}
	printf("%d la Boi chung nho nhat cua 2 so %d va %d.\n",bcnn,a,b);	
}