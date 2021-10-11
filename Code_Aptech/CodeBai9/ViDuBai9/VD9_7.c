#include <stdio.h>
#include <curses.h>
#include <string.h>

#define MAXNUM 5
#define MAXLEN 10

void main()
{
	char name[MAXNUM][MAXLEN];
	char *ptr[MAXNUM];
	char *temp;
	int i,j,count = 0;

	//nhap danh sach ten
	while (count < MAXNUM)
	{
		printf("Nhap vao ten nguoi thu %d : ",count + 1);
		gets(name[count]);
		ptr[count] = name[count];   //con tro den ten
		count ++;
	}

	//sap xep danh sach theo thu tu tang dan
	for(i=0;i<count-1;i++)
	{
		for (j=i+1;j<count;j++)
		{
			if(strcmp(ptr[i],ptr[j])>0)
			{
				temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;
			}
		}
	}

	//in danh sach da xep
	printf("Danh sach sau khi sap xep: \n");
	for(i=0;i<count;i++)
		printf("Ten nguoi thu %d: %s\n",i+1,ptr[i]);
}