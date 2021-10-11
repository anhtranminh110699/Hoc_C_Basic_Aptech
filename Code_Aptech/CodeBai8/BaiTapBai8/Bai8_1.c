#include <stdio.h>

#define MAX 20

int max(int[],int);
int min(int[],int);

void main()
{
	int a[MAX];
	int i,n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Nhap phan tu thu %d cua mang: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("Phan tu lon nhat trong mang: %d.\n",max(a,n));
	printf("Phan tu nho nhat trong mang: %d.\n",min(a,n));
}

int max(int a[],int n)
{
	int i,amax;
	amax = a[0];
	for (i=0;i<n;i++)
	{
		if (amax<a[i])
			amax = a[i];
	}
	return amax;
}

int min(int a[],int n)
{
	int i, amin;
	amin = a[0];
	for (i=0;i<n;i++)
	{
		if (amin>a[i])
			amin = a[i];
	}
	return amin;
}