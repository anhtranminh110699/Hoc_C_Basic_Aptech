#include <stdio.h>
#include <curses.h>

#define MAX 50

void demkytu(char []);

void main()
{
	char chuoi[MAX];
	printf("Nhap chuoi ky tu: ");
	gets(chuoi);
	demkytu(chuoi);
}

void demkytu(char a[])
{
	int i, n = MAX;
	int dem=0;
	for (i=0;i<n;i++)
	{
		if (a[i] == 't' && a[i+1]=='h')
		{
			dem+=1;
		}
	}
	printf("Trong chuoi co %d ky tu 'th'.\n",dem);
}