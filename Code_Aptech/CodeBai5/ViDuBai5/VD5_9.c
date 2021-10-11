#include <stdio.h>

void main()
{
	float fpoint;
	printf("Nhap diem cua hoc sinh: ");
	scanf("%f",&fpoint);
	//printf("Xep loai diem cua hoc sinh la: ");
	if (fpoint >= 0 && fpoint <= 10)
	{
		printf("Xep loai diem cua hoc sinh la: ");
		if (fpoint >= 9)
			printf("Xuat sac.\n");
		else if (fpoint>=8 && fpoint<9)
			printf("Gioi.\n");
		else if (fpoint>=7 && fpoint<8)
			printf("Kha.\n");
		else if (fpoint>=6 && fpoint<7)
			printf("Trung binh Kha.\n");
		else if (fpoint>=5 && fpoint<6)
			printf("Trung binh.\n");
		else
			printf("Yeu.\n");
	}
	else
		printf("Nhap diem khong hop le.\n");
}