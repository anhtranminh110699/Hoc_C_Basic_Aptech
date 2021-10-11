#include <stdio.h>

#define PI 3.14
#define AREA_CIRCLE(flad) (4*PI*flad*flad)

float flad;

//float area();

void main()
{
	printf("Nhap ban kinh cua hinh cau: ");
	scanf("%f",&flad);
	//printf("Dien tich hinh cau la: %f.\n",area());
	printf("Dien tich hinh cau la: %10.3f.\n",AREA_CIRCLE(flad));
}

/*float area()
{
	return (4*PI*flad*flad);
}*/