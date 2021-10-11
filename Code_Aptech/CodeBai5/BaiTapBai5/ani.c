#include <stdio.h>

void main()
{
	int d,menu1, menu2;
	printf("Hom nay la ngay gi nhi? ");
	scanf("%d",&d);
	printf("* * * * * * * * * *\n");
	printf("     Love menu     \n");
	printf("* * * * * * * * * *\n");
	printf("1. Minh Anh yeu Truc Ha.\n");
	printf("2. Minh Anh yeu Truc Ha rat nhieu.\n");
	printf("Chon 1 trong 2 y tren: ");
	scanf("%d",&menu1);
	switch(menu1)
	{
		case 1: printf("* * * * * * * * *\n");
				printf("       LOVE      \n");
				printf("* * * * * * * * *\n");
				printf("1. Truc Ha said - yeu binh thuong thoi a DOIIIII.\n");
				printf("2. Truc Ha said - thi ra anh chon cai chet?!\n");
				printf("Minh Anh chon 1 trong 2 :)) : ");
				scanf("%d",&menu2);
				switch(menu2)
				{
					case 1: case 2: printf("Thuc ra Minh Anh yeu Truc Ha rat nhieu.\n");
									printf("Sao o LOVE MENU ko thu chon y 2 nhi.\n");
									printf("Lam lai nao!!!\n");
									break;
				}
				break;
		case 2: printf("* *   *   ***** ***** *    *\n");
				printf("* *  * *  *   * *   *  *  *\n");
				printf("***  ***  ***** *****   **\n");
				printf("* * *   * *     *      *\n");
				printf("* * *   * *     *     *\n\n");
				printf("=====ANIVERSARY=====25/7/2021\n");
				break;
	}
}