#include <stdio.h>

void main()
{
	int ia;
	printf("Nhap 1, 2 hoac 3 de hien thi so sao: ");
	scanf("%d",&ia);
	switch(ia)
	{
		case 3:
		printf("*");
		case 2:
		printf("*");
		case 1:
		printf("*");
	}
	printf("\n");
}

//doi vơi ia = 0 or 4 / Ket qua se ko hien thi gi trong khoi switch.