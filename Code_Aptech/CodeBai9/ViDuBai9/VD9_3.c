#include <stdio.h>

void main()
{
	int num[]={23,54,16,72,16,84};
	printf("%d = %d\n",num[4],*(num+4));
	printf("%d = %d\n",&num[4],num+4);
}