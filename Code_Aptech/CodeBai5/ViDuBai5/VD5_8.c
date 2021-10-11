#include <stdio.h>

void main()
{
	char c;
	printf("Nhap vao ky tu muon xu ly: ");
	scanf("%c",&c);
	if (c>='a' && c<='z')
	{
		c = c - 32;
		printf("Ki tu sau khi chuyen tu thuong thanh HOA la: %c.\n",c);
	}
	else if (c>='A' && c<='Z')
	{
		c = c + 32;
		printf("Ki tu sau khi chuyen tu HOA thanh thuong la: %c.\n",c);
	}
	else if (c>='0' && c<='9')
		printf("Ki tu %c vua nhap la chu so.\n",c);
	else
		printf("Ki tu %c vua nhap la ky tu.\n",c);
}