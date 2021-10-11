#include <stdio.h>

void main()
{
	int ia,ib,itam;
	printf("Nhap vao 2 so a va b: ");
	scanf("%d%d",&ia,&ib);
	if (ia>ib)
	{
		itam = ia; //hoan doi a va b
		ia = ib;
		ib = itam;
	}
	printf("Thu tu lan luot cua a va b sau khi xu li la: %d va %d.\n",ia,ib);
}

//doi voi a=1,b=8 / Ket qua se hien ra 1 8.
//doi voi a=2,b=2 / Ket qua se hien ra 2 2.