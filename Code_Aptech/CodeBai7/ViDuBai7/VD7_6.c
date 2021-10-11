#include <stdio.h>

#define PI 3.14
float flad;

float area();

void main()
{
	printf("Nhap ban kinh cua hinh cau: ");
	scanf("%f",&flad);
	printf("Dien tich hinh cau la: %f.\n",area());
}

float area()
{
	return (4*PI*flad*flad);
}