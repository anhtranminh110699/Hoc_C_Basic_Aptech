#include <stdio.h>
#include <curses.h>

#define MAX 50

void daonguoc(char[]);

void main()
{
	char chuoi[MAX];
	puts("Nhap chuoi ban dau: ");
	gets(chuoi);
	daonguoc(chuoi);
}

void daonguoc(char a[])
{
	int i,j,n=MAX;
	printf("Chuoi sau khi dao nguoc la: ");
	for(i=0;i<n;i++)
	{
		if (a[i] == '\0')
			break;
	}
	for(j=i;j>=0;j--)
	{
		printf("%c",a[j]);
	}
	printf("\n");
}