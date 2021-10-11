#include <stdio.h>
#include <math.h>
//Khai bao tien xu ly nay de su dung ham pow.
// pow(a,b) = a^b.

long long dec2bin(int iDecimanumber)
{
	int p = 0;
	long long iBinarynumber = 0;
	while(iDecimanumber > 0)
	{
		iBinarynumber += (iDecimanumber % 2)*pow(10,p);
		++p;
		iDecimanumber /= 2;
	}
	return iBinarynumber;
}

int main()
{
	int iDecimanumber;
	printf("Nhap so thap phan: ");
	scanf("%d",&iDecimanumber);
	printf("Dang nhi phan cua %d la %d.\n",iDecimanumber,dec2bin(iDecimanumber));
}