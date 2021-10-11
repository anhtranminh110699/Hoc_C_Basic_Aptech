#include <stdio.h>

int main()
{
	int a,b;
	printf("Nhap 2 so nguyen can tinh toan: ");
	scanf("%d%d",&a,&b);
	printf("Tong cua %d va %d la: %d.\n",a,b,a+b);
	printf("Hieu cua %d va %d la: %d.\n",a,b,a-b);
	printf("Tich cua %d va %d la: %d.\n",a,b,a*b);
	printf("Thuong cua %d va %d la: %d.\n",a,b,a/b);
	//Nhan xet: Thuong chi hien ra ket qua chia ko hien so du
	//De hien so du ta se lam theo dong code sau:
	printf("Thuong cua %d va %d la: %d Du %d.\n",a,b,a/b,a%b);
}