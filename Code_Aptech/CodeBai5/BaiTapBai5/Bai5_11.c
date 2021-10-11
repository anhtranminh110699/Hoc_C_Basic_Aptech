#include <stdio.h>

void main()
{
	int x,y;
	char l;
	printf("Nhap x: ");
	scanf("%d",&x);
	printf("Nhap y: ");
	scanf("%d",&y);
	printf("Nhap phep toan can tinh giua x va y: ");
	scanf(" %c",&l); //chu y dau cach truoc %c.
	switch(l)
	{
		case '+': printf("Tong cua %d va %d la: %d.\n",x,y,x+y);
				break;
		case '-': printf("Hieu giua %d va %d la: %d.\n",x,y,x-y);
				break;
		case '*': printf("Tich giua %d va %d la: %d.\n",x,y,x*y);
				break;
		case '/':
		if(y == 0)
			printf("y = %d phai khac 0 de thuc hien phep chia.\n",y);
		else
			printf("Thuong giua %d va %d la: %d.\n",x,y,(x/y));
		break;
	}
}