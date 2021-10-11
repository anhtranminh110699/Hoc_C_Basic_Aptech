#include <stdio.h>

void main()
{
	int i,j,a,b;
	printf("Nhap chieu dai cua hinh chu nhat: ");
	scanf("%d",&a);
	printf("Nhap chieu rong cua hinh chu nhat: "); //ki tu tinh tu 0.
	scanf("%d",&b);
	i=0;
	while(i<b)
	{
		/*j=0;
		while(j++<a)
			printf("%d",i);*/
		for (j=0;j<a;j++)
			printf("%d",i);
		printf("\n");
		i++;
	}
}