#include <stdio.h>
//#include <conio.h>
#include <curses.h>

void main()
{
	char name[30];
	puts("Cho biet ten cua ban: ");
	//printf("Cho biet ten cua ban: "); //ko thay doi
	gets(name); //tao anh huong chinh
	puts("Chao ban ");
	puts(name);
	//printf("Chao ban %s.\n",name); //ko thay doi
}