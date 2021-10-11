#include <stdio.h>

void main(void)
{
	//vd 1
	printf("Bai hoc C dau tien.\n");

	//vd 2
	printf("Ma dinh dang \\\" in ra dau \".\n");

	//vd 3
	int i=5;
	printf("So ban vua nhap la: %d.\n",i);

	//vd 4
	int a=7, b=4;
	printf("Tong cua 2 so %d va %d la %d.\n",a,b,a+b);

	//vd 5
	printf("Tong cua 2 so %5d va %3d la %1d.\n",a,b,a+b);

	//vd 6
	printf("Tong cua 2 so %-5d va %-3d la %-1d.\n",a,b,a+b);

	//vd 7
	printf("Tong cua 2 so %02d va %02d la %04d.\n",a,b,a+b);

	//vd 8
	int c=6, d=1234, e=62;
	printf("%7d%7d%7d.\n",c,d,e);
	printf("%7d%7d%7d.\n",165,2,965);
	printf("%-7d%-7d%-7d.\n",c,d,e);
	printf("%-7d%-7d%-7d.\n",165,2,965);

	//vd 9
	float f=6.4,g=1234.56,h=62.3;
	printf("%7.2f%7.2f%7.2f.\n",f,g,h);

	//vd 10
	float m=6.4,n=1234.55,o=62.34;
	printf("%10.1f%10.1f%10.1f.\n",m,n,o);
	printf("%10.1d%10.1d%10.1d.\n",165,2,965);
	printf("%-10.2f%-10.2f%-10.2f.\n",m,n,o);
	printf("%-10.2d%-10.2d%-10.2d.\n",165,2,965);
}