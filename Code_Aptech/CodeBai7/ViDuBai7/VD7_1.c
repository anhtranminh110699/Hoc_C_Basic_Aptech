#include <stdio.h>

void line();
void line()
{
	int i;
	for (i=0;i<19;i++)
	{
		printf("*");
	}
	printf("\n");
}

void main()
{
	line();
	printf("* Minh hoa ve ham *\n");
	line();
}