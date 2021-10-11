#include <stdio.h>

void main()
{
	int n;
	do
	{
		printf("Nhap 1 so bat ki tu 0 den 9: ");
		scanf("%d",&n);
		switch(n)
		{
			case 0: printf("Khong\n");
					break;
			case 1: printf("Mot\n");
					break;
			case 2: printf("Hai\n");
					break;
			case 3: printf("Ba\n");
					break;
			case 4: printf("Bon\n");
					break;
			case 5: printf("Nam\n");
					break;
			case 6: printf("Sau\n");
					break;
			case 7: printf("Bay\n");
					break;
			case 8: printf("Tam\n");
					break;
			case 9: printf("Chin\n");
					break;
		}
	} while(n<0 || n>9);
}