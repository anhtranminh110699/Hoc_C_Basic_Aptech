#include <stdio.h>
#include <curses.h>

void main()
{
	char name[30];
	char chao[]="Chao ban";
	printf("Cho biet ten cua ban: ");
	gets(name);
	printf("%s %s.\n",chao,name);
	//getch();
}