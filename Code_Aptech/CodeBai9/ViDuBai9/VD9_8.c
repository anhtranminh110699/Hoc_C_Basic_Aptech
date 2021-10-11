#include <stdio.h>
#include <curses.h>

#define ROWS 4
#define COLS 5

void main()
{
	int table[ROWS][COLS] = {{10,12,14,16,18},
							 {11,13,15,17,19},
							 {20,22,24,26,28},
							 {21,23,25,27,29}};
	int i,j,x = 10;
	for(i=0;i<ROWS;i++)
	{
		for (j=0;j<COLS;j++)
		{
			*(*(table+i)+j)+=x;
		}
	}
	printf("In ra sau khi thay doi la:\n");
	for (i=0;i<ROWS;i++)
	{
		for(j=0;j<COLS;j++)
		{
			printf(" %d ",*(*(table+i)+j));
		}
		printf("\n");
	}
}