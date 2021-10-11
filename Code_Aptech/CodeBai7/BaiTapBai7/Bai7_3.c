#include <stdio.h>

void songuyento(int);

void main()
{
	int x;
	printf("Nhap so nguyen to can kiem tra: ");
	scanf("%d",&x);
	songuyento(x);
}

void songuyento(int y)
{
	int i,s = 0;
	for (i=2;i<y;i++)
	{
		if ((y%i) != 0)
			s = s + 0;
		else
			s = s + 1;
	}
	if (s==0)
		printf("%d la so nguyen to.\n",y);
	else
		printf("%d ko la so nguyen to.\n",y);
}