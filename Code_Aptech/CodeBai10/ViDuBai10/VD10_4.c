#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

#define MAX 6

void main()
{
	struct tinh
	{
		int ma;
		char *ten;
	};
	struct tinh sds[MAX]= {{60,"Dong Nai"},{61,"Binh Duong"},{62,"Long An"},
							{63,"Tien Giang"},{64,"Vinh Long"},{65,"Can Tho"}};
	char tam[10];
	int i, n;
	printf("Nhap vao bien so xe: ");
	gets(tam);
	n = atoi(tam);
	//printf("tam = %s",tam);
	//printf("n = %d",n);
	for (i=0;i<MAX;i++)
	{
		if(sds[i].ma == n)
		{
			printf("Xe co ma %d dang ki o tinh %s.\n",sds[i].ma,sds[i].ten);
		}
	}

}