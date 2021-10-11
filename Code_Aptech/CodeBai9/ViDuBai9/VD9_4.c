#include <stdio.h>

#define SIZE 4

void add(int*,int,int);

void main()
{
	int a[SIZE];
	int j=0, x = 10;
	do
	{
		printf("Nhap phan tu thu %d cua mang: ",j+1);
		scanf("%d",&a[j]);
		j++;
	} while (j<SIZE);
	add(a,SIZE,x);
	for (j=0;j<SIZE;j++)
	{
		printf("%d\n",*(a+j));
	}
}

void add(int *ptr, int num,  int b)
{
	int i;
	for (i=0;i<num;i++)
	{
		*(ptr++) += b;
	}
}