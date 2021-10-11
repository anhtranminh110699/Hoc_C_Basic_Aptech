#include <stdio.h>
#include <curses.h>

#define MAX 50

void demtu(char []);

void main()
{
	char chuoi[MAX];
	printf("Nhap chuoi: ");
	gets(chuoi);
	demtu(chuoi);
}

void demtu(char a[])
{
	int i,n=MAX;
	int dem = 1;
	for (i=0;i<n;i++)
	{
		if(a[i] == ' ')
		{
			dem += 1;
		}
	}
	printf("So tu trong cau la: %d.\n",dem);
}