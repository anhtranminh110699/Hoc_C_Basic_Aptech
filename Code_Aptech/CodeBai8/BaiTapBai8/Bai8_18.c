#include <stdio.h>
#include <curses.h>

#define MAX 30

void main()
{
	char ten[MAX];
	int i;
	puts("Nhap ten cua ban: ");
	gets(ten);
	puts("Ho sau khi tach: ");
	for (i=0;i<MAX;i++)
	{
		printf("%c",ten[i]);
		if (ten[i] == ' ')
			break;
	}
	printf("\n");
}