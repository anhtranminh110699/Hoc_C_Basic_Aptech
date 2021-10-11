#include <stdio.h>
#include <curses.h>

void main()
{
	char *greeting = "Chao ban";
	char name[30];
	puts("Cho biet ten cua ban:");
	gets(name);
	puts(greeting);
	puts(name);
}