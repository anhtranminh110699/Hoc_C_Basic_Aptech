#include <stdio.h>

void main()
{
	int ia,ib;
	printf("Nhap vao 2 so a va b: ");
	scanf("%d%d",&ia,&ib);
	if(ia == ib)
		printf("a = %d bang b = %d.\n",ia,ib);
	else
		printf("a = %d khac b = %d.\n",ia,ib);
}

//doi voi a=6,b=6 / Ket qua la a bang b.
//doi voi a=1,b=5 / Ket qua la a khac b.