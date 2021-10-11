#include <stdio.h>

void main()
{
	int i,j,n,m;
	// n la chieu rong cua co, m la chieu dai cua co.
	m=41;
	n=23;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			switch(i)
			{
				case 9: if (j==21)
						{
							printf("  ");
						}
						else
						{
							printf("* ");
						}
						break;
				case 10: if (j==20||j==21||j==22)
						{
							printf("  ");
						}
						else
						{
							printf("* ");
						}
						break;
				case 11: if (j>=18 && j<=24)
						{
							printf("  ");
						}
						else
						{
							printf("* ");
						}
						break;
				case 12: if (j>=19 && j<=23)
						{
							printf("  ");
						}
						else
						{
							printf("* ");
						}
						break;
				case 13: if (j==20||j==21||j==22)
						{
							printf("  ");
						}
						else
						{
							printf("* ");
						}
						break;
				case 14: if (j>=19 && j<=23)
						{
							printf("  ");
						}
						else
						{
							printf("* ");
						}
						break;
				case 15: if (j==18 || j==24)
						{
							printf("  ");
						}
						else
						{
							printf("* ");
						}
						break;
				default: printf("* ");
			}
		}
		printf("\n");
	}
}