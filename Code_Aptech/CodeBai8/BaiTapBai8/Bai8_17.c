#include <stdio.h>
#include <curses.h>

#define MAX 20

void lietke(char [],int,char []);

void main()
{
	int i,n;
	char danhsach[n];
	char ten[MAX];
	printf("Nhap so ten trong danh sach: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		gets(ten);
		puts(ten);
	}
	lietke(danhsach,n,ten);
}

void lietke(char a[],int n,char b[])
{
	int le,tran,ly,i,j,m=MAX;

	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			printf("%c",b[j]);
			if (b[j] == ' ')
				break;

		}
		a[i] = b;
		printf("\n");
		if (a[i] == "Le")
			le += 1;
		else if (a[i] == "Tran")
			tran += 1;
		else
			ly += 1;
	}
	if (le == 0)
		printf("Khong co nguoi nao thuoc ho Le.\n");
	else
		printf("Co %d nguoi co ho Le.\n",le);
	if (tran == 0)
		printf("Khong co nguoi nao thuoc ho Tran.\n");
	else
		printf("Co %d nguoi co ho Tran.\n",tran);
	if (ly == 0)
		printf("Khong co nguoi nao thuoc ho Ly.\n");
	else
		printf("Co %d nguoi co ho Ly.\n",ly);
}

// ???