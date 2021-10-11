#include <stdio.h>

#define MAX 20

int lon(int [], int);

//int a[MAX];

void main()
{
	int a[MAX], i, num;
	i = 0;
	do
	{
		printf("Nhap phan tu thu %d cua mang: ",i+1);
		scanf("%d",&a[i]);
	} while(a[i++]!=0);
	i--;
	num = lon(a,i);
	printf("Phan tu lon nhat cua mang la: %d.\n", num);
}

int lon(int a[],int n)
{
	int i,max;
	max = a[0];
	for (i=0;i<n;i++)
	{
		if (max<a[i])
			max = a[i];
	}
	return max;
}