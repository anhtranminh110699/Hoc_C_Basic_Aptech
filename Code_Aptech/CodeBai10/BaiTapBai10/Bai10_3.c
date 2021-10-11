#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

#define MAX 50

struct team
{
	char name[50];
	int win;
	int fare;
	int lose;
	int value;
};

void input(struct team [],int);
void output(struct team [],int);
int max(struct team [],int);

void main()
{
	int n;
	struct team doi[MAX];
	printf("Nhap so doi bong: ");
	scanf("%d",&n);
	gets();

	input(doi,n);
	output(doi,n);

	printf("\n\n\n");
	printf("So diem so lon nhat tron cac doi: %d. Doi co diem so lon nhat: \n",max(doi,n));
}

// Ham nhap lieu
void input(struct team doi[MAX],int n)
{
	int i;
	char tam[10];
	for (i=0;i<n;i++)
	{
		printf("Nhap ten doi bong: ");
		gets(doi[i].name);

		printf("Nhap so tran thang: ");
		scanf("%d",&doi[i].win);
		printf("Nhap so tran hoa: ");
		scanf("%d",&doi[i].fare);
		printf("Nhap so tran thua: ");
		scanf("%d",&doi[i].lose);
		gets();

		doi[i].value = doi[i].win*3+doi[i].fare*1+doi[i].lose*0;
	}
}

// Ham in ra
void output(struct team doi[MAX],int n)
{
	int i;
	printf("Ten doi bong|Thang|Hoa|Thua|Diem\n\n");
	for (i=0;i<n;i++)
	{
		printf("%12s|%5d|%3d|%4d|%4d\n",doi[i].name,doi[i].win,doi[i].fare,doi[i].lose,doi[i].value);
	}
}

// Ham tim max
int max(struct team doi[MAX],int n)
{
	int i,maxa;
	maxa = doi[0].value;
	for (i=0;i<n;i++)
	{
		if (maxa<doi[i].value)
		{
			maxa = doi[i].value;
		}
	}
	for (i=0;i<n;i++)
	{
		if (doi[i].value == maxa)
		{
			printf("%12s|%5d|%3d|%4d|%4d\n",doi[i].name,doi[i].win,doi[i].fare,doi[i].lose,doi[i].value);
			break;
		}
	}
	return maxa;
}