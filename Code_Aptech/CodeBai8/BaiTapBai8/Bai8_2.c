#include <stdio.h>

#define MAX 20

void nhodenlon(int [],int);
void londennho(int [],int);
void inout(int [],int);

void main()
{
	int a[MAX];
	int i,n;
	do
	{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d",&n);
	} while(n<=0 || n>20);

	/*for (i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}

	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");*/
	inout(a,n);
	nhodenlon(a,n);
	londennho(a,n);
}

void nhodenlon(int a[],int n)
{
	int tt,i,j;
	for (i=0;i<(n-1);i++)
	{
		for (j=(i+1);j<n;j++)
		{
			if (a[i]>a[j])
			{
				tt = a[i];
				a[i] = a[j];
				a[j] = tt;
			}
		}
	}
	printf("Thu tu sau khi sap xep tu nho den lon la: ");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

void londennho(int a[],int n)
{
	int tt,i,j;
	for (i=0;i<(n-1);i++)
	{
		for (j=(i+1);j<n;j++)
		{
			if (a[i]<a[j])
			{
				tt = a[i];
				a[i] = a[j];
				a[j] = tt;
			}
		}
	}
	printf("Thu tu tu lon den nho la: ");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

void inout(int a[],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}

	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}