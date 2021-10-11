#include <stdio.h>

void main()
{
	int ia,ib,imax;
	printf("Nhap vao 2 so nguyen a va b: ");
	scanf("%d%d",&ia,&ib);
	imax = ib;
	if (ia>ib)
		imax = ia;
	printf("So lon nhat trong 2 so %d va %d la : %d\n",ia,ib,imax);
}

//doi voi truong hop a=7,b=9, So lon nhat la 9.
//doi voi truong hop a=5,b=5, So lon nhat la 5.