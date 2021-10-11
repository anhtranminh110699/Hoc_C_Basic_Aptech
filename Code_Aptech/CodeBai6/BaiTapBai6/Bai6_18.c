#include <stdio.h>

void main()
{
	char i;
	do
	{
		printf("Nhap ki tu can tra cuu ma ASCII: ");
		scanf(" %c",&i); //nen de dau cach truoc %c de nhap ki tu an enter ko anh huong den chuong trinh.
		printf("%5c%5d\n",i,i);
	} while(i != '0');
}