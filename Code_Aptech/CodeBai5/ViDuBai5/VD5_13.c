#include <stdio.h>

void main()
{
	int im;
	printf("Nhap thang can kiem tra: ");
	scanf("%d",&im);
	if (im>=1 && im<=12)
	{
		switch (im)
	{
		case 1:
		case 2:
		case 3:
		printf("Thang nay thuoc Qui 1.\n");
		break;
		case 4:
		case 5:
		case 6:
		printf("Thang nay thuoc Qui 2.\n");
		break;
		case 7:
		case 8:
		case 9:
		printf("Thang nay thuoc Qui 3.\n");
		break;
		case 10:
		case 11:
		case 12:
		printf("Thang nay thuoc Qui 4.\n");
		break;
	}
	}
	else
		printf("Thang ban vua nhap khong hop le.\n");
}