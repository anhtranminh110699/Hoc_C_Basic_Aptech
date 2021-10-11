#include <stdio.h>

void main()
{
	int a[50],i,n,sum;
	sum = 0;
	/*printf("Nhap vao gia tri n: ");
	scanf("%d",&n);*/
	do
	{
		printf("Nhap vao gia tri n: ");
		scanf("%d",&n);
	}
	while(n<=0 || n>50);

	for(i=0;i<n;i++)
	{
		printf("Nhap vao phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
		sum += a[i];
	}

	/*for(i=0;i<n;i++)
	{
		sum += a[i];
	}*/
	printf("Trung binh cong: %2f.\n",(float)sum/n);
}