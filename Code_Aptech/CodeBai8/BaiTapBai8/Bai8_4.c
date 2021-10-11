#include <stdio.h>
#include <curses.h>

#define MAX 50

void tachkhoangtrang(char []);

void main()
{
	char chuoi[MAX];
	printf("Nhap chuoi ky tu: ");
	gets(chuoi);
	tachkhoangtrang(chuoi);
}

void tachkhoangtrang(char chuoi[])
{
	int i,n;
	n=MAX;
	printf("Chuoi su khi tach khoang trang: \n");
	for (i=0;i<n;i++)
	{
		if (chuoi[i] == ' ')
			continue;
		else
			printf("%c",chuoi[i]);
		if (chuoi[i] == '\0')
			break;
	}
	printf("\n");
}