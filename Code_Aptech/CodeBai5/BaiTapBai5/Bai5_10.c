#include <stdio.h>

void main()
{
	char color;
	printf("Nhap ki tu dau cua mau sac, de hien thi ten mau tuong ung: ");
	scanf("%c",&color);
	switch(color)
	{
		case 'R': case 'r': printf("%c tuong ung RED\n",color);
							break;
		case 'G': case 'g': printf("%c tuong ung GREEN\n",color);
							break;
		case 'B': case 'b': printf("%c tuong ung BLUE\n",color);
							break;
		default: printf("BLACK\n");
				break;
	}
}