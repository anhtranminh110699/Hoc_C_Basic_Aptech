#include <stdio.h>

void main()
{
	int i,n;
	float danso,tile;
	danso = 6000000;
	tile = 1.8/100;
	n = 10; //10 nam
	for (i=1;i<=n;i++)
	{
		danso = danso + danso*tile;
	}
	printf("Dan so cua thanh pho sau %d nam la: %f.\n",n,danso);
}