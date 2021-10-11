#include <stdio.h>
#include <curses.h>

void main()
{
	char *thang[12]={"January","February","March","April",
					"May","June","July","August","September",
					"October","November","December"};
	int month;
	printf("Nhap vao so thang (1-12): ");
	scanf("%d",&month);
	printf("%s\n",thang[month-1]);
}