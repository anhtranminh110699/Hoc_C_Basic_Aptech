#include <stdio.h>
#include <math.h>
int main()
{
	float a;
	printf("Nhap so a: ");
	scanf("%f",&a);
	printf("Binh phuong cua %f la: %f.\n",a,pow(a,2));
	printf("Lap phuong cua %f laL %f.\n",a,pow(a,3));
	printf("%f ^ 4 = %f.\n",a,pow(a,4));
}