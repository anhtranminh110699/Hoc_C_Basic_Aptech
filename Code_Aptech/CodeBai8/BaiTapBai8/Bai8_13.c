#include <stdio.h>
#include <curses.h>

#define MAX 20

void kiemtradoixung(char[],int);

void main()
{
	char chuoi[MAX];
	int i,n=0;
	puts("Nhap chuoi: ");
	gets(chuoi);
	for (i=0;i<MAX;i++)
	{
		n += 1;
		if (chuoi[i] == '\0')
			break;
	}
	printf("%d ky tu ca null.\n",n);
	kiemtradoixung(chuoi,n);
}

void kiemtradoixung(char a[],int n)
{
	int i,j;
	int tam = 0;
	for (i=0;i<(n-1);i++) //bo ki tu null.
	{
		for (j=(n-2);j>=0;j--)
		{
			if (a[i] == a[j])
			{
				tam += 1;
			}
			else
				tam = 0;
		}
	}
	if (tam != 0)
		printf("Chuoi doi xung\n");
	else
		printf("Chuoi ko doi xung\n");
}