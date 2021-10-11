#include <stdio.h>

#define MAX 20

int n; //khai bao bien toan cuc.

void input(float[][MAX]);
void output(float[][MAX]);
void add(float[][MAX],float[][MAX],float[][MAX]);
float max(float[][MAX]);

//int n; //khai bao bien toan cuc.

void main()
{
	float a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
	printf("Nhap cap ma tran: ");
	scanf("%d",&n);
	printf("Nhap ma tran a: \n");
	input(a);
	printf("Nhap ma tran b: \n");
	input(b);
	printf("Nhap ma tran c: \n");
	input(c);
	add(a,b,c);
	printf("In ra ma tran a: \n");
	output(a);
	printf("In ra ma tran b: \n");
	output(b);
	printf("In ra ma tran c: \n");
	output(c);
	printf("Phan tu lon nhat cua ma tran c la: %5.2f\n",max(c));
}

void input(float a[][MAX])
{
	for (int i = 0;i<n;i++)
	{
		for (int j = 0;j<n;j++)
		{
			printf("Nhap vao phan tu a[%d][%d]: ",i,j);
			scanf("%f",&a[i][j]);
		}
	}
}

void output(float a[][MAX])
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			printf("%5.2f",a[i][j]);
		}
		printf("\n");
	}
}

void add(float a[][MAX],float b[][MAX], float c[][MAX])
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}

float max(float a[][MAX])
{
	float amax;
	amax = a[0][0];
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (amax < a[i][j])
				amax = a[i][j];
		}
	}
	return amax;
}