#include <stdio.h>

void main()
{
	int i,n,sum;
	printf("Nhap so nguyen n muon tinh tong: ");
	scanf("%d",&n);
	sum=0;
	i=0; //chon n=5.
	/*while(i++<n)  //i ban dau o day la 0, i cuoi cung la 4
	{
		sum = sum + i; //i ban dau xuong day la 1, cuoi cung la 5
		printf("%d\n",i); //i ban dau xuong day cung la 1, cuoi cung la 5
	}*/
	while(sum = sum + i,i++<n); // i ban dau la 0, het cau lenh thanh 1, 0+1+2+3+4+5 = 15
	/*for(i=0;i<=n;)
	{
		printf("%d",i);
		sum = sum + i;
		i++;
		printf("%d",i);
	}*/
	printf("Tong la: %d\n",sum);
}