#include <stdio.h>

#define PASSWORD 12345
void main()
{
	int PASS;
	/*do
	{
		printf("Nhap PASSWORD: ");
		scanf("%d",&PASS);
	} while(PASS != PASSWORD);*/
	while(printf("Nhap PASSWORD: "),scanf("%d",&PASS),PASS!=PASSWORD);
	printf("Ban da nhap dung PASSWORD\n");
}