#include <stdio.h>
#include <curses.h>

#define MAX 20

void chuyendoi(char []);

void main()
{
	char chuoi[MAX];
	int i;
	puts("Nhap chuoi ky tu: ");
	gets(chuoi);
	chuyendoi(chuoi);
}

void chuyendoi(char a[])
{
	int i,n;
	n = MAX;
	printf("Sau khi chuyen doi chu hoa thanh thuong, thuong thanh hoa: \n");
	for (i=0;i<n;i++)
	{
		if(a[i]>='a' && a[i]<='z')
			a[i] = a[i] - 32;
		else if(a[i]>='A' && a[i]<='Z')
			a[i] = a[i] + 32;
		if (a[i] == '\0')
			break;
		printf("%c",a[i]);
	}
	printf("\n");
}