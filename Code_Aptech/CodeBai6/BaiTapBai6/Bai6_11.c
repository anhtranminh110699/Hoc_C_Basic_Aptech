#include <stdio.h>

void main()
{
	int i,j,n,m;
	printf("Nhap chieu dai hinh chu nhat: ");
	scanf("%d",&m);
	printf("Nhap chieu rong hinh chu nhat: ");
	scanf("%d",&n);
	/*i=0;
	j=0;
	while(i++<n)
	{
		while(j++<m)
		{
			if (i==1||i==n)
			{
				printf("* ");
			}
			else
			{
				if(j==1||j==m)
					printf("* ");
				else
					printf("  ");
			}
			//j++;
		}
		//i++;
		printf("\n");
	}*/ //??? sao khong dung duoc while.
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=m;j++)
		{
			if (i==1||i==n)
			{
				printf("* ");
			}
			else
			{
				if(j==1||j==m)
					printf("* ");
				else
					printf("  ");
			}
		}
		printf("\n");
	}
}