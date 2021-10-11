#include <stdio.h>

void main()
{
	int ia,ib,ic,imax;
	printf("Nhap 3 so a, b, c: ");
	scanf("%d%d%d",&ia,&ib,&ic);
	imax = ia;
	if (ib > imax)
		imax = ib;
	else
		imax = ia;
	if (ic > imax)
		imax = ic;
	else
		//imax = ia;  //sai o day vi neu ic ko lon hon imax luc do thi no se tro ve imax=ia.
		//imax = ib; //sau khi cau dk 1, neu dung thi imax se giu gia tri ib. Vay nen sau do o cau dk 2, neu sai thi imax van giu gia tri ib.
					//van sai, o day neu imax dang giu gia tri ia, neu sai thi imax van giu gia tri ia chu ko the la ib.
		imax = imax;
	printf("So lon nhat trong 3 so %d,%d,%d la: %d.\n",ia,ib,ic,imax);
}