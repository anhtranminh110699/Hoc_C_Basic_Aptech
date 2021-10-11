#include <stdio.h>

void main()
{
	int ia;
	printf("Nhap vao mot so nguyen duong: ");
	scanf("%d",&ia);
	if (ia>=0)
	{
		if (ia%2 == 0)
			printf("So nguyen duong %d vua nhap la so chan.\n",ia);
		else
			printf("So nguyen duong %d vua nhap la so le.\n",ia);
	}
	else
		printf("So ban vua nhap khong phai so nguyen duong.\n");
}