#include <stdio.h>

void evenodd();
void negative();

int num;

void main()
{
	printf("Nhap so can kiem tra: ");
	scanf("%d",&num);
	evenodd();
	negative();
}

void evenodd()
{
	if ((num%2) == 0)
		printf("%d la so chan.\n",num);
	else
		printf("%d la so le.\n",num);
}

void negative()
{
	if (num > 0)
		printf("%d la so duong.\n",num);
	else
		printf("%d la so am.\n",num);
}