#include <stdio.h>

void main()
{
	int i,n,sum;
	sum = 0;
	/*for(i=1;i<=3;i++)
	{
		printf("Nhap so nguyen can tinh tong: ");
		scanf("%d",&n);
		sum = sum + n;
	}*/
	for(i=1;i<=3;printf("Nhap vao so thu %d: ",i),scanf("%d",&n),i++,sum=sum+n);
	printf("Tong 3 so nguyen vua nhap la: %d.\n",sum);
}