#include <stdio.h>
#include <curses.h>

#define MAX 20
char a[10][MAX]={"khong","mot","hai","ba","bon","nam","sau","bay","tam","chin"};
void main()
{
	int i,n,m;
	do
	{
		printf("Nhap so n: ");
		scanf("%d",&n);
	} while (n<=0 || n>999);
	printf("%d = ",n);
	if ((n/100)!=0)
	{
		i = n/100;
		printf("%s ",a[i]);
		printf("tram ");
	}
	m = n%100;
	if ((m/10)!=0)
	{
		i = m/10;
		if (i==1)
			printf("muoi ");
		else
			printf("%s ",a[i]);
	}
	else if ((m/10)==0 && (n/100)!=0)
		printf("linh ");
	m = m%10;
	printf("%s ",a[m]);
	printf("\n");
}