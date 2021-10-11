#include <stdio.h>

void time(int *, int *);

void main()
{
	int gio,phut;
	printf("Nhap so phut nhap vao: ");
	scanf("%d",&phut);
	time(&gio,&phut);
	printf("%02d:%02d.\n",gio,phut);
}

void time(int *h, int *m)
{
	*h = *m/60;
	*m = *m%60;
}