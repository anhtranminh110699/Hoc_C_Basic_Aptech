#include <stdio.h>

void main()
{
	int ia;
	printf("Nhap so 1,2 or 3 de hien thi so sao thuong ung: ");
	scanf("%d",&ia);
	switch (ia)
	{
		case 3: printf("*");
		case 2: printf("*");
		case 1: printf("*");
				break;
		default: printf("Ban phai nhap 1, 2 or 3.");
	}
	printf("\n");
}