#include <stdio.h>

#define MAX 20

int input(int []);
int max(int [],int);

void main()
{
	int a[MAX], b[MAX], c[MAX];
	int numa, numb, numc;
	printf("Nhap so lieu mang a: \n");
	numa = max(a,input(a));
	printf("Nhap so lieu mang b: \n");
	numb = max(b,input(b));
	printf("Nhap so lieu mang c: \n");
	numc = max(c,input(c));
	printf("Gia tri lon nhat lan luot cua cac mang a, b, c la: %d, %d, %d.\n",numa,numb,numc);
}

int input(int a[])
{
	int i;
	i=0;
	do
	{
		printf("Nhap phan tu thu %d cua mang: ",i+1);
		scanf("%d",&a[i]);
	} while(a[i++]!=0);
	i--;
	return i;
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
	//printf("Phan tu lon nhat: %d.\n",amax);
	return amax;
}