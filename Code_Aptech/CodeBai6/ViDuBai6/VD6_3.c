#include <stdio.h>

void main()
{
	int i,n,sum;
	printf("Nhap vao so nguyen n: ");
	scanf("%d",&n);
	/*sum = 0;
	for(i=0;i<=n;i++)
	{
		if ((i%2)!=0)
			sum = sum + i;
	}*/
	for(sum=0,i=1;i<=n;sum = sum + i,i+=2); //ko the de i+=2 truoc vi no se thay doi truoc khi sum.
	printf("Tong cac so le tu 0 den %d la: %d.\n",n,sum);
}