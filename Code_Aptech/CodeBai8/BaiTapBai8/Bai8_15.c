#include <stdio.h>
#include <curses.h>

#define MAX 50

void main()
{
	char num_Room[8][MAX] = {"trong","trong","khach","trong",
							"khach","khach","trong","khach"};
	int i,m,n;
	printf("__________MENU__________\n");
	printf("1/ Tim phong trong.\n");
	printf("2/ Tra phong.\n");
	printf("3/ Liet ke nhung phong trong.\n");
	printf("4/ Liet ke nhung phong da thue.\n");
	printf("5/ Ket thuc.\n\n");
	printf("Chon 1 muc: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1: for (i=0;i<8;i++)
				{
					printf("Phong %d: %s \n",i,num_Room[i]);
				}
				break;
		case 2: printf("Ban muon tra phong nao?\n");
				for (i=0;i<8;i++)
				{
					if (num_Room[i] == "khach")
					{
						printf("%d ",i);
					}
				}
				printf("\n");
				printf("Chon phong muon tra: ");
				scanf("%d",&m);
				//scanf("%s",num_Room[m]);
				//num_Room[m][MAX]="trong";
				for (i=0;i<8;i++)
				{
					if(i==m)
					{
						printf("Phong %d: %s \n",i,"trong");
					}
					printf("Phong %d: %s \n",i,num_Room[i]);
				}
				break;
	}
}
// ???