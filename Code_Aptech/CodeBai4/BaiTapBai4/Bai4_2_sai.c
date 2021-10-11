#include <stdio.h>
//#include <math.h>

char dec2hex();

int main()
{
	int iDecimalNumber;
	printf("Nhap so thap phan: ");
	scanf("%d",&iDecimalNumber);
	//printf("Doi dang thap phan %d sang he 16 la %c.\n",iDecimalNumber,dec2hex(iDecimalNumber));
	dec2hex(iDecimalNumber);
	/*long iOfHexaNumber;
	while(iDecimalNumber > 0)
	{
		iOfHexaNumber = (iDecimalNumber % 16);
		if (iOfHexaNumber = 10)
		{
			iOfHexaNumber = 'A';
		}
		else if (iOfHexaNumber = 11)
		{
			iOfHexaNumber = 'B';
		}
		else if (iOfHexaNumber = 12)
		{
			iOfHexaNumber = 'C';
		}
		else if (iOfHexaNumber = 13)
		{
			iOfHexaNumber = 'D';
		}
		else if (iOfHexaNumber = 14)
		{
			iOfHexaNumber = 'E';
		}
		else if (iOfHexaNumber = 15)
		{
			iOfHexaNumber = 'F';
		}
		else
		{
			iOfHexaNumber = iOfHexaNumber;
		}
		printf("%c.\n", iOfHexaNumber);
		iDecimalNumber /= 16;
	}*/
}

char dec2hex(int iDecimalNumber)
{
	//int p = 0;
	long iOfHexaNumber;
	while(iDecimalNumber > 0)
	{
		iOfHexaNumber = iDecimalNumber % 16;
		if (iOfHexaNumber = 10)
			iOfHexaNumber = 'A';
		else if (iOfHexaNumber = 11)
			iOfHexaNumber = 'B';
		else if (iOfHexaNumber = 12)
			iOfHexaNumber = 'C';
		else if (iOfHexaNumber = 13)
			iOfHexaNumber = 'D';
		else if (iOfHexaNumber = 14)
			iOfHexaNumber = 'E';
		else if (iOfHexaNumber = 15)
			iOfHexaNumber = 'F';
		else
			iOfHexaNumber = iOfHexaNumber;
		printf("%c.\n", iOfHexaNumber);
		iDecimalNumber /= 16;
	}
	return iOfHexaNumber;
}