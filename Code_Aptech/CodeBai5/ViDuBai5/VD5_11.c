#include <stdio.h>

void main()
{
	int ia,ib,ic;
	printf("Nhap vao gia tri lan luot 3 so a, b, c: ");
	scanf("%d%d%d",&ia,&ib,&ic);
	if (ia>ib)
	{
		if (ia>ic)
			printf("So lon nhat la a: %d.\n",ia);
		else
			printf("So lon nhat la c: %d.\n",ic);
	}
	else
	{
		if (ib>ic)
			printf("So lon nhat la b: %d.\n",ib);
		else
			printf("So lon nhat la c: %d.\n",ic);
	}
}

/*doi voi truong hop nhap a=b=c=5 / Ket qua ra so lon nhat se la c = 5.
Vi a ko > b -> chay else
O else nay, vi b ko lon hon c => chay else
Tu do ta co hien ra c = 5 la max.*/