#include <stdio.h>
#include <math.h>

void main()
{
	float a, b, c;
	float denta,x1,x2;
	printf("Phuong trinh bac 2 co dang ax^2+bx+c=0.\n");
	printf("Nhap he so a, b, c cua phuong trinh: ");
	scanf("%f%f%f",&a,&b,&c);
	denta = (b*b) - (4*a*c);
	if (denta < 0)
		printf("Phuong trinh vo nghiem.\n");
	else if (denta == 0)
	{
		printf("Phuong trinh co nghiem kep.\n");
		x1 = x2 = -b/(2*a);
		printf("Nghiem kep x1 = x2 = %f.\n",x1);
	}
	else
	{
		printf("Phuong trinh co 2 nghiem.\n");
		x1 = (-b - sqrt(denta))/(2*a);
		x2 = (-b + sqrt(denta))/(2*a);
		printf("2 nghiem cua phuong trinh bac 2 la: %f va %f.\n",x1,x2);
	}
}