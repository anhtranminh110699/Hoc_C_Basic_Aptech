#include <stdio.h>

void main()
{
	int ia,ib,ic,id,imax;
	printf("Nhap 4 so a, b, c, d: ");
	scanf("%d%d%d%d",&ia,&ib,&ic,&id);
	imax = ia;
	if (ib>imax)
		imax = ib;
	if (ic>imax)
		imax = ic;
	if (id>imax)
		imax = id;
	printf("So lon nhat trong 4 so a, b, c, d la: %d.\n",imax);
}