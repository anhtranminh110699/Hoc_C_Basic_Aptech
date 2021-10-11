#include <stdio.h>

void main()
{
	int i,j,n,m;
	// m la chieu dai la co, n la chieu rong la co.
	n = 13; m = 20;
	for	(i=1;i<=n;i++)
	{
		for (j=1;j<=m;j++)
		{
			switch(i)
			{
				case 1:
				case 3:
				case 5:
				case 7: switch(j)
						{
							case 2:
							case 4:
							case 6:
							case 8: printf("  ");
									break;
							default: printf("* ");
						}
						break;
				case 2:
				case 4:
				case 6: switch(j)
						{
							case 2:
							case 4:
							case 6:
							case 8: printf("* ");
									break;
							default: printf("  ");
						}
						break;
				case 9:
				case 11:
				case 13: printf("* ");
						break;
				case 8:
				case 10:
				case 12: printf("  ");
						break;
			}
		}
		printf("\n");
	}
}