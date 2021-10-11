#include <stdio.h>

#define MAXm 50
#define MAXn 50

void main()
{
	int a[MAXm][MAXn], i, j, m, n;
	do
	{
		printf("Nhap vao cap ma tran so hang: ");
		scanf("%d",&m);
	} while(m<=0 || m>50);

	do
	{
		printf("Nhap vao cap ma tran so cot: ");
		scanf("%d",&n);
	} while(n<=0 || n>50);

	/*printf("Nhap vao cap ma tran so hang: ");
	scanf("%d",&m);
	printf("Nhap vao cap ma tran so cot: ");
	scanf("%d",&n);*/


	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("Nhap vao phan tu thu [%d][%d]",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}

	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}

	// in ma tran theo thu tu nguoc.
	for (i=m-1;i>=0;i--)
	{
		for (j=n-1;j>=0;j--)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}