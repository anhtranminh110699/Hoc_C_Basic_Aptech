#include <stdio.h>

#define MAX 5

int H[MAX][MAX]={{1,0,0,0,1},
				 {1,0,0,0,1},
				 {1,1,1,1,1},
				 {1,0,0,0,1},
				 {1,0,0,0,1}};

int C[MAX][MAX]={{1,1,1,1,1},
				 {1,0,0,0,0},
				 {1,0,0,0,0},
				 {1,0,0,0,0},
				 {1,1,1,1,1}};

int B[MAX][MAX]={{1,1,1,1,0},
				 {1,0,0,0,1},
				 {1,1,1,1,0},
				 {1,0,0,0,1},
				 {1,1,1,1,0}};
void main()
{
	int i, j;
	for (i=0;i<MAX;i++)
	{
		for (j=0;j<MAX;j++)
		{
			if (H[i][j])
				printf("!");
			else
				printf(" ");
		}
		printf("\n");
	}
	for (i=0;i<MAX;i++)
	{
		for (j=0;j<MAX;j++)
		{
			if (C[i][j])
				printf("!");
			else
				printf(" ");
		}
		printf("\n");
	}
	for (i=0;i<MAX;i++)
	{
		for (j=0;j<MAX;j++)
		{
			if (B[i][j])
				printf("!");
			else
				printf(" ");
		}
		printf("\n");
	}
}