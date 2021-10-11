#include <stdio.h>

void main()
{
	char c;
	printf("Nhap vao ky tu c: ");
	scanf("%c",&c);
	if (c >= 'a' && c <= 'z') //phai su dung && vi nam trong khoang tu a den z.
	{
		c = c-32; //doi chu thuong thanh chu in hoa.
		printf("Ky tu sau khi chuyen thanh chu in hoa la: %c.\n",c);
	}
	else
		printf("Ky tu ban vua nhap la: %c.\n",c);
}

//doi voi c = '!' / Ket qua: Hien ra !.
//doi voi c = '2' / Ket qua: Hien ra 2.
//doi voi c = 'A' / Ket qua: Hien ra A.
//doi voi c = 'u' / Ket qua: Hien ra U.