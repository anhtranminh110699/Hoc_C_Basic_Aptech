/* Ham tinh giai thua*/
#include <stdio.h>
long giaithua(int);

void main()
{
	int n;
	printf("Nhap vao so n: ");
	scanf("%d",&n);
	printf("%d! = %ld.\n",n,giaithua(n));
}

/*long giaithua(int n)
{
	int i;
	long tich = 1;
	if(n==0)
	{
		return (1L);
	}
	else
	{
		for(i=1;i<=n;i++)
			tich *=i;
		return(tich);
	}
}*/

long giaithua(int n)
{
	int i;
	if (n==0)
	{
		return(1L);
	}
	else
	{
		return (n*giaithua(n-1));
	}
}