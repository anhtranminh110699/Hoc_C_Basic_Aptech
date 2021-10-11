#include <stdio.h>
#include <curses.h>

#define MAX 30

void main()
{
	int a,b,n,i,j;
	char ten[MAX];
	puts("Nhap vao mot chuoi bat ki: ");
	gets(ten);
	for(n=0;n<MAX;n++)
	{
		if (ten[n] == '\0')
		{
			n=n;
			break;
		}
	}
	do
	{
		puts("Muon xoa tu vi tri nao: ");
		scanf("%d",&a);
	} while(a>n);
	do
	{
		puts("Muon xoa bao nhieu ki tu: ");
		scanf("%d",&b);
	} while (b>(n-a));
	puts("Chuoi sau khi xoa: ");
	for(i=(a-1),j=(a-1+b);i<(a+b);i++,j++)
	{
		ten[i]=ten[j];
		ten[n-b] = '\0';
	}
	printf ("%s \n",ten);
}