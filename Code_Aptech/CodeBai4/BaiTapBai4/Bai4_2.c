#include <stdio.h>

void dec2hexa();

int main()
{
	int iDecima;
	printf("Nhap so thap phan: ");
	scanf("%d",iDecima);
	dec2hexa(iDecima);
}

void dec2hexa(int iDecima)
{
	int iHexa;
	while(iDecima > 0)
	{
		iHexa = iDecima % 16;
		switch (iHexa)
		{
			case 10:
			printf("A");
			break;

			case 11:
			printf("B");
			break;

			case 12:
			printf("C");
			break;

			case 13:
			printf("D");
			break;

			case 14:
			printf("E");
			break;

			case 15:
			printf("F");
			break;

			default:
			printf("%d",iHexa);
		}
		iDecima /= 16;
	}
}