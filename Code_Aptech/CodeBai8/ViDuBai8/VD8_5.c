#include <stdio.h>

#define MAX 4

void main()
{
	float a[MAX],sum;
	sum = 0;
	int i;
	i = 0;
	do
	{
		if (i>=MAX)
		{
			printf("Mang da day!\n");
			i++; //tang len 1 vi dong i-- phia duoi.
			break; //thoat vong lap do...while.
		}
		printf("Nhap phan tu thu %d cua mang: ",i+1);
		scanf("%f",&a[i]);
	} while (a[i++]>=0);
	printf("i truoc khi tru 1: %d\n",i);
	i--;
	printf("i sau khi tru 1: %d\n",i);

	for (int j=0;j<i;j++)
	{
		sum += a[j];
	}
	printf("Tong: %5.2f.\n",sum);
}