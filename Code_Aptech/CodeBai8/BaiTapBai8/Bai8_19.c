#include <stdio.h>
#include <curses.h>

#define MAX 30

void main()
{
	char ten[MAX];
	int i,j,n=MAX;
	puts("Nhap ten cua ban: ");
	gets(ten);
	puts("In ra ten cua ban: ");
	for (i=(n-1);i>=0;i--)
	{
		if (ten[i] == '\0')
			break;
	}
	for (j=(i-1);j>=0;j--)
	{
		//printf("%c",ten[j]);
		if (ten[j] == ' ')
			break;
	}
	printf("\n");
	for (j=(j+1);j<=i;j++)
	{
		printf("%c",ten[j]);
	}
	printf("\n");
}