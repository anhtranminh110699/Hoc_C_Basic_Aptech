#include <stdio.h>

int main()
{
	int d,m,y;
	printf("Nhap ngay, thang, nam can in ra: ");
	//scanf("%2d/%2d/%2d",&d,&m,&y);
	//%2d ke ca nhap so co 4 5 chu so cung chi lay 2 so dau.
	scanf("%d/%d/%d",&d,&m,&y);
	printf("Hom nay la ngay: %02d/%02d/%02d.\n",d,m,y%100);
	//%2d nay so nhap vao co 4 5 chu so cung hien ca 4 5 chu so.
	//y%100 la lay phan du, ta duoc 2 so cuoi cua nam.
}