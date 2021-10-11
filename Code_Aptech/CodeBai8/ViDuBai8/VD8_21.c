#include <stdio.h>
#include <curses.h>

void main()
{
	char thang[12][15]={"January","February","March","April",
						"May","June","July","August","September",
						"October","November","December"};
	int sothang;
	printf("Nhap vao thang (1-12): ");
	scanf("%d",&sothang);
	printf("%s.\n",thang[sothang-1]);
}