#include <stdio.h>
#include <curses.h>

#define MAX 30

void main()
{
	char ten[MAX],chuoi[MAX];
	int i,j,l,n,m,dem = 0;
	puts("Chuoi nguon la: ");
	gets(ten);
	puts("Chuoi con la: ");
	gets(chuoi);
	for (n=0;n<MAX;n++)
	{
		if (ten[n] == '\0')
		{
			n=n;
			break;
		}
	}
	for (m=0;m<MAX;m++)
	{
		if (chuoi[m] == '\0')
		{
			m=m;
			break;
		}
	}
	for (i=0;i<n;i++)
	{
		if (ten[i] == chuoi[0])
		{
			i=i;
			for (j=i;j<(m+i);j++)
			{
				for (l=0;l<m;l++)
				{
					if (ten[j]==chuoi[l])
						dem++;
				}
			}
		}
		if (dem == m)
			break;
		else
			continue;
	}
	printf("Vi tri bat dau cua chuoi con la: %d.\n",i+1);
}