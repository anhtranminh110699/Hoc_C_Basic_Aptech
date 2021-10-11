#include <stdio.h>

void main()
{
	int ia,ib,ic,imax;
	printf("Nhap vao lan luot 3 so a,b,c: ");
	scanf("%d%d%d",&ia,&ib,&ic);
	imax = ia;
	if (ib > imax)
		imax = ib;
	if (ic > imax)
		imax = ic;
	printf("Trong 3 so %d, %d, %d thi so lon nhat la: %d.\n",ia,ib,ic,imax);
}