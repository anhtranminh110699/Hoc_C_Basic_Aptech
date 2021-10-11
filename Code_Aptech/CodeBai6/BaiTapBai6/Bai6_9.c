#include <stdio.h>

void main()
{
	int a,b,i,j,min,ucmax,bcmin;
	ucmax = 0;
	//bcmin = a*b;
	printf("Nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Nhap so thu hai: ");
	scanf("%d",&b);
	bcmin=a*b; //sau khi da khai bao a va b.
	/*for (i=1;i<=a;i++)
	{
		for (j=1;j<=b;j++)
		{
			if(((a%i)==0) && ((b%j)==0))
			{
				printf("%d la mot uoc chung cua a %d va b %d.\n",i,a,b);
				if (ucmax<i)
					ucmax = i;
				else
					continue;
			}
		}
	}
	printf("%d la Uoc chung lon nhat cua a %d va b%d.\n",ucmax,a,b);
	for (i=1;;i++)
	{
		for (j=1;;j++)
		{
			if ((a*i) == (b*j))
			{
				bcmin = (a*i);
				printf("%d la Boi chung nho nhat cua a %d va b %d.\n",bcmin,a,b);
				break;
			}
		}
	}*/ //sai
	min = a;
	if (min > b)
		min = b;
	for (i=1;i<=min;i++)
	{
		if(((a%i)==0) && ((b%i)==0))
		{
			printf("%d la mot uoc chung cua a %d va b %d.\n",i,a,b);
			if (ucmax<i)
				ucmax = i;
			else
				continue;
		}
	}
	printf("%d la Uoc chung lon nhat cua a %d va b %d.\n",ucmax,a,b);
	for (i=1;i<=b;i++)
	{
		for (j=1;j<=a;j++)
		{
			if (((a*i)-(b*j)) == 0)
			{
				if (bcmin > (a*i))
				{
					bcmin = a*i;
					// printf("%d la Boi chung nho nhat cua a %d va b %d.\n",bcmin,a,b);
				}
				else
					continue;
				//printf("%d la Boi chung nho nhat cua a %d va b %d.\n",bcmin,a,b);
				// cau lenh printf nay phai dat ngoai if nay vi truong hop bcmin = axb.
				// phai bo else continue vi if ko thuc hien, else thuc hien se quay ve dau vong lap, lenh printf ko duoc thuc hien.
			}
		}
	}
	printf("%d la Boi chung nho nhat cua a %d va b %d.\n",bcmin,a,b);
	// de ntn la toi uu nhat.
}