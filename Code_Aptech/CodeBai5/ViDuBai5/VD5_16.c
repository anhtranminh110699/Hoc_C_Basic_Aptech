#include <stdio.h>

void main()
{
	int imenu, isubmenu;
	printf("-----------\n");
	printf(" MAIN MENU \n");
	printf("-----------\n");
	printf("1. File\n");
	printf("2. Edit\n");
	printf("3. Search\n");
	printf("Chon muc tuong ung: \n");
	scanf("%d",&imenu);
	switch (imenu)
	{
		case 1: printf("-----------\n");
				printf(" MENU FILE \n");
				printf("-----------\n");
				printf("1. New\n");
				printf("2. Open\n");
				printf("Chon muc tuong ung: \n");
				scanf("%d",&isubmenu);
				switch (isubmenu)
				{
					case 1: printf("Ban da chon chuc nang New File.\n");
							break;
					case 2: printf("Ban da chon chuc nang Open File.\n");
							break;
				}
				break;       //chu y.
		case 2: printf("Ban da chon chuc nang Edit.\n");
				break;
		case 3: printf("Ban da chon chuc nang Search.\n");
				break;
		default: printf("Ban can chon theo menu co san.\n");
				break;
	}
}