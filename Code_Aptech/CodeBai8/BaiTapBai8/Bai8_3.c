#include <stdio.h>
#include <curses.h>

#define MAX 20

void tachhoten(char []);

void main()
{
	char name[MAX];
	puts("Moi ban nhap ten: ");
	gets(name);
	tachhoten(name);
}

void tachhoten(char name[])
{
	int i, n;
	n=MAX;
	printf("Ten dem la: ");
	for (i=0;i<n;i++)
	{
		printf("%c",name[i]);
		if (name[i] == ' ')
			break;
	}
	printf("\n");
	printf("Ten la: ");
	for (i=i;i<n;i++)
	{
		printf("%c",name[i]);
		if (name[i] == '\0')
			break;
	}
	printf("\n");
}