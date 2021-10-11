#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

int main()
{
	char name[50];
	FILE *fptr;
	fptr = fopen("/home/anhtran/Documents/C/Aptech/Code_Aptech/CodeBai11/Bai70LapTrinhKhongKho/program.txt","w");

	if(fptr == NULL)
	{
		printf("ERROR!");
		exit(1);
	}

	printf("Enter name: ");
	//scanf("%s",&name);
	gets(name);

	fprintf(fptr,"%s",name);
	fclose(fptr);

	return 0;
}