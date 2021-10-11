#include <stdio.h>

void main()
{
	int i;
	for(i = 0; i < 128; i++)
	{
		if (i==7)
			continue; //i=7 se tao ra tieng keu bip.
		printf("%5d%5c\n",i,i); //%d la thu tu, %c ki tu ASCII tuong duong voi thu tu
	}
}

//so 32 in ra space.