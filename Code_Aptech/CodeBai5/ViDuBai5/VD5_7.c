#include <stdio.h>

void main()
{
	int ia,ib;
	printf("Nhap 2 so a va b: ");
	scanf("%d%d",&ia,&ib);
	if (ia>ib)
		printf("a = %d > b = %d.\n",ia,ib);
	else if (ia<ib)
		printf("a = %d < b = %d.\n",ia,ib);
	else
		printf("a = %d = b = %d.\n",ia,ib);
}