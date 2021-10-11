#include <stdio.h>

#define MAX 5

void main()
{
	int tien[MAX] = {50,25,10,5,1};
	int i,soto,sum;
	printf("Nhap tong so tien: ");
	scanf("%d",&sum);
	for (i=0;i<5;i++)
	{
		//printf("%d",tien[i]);
		soto = sum/tien[i];
		printf("So to %d la: %d.\n",tien[i],soto);
		sum = sum%tien[i];
	}
}