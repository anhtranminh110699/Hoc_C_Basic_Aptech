#include <stdio.h>
#include <curses.h>

#define MAX 20

void tachchu(char []);

void main()
{
	char chuoi[MAX];
	printf("Nhap chuoi: ");
	gets(chuoi);
	tachchu(chuoi);
}

void tachchu(char a[])
{
	printf("Phan tach chuoi ky tu: \n");
	int i,n=MAX;
	for (i=0;i<n;i++)
	{
		printf("%c",a[i]);
		if (a[i] == ' ')
		{
			printf("\n");
		}
		if (a[i] == '\0')
		{
			break;
		}
	}
	printf("\n");
}