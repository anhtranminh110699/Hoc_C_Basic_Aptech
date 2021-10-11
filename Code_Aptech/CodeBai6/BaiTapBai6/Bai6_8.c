#include <stdio.h>

void main()
{
	int i,n,a;
	printf("Nhap so n: ");
	scanf("%d",&n);
	i = 1;
	//a = 0; // sai vi neu a = 0 thi ket qua cuoi cung la 0.
	a = 1;
	while(i<=n)
	{
		a = a*i;
		i++;
	}
	printf("Giai thua cua n la: %d.\n",a);
}