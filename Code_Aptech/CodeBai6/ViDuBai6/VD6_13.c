#include <stdio.h>

#define DAU_CHAM '.'

void main()
{
	char c;
	/*for(;(c = getchar())!= DAU_CHAM;)
		putchar(c);
	*/
	//for(;(c = getchar())!=DAU_CHAM;putchar(c));
	while((c = getchar())!=DAU_CHAM)
		putchar(c);
}