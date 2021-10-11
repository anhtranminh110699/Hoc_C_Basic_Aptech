#include <stdio.h>

#define DAU_CHAM '.'

void main()
{
	char c;
	int idem;
	idem = 0;
	/*for(;;)
	{
		c = getchar();
		if (c!=DAU_CHAM)
			putchar(c);
		else
			break;
		idem++;
	}*/
	while(1)
	{
		c = getchar();
		if (c!=DAU_CHAM)
			putchar(c);
		else
			break;
		idem++;
	}
	printf("So ky tu dem duoc la: %d\n",idem);
}