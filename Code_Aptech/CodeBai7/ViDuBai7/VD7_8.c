#include <stdio.h>

#define MAX(x,y) (x>y)?x:y

void main()
{
	float a,b;
	printf("Nhap so a: ");
	scanf("%f",&a);
	printf("Nhap so b: ");
	scanf("%f",&b);
	printf("So lon nhat trong 2 so %1.3f va %1.3f la: %1.3f.\n",a,b,MAX(a,b));
}