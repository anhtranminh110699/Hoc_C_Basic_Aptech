#include <stdio.h>

void main()
{
	int n,sumd;
	sumd = 0;
	for(;;)
	{
		printf("Nhap vao 1 so nguyen: ");
		scanf("%d",&n);
		if(n!=0)
		{
			if(n>0)
				sumd = sumd + n;
			continue;
		}
		else
			break;
		/*if (n!=0)
			continue;
		if (n == 0);
			break;
		sumd +=n;*/ //Sai vi continue se dua quay lai vong lap, sum se ko cong duoc cac gia tri.
	}
	/*for(;n!=0;)
	{
		printf("Nhap vao 1 so nguyen: ");
		scanf("%d",&n);
		if (n>0)
			sumd = sumd + n;
	}*/ //Great.
	printf("Tong cac so nguyen duong la: %d\n",sumd);
}