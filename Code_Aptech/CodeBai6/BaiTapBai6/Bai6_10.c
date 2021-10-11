#include <stdio.h>

void main()
{
	int i,j,n;
	printf("Nhap canh cua tam giac can: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
		{
			if (i==1||i==2||i==n)
			{
				printf("* ");
			}
			else
			{
				if (j==1 || j==i)
					printf("* ");
				else
					printf("  ");
			}
		}
		printf("\n");
	}
}