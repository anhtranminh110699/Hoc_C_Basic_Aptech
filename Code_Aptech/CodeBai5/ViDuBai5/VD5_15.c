#include <stdio.h>

void main()
{
	int im;
	printf("Nhap so thang ma ban muon kiem tra: ");
	scanf("%d",&im);
	switch (im)
	{
		case 1: case 2: case 3: printf("Qui 1.\n");
								break;
		case 4: case 5: case 6: printf("Qui 2.\n");
								break;
		case 7: case 8: case 9: printf("Qui 3.\n");
								break;
		case 10: case 11: case 12: printf("Qui 4.\n");
									break;
		default: printf("Ban pha nhap thang trong khoang tu 1 den 12.\n");
				break;
	}
}