#include <stdio.h>

void main()
{
	int i,a;
	printf("Nhap vao so can tim uoc so: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if((a%i)==0)
			printf("%d la mot trong cac uoc so cua %d.\n",i,a);
	}
}