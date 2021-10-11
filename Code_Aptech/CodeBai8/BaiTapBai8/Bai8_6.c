#include <stdio.h>
#include <curses.h>

#define MAX 50

void titlecase(char []);

void main()
{
	char chuoi[MAX];
	puts("Nhap vao chuoi: ");
	gets(chuoi);
	titlecase(chuoi);
}

void titlecase(char a[])
{
	int i,n = MAX;
	printf("Day sau khi chuyen doi: ");
	a[0] = a[0] - 32;
	printf("%c",a[0]);
	for (i=1;i<n;i++)
	{
		if(a[i-1] == ' ')
			a[i] = a[i] - 32;
		if(a[i] == '\0')
			break;
		printf("%c",a[i]);
	}
	printf("\n");
}