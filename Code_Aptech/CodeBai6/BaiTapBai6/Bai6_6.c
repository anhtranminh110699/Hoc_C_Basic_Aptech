#include <stdio.h>

void main()
{
	int i,n,s;
	s = 0;
	printf("Nhap vao so so n: ");
	scanf("%d",&n);
	i = 1;
	while(i<=n)
	{
		if ((i%2)!=0)
			s += (i*i);
		i++;
	}
	printf("Tong Binh Phuong cua cac so tu 1 den n la: %d.\n",s);
}