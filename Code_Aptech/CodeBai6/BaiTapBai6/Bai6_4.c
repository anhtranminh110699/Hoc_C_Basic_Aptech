#include <stdio.h>

void main()
{
	int i,j,n;
	printf("Nhap vao so sao chieu dai tam giac can: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)\
		{
			printf("* ");
		}
		printf("\n");
	}
}