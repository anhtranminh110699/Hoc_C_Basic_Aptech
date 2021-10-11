#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

#define MAX 50

struct solieu
{
	char ten[50];
	char diachi[50];
};

void input(struct solieu [],int);
void output(struct solieu [],int);
void sapxep(struct solieu [],int);

void main()
{
	int n;
	struct solieu sl[MAX];
	printf("Nhap so so lieu can phan tich: ");
	scanf("%d",&n);
	gets();

	input(sl,n);
	output(sl,n);

	sapxep(sl,n);
}

//Ham nhap so lieu
void input(struct solieu sl[MAX],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("Nhap ten: ");
		gets(sl[i].ten);
		printf("Nhap dia chi: ");
		gets(sl[i].diachi);
	}
}

//Ham in ra so lieu
void output(struct solieu sl[MAX],int n)
{
	int i;
	printf("Danh sach truoc khi sap xep: \n");
	printf("        Ten        |   Dia chi   \n\n");
	for (i=0;i<n;i++)
	{
		printf("%19s|%13s\n",sl[i].ten,sl[i].diachi);
	}
}

//Ham xu ly
void sapxep(struct solieu sl[MAX],int n)
{
	int i,j;
	struct solieu tam;
	printf("\n\n\nDanh sach sau khi sap xep: \n");
	printf("        Ten        |   Dia chi   \n\n");
	for (i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			/*if (sl[i].ten[0]>sl[j].ten[0])
			{
				tam = sl[i];
				sl[i] = sl[j];
				sl[j] = tam;
			}*/
			if (strcmp(sl[i].ten,sl[j].ten)>0)
			{
				tam = sl[i];
				sl[i] = sl[j];
				sl[j] = tam;
			}
		}
	}
	for (i=0;i<n;i++)
	{
		printf("%19s|%13s\n",sl[i].ten,sl[i].diachi);
	}
}