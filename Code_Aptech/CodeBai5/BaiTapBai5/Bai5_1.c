#include <stdio.h>

void main()
{
	int ia, ib, imax;
	printf("Nhap 2 so a va b: ");
	scanf("%d%d",&ia,&ib);
	if (ia > ib)
		imax = ia;
	else
		imax = ib;
	printf("Trong 2 so a %d va b %d, so lon nhat la %d.\n",ia,ib,imax);
}