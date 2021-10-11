#include <stdio.h>

#define DAU_CHAM '.'

void main()
{
	int idem;
	char c;
	idem = 0;
	/*for(;(c = getchar())!=DAU_CHAM ;)
	{
		putchar(c);
		idem++;
	}*/
	//for(;(c = getchar())!=DAU_CHAM;putchar(c),idem++);
	while((c = getchar())!=DAU_CHAM)
	{
		putchar(c);
		idem++;
	}
	printf("\nSo ki tu dem duoc la: %d.\n",idem);
}